#include "types-n64.h"
//----- (8026A37C) --------------------------------------------------------
int __fastcall sub_8026A37C(int a1) {
    int v1;                 // $ra
    int v3;                 // [sp+1Ch] [-2Ch]
    int v4;                 // [sp+20h] [-28h]
    int i;                  // [sp+24h] [-24h]
    unsigned __int8 v6[32]; // [sp+28h] [-20h] BYREF

    v3 = v1;
    v4 = 0;
    for (i = 0; i < 32; ++i)
        v6[i] = *(_BYTE *)(a1 + 101);
    return sub_8026A900(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), 0x400u, v6, 0);
}
// 8026A380: variable 'v1' is possibly undefined
