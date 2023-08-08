#include "../types-win32.h"
//----- (1003AF70) --------------------------------------------------------
float *__cdecl sub_1003AF70(float *a1, float *a2) {
    float *result; // eax

    result = a1;
    *a1 = *a1 + *a2;
    a1[1] = a2[1] + a1[1];
    a1[2] = a2[2] + a1[2];
    return result;
}
