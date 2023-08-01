#!/usr/bin/env python
from pathlib import Path
from shutil import rmtree
from typing import Any, Iterator, List, Optional, Tuple
import re
import sys

SPLIT_PATH = Path('./split')
METHODS_PATH = Path('./split/meth')
SUBS_PATH = Path('./split/sub')


def chunks(sequence: List[Any], length: int) -> Iterator[List[Any]]:
    """Returns an iterator of sequence split into length-sized lists."""
    for i in range(0, len(sequence), length):
        yield sequence[i:i + length]


def split_camel(name: str) -> List[str]:
    return re.sub(r'([A-Z][a-z]+)', r' \1', re.sub(r'([A-Z]+)', r' \1',
                                                   name)).split()


def get_function_name(lines_str: str) -> Tuple[Optional[str], Optional[str]]:
    lines = lines_str.splitlines()
    which = lines[1] if 'may be wrong' in lines[0] else lines[0]
    func_name = re.sub(r'@<[a-z]+>', '',
                       which.split('(')[0].split(' ')[-1].replace('*', ''))
    if not func_name:
        return None, None
    if '_' not in func_name:
        prefix = split_camel(func_name)[0].lower()
    else:
        prefix = (func_name.split('_')[0].lower()
                  if '_' in func_name else func_name[0:2].lower())
        if prefix == 'meth':
            prefix = func_name[0:10]
        elif prefix == 'sub':
            prefix = func_name[0:9]
    return func_name, prefix


if __name__ == '__main__':
    try:
        rmtree(SPLIT_PATH)
    except FileNotFoundError:
        pass
    SPLIT_PATH.mkdir(parents=True, exist_ok=True)
    METHODS_PATH.mkdir(parents=True, exist_ok=True)
    SUBS_PATH.mkdir(parents=True, exist_ok=True)
    with open(sys.argv[1]) as f:
        content = f.read()
    grouped = re.split(r'^(//----- \([0-9A-F]+\) -+)$',
                       content,
                       flags=re.MULTILINE)
    with (SPLIT_PATH / 'decls.c').open('w+') as f:
        f.write(f'{grouped[0]}\n')
    for header, lines_str in ((_, y.strip())
                              for _, y in chunks(grouped[1:], 2)):
        func_name, prefix = get_function_name(lines_str)
        if not func_name or not prefix:
            continue
        out_dir = SPLIT_PATH / prefix
        out_dir.mkdir(parents=True, exist_ok=True)
        with (out_dir / f'{func_name}.c').open('w+') as f:
            f.write(f'{header}\n')
            f.write(f'{lines_str}\n')
    for dir_ in SPLIT_PATH.iterdir():
        if not dir_.is_dir():
            continue
        items = list(dir_.iterdir())
        if len(items) == 1:
            if items[0].name.startswith('meth_'):
                items[0].rename(METHODS_PATH / items[0].name)
            elif items[0].name.startswith('sub_'):
                items[0].rename(SUBS_PATH / items[0].name)
            else:
                items[0].rename(SPLIT_PATH / items[0].name)
            dir_.rmdir()
