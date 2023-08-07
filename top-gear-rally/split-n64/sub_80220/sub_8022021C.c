#include "../../types-n64.h"
//----- (8022021C) --------------------------------------------------------
void __fastcall sub_8022021C(float *a1, float a2, float a3, float a4) {
    float v5;  // $f20
    float v6;  // $f20
    float v7;  // $f20
    float v8;  // $f0
    float v9;  // $f2
    float v10; // $f12
    float v11; // $f14
    float v12; // [sp+38h] [-10h] BYREF
    float v13; // [sp+3Ch] [-Ch]
    float v14; // [sp+40h] [-8h]
    float v15; // [sp+44h] [-4h]
    float v16; // [sp+4Ch] [+4h]
    float v17; // [sp+50h] [+8h]
    float v18; // [sp+54h] [+Ch]

    v17 = a3 * 0.5;
    v16 = a2 * 0.5;
    v18 = a4 * 0.5;
    v5 = sub_80261610(v16);
    v12 = sub_802617D0(v16);
    v15 = v5;
    v13 = 0.0;
    v14 = 0.0;
    sub_80258080(a1 + 118, a1 + 118, &v12);
    v6 = sub_80261610(v17);
    v12 = sub_802617D0(v17);
    v13 = 0.0;
    v14 = v6;
    v15 = 0.0;
    sub_80258080(a1 + 118, a1 + 118, &v12);
    v7 = sub_80261610(v18);
    v12 = sub_802617D0(v18);
    v13 = v7;
    v14 = 0.0;
    v15 = 0.0;
    sub_80258080(a1 + 118, a1 + 118, &v12);
    sub_8025813C(a1 + 118);
    v8 = a1[118];
    v9 = a1[119];
    v10 = a1[120];
    v11 = a1[121];
    a1[174] = v8;
    a1[157] = v8;
    a1[175] = v9;
    a1[158] = v9;
    a1[176] = v10;
    a1[159] = v10;
    a1[177] = v11;
    a1[160] = v11;
}
