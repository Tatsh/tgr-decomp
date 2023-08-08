#include "types-win32.h"
//----- (1003AD70) --------------------------------------------------------
int __cdecl sub_1003AD70(int a1, float a2) {
    double v2;  // st7
    int result; // eax
    double v4;  // st6
    double v5;  // st5
    double v6;  // st7
    double v7;  // rtt

    v2 = 1.0 / a2;
    result = a1;
    v4 = v2 * *(float *)a1;
    v5 = v2;
    v6 = v2 * *(float *)(a1 + 4);
    v7 = v5 * *(float *)(a1 + 8);
    *(float *)a1 = v4;
    *(float *)(a1 + 4) = v6;
    *(float *)(a1 + 8) = v7;
    return result;
}
