#include "../types-win32.h"
//----- (1003ADA0) --------------------------------------------------------
float *__cdecl sub_1003ADA0(float *a1, float *a2, float *a3) {
    double v3;      // st6
    double v4;      // st5
    double v5;      // st7
    long double v6; // st7
    long double v7; // st7
    float *result;  // eax
    float v9;       // [esp+0h] [ebp-8h]
    float v10;      // [esp+4h] [ebp-4h]
    float v11;      // [esp+10h] [ebp+8h]
    float v12;      // [esp+14h] [ebp+Ch]

    v3 = a3[1] - a2[1];
    v4 = *a3 - *a2;
    v5 = a3[2] - a2[2];
    v12 = v4;
    v11 = v3;
    v10 = v5;
    v9 = v4 * v12 + v3 * v11 + v10 * v10;
    v6 = sqrt_(v9);
    if (v6 == 0.0) {
        result = a1;
        *a1 = 0.0;
        a1[1] = 0.0;
        a1[2] = 1.0;
    } else {
        v7 = 1.0 / v6;
        result = a1;
        *a1 = v7 * v12;
        a1[1] = v7 * v11;
        a1[2] = v7 * v10;
    }
    return result;
}
