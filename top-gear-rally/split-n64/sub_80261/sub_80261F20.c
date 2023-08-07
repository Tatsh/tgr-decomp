#include "../../types-n64.h"
//----- (80261F20) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80261F20(int a1) {
    int *v1;     // $t6
    char *v2;    // $t4
    int *v3;     // $t7
    int v4;      // $at
    char v6[40]; // [sp+1Ch] [-34h] BYREF
    int *v7;     // [sp+44h] [-Ch]
    int v8;      // [sp+48h] [-8h]
    int i;       // [sp+4Ch] [-4h]

    v7 = dword_8037F0B0;
    sub_80269460();
    byte_8037F430 = 3;
    sub_802694D0(1, (unsigned int)&dword_8037F0F0[16 * *(_DWORD *)(a1 + 8)]);
    sub_802642E0(*(_DWORD *)(a1 + 4), 0, 1);
    v8 = sub_802694D0(0, (unsigned int)dword_8037F0B0);
    sub_802642E0(*(_DWORD *)(a1 + 4), 0, 1);
    v7 = dword_8037F0B0;
    if (*(_DWORD *)(a1 + 8)) {
        for (i = 0; i < *(_DWORD *)(a1 + 8); v7 = (int *)((char *)v7 + 1))
            ++i;
    }
    v1 = v7;
    v2 = v6;
    v3 = v7 + 9;
    do {
        v4 = *v1;
        v1 += 3;
        v2 += 12;
        *((_DWORD *)v2 - 3) = v4;
        *((_DWORD *)v2 - 2) = *(v1 - 2);
        *((_DWORD *)v2 - 1) = *(v1 - 1);
    } while (v1 != v3);
    *(_DWORD *)v2 = *v1;
    v8 = (v6[2] & 0xC0) >> 4;
    if (!v8 && v6[38])
        v8 = 4;
    sub_802694A4();
    return v8;
}
// 80261F44: write access to const memory at 8037F430 has been detected
// 8037F0B0: using guessed type int dword_8037F0B0[15];
// 8037F0F0: using guessed type int dword_8037F0F0[64];
// 8037F430: using guessed type char byte_8037F430;
