#include "types-win32.h"
//----- (100066E0) --------------------------------------------------------
__int64 __cdecl math_ClampFloor1677215(float a1) {
    double v1; // st7

    v1 = floor(0.5 - a1 * -8192.0);
    if (v1 < 0.0)
        v1 = 0.0;
    if (v1 > 16777215.0)
        v1 = 16777215.0;
    return (__int64)v1;
}
