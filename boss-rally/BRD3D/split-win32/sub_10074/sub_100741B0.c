#include "../../types-win32.h"
//----- (100741B0) --------------------------------------------------------
void __cdecl sub_100741B0(float *a1) {
    long double v2; // st6
    long double v3; // st5
    double v4;      // st7
    double v5;      // st6
    float v6;       // [esp+0h] [ebp-Ch]
    float v7;       // [esp+10h] [ebp+4h]

    v6 = a1[1] * a1[1] + a1[2] * a1[2] + a1[3] * a1[3] + *a1 * *a1;
    v2 = 1.0 / sqrt_(v6);
    v7 = v2;
    v3 = v2 * a1[1];
    v4 = v7 * a1[2];
    v5 = v7 * a1[3];
    *a1 = *a1 * v7;
    a1[1] = v3;
    a1[2] = v4;
    a1[3] = v5;
}
