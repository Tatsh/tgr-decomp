#include "../../types-n64.h"
//----- (80263144) --------------------------------------------------------
int __fastcall sub_80263144(int a1, int a2) {
    int result;          // $v0
    _WORD v3[128];       // [sp+20h] [-110h] BYREF
    unsigned __int16 v4; // [sp+120h] [-10h]
    unsigned __int8 v5;  // [sp+123h] [-Dh]
    int v6;              // [sp+124h] [-Ch]
    int v7;              // [sp+128h] [-8h]
    int i;               // [sp+12Ch] [-4h]

    for (i = 0; i < 256; ++i)
        *(_BYTE *)(a2 + i + 257) = 0;
    *(_BYTE *)(a2 + 256) = -1;
    v5 = 0;
    if (!*(_BYTE *)(a1 + 100))
        return 0;
    while (1) {
        v6 = v5 ? 1 : *(_DWORD *)(a1 + 96);
        result = sub_8026A05C(a1, (int)v3, 0, v5);
        if (result) {
            if (result != 3)
                break;
        }
        for (i = v6; i < 128; ++i) {
            v4 = v3[i];
            if (v4 >= *(int *)(a1 + 96) && HIBYTE(v4) != v5) {
                v7 = ((int)(unsigned __int8)v4 >> 2) + 32 * (HIBYTE(v4) & 7);
                *(_BYTE *)(a2 + v7 + 257) |= 1 << (v5 & 7);
            }
        }
        if (++v5 >= (int)*(unsigned __int8 *)(a1 + 100))
            return 0;
    }
    return result;
}
