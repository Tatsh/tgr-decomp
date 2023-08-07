#include "../../types-n64.h"
//----- (802668F0) --------------------------------------------------------
void __fastcall sub_802668F0(int a1, int a2) {
    int v2; // $s0

    v2 = sub_80268540();
    if (!a1)
        a1 = 0;
    if (*(_DWORD *)(a1 + 4) != a2) {
        *(_DWORD *)(a1 + 4) = a2;
        if (a1 && *(_WORD *)(a1 + 16) != 1) {
            sub_8026AC80(*(_DWORD ***)(a1 + 8), (_DWORD *)a1);
            sub_8026B3EC(*(OSThread **)(a1 + 8), (OSThread *)a1);
        }
        if (MEMORY[4] < -1) {
            MEMORY[0x10] = 2;
            sub_8026B2EC((OSMesgQueue *)&gMtqueue.queue);
        }
    }
    sub_80268560(v2);
}
