#include "../../types-n64.h"
//----- (80258F70) --------------------------------------------------------
int __fastcall sub_80258F70(int a1, float *a2, float *a3) {
    int result; // $v0
    int v7;     // $v1
    int v8;     // $a0
    float *v9;  // $a1
    float *v10; // $a2
    float v11;  // $f8

    result = 0;
    do {
        v7 = 0;
        v8 = a1;
        v9 = a2;
        v10 = a3;
        do {
            ++v7;
            v8 += 4;
            v11 = *v9++ - *v10++;
            *(float *)(v8 - 4) = v11;
        } while (v7 != 3);
        ++result;
        a1 += 12;
        a2 += 3;
        a3 += 3;
    } while (result != 3);
    return result;
}
