# Launcher

This is a conversion of the launcher `BossRally.exe` on the game CD to C code. It builds in
MSYS2 GCC and similar environments using CMake. It is not intended to match the exact binary that is
on the disc. The logic is 99% the same.

Because `brally.avi` uses Indeo codec, this launcher fails on newer versions of Windows which no
longer have this codec.

## How to build

At the project root:

```shell
mkdir build
cd build
cmake -DCMAKE_C_COMPILER=/usr/lib/mingw64-toolchain/bin/i686-w64-mingw32-gcc \
  -DCMAKE_RC_COMPILER_INIT=/usr/lib/mingw64-toolchain/bin/i686-w64-mingw32-windres \
  -G Ninja -DBUILD_LAUNCHER=ON ../boss-rally
ninja
```

Fix paths above as necessary.
