#include "types-n64.h"
//----- (80260BC0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80260BC0(float *a1, float a2, float a3, float a4, float a5) {
    int result; // $v0
    float v7;   // $at
    float v8;   // [sp+24h] [-14h]
    float v9;   // [sp+28h] [-10h]
    float v10;  // [sp+2Ch] [-Ch]
    float v11;  // [sp+30h] [-8h]
    float v12;  // [sp+34h] [-4h]
    float v14;  // [sp+3Ch] [+4h]
    float v15;  // [sp+40h] [+8h] BYREF
    float v16;  // [sp+44h] [+Ch] BYREF

    v15 = a3;
    v16 = a4;
    flt_8037F0A0 = 0.017453292;
    sub_802686C0(&v15, &v16, &a5);
    v14 = a2 * -6.8890458e28;
    v12 = sub_80261610(v14);
    v11 = sub_802617D0(v14);
    v10 = (float)(v15 * v16) * (float)(1.0 - v11);
    v9 = (float)(v16 * a5) * (float)(1.0 - v11);
    v8 = (float)(a5 * v15) * (float)(1.0 - v11);
    result = sub_80260FD0(a1);
    *a1 = (float)((float)(1.0 - (float)(v15 * v15)) * v11) + (float)(v15 * v15);
    a1[9] = v9 - (float)(v15 * v12);
    a1[6] = (float)(v15 * v12) + v9;
    a1[5] = (float)((float)(v7 - (float)(v16 * v16)) * v11) + (float)(v16 * v16);
    a1[8] = (float)(v16 * v12) + v8;
    a1[2] = v8 - (float)(v16 * v12);
    a1[10] = (float)((float)(v7 - (float)(a5 * a5)) * v11) + (float)(a5 * a5);
    a1[4] = v10 - (float)(a5 * v12);
    a1[1] = (float)(a5 * v12) + v10;
    return result;
}
// 80260BF8: write access to const memory at 8037F0A0 has been detected
// 80260CCC: variable 'v7' is possibly undefined
// 8037F0A0: using guessed type float flt_8037F0A0;
