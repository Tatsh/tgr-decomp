#include "../../types-win32.h"
//----- (1003AE50) --------------------------------------------------------
void __cdecl sub_1003AE50(float *a1) {
    long double v1; // st7
    long double v2; // st7
    long double v3; // st6
    long double v4; // st5
    long double v5; // st7
    long double v6; // rt1
    float v7;       // [esp+0h] [ebp-Ch]

    v7 = a1[1] * a1[1] + a1[2] * a1[2] + *a1 * *a1;
    v1 = sqrt_(v7);
    if (v1 == 0.0) {
        *a1 = 0.0;
        a1[1] = 0.0;
        a1[2] = 1.0;
    } else {
        v2 = 1.0 / v1;
        v3 = v2 * *a1;
        v4 = v2;
        v5 = v2 * a1[1];
        v6 = v4 * a1[2];
        *a1 = v3;
        a1[1] = v5;
        a1[2] = v6;
    }
}
