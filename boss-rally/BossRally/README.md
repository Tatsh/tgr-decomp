# Launcher

This is a conversion of the launcher `BossRally.exe` on the game CD to C code. It builds in
MSYS2 GCC and similar environments using CMake. It is not intended to match the exact binary that is
on the disc. The logic is 99% the same.

Because `brally.avi` uses Indeo codec, this launcher fails on newer versions of Windows which no
longer have this codec.
