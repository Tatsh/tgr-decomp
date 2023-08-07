#include "../../types-n64.h"
//----- (8025D060) --------------------------------------------------------
int __fastcall sub_8025D060(int a1, float *a2) {
    int v3;      // $s4
    int v4;      // $v0
    int v5;      // $fp
    float **v6;  // $s0
    int v7;      // $s1
    float v9[3]; // [sp+88h] [-30h] BYREF
    float v10;   // [sp+94h] [-24h] BYREF
    float v11;   // [sp+98h] [-20h]
    float v12;   // [sp+9Ch] [-1Ch]
    float v13;   // [sp+A0h] [-18h] BYREF
    float v14;   // [sp+A4h] [-14h]
    float v15;   // [sp+A8h] [-10h]
    float v16;   // [sp+ACh] [-Ch] BYREF
    float v17;   // [sp+B0h] [-8h]
    float v18;   // [sp+B4h] [-4h]

    v3 = 0;
    v4 = sub_8025F18C(*(float *)(a1 + 236), *(float *)(a1 + 240));
    v5 = *(unsigned __int16 *)(2 * v4 - 2143819128);
    v6 = (float **)&dword_80379F80[1200 * v4];
    v7 = 0;
    if (*(_WORD *)(2 * v4 - 2143819128)) {
        do {
            sub_802587E8(&v10, a2, v6[4]);
            sub_802587E8(&v13, a2, v6[5]);
            sub_802587E8(&v16, a2, v6[6]);
            v9[0] = (float)((float)(v14 - v11) * (float)(v18 - v12)) -
                    (float)((float)(v17 - v11) * (float)(v15 - v12));
            v9[1] = (float)((float)(v15 - v12) * (float)(v16 - v10)) -
                    (float)((float)(v18 - v12) * (float)(v13 - v10));
            v9[2] = (float)((float)(v13 - v10) * (float)(v17 - v11)) -
                    (float)((float)(v16 - v10) * (float)(v14 - v11));
            if (sub_8025D018(&v10, v9)) {
                sub_8025C24C((int)v6);
                ++v3;
            }
            ++v7;
            v6 += 8;
        } while (v7 != v5);
    }
    return v3;
}
// 80379F80: using guessed type int dword_80379F80[512];
