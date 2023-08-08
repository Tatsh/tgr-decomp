#include "types-n64.h"
//----- (8026BEB8) --------------------------------------------------------
unsigned __int64 __fastcall sub_8026BEB8(int a1) {
    int v1;              // $t3
    int v3;              // [sp+24h] [-14h]
    unsigned __int64 v4; // [sp+28h] [-10h]
    int v5;              // [sp+34h] [-4h]

    v3 = sub_80268540();
    v5 = 1937243352;
    v4 = *(_QWORD *)(a1 + 16);
    if (&dword_803818A0 != (int *)1937243352 && MEMORY[0x7377FCE8] < *(_QWORD *)(a1 + 16)) {
        do {
            v4 -= *(_QWORD *)(v5 + 16);
            v1 = *(_DWORD *)v5;
            v5 = *(_DWORD *)v5;
        } while ((int *)v5 != &dword_803818A0 && *(_QWORD *)(v1 + 16) < v4);
    }
    *(_QWORD *)(a1 + 16) = v4;
    if ((int *)v5 != &dword_803818A0)
        *(_QWORD *)(v5 + 16) -= v4;
    *(_DWORD *)a1 = v5;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(v5 + 4);
    **(_DWORD **)(v5 + 4) = a1;
    *(_DWORD *)(v5 + 4) = a1;
    sub_80268560(v3);
    return v4;
}
// 803818A0: using guessed type int dword_803818A0;
