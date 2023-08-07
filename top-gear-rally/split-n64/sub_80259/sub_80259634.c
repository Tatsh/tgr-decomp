#include "../../types-n64.h"
//----- (80259634) --------------------------------------------------------
void __fastcall sub_80259634(float *a1, int a2) {
    float *v2;    // $s1
    float *v5;    // $s3
    int i;        // $v0
    float v7;     // $f6
    int v8;       // $t7
    float v9;     // $f4
    float v10;    // $f10
    float v11;    // $f16
    float v12;    // [sp+60h] [-48h]
    float v13;    // [sp+64h] [-44h]
    float v14;    // [sp+68h] [-40h] BYREF
    float v15;    // [sp+6Ch] [-3Ch]
    float v16;    // [sp+70h] [-38h]
    float v17[3]; // [sp+74h] [-34h] BYREF
    float v18;    // [sp+80h] [-28h] BYREF
    float v19;    // [sp+84h] [-24h]
    float v20;    // [sp+88h] [-20h]
    float v21[3]; // [sp+8Ch] [-1Ch] BYREF
    float v22;    // [sp+98h] [-10h] BYREF
    float v23;    // [sp+9Ch] [-Ch]
    float v24;    // [sp+A0h] [-8h]

    v2 = *(float **)(a2 + 24);
    v5 = a1 + 47;
    if (v2) {
        for (i = *((_DWORD *)v2 + 1);; i = *((_DWORD *)v2 + 1)) {
            if (!i) {
                sub_802586C0(&v18, v5, v2 + 2);
                i = *((_DWORD *)v2 + 1);
            }
            if (i == 1) {
                v18 = v2[2];
                v19 = v2[3];
                v20 = v2[4];
            }
            v21[2] = 0.0;
            v21[0] = v18;
            v21[1] = v19;
            sub_80258758(&v22, (int)v5, v21);
            v7 = *(float *)(a2 + 256);
            v8 = *(_DWORD *)(a2 + 436);
            v9 = *(float *)(a2 + 260);
            *(float *)(a2 + 252) = v18 + *(float *)(a2 + 252);
            *(float *)(a2 + 256) = v19 + v7;
            *(float *)(a2 + 260) = v20 + v9;
            if (v8) {
                v17[0] = *(float *)(a2 + 236);
                v17[1] = *(float *)(a2 + 240);
                v17[2] = *(float *)(a2 + 244);
                sub_80258758(&v14, (int)v5, v17);
                v12 = (float)(v16 * v22) - (float)(v24 * v14);
                v13 = (float)(v14 * v23) - (float)(v22 * v15);
                v10 = a1[67];
                v11 = a1[68];
                a1[66] = (float)((float)(v15 * v24) - (float)(v23 * v16)) + a1[66];
                a1[67] = v12 + v10;
                a1[68] = v13 + v11;
            }
            v2 = *(float **)v2;
            if (!v2)
                break;
        }
    }
}
