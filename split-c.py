#!/usr/bin/env python
from pathlib import Path
from shutil import rmtree
from typing import Any, Iterator, List
import re
import sys
import subprocess as sp

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
    sp.run(('dos2unix', sys.argv[1]), check=True)
    with open(sys.argv[1]) as f:
        content = f.read()
    grouped = re.split(r'^(//----- \([0-9A-F]+\) -+)$',
                       content,
                       flags=re.MULTILINE)
    with (SPLIT_PATH / 'decls.c').open('w+') as f:
        f.write(f'{grouped[0]}\n')
    for header, lines in ((_, y.strip()) for _, y in chunks(grouped[1:], 2)):
        func_name = re.sub(
            r'@<[a-z]+>', '',
            lines.splitlines()[0].split('(')[0].split(' ')[-1].replace(
                '*', ''))
        if not func_name:
            continue
        with (SPLIT_PATH / f'{func_name}.c').open('w+') as f:
            f.write(f'{header}\n')
            f.write(f'{lines}\n')
