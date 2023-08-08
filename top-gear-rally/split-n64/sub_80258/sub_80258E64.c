#include "types-n64.h"
//----- (80258E64) --------------------------------------------------------
int __fastcall sub_80258E64(int a1, float *a2) {
    int i;      // $v1
    int result; // $v0
    int v5;     // $a1
    float *v6;  // $a3
    float v7;   // $f4

    for (i = 0; i != 12; i += 4) {
        result = 0;
        v5 = a1 + i;
        v6 = a2;
        do {
            v7 = *v6;
            ++result;
            v5 += 12;
            ++v6;
            *(float *)(v5 - 12) = v7;
        } while (result != 3);
        a2 += 4;
    }
    return result;
}
