#include "types-n64.h"
//----- (8021A5B8) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8021A5B8() {
    int result; // $v0
    int v1;     // $t0
    int v2;     // $s2
    int i;      // $t6
    _DWORD *v4; // $s0
    int v5;     // $t1
    int v6;     // $a2
    int v7;     // $a0
    int v8;     // $a3
    int v9;     // $t4
    int v10;    // $t0
    int v11;    // $v0
    int v12;    // $v1
    int v13;    // $v0
    int v14;    // $v1
    int v15;    // $t7
    int v16;    // $s1

    result = 0;
    v1 = MEMORY[0x80025C18];
    v2 = 0;
    if (MEMORY[0x80025C18] > 0) {
        for (i = MEMORY[0x80025C1C];; i = MEMORY[0x80025C1C]) {
            v4 = (_DWORD *)(i + v2);
            if (!*(_DWORD *)(i + v2)) {
                result = 36 * v1;
                goto LABEL_29;
            }
            v5 = v4[8];
            if ((v5 & 0x100000) != 0) {
                v6 = v4[2];
                v7 = *(unsigned __int16 *)(v6 + 2);
                v8 = *(_DWORD *)(v6 + 8);
                v9 = *(_DWORD *)(v6 + 12 * v7 - 4);
                if (v9 == v8)
                    __break(7u, 0);
                if (v7 == 2 && v8 == -1) {
                    v10 = -1;
                    v11 = v6 + 12;
                } else {
                    v12 = 1;
                    if (*(unsigned __int16 *)(v6 + 2) < 2u) {
                    LABEL_18:
                        v14 = v12 - 1;
                    } else {
                        v13 = v6 + 12;
                        while (-(0u / (v9 - v8) * (v9 - v8)) >= *(_DWORD *)(v13 + 8)) {
                            ++v12;
                            v13 += 12;
                            if (v12 >= v7)
                                goto LABEL_18;
                        }
                        v14 = v12 - 1;
                    }
                    v11 = v6 + 12 * v14;
                    v10 = *(_DWORD *)(v11 + 12);
                }
                v16 = *(_DWORD *)(v11 + 16);
                if (v5 << 14) {
                    if (v10 == -1) {
                        v15 = v4[1];
                        goto LABEL_25;
                    }
                    sub_802172D0();
                    justReturnsNegative1();
                    v4 = (_DWORD *)(MEMORY[0x80025C1C] + v2);
                }
            } else {
                v16 = 32 * (v4[2] & 0xFFF);
            }
            v15 = v4[1];
        LABEL_25:
            if (v15 && v16 != -1) {
                sub_802172D0();
                justReturnsNegative1();
            }
            v1 = MEMORY[0x80025C18];
            result = 36 * MEMORY[0x80025C18];
        LABEL_29:
            v2 += 36;
            if (v2 >= result)
                break;
        }
    }
    dword_8028AA88 = 0;
    return result;
}
// 8021A8F0: write access to const memory at 8028AA88 has been detected
// 8021A75C: conditional instruction was optimized away because of '%var_1C.4==0'
// 8028AA84: using guessed type int dword_8028AA84;
// 8028AA88: using guessed type int dword_8028AA88;
// 8028AAD4: using guessed type int dword_8028AAD4;
// 8028B940: using guessed type int dword_8028B940;
