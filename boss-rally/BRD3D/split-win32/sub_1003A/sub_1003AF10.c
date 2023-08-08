#include "../types-win32.h"
//----- (1003AF10) --------------------------------------------------------
float *__cdecl sub_1003AF10(float *a1, float *a2) {
    float *result; // eax
    double v3;     // st6
    double v4;     // st7

    result = a1;
    v3 = a1[1];
    v4 = a1[2];
    *a1 = *a1 - *a2;
    a1[1] = v3 - a2[1];
    a1[2] = v4 - a2[2];
    return result;
}
