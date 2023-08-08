#include "types-n64.h"
//----- (802588B8) --------------------------------------------------------
int __fastcall sub_802588B8(float *a1, float *a2, float *a3) {
    int v3;     // $v1
    float *v6;  // $a0
    float *v7;  // $a1
    int result; // $v0
    float i;    // $f14
    float v10;  // $f16
    float v11;  // $f18

    v3 = 0;
    do {
        *a1 = 0.0;
        v6 = a2;
        v7 = a3;
        result = 1;
        for (i = *a1 + (float)(*a2 * *a3);; i = v10 + v11) {
            ++v6;
            ++result;
            ++v7;
            *a1 = i;
            v10 = *a1;
            v11 = *v6 * *v7;
            if (result == 3)
                break;
        }
        *a1 = v10 + v11;
        v3 += 4;
        ++a1;
        a2 += 3;
    } while (v3 != 12);
    return result;
}
