#include "../../types-n64.h"
//----- (802523CC) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_802523CC(int a1, int a2, int a3, int a4) {
    int v4;      // $t0
    int v5;      // $fp
    int v6;      // $v0
    int v7;      // $s4
    int v8;      // $s3
    int v9;      // $s1
    __int64 v10; // $v1
    int v11;     // $s7
    int i;       // $t5
    int v13;     // $fp
    int v14;     // $t7
    int v15;     // $s6
    int v16;     // $s5
    int v17;     // $s0
    int v18;     // $v0
    int v19;     // $v0
    int v20;     // $s1
    int v21;     // $lo
    int v22;     // $s4
    int v23;     // $s3
    int v24;     // $s1
    int v25;     // $s7
    int j;       // $t5
    int v27;     // $fp
    int v28;     // $t4
    int v29;     // $a3
    int v30;     // $s6
    int v31;     // $s1
    int v32;     // $lo
    int v34;     // [sp+40h] [-60h]
    int v35;     // [sp+54h] [-4Ch]
    int v36;     // [sp+54h] [-4Ch]
    int v37;     // [sp+58h] [-48h]
    int v38;     // [sp+58h] [-48h]
    int v39;     // [sp+5Ch] [-44h]
    int v40;     // [sp+60h] [-40h]
    int v41;     // [sp+6Ch] [-34h]
    int v42;     // [sp+70h] [-30h]
    int v43;     // [sp+94h] [-Ch]
    int v44;     // [sp+98h] [-8h]
    int v45;     // [sp+A0h] [+0h]
    int v46;     // [sp+A4h] [+4h]
    int v47;     // [sp+A8h] [+8h]
    int v48;     // [sp+ACh] [+Ch]

    v4 = a3 - a1;
    v45 = a1;
    v46 = a2;
    v47 = a3;
    v48 = a4;
    v5 = 0;
    if (a3 - a1 < 0) {
        v45 = a3;
        v47 = a1;
        v4 = a1 - a3;
    }
    if (a4 - a2 < 0) {
        v46 = a4;
        v48 = a2;
        v6 = (a2 - a4) >> 1;
    } else {
        v6 = (a4 - a2) >> 1;
    }
    if (v6 < 2)
        v44 = 1;
    else
        v44 = v6;
    if (v4 >> 1 < 2)
        v43 = 1;
    else
        v43 = v4 >> 1;
    v7 = 2 * v44;
    v8 = 0;
    word_8028DBB0 = 1;
    v40 = v44 * v44;
    v42 = v44 * v44;
    v39 = v43 * v43;
    v41 = v43 * v43;
    v9 = -(v43 * v43) * 2 * v44;
    if (v43 * v43 * 2 * v44 >= 0) {
        v37 = v41 * v7;
        v35 = 0;
        v11 = 0;
        for (i = 0;; i = v8 & 1) {
            if (!i) {
                v13 = v5 + 1;
                v14 = v13 & 7;
                if (v13 < 0 && (v13 & 7) != 0)
                    v14 -= 8;
                v5 = v14;
                v15 = (v45 + v47) >> 1;
                v16 = v8 >> 1;
                v17 = (v8 >> 1) + v15;
                v18 = v17 & 1;
                if ((v17 & 1) != 0) {
                    sub_80246A80();
                    v18 = v17 & 1;
                }
                if (v18)
                    sub_80246A80();
                v19 = (v15 - v16) & 1;
                if (v19) {
                    sub_80246A80();
                    v19 = (v15 - v16) & 1;
                }
                if (v19)
                    sub_80246A80();
            }
            v20 = v9 + v11;
            v35 += v42;
            ++v8;
            v11 += v44 * v44;
            v9 = v20 + v11;
            if (v9 > 0) {
                v21 = v39 * v7--;
                v37 -= v41;
                v9 = v9 - v21 - v39 * v7;
            }
            if (v37 < v35)
                break;
        }
        HIDWORD(v10) = v43;
    } else {
        HIDWORD(v10) = v43;
    }
    v22 = 0;
    v23 = 2 * HIDWORD(v10);
    v24 = -v40 * 2 * HIDWORD(v10);
    if (2 * HIDWORD(v10) * v40 >= 0) {
        v38 = 0;
        v25 = 0;
        v36 = 2 * HIDWORD(v10) * v42;
        for (j = 0;; j = v22 & 1) {
            if (!j) {
                v27 = v5 + 1;
                v28 = v27 & 7;
                if (v27 < 0 && (v27 & 7) != 0)
                    v28 -= 8;
                v5 = v28;
                v29 = (v46 + v48) >> 1;
                HIDWORD(v10) = v22 >> 1;
                v30 = ((v22 >> 1) + v29) & 1;
                if (v30) {
                    sub_80246A80();
                    HIDWORD(v10) = v22 >> 1;
                    v29 = (v46 + v48) >> 1;
                }
                LODWORD(v10) = (v29 - HIDWORD(v10)) & 1;
                if ((_DWORD)v10) {
                    v34 = (v29 - HIDWORD(v10)) & 1;
                    v10 = sub_80246A80();
                    LODWORD(v10) = v34;
                }
                if ((_DWORD)v10)
                    v10 = sub_80246A80();
                if (v30)
                    v10 = sub_80246A80();
            }
            v31 = v24 + v25;
            v38 += v41;
            ++v22;
            v25 += v43 * v43;
            v24 = v31 + v25;
            if (v24 > 0) {
                v32 = v40 * v23--;
                v36 -= v42;
                v24 = v24 - v32 - v40 * v23;
            }
            if (v36 < v38)
                break;
        }
    }
    return HIDWORD(v10);
}
// 802524AC: write access to const memory at 8028DBB0 has been detected
// 8028DBB0: using guessed type __int16 word_8028DBB0;
