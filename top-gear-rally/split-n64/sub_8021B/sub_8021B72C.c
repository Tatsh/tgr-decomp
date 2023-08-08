#include "types-n64.h"
//----- (8021B72C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_8021B72C(int *a1, _DWORD *a2) {
    int *v3;         // $a2
    int v4;          // $a1
    int v5;          // $v1
    unsigned int v6; // $t6
    int v7;          // $a0
    _DWORD *v8;      // $v0
    int *v9;         // $v0
    int i;           // $t8
    int result;      // $v0
    int v12;         // [sp+8h] [-8h]

    v3 = a1;
    v12 = 0;
    if (a1) {
        while (1) {
        LABEL_2:
            v4 = *v3;
            v5 = 0;
            v6 = HIBYTE(*v3);
            v7 = 0;
            if (v6 == 184)
                goto LABEL_25;
            v8 = a2;
            if (v6 == 185)
                break;
            if (v6 == 250 || v6 == 251) {
            LABEL_24:
                v3 += 2;
            } else {
                if (v6 == 252) {
                    v9 = &dword_8028AB88;
                    for (i = -65896952;; i = *v9) {
                        if (v4 == i) {
                            if (v3[1] == v9[1]) {
                                *v3 = v9[2];
                                v3[1] = v9[3];
                                goto LABEL_24;
                            }
                            v9 += 4;
                        } else {
                            v9 += 4;
                        }
                        if (v9 == &dword_8028AB98)
                            goto LABEL_24;
                    }
                }
                v3 += 2;
            }
        }
        while (1) {
            if (v4 == *v8) {
                if (v3[1] == v8[1]) {
                    *v3 = a2[8 * v5 + 2];
                    v3[1] = a2[8 * v5 + 3];
                    if (v7 < 96)
                        goto LABEL_24;
                    v3 += 2;
                    v12 = 1;
                    goto LABEL_2;
                }
                ++v5;
            } else {
                ++v5;
            }
            v7 += 32;
            v8 += 8;
            if (v5 == 6) {
                v3 += 2;
                goto LABEL_2;
            }
        }
    }
LABEL_25:
    result = v12;
    dword_8028ADE8 = 0;
    return result;
}
// 8021B970: write access to const memory at 8028ADE8 has been detected
// 8021B854: conditional instruction was optimized away because of '$t4.4==1'
// 8028AA78: using guessed type int dword_8028AA78;
// 8028AA80: using guessed type int dword_8028AA80;
// 8028AA84: using guessed type int dword_8028AA84;
// 8028AA8C: using guessed type int dword_8028AA8C;
// 8028AB88: using guessed type int dword_8028AB88;
// 8028AB98: using guessed type int dword_8028AB98;
// 8028ADE8: using guessed type int dword_8028ADE8;
