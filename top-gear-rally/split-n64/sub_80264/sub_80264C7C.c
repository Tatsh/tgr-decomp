#include "types-n64.h"
//----- (80264C7C) --------------------------------------------------------
int __fastcall sub_80264C7C(int a1) {
    int *v1;         // $v0
    int result;      // $v0
    unsigned int v3; // [sp+1Ch] [-4h]

    v1 = sub_80264B60((char *)a1);
    v3 = (unsigned int)v1;
    if ((v1[1] & 1) != 0) {
        v1[6] = v1[14];
        v1[7] = v1[15];
        *(_DWORD *)(a1 + 4) &= 0xFFFFFFFE;
        if ((v1[1] & 4) != 0)
            v1[4] = *(_DWORD *)((*(_DWORD *)(a1 + 56) + 3068) | 0xA0000000);
    }
    sub_8026B7D0((unsigned int)v1, 64);
    sub_8026B850(11008);
    while (sub_8026B860((int)sub_4001000) == -1)
        ;
    while (sub_8026B8A0(1, (int)&unk_4000FC0, v3, 64) == -1)
        ;
    while (sub_8026B930())
        ;
    for (result = sub_8026B8A0(1, (int)sub_4001000, *(_DWORD *)(v3 + 8), *(_DWORD *)(v3 + 12));
         result == -1;
         result = sub_8026B8A0(1, (int)sub_4001000, *(_DWORD *)(v3 + 8), *(_DWORD *)(v3 + 12))) {
        ;
    }
    return result;
}
