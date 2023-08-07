#include "../../types-n64.h"
//----- (8026A3F0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_8026A3F0(int a1, int a2, __int16 a3, _BYTE *a4) {
    int v4;                  // $ra
    BOOL v5;                 // $at
    int *v6;                 // $t7
    char *v7;                // $t6
    int *v8;                 // $t9
    int v9;                  // $at
    BOOL v10;                // $at
    int v13;                 // [sp+1Ch] [-44h]
    unsigned __int8 v14;     // [sp+27h] [-39h]
    int v15;                 // [sp+28h] [-38h]
    char v16[6];             // [sp+2Ch] [-34h] BYREF
    unsigned __int8 v17[34]; // [sp+32h] [-2Eh] BYREF
    int *v18;                // [sp+54h] [-Ch]
    int v19;                 // [sp+58h] [-8h]
    int v20;                 // [sp+5Ch] [-4h]

    v13 = v4;
    v18 = dword_8037F0B0;
    v15 = 2;
    sub_80269460();
    byte_8037F430 = 2;
    sub_8026A60C(a2, a3);
    v20 = sub_802694D0(1, (unsigned int)dword_8037F0B0);
    sub_802642E0(a1, 0, 1);
    do {
        v20 = sub_802694D0(0, (unsigned int)dword_8037F0B0);
        sub_802642E0(a1, 0, 1);
        v18 = dword_8037F0B0;
        if (a2) {
            v19 = 0;
            if (a2 > 0) {
                do {
                    v5 = ++v19 < a2;
                    v18 = (int *)((char *)v18 + 1);
                } while (v5);
            }
        }
        v6 = v18;
        v7 = v16;
        v8 = v18 + 9;
        do {
            v9 = *v6;
            v6 += 3;
            v7 += 12;
            *((_DWORD *)v7 - 3) = v9;
            *((_DWORD *)v7 - 2) = *(v6 - 2);
            *((_DWORD *)v7 - 1) = *(v6 - 1);
        } while (v6 != v8);
        *(_DWORD *)v7 = *v6;
        v20 = (v16[2] & 0xC0) >> 4;
        if (v20) {
            v20 = 1;
        } else {
            v14 = sub_8026A830(v17);
            if (v14 == v17[32]) {
                v19 = 0;
                do {
                    *a4 = v17[v19];
                    v10 = ++v19 < 32;
                    ++a4;
                } while (v10);
            } else {
                v20 = sub_80269580(a1, a2);
                if (v20)
                    break;
                v20 = 4;
            }
        }
        if (v20 != 4)
            break;
    } while (v15-- >= 0);
    sub_802694A4();
    return v20;
}
// 8026A42C: write access to const memory at 8037F430 has been detected
// 8026A3F8: variable 'v4' is possibly undefined
// 8037F0B0: using guessed type int dword_8037F0B0[15];
// 8037F430: using guessed type char byte_8037F430;
