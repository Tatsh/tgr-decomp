#include "../../types-win32.h"
//----- (1006AEB0) --------------------------------------------------------
void __cdecl sub_1006AEB0(int a1) {
    float *i;  // edi
    int v2;    // eax
    double v3; // st7
    double v4; // st6
    int v5;    // eax
    double v6; // st7
    double v7; // st6
    float v8;  // [esp+8h] [ebp-18h] BYREF
    float v9;  // [esp+Ch] [ebp-14h]
    float v10; // [esp+10h] [ebp-10h]
    float v11; // [esp+14h] [ebp-Ch] BYREF
    float v12; // [esp+18h] [ebp-8h]
    float v13; // [esp+1Ch] [ebp-4h]

    for (i = *(float **)(a1 + 24); i; i = *(float **)i) {
        v2 = *((_DWORD *)i + 1);
        if (v2) {
            if (v2 == 1)
                sub_10074770(&v8, a1 + 188, i + 2);
        } else {
            v8 = i[2];
            v9 = i[3];
            v10 = i[4];
        }
        v3 = v9 + *(float *)(a1 + 256);
        v4 = v10 + *(float *)(a1 + 260);
        *(float *)(a1 + 252) = v8 + *(float *)(a1 + 252);
        v5 = *(_DWORD *)(a1 + 28);
        *(float *)(a1 + 256) = v3;
        *(float *)(a1 + 260) = v4;
        if (v5 != 2) {
            sub_10074770(&v11, a1 + 188, i + 5);
            v6 = v13 * v8 - v11 * v10 + *(float *)(a1 + 268);
            v7 = v11 * v9 - v12 * v8 + *(float *)(a1 + 272);
            *(float *)(a1 + 264) = v12 * v10 - v13 * v9 + *(float *)(a1 + 264);
            *(float *)(a1 + 268) = v6;
            *(float *)(a1 + 272) = v7;
        }
    }
}
