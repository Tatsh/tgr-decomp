#!/usr/bin/env python
from pathlib import Path
import struct
import sys


def byte1(w: int) -> int:
    return (w & 0x0000FF00) >> 8


def byte2(w: int) -> int:
    return (w & 0x00FF0000) >> 16


def lobyte(w: int) -> int:
    return w & 0xFF

def hibyte(w: int) -> int:
    return (w & 0xFF000000) >> 24


def main() -> int:
    trk_path = Path(sys.argv[1])
    with trk_path.open('rb') as f:
        f0: int = struct.unpack('<i', f.read(4))[0]
        v3 = byte1(f0) | (lobyte(f0) << 8)
        f0 = hibyte(f0) | ((byte2(f0) | (v3 << 8)) << 8)
        f4: int = struct.unpack('<i', f.read(4))[0]
        v3 = byte1(f4) | (byte1(f4) << 8)
        f4 = hibyte(f4) | ((byte2(f4) | (v3 << 8)) << 8)

        # field_0 and others
        # if f0 >= 0x80025C00:
        #    f0 = f0 + 0x106C8E78 - 0x80025C00

    return 0



if __name__ == '__main__':
    sys.exit(main())
