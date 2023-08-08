#include "types-n64.h"
//----- (80261940) --------------------------------------------------------
int __fastcall sub_80261940(int a1, _BYTE *a2) {
    int v2;        // $ra
    _DWORD *v3;    // $t4
    _DWORD v5[5];  // [sp+0h] [-40h] BYREF
    int v6;        // [sp+14h] [-2Ch]
    int v7;        // [sp+18h] [-28h]
    char v8;       // [sp+1Fh] [-21h]
    int i;         // [sp+20h] [-20h]
    _DWORD v10[4]; // [sp+24h] [-1Ch] BYREF
    char v11;      // [sp+37h] [-9h] BYREF
    int v12;       // [sp+38h] [-8h] BYREF
    int v13;       // [sp+3Ch] [-4h]

    v6 = v2;
    v13 = 0;
    v8 = 0;
    v7 = 3;
    sub_80269460();
    do {
        sub_80261AE0(0);
        v13 = sub_802694D0(1, (unsigned int)dword_8037F0B0);
        sub_802642E0(a1, &v12, 1);
        v13 = sub_802694D0(0, (unsigned int)dword_8037F0B0);
        sub_802642E0(a1, &v12, 1);
        sub_80261BDC(&v11, (int)v10);
        i = 0;
        while ((v5[i + 9] & 0x400) != 0) {
            if (++i >= 136)
                goto LABEL_6;
        }
        --v7;
    LABEL_6:
        if (i == 136)
            v7 = 0;
    } while (v7 > 0);
    for (i = 0; i < 136; ++i) {
        v3 = &v10[i];
        if (!*((_BYTE *)v3 + 3) && (*((_BYTE *)v3 + 2) & 1) != 0)
            v8 |= 1 << i;
    }
    sub_802694A4();
    *a2 = v8;
    return v13;
}
// 80261944: variable 'v2' is possibly undefined
// 8037F0B0: using guessed type int dword_8037F0B0[15];
