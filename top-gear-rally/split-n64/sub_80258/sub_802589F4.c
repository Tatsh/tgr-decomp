#include "types-n64.h"
//----- (802589F4) --------------------------------------------------------
void __fastcall sub_802589F4(int a1, int a2) {
    int v2;    // $v0
    float v5;  // $f8
    float v6;  // $f4
    int v7;    // $t7
    float v8;  // $f18
    float v9;  // $f6
    float v10; // $f16
    float v11; // [sp+58h] [-20h]
    float v12; // [sp+5Ch] [-1Ch]
    float v13; // [sp+60h] [-18h] BYREF
    float v14; // [sp+64h] [-14h]
    float v15; // [sp+68h] [-10h]
    float v16; // [sp+6Ch] [-Ch] BYREF
    float v17; // [sp+70h] [-8h]
    float v18; // [sp+74h] [-4h]

    v2 = *(_DWORD *)(a2 + 4);
    if (v2) {
        if (v2 != 1) {
            v5 = v13;
            goto LABEL_7;
        }
        sub_80258758(&v13, a1 + 188, (float *)(a2 + 8));
    } else {
        v13 = *(float *)(a2 + 8);
        v14 = *(float *)(a2 + 12);
        v15 = *(float *)(a2 + 16);
    }
    v5 = v13;
LABEL_7:
    v6 = *(float *)(a1 + 256);
    v7 = *(_DWORD *)(a1 + 28);
    v8 = *(float *)(a1 + 260);
    *(float *)(a1 + 252) = v5 + *(float *)(a1 + 252);
    *(float *)(a1 + 256) = v14 + v6;
    *(float *)(a1 + 260) = v15 + v8;
    if (v7 != 2) {
        sub_80258758(&v16, a1 + 188, (float *)(a2 + 20));
        v11 = (float)(v18 * v13) - (float)(v15 * v16);
        v12 = (float)(v16 * v14) - (float)(v13 * v17);
        v9 = *(float *)(a1 + 268);
        v10 = *(float *)(a1 + 272);
        *(float *)(a1 + 264) =
            (float)((float)(v17 * v15) - (float)(v14 * v18)) + *(float *)(a1 + 264);
        *(float *)(a1 + 268) = v11 + v9;
        *(float *)(a1 + 272) = v12 + v10;
    }
    debugPrint("Force = %10.4f, %10.4f, %10.4f, %10.4f, %10.4f, %10.4f\n");
    debugPrint("F/T = %10.4f, %10.4f, %10.4f, %10.4f, %10.4f, %10.4f\n");
}
