#include "types-n64.h"
//----- (80269580) --------------------------------------------------------
int __fastcall sub_80269580(int a1, int a2) {
    int v2;       // $ra
    _DWORD *v4;   // $t4
    _DWORD v5[5]; // [sp+0h] [-38h] BYREF
    int v6;       // [sp+14h] [-24h]
    _DWORD v7[4]; // [sp+1Ch] [-1Ch] BYREF
    char v8;      // [sp+2Fh] [-9h] BYREF
    int v9;       // [sp+30h] [-8h] BYREF
    int v10;      // [sp+34h] [-4h]

    v6 = v2;
    sub_80261AE0(0);
    v10 = sub_802694D0(1, (unsigned int)dword_8037F0B0);
    sub_802642E0(a1, &v9, 1);
    v10 = sub_802694D0(0, (unsigned int)dword_8037F0B0);
    sub_802642E0(a1, &v9, 1);
    sub_80261BDC(&v8, (int)v7);
    if ((v5[a2 + 7] & 0x100) != 0 && (v5[a2 + 7] & 0x200) != 0)
        return 2;
    v4 = &v7[a2];
    if (*((_BYTE *)v4 + 3) || (*((_BYTE *)v4 + 2) & 1) == 0)
        return 1;
    if ((v5[a2 + 7] & 0x400) != 0)
        return 4;
    return v10;
}
// 80269584: variable 'v2' is possibly undefined
// 8037F0B0: using guessed type int dword_8037F0B0[15];
