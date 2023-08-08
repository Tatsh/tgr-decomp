#include "../types-win32.h"
//----- (10074830) --------------------------------------------------------
float *__cdecl sub_10074830(float *a1, float *a2, float *a3) {
    float *result; // eax
    int v5;        // ebx
    float *v6;     // edx
    int v7;        // esi
    double v8;     // st7

    result = a1;
    v5 = 3;
    do {
        *result = 0.0;
        v6 = a3;
        v7 = 3;
        do {
            v8 = *a2++ * *v6++;
            --v7;
            *result = v8 + *result;
        } while (v7);
        ++result;
        --v5;
    } while (v5);
    return result;
}
