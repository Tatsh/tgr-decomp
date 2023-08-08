#include "types-n64.h"
//----- (80258EF8) --------------------------------------------------------
int __fastcall sub_80258EF8(int a1, float *a2, float *a3) {
    int i;      // $a3
    int result; // $v0
    int v7;     // $a0
    float v9;   // $f16
    float v10;  // $f12
    float v11;  // $f10

    for (i = 0; i != 36; i += 12) {
        result = 0;
        v7 = a1;
        do {
            v9 = *a2 * *a3;
            v10 = a2[1] * a3[3];
            ++result;
            v7 += 4;
            v11 = a3[6] * a2[2];
            ++a3;
            *(float *)(v7 - 4) = v11 + (float)(v9 + v10);
        } while (result != 3);
        a1 += 12;
        a2 += 3;
    }
    return result;
}
