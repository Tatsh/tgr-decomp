#include "types-n64.h"
//----- (8026B204) --------------------------------------------------------
void __fastcall sub_8026B204(int a1) {
    int v1;     // $t1
    int v2;     // $t3
    int v3;     // $t4
    int v4;     // $t5
    _DWORD *v5; // $v0

    v1 = *(int *)((char *)dword_8037F370 + a1);
    if (v1) {
        v2 = *(_DWORD *)(v1 + 8);
        v3 = *(_DWORD *)(v1 + 16);
        if (v2 < v3) {
            v4 = *(_DWORD *)(v1 + 12) + v2;
            if (!v3)
                __break(7u, 0);
            if (v3 == -1 && v4 == 0x80000000)
                __break(6u, 0);
            *(_DWORD *)(*(_DWORD *)(v1 + 20) + 4 * (v4 % v3)) =
                *(int *)((char *)&dword_8037F370[1] + a1);
            *(_DWORD *)(v1 + 8) = v2 + 1;
            if (**(_DWORD **)v1) {
                v5 = sub_8026B434((_DWORD **)v1);
                sub_8026B3EC(MEMORY[0x802A6298], v5);
            }
        }
    }
}
// 802A6298: using guessed type int *off_802A6298[2];
// 8037F370: using guessed type int dword_8037F370[16];
