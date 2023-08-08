#include "types-n64.h"
//----- (8021CB4C) --------------------------------------------------------
int __fastcall sub_8021CB4C(int a1, int a2, char *a3, int a4) {
    int v6;     // $s0
    int v7;     // $s2
    int v8;     // $s5
    int v10;    // $a2
    int i;      // $v1
    int v12;    // $v0
    int v13;    // $a0
    int v14;    // $v0
    char v15;   // $t7
    char *v16;  // $t8
    BOOL v17;   // $at
    char *v18;  // $t0
    int v19;    // $s0
    _BYTE *v20; // $t2
    int v21;    // $s0
    _BYTE *v22; // $t4
    int v23;    // $s0
    char v24;   // $t5
    char *v25;  // $t6
    char v26;   // $v1
    int v27;    // $a0
    bool v28;   // dc
    char *v29;  // $t8
    int v30;    // $s0
    char *v31;  // $t9
    int v32;    // $s0
    char *v33;  // $t0
    int v34;    // $s0
    int v36[8]; // [sp+50h] [-20h] BYREF

    v6 = 0;
    v7 = 0;
    v8 = 0;
    if (a4 > 0) {
        do {
            v6 = 0;
            sub_80260B20((int)v36, a3, 4);
            v7 += 4;
            ++v8;
            v10 = v7 + v36[0];
            a3 += 4;
            if (v7 < v7 + v36[0]) {
                for (i = *a3;; i = *a3) {
                    ++v7;
                    ++a3;
                    v12 = i + 3;
                    if (i >= 0) {
                        v26 = *a3;
                        ++v7;
                        ++a3;
                        if (v12) {
                            v27 = v12 - (v12 & 3);
                            if ((v12 & 3) != 0) {
                                do {
                                    --v12;
                                    *(_BYTE *)(a1 + v6) = v26;
                                    v6 += a4;
                                } while (v27 != v12);
                                v28 = v12 == 0;
                                goto LABEL_16;
                            }
                            do {
                                v28 = 0;
                            LABEL_16:
                                v29 = (char *)(a1 + v6);
                                if (v28)
                                    break;
                                v30 = v6 + a4;
                                v31 = (char *)(a1 + v30);
                                v32 = v30 + a4;
                                v33 = (char *)(a1 + v32);
                                *v29 = v26;
                                *v31 = v26;
                                v34 = v32 + a4;
                                *v33 = v26;
                                v12 -= 4;
                                *(_BYTE *)(a1 + v34) = v26;
                                v6 = v34 + a4;
                            } while (v12);
                        }
                        v17 = v7 < v10;
                    } else {
                        v13 = -i;
                        v14 = -i;
                        if ((v13 & 3) == 0)
                            goto LABEL_25;
                        do {
                            v15 = *a3;
                            v16 = (char *)(a1 + v6);
                            --v14;
                            v6 += a4;
                            ++v7;
                            ++a3;
                            *v16 = v15;
                        } while (v13 - (v13 & 3) != v14);
                        if (v14) {
                        LABEL_25:
                            do {
                                v18 = (char *)(a1 + v6);
                                v19 = v6 + a4;
                                *v18 = *a3;
                                v20 = (_BYTE *)(a1 + v19);
                                v21 = v19 + a4;
                                *v20 = a3[1];
                                v22 = (_BYTE *)(a1 + v21);
                                v23 = v21 + a4;
                                *v22 = a3[2];
                                v24 = a3[3];
                                v25 = (char *)(a1 + v23);
                                v14 -= 4;
                                v6 = v23 + a4;
                                v7 += 4;
                                a3 += 4;
                                *v25 = v24;
                            } while (v14);
                            v17 = v7 < v10;
                        } else {
                            v17 = v7 < v10;
                        }
                    }
                    if (!v17)
                        break;
                }
            }
            ++a1;
        } while (v8 != a4);
    }
    return v6;
}
// 8021CBDC: conditional instruction was optimized away because of '$v1.4>=FFFFFF80u'
