#include "types-n64.h"
//----- (802583DC) --------------------------------------------------------
void __fastcall sub_802583DC(int a1, int a2) {
    float v2;  // $f14
    float v3;  // $f2
    float v4;  // $f0
    float v5;  // $f12
    float v6;  // $f8
    float v7;  // [sp+18h] [-28h]
    float v8;  // [sp+1Ch] [-24h]
    float v9;  // [sp+20h] [-20h]
    float v10; // [sp+24h] [-1Ch]
    float v11; // [sp+28h] [-18h]
    float v12; // [sp+2Ch] [-14h]
    float v13; // [sp+30h] [-10h]
    float v14; // [sp+34h] [-Ch]
    float v15; // [sp+38h] [-8h]
    float v16; // [sp+3Ch] [-4h]

    v2 = *(float *)(a2 + 24);
    v16 = v2 * v2;
    v3 = *(float *)(a2 + 28);
    v15 = v3 * v3;
    v4 = *(float *)(a2 + 32);
    v14 = v4 * v4;
    v5 = *(float *)(a2 + 36);
    v13 = v5 * v5;
    v12 = v4 * (float)(v3 + v3);
    v11 = v5 * (float)(v2 + v2);
    v10 = v5 * (float)(v3 + v3);
    v9 = v4 * (float)(v2 + v2);
    v8 = v5 * (float)(v4 + v4);
    v7 = v3 * (float)(v2 + v2);
    *(float *)a1 = (float)((float)(v16 + v15) - v14) - v13;
    *(float *)(a1 + 4) = v12 + v11;
    *(float *)(a1 + 12) = 0.0;
    *(float *)(a1 + 8) = v10 - v9;
    *(float *)(a1 + 16) = v12 - v11;
    *(float *)(a1 + 20) = (float)((float)(v16 - v15) + v14) - v13;
    *(float *)(a1 + 28) = 0.0;
    *(float *)(a1 + 24) = v8 + v7;
    *(float *)(a1 + 44) = 0.0;
    *(float *)(a1 + 36) = v8 - v7;
    *(float *)(a1 + 32) = v10 + v9;
    *(float *)(a1 + 40) = (float)((float)(v16 - v15) - v14) + v13;
    *(_DWORD *)(a1 + 48) = *(_DWORD *)a2;
    *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 4);
    v6 = *(float *)(a2 + 8);
    *(float *)(a1 + 60) = 1.0;
    *(float *)(a1 + 56) = v6;
    sub_80258078();
}
