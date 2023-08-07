#include "../../types-n64.h"
//----- (80258080) --------------------------------------------------------
void __fastcall sub_80258080(float *a1, float *a2, float *a3) {
    float v3;  // $f0
    float v4;  // $f22
    float v5;  // $f2
    float v6;  // $f20
    float v7;  // $f12
    float v8;  // $f18
    float v9;  // $f14
    float v10; // $f16
    float v11; // $f10

    v3 = *a3;
    v4 = a2[3];
    v5 = a3[1];
    v6 = a2[2];
    v7 = a3[2];
    v8 = a2[1];
    v9 = a3[3];
    v10 = *a2;
    v11 = v6 * *a3;
    a1[3] = (float)((float)((float)(v4 * *a3) - (float)(v6 * v5)) + (float)(v8 * v7)) +
            (float)(*a2 * v9);
    a1[2] = (float)((float)(v11 + (float)(v4 * v5)) + (float)(v10 * v7)) - (float)(v8 * v9);
    a1[1] = (float)((float)((float)(v8 * v3) + (float)(v10 * v5)) - (float)(v4 * v7)) +
            (float)(v6 * v9);
    *a1 = (float)((float)((float)(v10 * v3) - (float)(v8 * v5)) - (float)(v6 * v7)) -
          (float)(v4 * v9);
}
