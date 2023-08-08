#include "types-n64.h"
//----- (80262370) --------------------------------------------------------
int __fastcall sub_80262370(OSMesgQueue *a1, int a2, int a3) {
    int v3;                 // $ra
    int v5;                 // $t7
    int v6;                 // $t8
    int v7;                 // [sp+1Ch] [-2Ch]
    unsigned __int8 v8[32]; // [sp+20h] [-28h] BYREF
    int v9;                 // [sp+40h] [-8h]
    int i;                  // [sp+44h] [-4h]

    v7 = v3;
    *(_DWORD *)(a2 + 4) = a1;
    *(_DWORD *)(a2 + 8) = a3;
    *(_DWORD *)a2 = 0;
    *(_BYTE *)(a2 + 101) = 0x80;
    for (i = 0; i < 32; ++i)
        v8[i] = 0x80;
    v9 = sub_8026A900((int)a1, a3, 0x400u, v8, 0);
    if (v9 == 2)
        v9 = sub_8026A900((int)a1, a3, 0x400u, v8, 0);
    if (v9)
        return v9;
    v9 = sub_8026A3F0((int)a1, a3, 1024, v8);
    if (v9 == 2)
        v9 = 4;
    if (v9)
        return v9;
    if (v8[31] != 128)
        return 11;
    i = 0;
    do {
        v5 = i;
        v6 = i;
        *(_BYTE *)(i - 2143816944) = 1;
        *(_BYTE *)(v5 - 2143816976) = 0;
        i = v6 + 1;
    } while (v6 + 1 < 32);
    sub_802621F4(a3, 1536, dword_8037F310, &dword_8037F1F0[16 * a3]);
    sub_802621F4(a3, 1536, &byte_8037F2F0, &dword_8037F0F0[16 * a3]);
    return 0;
}
// 80262384: variable 'v3' is possibly undefined
// 8037F0F0: using guessed type int dword_8037F0F0[64];
// 8037F1F0: using guessed type int dword_8037F1F0[64];
// 8037F2F0: using guessed type char byte_8037F2F0;
// 8037F310: using guessed type int dword_8037F310[8];
