#include "types-n64.h"
//----- (8021FE80) --------------------------------------------------------
void __fastcall sub_8021FE80(float *a1, float a2) {
    float v3;  // $f0
    float v4;  // $f0
    float v5;  // $f2
    float v6;  // $f12
    float v7;  // $f14
    float v8;  // [sp+5Ch] [-Ch]
    float v9;  // [sp+60h] [-8h]
    float v10; // [sp+64h] [-4h]

    v10 = sub_802617D0(a2);
    v9 = sub_80261610(a2);
    v8 = sub_802617D0(a2 + 1.5707964);
    v3 = sub_80261610(a2 + 1.5707964);
    *a1 = v10;
    a1[2] = 0.0;
    a1[1] = v9;
    a1[5] = v3;
    a1[6] = 0.0;
    a1[9] = 0.0;
    a1[8] = 0.0;
    a1[10] = 1.0;
    a1[4] = v8;
    a1[118] = sub_802617D0(a2 * 0.5);
    a1[120] = 0.0;
    a1[119] = 0.0;
    v4 = sub_80261610(a2 * 0.5);
    v5 = a1[118];
    v6 = a1[119];
    v7 = a1[120];
    a1[121] = v4;
    a1[177] = v4;
    a1[160] = v4;
    a1[174] = v5;
    a1[157] = v5;
    a1[175] = v6;
    a1[158] = v6;
    a1[176] = v7;
    a1[159] = v7;
    sub_802583DC((int)(a1 + 129), (int)(a1 + 112));
}
