#include "types-n64.h"
//----- (80225E1C) --------------------------------------------------------
int __fastcall sub_80225E1C(float *a1, float *a2, float *a3, float *a4) {
    float v4;   // $f12
    float v5;   // $f16
    float v6;   // $f14
    float v7;   // $f0
    float v8;   // $f18
    bool v9;    // $fcc0
    int result; // $v0

    v4 = a1[1];
    v5 = *a2 - *a1;
    v6 = a2[1] - v4;
    v7 = (float)((float)(*a3 - *a1) * v6) - (float)(v5 * (float)(a3[1] - v4));
    v8 = (float)((float)(*a4 - *a1) * v6) - (float)(v5 * (float)(a4[1] - v4));
    if (v7 == 0.0) {
        v9 = v7 == v8;
    } else if (v8 == 0.0) {
        v9 = v7 == v8;
    } else {
        if ((float)(v7 * v8) > 0.0)
            return 0;
        v9 = v7 == v8;
    }
    result = 1;
    if (v9)
        result = 2;
    return result;
}
