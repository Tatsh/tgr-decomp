#include "types-n64.h"
//----- (8026A900) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_8026A900(int a1, int a2, unsigned __int16 a3, unsigned __int8 *a4, int a5) {
    BOOL v6;      // $at
    int *v7;      // $t9
    char *v8;     // $t8
    int *v9;      // $t1
    int v10;      // $at
    int v11;      // $v0
    int v13;      // [sp+28h] [-38h]
    char v14[40]; // [sp+2Ch] [-34h] BYREF
    int *v15;     // [sp+54h] [-Ch]
    int v16;      // [sp+58h] [-8h]
    int v17;      // [sp+5Ch] [-4h]

    v17 = 0;
    v15 = dword_8037F0B0;
    v13 = 2;
    if (a5 != 1 && a3 < 7u && a3)
        return 0;
    sub_80269460();
    byte_8037F430 = 3;
    sub_8026AB04(a2, a3, a4);
    v17 = sub_802694D0(1, (unsigned int)dword_8037F0B0);
    sub_802642E0(a1, 0, 1);
    do {
        v17 = sub_802694D0(0, (unsigned int)dword_8037F0B0);
        sub_802642E0(a1, 0, 1);
        v15 = dword_8037F0B0;
        if (a2) {
            v16 = 0;
            if (a2 > 0) {
                do {
                    v6 = ++v16 < a2;
                    v15 = (int *)((char *)v15 + 1);
                } while (v6);
            }
        }
        v7 = v15;
        v8 = v14;
        v9 = v15 + 9;
        do {
            v10 = *v7;
            v7 += 3;
            v8 += 12;
            *((_DWORD *)v8 - 3) = v10;
            *((_DWORD *)v8 - 2) = *(v7 - 2);
            *((_DWORD *)v8 - 1) = *(v7 - 1);
        } while (v7 != v9);
        *(_DWORD *)v8 = *v7;
        v17 = (v14[2] & 0xC0) >> 4;
        if (v17) {
            v17 = 1;
        } else {
            v11 = sub_8026A830(a4);
            if (v11 != (unsigned __int8)v14[38]) {
                v17 = sub_80269580(a1, a2);
                if (v17)
                    break;
                v17 = 4;
            }
        }
        if (v17 != 4)
            break;
    } while (v13-- >= 0);
    sub_802694A4();
    return v17;
}
// 8026A96C: write access to const memory at 8037F430 has been detected
// 8037F0B0: using guessed type int dword_8037F0B0[15];
// 8037F430: using guessed type char byte_8037F430;
