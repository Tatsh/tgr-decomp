#include "types-win32.h"
//----- (100065E0) --------------------------------------------------------
int __cdecl math_ClampFloor32768Int(float x) {
    int res; // eax

    *(_QWORD *)&res = (__int64)floor(0.5 - x * 32768.0);
    if (res < -32768)
        res = -32768;
    if (res > 32767)
        res = 32767;
    return res;
}
