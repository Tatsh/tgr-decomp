#include "../../types-n64.h"
//----- (80258EAC) --------------------------------------------------------
int __fastcall sub_80258EAC(int a1, float *a2) {
    int result; // $v0
    int v5;     // $v1
    int v6;     // $a0
    float *v7;  // $a1
    float v8;   // $f4

    for (result = 0; result != 3; ++result) {
        v5 = 0;
        v6 = a1;
        v7 = a2;
        do {
            v8 = *v7;
            ++v5;
            v6 += 4;
            ++v7;
            *(float *)(v6 - 4) = v8;
        } while (v5 != 3);
        a1 += 12;
        a2 += 4;
    }
    return result;
}
