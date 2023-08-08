#include "types-n64.h"
//----- (802654B0) --------------------------------------------------------
int __fastcall sub_802654B0(void *a1, int a2, int a3) {
    int v3;       // $s0
    int result;   // $v0
    int v5;       // $t9
    int v6;       // $t8
    OSThread *v7; // $v0

    v3 = sub_80268540();
    if (*((_DWORD *)a1 + 2) < *((_DWORD *)a1 + 4)) {
    LABEL_6:
        v5 = *((_DWORD *)a1 + 4);
        v6 = *((_DWORD *)a1 + 3) + *((_DWORD *)a1 + 2);
        *(_DWORD *)(*((_DWORD *)a1 + 5) + 4 * (v6 % v5)) = a2;
        if (!v5)
            __break(7u, 0);
        if (v5 == -1 && v6 == 0x80000000)
            __break(6u, 0);
        ++*((_DWORD *)a1 + 2);
        if (**(_DWORD **)a1) {
            v7 = sub_8026B434((OSThread *)a1);
            osStartThread(v7);
        }
        sub_80268560(v3);
        result = 0;
    } else {
        while (a3 == 1) {
            MEMORY[0x10] = 8;
            sub_8026B2EC((OSMesgQueue *)((char *)a1 + 4));
            if (*((_DWORD *)a1 + 2) < *((_DWORD *)a1 + 4))
                goto LABEL_6;
        }
        sub_80268560(v3);
        result = -1;
    }
    return result;
}
