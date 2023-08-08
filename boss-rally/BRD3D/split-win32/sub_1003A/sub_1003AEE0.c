#include "../types-win32.h"
//----- (1003AEE0) --------------------------------------------------------
float *__cdecl sub_1003AEE0(float *a1, float *a2, float *a3) {
    float *result; // eax

    result = a2;
    *a1 = *a2 - *a3;
    a1[1] = a2[1] - a3[1];
    a1[2] = a2[2] - a3[2];
    return result;
}
