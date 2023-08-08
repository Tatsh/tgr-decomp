#include "types-n64.h"
//----- (80264824) --------------------------------------------------------
void __fastcall sub_80264824(int a1) {
    BOOL v1; // $at
    int v2;  // [sp+0h] [-10h]
    int v3;  // [sp+8h] [-8h]
    int *v4; // [sp+Ch] [-4h]

    v4 = dword_8037F3F0;
    v2 = 0;
    do {
        v3 = v4[1];
        *(_BYTE *)(a1 + 4) = (BYTE2(*v4) & 0xC0) >> 4;
        if (!*(_BYTE *)(a1 + 4))
            *(_DWORD *)a1 = v3;
        v1 = v2 + 1 < 136;
        v4 += 2;
        ++v2;
        a1 += 6;
    } while (v1);
}
// 8037F3F0: using guessed type int dword_8037F3F0[15];
