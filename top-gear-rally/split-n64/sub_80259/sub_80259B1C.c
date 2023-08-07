#include "../../types-n64.h"
//----- (80259B1C) --------------------------------------------------------
int __fastcall sub_80259B1C(float *a1, float *a2, float *a3) {
    int result;   // $v0
    float *v5;    // $a3
    float v6;     // $f18
    float v7;     // $f8
    float v8;     // [sp+24h] [-24h] BYREF
    float v9;     // [sp+28h] [-20h]
    float v10;    // [sp+2Ch] [-1Ch]
    float v11;    // [sp+30h] [-18h]
    float v12;    // [sp+34h] [-14h]
    float v13;    // [sp+38h] [-10h]
    float v14[3]; // [sp+3Ch] [-Ch] BYREF

    v14[0] = a3[30];
    v14[1] = a3[31];
    v14[2] = a3[32];
    result = sub_80258758(&v8, (int)(a2 + 47), v14);
    v5 = a2;
    *a1 = a2[33];
    a1[1] = a2[34];
    a1[2] = a2[35];
    v11 = (float)(v5[41] * v10) - (float)(v9 * v5[42]);
    v12 = (float)(v5[42] * v8) - (float)(v10 * v5[40]);
    v13 = (float)(v5[40] * v9) - (float)(v8 * v5[41]);
    v6 = a1[1];
    v7 = a1[2];
    *a1 = v11 + *a1;
    a1[1] = v12 + v6;
    a1[2] = v13 + v7;
    return result;
}
