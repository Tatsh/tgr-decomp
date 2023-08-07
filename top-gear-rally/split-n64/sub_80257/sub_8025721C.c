#include "../../types-n64.h"
//----- (8025721C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_8025721C() {
    int *v0;          // $s0
    int v1;           // $s2
    int v2;           // $s3
    int v3;           // $t7
    __int64 *v4;      // $s1
    int v5;           // $v0
    int *v6;          // $t2
    int v7;           // $t4
    int v8;           // $t5
    __int64 *v9;      // $s1
    int v10;          // $v1
    unsigned int v11; // $t2
    unsigned int v12; // $t1
    __int64 v13;      // $a1
    __int64 v14;      // $v1
    __int64 v15;      // $t9
    __int64 v16;      // $t1
    bool v17;         // dc
    __int64 v18;      // $a1
    __int64 v19;      // $a3
    unsigned int v20; // $v1
    unsigned int v21; // $v0
    unsigned int v22; // $t0
    unsigned int v23; // $t4
    int v24;          // $v1
    int v25;          // $v0
    unsigned int v26; // [sp+58h] [-28h]
    int v27;          // [sp+5Ch] [-24h]
    __int64 v28;      // [sp+68h] [-18h]

    word_80378FA2 = 9723;
    v0 = dword_80378DD0;
    v1 = 0;
    do {
        v2 = *((unsigned __int8 *)v0 + 13);
        if (!*((_BYTE *)v0 + 22)) {
            v3 = *((__int16 *)v0 + 4);
            goto LABEL_12;
        }
        v4 = &qword_802A4798[v1];
        if (*((_BYTE *)v0 + 13)) {
            if (*((_DWORD *)v4 + 2)) {
                v5 = *((unsigned __int8 *)v0 + 21);
            } else {
                if (!*((_DWORD *)v4 + 3)) {
                    v3 = *((__int16 *)v0 + 4);
                    goto LABEL_12;
                }
                v5 = *((unsigned __int8 *)v0 + 21);
            }
            v6 = &gMusicThreadStack[2 * (unsigned __int16)(*(char *)(dword_803787D0[v2 - 1] + 16) +
                                                           *((unsigned __int8 *)v0 + v5 + 18))];
            v7 = *v6;
            v8 = v6[1];
            *((_BYTE *)v0 + 21) = v5 + 1;
            *((_BYTE *)v0 + 21) = (v5 + 1) & 3;
            *((_DWORD *)v4 + 2) = v7;
            *((_DWORD *)v4 + 3) = v8;
        }
        v3 = *((__int16 *)v0 + 4);
    LABEL_12:
        v9 = &qword_802A4798[v1];
        if (!v3) {
            v10 = *((__int16 *)v0 + 5);
            goto LABEL_41;
        }
        v11 = *((_DWORD *)v9 + 2);
        v12 = *((_DWORD *)v9 + 3);
        HIDWORD(v13) = 238;
        if (!v11 && !v12) {
            v10 = *((__int16 *)v0 + 5);
            goto LABEL_41;
        }
        LODWORD(v13) = -1613762379;
        HIDWORD(v14) = sub_80266088(v13, __SPAIR64__(v11, v12));
        v15 = v14 - *((__int16 *)v0 + 4);
        v28 = v15;
        if (SHIDWORD(v15) <= 0) {
            HIDWORD(v16) = 0;
            v17 = v15 >= 0 && (_DWORD)v14 != *((__int16 *)v0 + 4);
            LODWORD(v16) = 1;
            if (!v17)
                v28 = v16;
        }
        HIDWORD(v18) = 238;
        if (!*v0) {
            HIDWORD(v19) = HIDWORD(v28);
            if (!v0[1]) {
                LODWORD(v19) = v28;
                *((_DWORD *)v9 + 2) = sub_8026612C(0xEE9FCFF0B5LL, v19);
                *((_DWORD *)v9 + 3) = v24;
                goto LABEL_40;
            }
        }
        LODWORD(v18) = -1613762379;
        v21 = sub_8026612C(v18, v28);
        v26 = v21;
        v27 = v20;
        if (*((__int16 *)v0 + 4) < 0) {
            if (*v0 < v21)
                goto LABEL_37;
            if (v21 < *v0 || v20 < v0[1]) {
                v26 = *v0;
                v27 = v0[1];
            LABEL_37:
                v23 = v26;
                goto LABEL_38;
            }
            v23 = v21;
        } else {
            v22 = *v0;
            if (v21 < v22)
                goto LABEL_37;
            if (v22 < v21 || v0[1] < v20) {
                v26 = *v0;
                v27 = v0[1];
                goto LABEL_37;
            }
            v23 = v21;
        }
    LABEL_38:
        *((_DWORD *)v9 + 2) = v23;
        *((_DWORD *)v9 + 3) = v27;
    LABEL_40:
        v10 = *((__int16 *)v0 + 5);
    LABEL_41:
        if (v10) {
            v25 = (__int16)(v10 + *((unsigned __int8 *)v0 + 14));
            if (v25 >= 0) {
                if (v25 >= 65)
                    LOBYTE(v25) = 64;
            } else {
                LOBYTE(v25) = 0;
            }
            *((_BYTE *)v0 + 14) = v25;
            if (v2)
                LODWORD(qword_802A4798[v1 + 2]) =
                    ((unsigned __int8)v25 * *(unsigned __int8 *)(dword_803787D0[v2 - 1] + 12)) >> 6;
        }
        v0 += 6;
        v1 += 3;
    } while (v0 < dword_80378F50);
}
// 80257270: write access to const memory at 802A4A04 has been detected
// 80257258: write access to const memory at 80378FA2 has been detected
// 802573EC: variable 'v14' is possibly undefined
// 80257448: variable 'v20' is possibly undefined
// 80257504: variable 'v24' is possibly undefined
// 802A4798: using guessed type __int64 qword_802A4798[];
// 802A49C0: using guessed type int dword_802A49C0;
// 802A4A04: using guessed type int dword_802A4A04;
// 803787D0: using guessed type int dword_803787D0[128];
// 80378DD0: using guessed type int dword_80378DD0[96];
// 80378F50: using guessed type int dword_80378F50[18];
// 80378FA2: using guessed type __int16 word_80378FA2;
// 80379568: using guessed type int dword_80379568[242];
