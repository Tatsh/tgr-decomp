#include "types-win32.h"
//----- (10006660) --------------------------------------------------------
int __cdecl math_ClampFloor63(float a1) {
    __int64 v1; // rax

    v1 = (__int64)floor(0.5 - (a1 - 400.0) * -0.0082894741);
    if ((int)v1 < 0)
        LODWORD(v1) = 0;
    if ((int)v1 > 63)
        LODWORD(v1) = 63;
    return v1;
}
