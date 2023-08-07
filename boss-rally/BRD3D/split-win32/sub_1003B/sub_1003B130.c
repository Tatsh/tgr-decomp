#include "../../types-win32.h"
//----- (1003B130) --------------------------------------------------------
double __cdecl sub_1003B130(float *a1, float *a2) {
    double v2; // st6
    double v3; // st5
    double v4; // st7
    float v6;  // [esp+4h] [ebp+4h]
    float v7;  // [esp+8h] [ebp+8h]

    v2 = a1[1] - a2[1];
    v3 = *a1 - *a2;
    v4 = a1[2] - a2[2];
    v6 = v3;
    v7 = v2;
    return v3 * v6 + v2 * v7 + v4 * v4;
}
