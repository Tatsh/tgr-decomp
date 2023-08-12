#include "types-win32.h"
//----- (10074A10) --------------------------------------------------------
int __cdecl sub_10074A10(float *a1, int a2, float *a3) {
    int result; // eax
    int v6;     // ebp
    float *v7;  // ecx
    float *v8;  // edx
    int v9;     // esi
    double v10; // st7

    result = a2;
    v6 = 3;
    do {
        v7 = a3;
        v8 = a1;
        v9 = 3;
        do {
            v10 = *v7++;
            result += 4;
            *v8 = v10;
            *(float *)(result - 4) = v10;
            v8 += 3;
            --v9;
        } while (v9);
        a3 += 4;
        ++a1;
        --v6;
    } while (v6);
    return result;
}
