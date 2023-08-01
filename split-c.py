#!/usr/bin/env python
from pathlib import Path
from shutil import rmtree
from typing import Any, Iterator, List
import re
import sys

SPLIT_PATH = Path('./split')


def chunks(sequence: List[Any], length: int) -> Iterator[List[Any]]:
    """Returns an iterator of sequence split into length-sized lists."""
    for i in range(0, len(sequence), length):
        yield sequence[i:i + length]


if __name__ == '__main__':
    try:
        rmtree(SPLIT_PATH)
    except FileNotFoundError:
        pass
    SPLIT_PATH.mkdir(parents=True, exist_ok=True)
    with open(sys.argv[1]) as f:
        content = f.read()
    grouped = re.split(r'^(//----- \([0-9A-F]+\) -+)$',
                       content,
                       flags=re.MULTILINE)
    with (SPLIT_PATH / 'decls.c').open('w+') as f:
        f.write(f'{grouped[0]}\n')
    for header, lines_str in ((_, y.strip())
                              for _, y in chunks(grouped[1:], 2)):
        lines = lines_str.splitlines()
        which = lines[1] if 'may be wrong' in lines[0] else lines[0]
        func_name = re.sub(r'@<[a-z]+>', '',
                           which.split('(')[0].split(' ')[-1].replace('*', ''))
        if not func_name:
            continue
        prefix = func_name.split(
            '_')[0].lower() if '_' in func_name else func_name[0:2].lower()
        if prefix == 'meth':
            prefix = func_name[0:10]
        elif prefix == 'sub':
            prefix = func_name[0:9]
        out_dir = SPLIT_PATH / prefix
        out_dir.mkdir(parents=True, exist_ok=True)
        with (out_dir / f'{func_name}.c').open('w+') as f:
            f.write(f'{header}\n')
            f.write(f'{lines_str}\n')
