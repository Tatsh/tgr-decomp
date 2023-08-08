#include "types-n64.h"
//----- (80258530) --------------------------------------------------------
void __fastcall sub_80258530(int a1, int a2, float a3) {
    float *v5;   // $a0
    float v6;    // [sp+20h] [-18h]
    float v7;    // [sp+24h] [-14h]
    float v8;    // [sp+28h] [-10h]
    float v9;    // [sp+30h] [-8h]
    float v10;   // [sp+34h] [-4h]
    _DWORD *v11; // [sp+38h] [+0h]

    v5 = (float *)(a1 + 24);
    v9 = *(float *)(a2 + 16) * a3;
    v10 = *(float *)(a2 + 20) * a3;
    *(v5 - 6) = (float)(*(float *)(a2 + 12) * a3) + *(float *)a2;
    *(v5 - 5) = v9 + *(float *)(a2 + 4);
    *(v5 - 4) = v10 + *(float *)(a2 + 8);
    *(v5 - 3) = *(float *)(a2 + 12);
    *(v5 - 2) = *(float *)(a2 + 16);
    *(v5 - 1) = *(float *)(a2 + 20);
    v6 = *(float *)(a2 + 56) * a3;
    v7 = *(float *)(a2 + 60) * a3;
    v8 = *(float *)(a2 + 64) * a3;
    *v5 = (float)(*(float *)(a2 + 52) * a3) + *(float *)(a2 + 24);
    v5[1] = v6 + *(float *)(a2 + 28);
    v5[2] = v7 + *(float *)(a2 + 32);
    v5[3] = v8 + *(float *)(a2 + 36);
    v11 = (_DWORD *)a1;
    sub_8025813C(v5);
    v11[10] = *(_DWORD *)(a2 + 40);
    v11[11] = *(_DWORD *)(a2 + 44);
    v11[12] = *(_DWORD *)(a2 + 48);
    v11[13] = *(_DWORD *)(a2 + 52);
    v11[14] = *(_DWORD *)(a2 + 56);
    v11[15] = *(_DWORD *)(a2 + 60);
    v11[16] = *(_DWORD *)(a2 + 64);
}
