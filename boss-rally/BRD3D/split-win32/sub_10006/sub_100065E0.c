#include "../../types-win32.h"
//----- (100065E0) --------------------------------------------------------
int __cdecl sub_100065E0(float a1) {
    __int64 v1; // rax

    v1 = (__int64)floor(0.5 - a1 * 32768.0);
    if ((int)v1 < -32768)
        LODWORD(v1) = -32768;
    if ((int)v1 > 0x7FFF)
        LODWORD(v1) = 0x7FFF;
    return v1;
}