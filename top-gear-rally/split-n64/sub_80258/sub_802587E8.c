#include "types-n64.h"
//----- (802587E8) --------------------------------------------------------
int __fastcall sub_802587E8(float *a1, float *a2, float *a3) {
    int v4;     // $v1
    float *v5;  // $a3
    float *v6;  // $a2
    float *v7;  // $t0
    int result; // $v0
    float i;    // $f14
    float v10;  // $f16
    float v11;  // $f18
    float v12;  // $f10
    float v13;  // $f18

    v4 = 0;
    v5 = a1;
    do {
        *v5 = 0.0;
        v6 = &a2[v4];
        v7 = a3;
        result = 1;
        for (i = *v5 + (float)(a2[v4] * *a3);; i = v10 + v11) {
            ++result;
            v6 += 4;
            ++v7;
            *v5 = i;
            v10 = *v5;
            v11 = *v6 * *v7;
            if (result == 3)
                break;
        }
        *v5 = v10 + v11;
        ++v4;
        ++v5;
    } while (v4 != 3);
    v12 = a1[1];
    v13 = a1[2];
    *a1 = *a1 + a2[12];
    a1[1] = v12 + a2[13];
    a1[2] = v13 + a2[14];
    return result;
}
