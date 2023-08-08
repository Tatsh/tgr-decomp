#!/usr/bin/env python
from pathlib import Path
from shutil import rmtree
from typing import Any, Iterator, TypeVar
import re
import sys

T = TypeVar('T')


def chunks(sequence: list[T], length: int) -> Iterator[list[T]]:
    """Returns an iterator of sequence split into length-sized lists."""
    for i in range(0, len(sequence), length):
        yield sequence[i:i + length]


def split_camel(name: str) -> list[str]:
    return re.sub(r'([A-Z][a-z]+)', r' \1', re.sub(r'([A-Z]+)', r' \1', name)).split()


def get_function_name(lines_str: str) -> tuple[str | None, str | None]:
    lines = lines_str.splitlines()
    which = [l for l in lines if not l.startswith('//')][0]
    func_name = re.sub(r'@<[\$a-z0-9]+>', '', which.split('(')[0].split(' ')[-1].replace('*', ''))
    if not func_name:
        return None, None
    if '_' not in func_name:
        prefix = split_camel(func_name)[0].lower()
    else:
        prefix = (func_name.split('_')[0].lower() if '_' in func_name else func_name[0:2].lower())
        if prefix == 'meth':
            prefix = func_name[0:10]
        elif prefix == 'sub':
            prefix = func_name[0:9]
    return func_name, prefix


def append_or_create_list(key: str, dest: dict[str, Any], val: Any) -> None:
    try:
        dest[key].append(val)
    except KeyError:
        dest[key] = [val]


def fix_operator_calls(lines_str: str) -> str:
    return re.sub(r' = operator new\(([^\)]+)\)',
                  r' = malloc(\1)',
                  re.sub(r'operator delete\((.*)\);',
                         r'free(\1);',
                         re.sub(r'\((.*) \*\)operator new\(([^\)]+)\)',
                                r'(\1 *)malloc(\2)',
                                lines_str,
                                flags=re.MULTILINE),
                         flags=re.MULTILINE),
                  flags=re.MULTILINE)


def main() -> int:
    split_path = Path(sys.argv[2])
    methods_path = split_path / 'meth'
    sub_path = split_path / 'sub'
    types_file = Path(sys.argv[3])
    assert types_file.exists() and types_file.is_file()
    try:
        rmtree(split_path)
    except FileNotFoundError:
        pass
    split_path.mkdir(exist_ok=True, parents=True)
    methods_path.mkdir(exist_ok=True, parents=True)
    sub_path.mkdir(exist_ok=True, parents=True)
    with open(sys.argv[1], 'rb') as f:
        content = f.read().replace(b'\r\n', b'\n').decode(errors='backslashreplace')
    grouped = re.split(r'^(?:\s+)?(//----- \([0-9A-F]+\) -+)$', content, flags=re.MULTILINE)
    files: dict[str, list[tuple[str, str]]] = {}
    with (split_path / 'decls.c').open('w+') as f:
        f.write(f'{grouped[0]}\n')
    for header, lines_str in ((_, y.strip()) for _, y in chunks(grouped[1:], 2)):
        func_name, prefix = get_function_name(lines_str)
        if not func_name or not prefix:
            continue
        lines_str = fix_operator_calls(lines_str)
        append_or_create_list(prefix, files, (f'{func_name}.c', f'{header}\n{lines_str}\n'))
    for prefix, l in list(files.items()):
        if len(l) == 1:
            t = name, _ = l[0]
            if name.startswith('meth_'):
                append_or_create_list('meth', files, t)
            elif name.startswith('sub_'):
                append_or_create_list('sub', files, t)
            else:
                append_or_create_list('', files, t)
            del files[prefix]
    for prefix, l in files.items():
        for name, code in l:
            prefix_path = split_path / prefix
            prefix_path.mkdir(exist_ok=True, parents=True)
            path_ref = '..' if len(prefix_path.parents) == 1 else '../..'
            with (prefix_path / name).open('w+') as f:
                f.write(f'#include "{types_file.name}"\n')
                f.write(code)
    return 0


if __name__ == '__main__':
    sys.exit(main())
