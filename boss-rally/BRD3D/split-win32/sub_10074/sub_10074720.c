#include "types-win32.h"
//----- (10074720) --------------------------------------------------------
float *__cdecl sub_10074720(float *a1, float *a2, float *a3) {
    float *result; // eax
    int v5;        // ebp
    float *v6;     // edx
    float *v7;     // ecx
    int v8;        // esi
    double v9;     // st7

    result = a1;
    v5 = 3;
    do {
        *result = 0.0;
        v6 = a3;
        v7 = a2;
        v8 = 3;
        do {
            v9 = *v7++ * *v6++;
            --v8;
            *result = v9 + *result;
        } while (v8);
        ++result;
        a2 += 4;
        --v5;
    } while (v5);
    return result;
}
