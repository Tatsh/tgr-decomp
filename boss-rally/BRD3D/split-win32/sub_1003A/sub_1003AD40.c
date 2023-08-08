#include "../types-win32.h"
//----- (1003AD40) --------------------------------------------------------
int __cdecl sub_1003AD40(int a1, int a2, float a3) {
    double v3;  // st7
    int result; // eax

    v3 = 1.0 / a3;
    result = a2;
    *(float *)a1 = v3 * *(float *)a2;
    *(float *)(a1 + 4) = *(float *)(a2 + 4) * v3;
    *(float *)(a1 + 8) = *(float *)(a2 + 8) * v3;
    return result;
}
