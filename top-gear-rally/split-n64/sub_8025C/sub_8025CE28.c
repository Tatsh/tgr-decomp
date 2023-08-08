#include "types-n64.h"
//----- (8025CE28) --------------------------------------------------------
int __fastcall sub_8025CE28(float *a1, float *a2) {
    float *v2;    // $s4
    float *v4;    // $s0
    int v5;       // $v1
    int v6;       // $s1
    int v7;       // $v0
    float *v9;    // $a0
    char *v10;    // $v0
    float v11;    // $f16
    float v12;    // [sp+44h] [-2Ch]
    float v13;    // [sp+48h] [-28h]
    float v14[3]; // [sp+54h] [-1Ch] BYREF
    int v15[2];   // [sp+60h] [-10h] BYREF
    int v16;      // [sp+68h] [-8h]
    char v17;     // [sp+6Ch] [-4h] BYREF

    v2 = a1;
    v4 = a1;
    v5 = 0;
    do {
        v6 = v5 + 1;
        v7 = sub_8025CBF8(v4, &v2[3 * ((v5 + 1) % 3)]);
        v5 = v6;
        if (v7)
            return 1;
        v4 += 3;
    } while (v6 < 3);
    v9 = a2;
    v10 = (char *)v15;
    do {
        if (*v9 < 0.0)
            *(_DWORD *)v10 = -1;
        else
            *(_DWORD *)v10 = 1;
        v10 += 4;
        ++v9;
    } while (v10 != &v17);
    v13 = (float)v15[0];
    v12 = (float)v15[1];
    v11 = (float)((float)((float)(*a2 * *v2) + (float)(a2[1] * v2[1])) + (float)(a2[2] * v2[2])) /
          (float)((float)((float)v16 * a2[2]) + (float)((float)(*a2 * v13) + (float)(a2[1] * v12)));
    if ((v11 - -0.5) * (v11 - 0.5) > 0.0)
        return 0;
    v14[0] = v13 * v11;
    v14[1] = v12 * v11;
    v14[2] = (float)v16 * v11;
    return sub_8025C8DC((int)v2, a2, (int)v14);
}
