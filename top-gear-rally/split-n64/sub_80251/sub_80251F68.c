#include "types-n64.h"
//----- (80251F68) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80251F68(int a1, int a2, int a3, int a4) {
    char v4;    // $s3
    __int64 v5; // $v1
    int v6;     // $a0
    int v7;     // $s6
    int v8;     // $s1
    int v9;     // $s7
    char i;     // $t2
    char j;     // $t0
    int v12;    // $s5
    int v13;    // $s1
    char k;     // $t4
    char l;     // $t8
    int v16;    // $s2
    int v17;    // $s7
    int v18;    // $fp
    int m;      // $t3
    int v20;    // $s4
    int v21;    // $s1
    int v22;    // $s1
    int v23;    // $s6
    int v24;    // $s1
    int v26;    // [sp+58h] [-38h]
    int v27;    // [sp+5Ch] [-34h]
    int v28;    // [sp+90h] [+0h]
    int v29;    // [sp+90h] [+0h]
    int v30;    // [sp+94h] [+4h]
    int v31;    // [sp+98h] [+8h]
    int v32;    // [sp+9Ch] [+Ch]

    v28 = a1;
    v30 = a2;
    v31 = a3;
    v32 = a4;
    v4 = 0;
    word_8028DBB0 = 1;
    if (a3 < a1) {
        v28 = a3;
        v31 = a1;
    }
    if (a4 < a2) {
        v30 = a4;
        v32 = a2;
    }
    HIDWORD(v5) = v31 - v28;
    v6 = v32 - v30;
    if (v31 - v28 < v32 - v30)
        v6 = v31 - v28;
    v7 = v6 >> 2;
    v8 = v30 + (v6 >> 2);
    v9 = v6 >> 2;
    v26 = v32 - (v6 >> 2);
    v27 = v8;
    if (v26 >= v8) {
        for (i = 1;; i = v4 + 1) {
            v4 = i & 1;
            HIDWORD(v5) = sub_80246E10();
            v8 += 4;
            if (v32 - v9 < v8)
                break;
        }
        v8 = v27;
    }
    if (v26 >= v27) {
        for (j = v4 + 1;; j = v4 + 1) {
            v4 = j & 1;
            HIDWORD(v5) = sub_80246E10();
            v8 += 4;
            if (v32 - v9 < v8)
                break;
        }
    }
    v12 = v31 - v7;
    v13 = v28 + v7;
    if (v31 - v7 >= v28 + v7) {
        for (k = v4 + 1;; k = v4 + 1) {
            v4 = k & 1;
            HIDWORD(v5) = sub_80246E10();
            v13 += 4;
            if (v31 - v9 < v13)
                break;
        }
        v13 = v28 + v7;
    }
    if (v12 >= v28 + v7) {
        for (l = v4 + 1;; l = v4 + 1) {
            v4 = l & 1;
            HIDWORD(v5) = sub_80246E10();
            v13 += 4;
            if (v31 - v9 < v13)
                break;
        }
    }
    v16 = 2 * v7;
    v29 = v28 + v7;
    v17 = 0;
    v18 = -2 * v7;
    if ((v7 & 0x40000000) == 0) {
        for (m = 0;; m = v17 & 1) {
            if (!m) {
                v4 = (v4 + 1) & 7;
                v20 = v17 >> 1;
                v21 = (v29 - (v17 >> 1)) & 1;
                if (v21)
                    v5 = sub_80246A80();
                if (v21)
                    v5 = sub_80246A80();
                v22 = (v20 + v12) & 1;
                if (v22)
                    v5 = sub_80246A80();
                if (v22)
                    v5 = sub_80246A80();
                v23 = (v20 + v26) & 1;
                if (v23)
                    v5 = sub_80246A80();
                v24 = (v27 - v20) & 1;
                if (v24)
                    v5 = sub_80246A80();
                if (v24)
                    v5 = sub_80246A80();
                if (v23)
                    v5 = sub_80246A80();
            }
            v18 += v17++;
            if (v18 >= 0)
                v18 -= v16--;
            if (v16 < v17)
                break;
        }
    }
    return HIDWORD(v5);
}
// 80251FC0: write access to const memory at 8028DBB0 has been detected
// 80252238: conditional instruction was optimized away because of '$s3.4<100u'
// 8028DBB0: using guessed type __int16 word_8028DBB0;
