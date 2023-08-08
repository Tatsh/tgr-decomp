#include "types-n64.h"
//----- (80259A18) --------------------------------------------------------
int __fastcall sub_80259A18(float *a1, float *a2, int a3) {
    float v3;  // $f6
    float *v5; // $a3
    float *v7; // [sp+20h] [-28h]
    float v8;  // [sp+24h] [-24h] BYREF
    float v9;  // [sp+28h] [-20h]
    float v10; // [sp+2Ch] [-1Ch]
    float v11; // [sp+30h] [-18h]
    float v12; // [sp+34h] [-14h]
    float v13; // [sp+38h] [-10h]
    float v14; // [sp+3Ch] [-Ch] BYREF
    float v15; // [sp+40h] [-8h]
    float v16; // [sp+44h] [-4h]

    v14 = *(float *)(a3 + 120);
    v3 = *(float *)(a3 + 124);
    v7 = a2 + 47;
    v16 = 0.0;
    v15 = v3;
    sub_80258758(&v8, (int)(a2 + 47), &v14);
    v5 = a2;
    *a1 = a2[33];
    a1[1] = a2[34];
    a1[2] = a2[35];
    v11 = (float)(v5[41] * v10) - (float)(v9 * v5[42]);
    v12 = (float)(v5[42] * v8) - (float)(v10 * v5[40]);
    v13 = (float)(v5[40] * v9) - (float)(v8 * v5[41]);
    v14 = v11 + *a1;
    v15 = v12 + a1[1];
    v16 = v13 + a1[2];
    return sub_802586C0(a1, v7, &v14);
}
