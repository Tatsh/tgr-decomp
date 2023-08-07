#include "../../types-n64.h"
//----- (8025980C) --------------------------------------------------------
int __fastcall sub_8025980C(int a1) {
    float *v2;    // $s1
    int v3;       // $t6
    float v4;     // $f10
    int v5;       // $t7
    int v6;       // $t8
    int v7;       // $t9
    float *v9;    // [sp+20h] [-38h]
    float v10[3]; // [sp+28h] [-30h] BYREF
    float v11[6]; // [sp+34h] [-24h] BYREF
    float v12;    // [sp+4Ch] [-Ch] BYREF
    float v13;    // [sp+50h] [-8h]
    float v14;    // [sp+54h] [-4h]

    v2 = (float *)(a1 + 188);
    v9 = (float *)(a1 + 252);
    sub_802586C0(&v12, (float *)(a1 + 188), (float *)(a1 + 252));
    v3 = *(_DWORD *)(a1 + 4);
    *(float *)(a1 + 252) = v12;
    v4 = *(float *)(a1 + 252);
    v5 = *(_DWORD *)(a1 + 8);
    *(float *)(a1 + 256) = v13;
    v6 = *(_DWORD *)(a1 + 12);
    v7 = *(_DWORD *)(a1 + 16);
    *(float *)(a1 + 260) = v14;
    v12 = (float)(*(float *)(v7 + 252) +
                  (float)((float)((float)(v4 + *(float *)(v3 + 252)) + *(float *)(v5 + 252)) +
                          *(float *)(v6 + 252))) /
          *(float *)(a1 + 44);
    v13 = (float)(*(float *)(*(_DWORD *)(a1 + 16) + 256) +
                  (float)((float)((float)(*(float *)(a1 + 256) +
                                          *(float *)(*(_DWORD *)(a1 + 4) + 256)) +
                                  *(float *)(*(_DWORD *)(a1 + 8) + 256)) +
                          *(float *)(*(_DWORD *)(a1 + 12) + 256))) /
          *(float *)(a1 + 44);
    v14 = *(float *)(a1 + 260) / *(float *)(a1 + 44);
    sub_80258758(v9, (int)v2, &v12);
    sub_802586C0(v11, v2, (float *)(a1 + 264));
    sub_802588B8(v10, (float *)(a1 + 84), v11);
    return sub_80258758((float *)(a1 + 264), (int)v2, v10);
}
