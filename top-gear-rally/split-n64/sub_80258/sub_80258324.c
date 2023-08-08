#include "types-n64.h"
//----- (80258324) --------------------------------------------------------
void __fastcall sub_80258324(float *a1, float *a2, float a3) {
    float v3;  // $f16
    float v4;  // $f6
    float v5;  // $f18
    float v6;  // $f16
    float v7;  // $f8
    float v8;  // $f6
    float v9;  // $f18
    float v10; // $f16
    float v11; // [sp+0h] [-18h]
    float v12; // [sp+4h] [-14h]
    float v13; // [sp+8h] [-10h]
    float v14; // [sp+10h] [-8h]
    float v15; // [sp+14h] [-4h]

    v14 = a2[64] * a3;
    v15 = a2[65] * a3;
    v11 = a2[66] * a3;
    v12 = a2[67] * a3;
    v13 = a2[68] * a3;
    v3 = a1[4];
    v4 = a1[5];
    a1[3] = (float)(a2[63] * a3) + a1[3];
    v5 = v14 + v3;
    v6 = a1[10];
    a1[4] = v5;
    v7 = v15 + v4;
    v8 = a1[11];
    a1[5] = v7;
    v9 = v11 + v6;
    v10 = a1[12];
    a1[10] = v9;
    a1[11] = v12 + v8;
    a1[12] = v13 + v10;
}
