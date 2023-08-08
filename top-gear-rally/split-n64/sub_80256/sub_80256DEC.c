#include "types-n64.h"
//----- (80256DEC) --------------------------------------------------------
char *__fastcall sub_80256DEC(char *a1) {
    int *v1;             // $v0
    int v2;              // $v1
    int v3;              // $t2
    int v4;              // $a2
    int v5;              // $t1
    char v6;             // $t3
    unsigned __int8 v7;  // $t3
    char v8;             // $t8
    char v9;             // $t3
    unsigned int v10;    // $a3
    char v11;            // $t3
    unsigned __int8 v12; // $t3
    char v13;            // $t3
    int v14;             // $t1
    int v15;             // $t3
    __int64 *v16;        // $a2
    int v17;             // $t0
    int *v18;            // $t9
    int v19;             // $t7

    v1 = dword_80378DD0;
    v2 = 0;
    do {
        v3 = *a1;
        v4 = 0;
        v5 = 0;
        ++a1;
        if (v3 >= 0) {
            *((_BYTE *)v1 + 12) = v3;
            v12 = *a1;
            *((_BYTE *)v1 + 17) = *a1;
            v5 = v12;
            v4 = (char)v3;
            *((_BYTE *)v1 + 14) = a1[1];
            v13 = a1[2];
            a1 += 4;
            *((_BYTE *)v1 + 15) = v13;
            v10 = v13;
            *((_BYTE *)v1 + 16) = *(a1 - 1);
        } else {
            if ((v3 & 1) != 0) {
                v6 = *a1++;
                v4 = v6;
                *((_BYTE *)v1 + 12) = v6;
            }
            if ((v3 & 2) != 0) {
                v7 = *a1++;
                *((_BYTE *)v1 + 17) = v7;
                v5 = v7;
            }
            if ((v3 & 4) != 0) {
                v8 = *a1++;
                *((_BYTE *)v1 + 14) = v8;
            } else if (v4) {
                *((_BYTE *)v1 + 14) = 64;
            }
            if ((v3 & 8) != 0) {
                v9 = *a1++;
                v10 = v9;
                *((_BYTE *)v1 + 15) = v9;
            } else {
                v10 = 0;
            }
            if ((v3 & 0x10) != 0) {
                v11 = *a1++;
                *((_BYTE *)v1 + 16) = v11;
            }
        }
        if (v4)
            --*((_BYTE *)v1 + 12);
        if (v5) {
            if (*((_BYTE *)v1 + 14)) {
                *((_WORD *)v1 + 4) = 0;
                goto LABEL_25;
            }
            *((_BYTE *)v1 + 14) = 64;
        }
        *((_WORD *)v1 + 4) = 0;
    LABEL_25:
        *((_WORD *)v1 + 5) = 0;
        v14 = *((unsigned __int8 *)v1 + 13);
        *((_BYTE *)v1 + 22) = 0;
        if (v10 < 0x10)
            __asm { jr      $t8 }
            if (v4) {
                v15 = *((unsigned __int8 *)v1 + 17);
                v16 = &qword_802A4798[v2];
                *((_BYTE *)v1 + 21) = 0;
                v17 = dword_803787D0[v15 - 1];
                *((_DWORD *)v16 + 1) = 0;
                *((_BYTE *)v1 + 13) = v15;
                *(_DWORD *)v16 = v17 + 40;
                v14 = (unsigned __int8)v15;
                v18 = &gMusicThreadStack[2 * (unsigned __int16)(*(char *)(v17 + 16) +
                                                                *((unsigned __int8 *)v1 + 12))];
                v19 = v18[1];
                *((_DWORD *)v16 + 2) = *v18;
                *((_DWORD *)v16 + 3) = v19;
            }
        if (v14)
            LODWORD(qword_802A4798[v2 + 2]) =
                (*((unsigned __int8 *)v1 + 14) *
                 *(unsigned __int8 *)(dword_803787D0[v14 - 1] + 12)) >>
                6;
        v1 += 6;
        v2 += 3;
    } while (v1 < dword_80378F50);
    return a1;
}
// 802A4798: using guessed type __int64 qword_802A4798[];
// 803787D0: using guessed type int dword_803787D0[128];
// 80378DD0: using guessed type int dword_80378DD0[96];
// 80378F50: using guessed type int dword_80378F50[18];
// 80379568: using guessed type int dword_80379568[242];
