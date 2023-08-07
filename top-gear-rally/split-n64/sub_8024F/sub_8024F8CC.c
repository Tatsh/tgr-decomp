#include "../../types-n64.h"
//----- (8024F8CC) --------------------------------------------------------
int __fastcall sub_8024F8CC(int a1, int a2, int a3, int a4) {
    int result; // $v0
    int v5;     // $fp
    int v6;     // $s6
    int v7;     // $s4
    int v8;     // $s7
    int v9;     // $s1
    int v10;    // $s2
    BOOL i;     // $at
    int v12;    // $s0
    int j;      // $a0
    int v14;    // $s1
    BOOL v15;   // $at
    int v16;    // $s0
    int k;      // $a0
    int v18;    // $s1
    int v19;    // $s5
    int v20;    // $s2
    BOOL l;     // $at
    int v22;    // $s0
    int m;      // $a0
    BOOL v24;   // $at
    int v25;    // $s0
    int n;      // $a0
    int v27;    // [sp+44h] [-14h]
    int v28;    // [sp+5Ch] [+4h]

    result = 0;
    v28 = -a2 >> 2;
    v5 = a1 >> 2;
    v6 = -a4 >> 2;
    v7 = a3 >> 2;
    if (a3 >> 2 < a1 >> 2) {
        v5 = a3 >> 2;
        v7 = a1 >> 2;
    }
    if (v6 < v28) {
        v28 = -a4 >> 2;
        v6 = -a2 >> 2;
    }
    v8 = v6 + 2;
    v9 = v28 - 2;
    v27 = v28 - 2;
    if (v28 - 2 < v6 + 2) {
        v10 = v5 + 2;
        for (i = v5 - 2 < v5 + 2;; i = v5 - 2 < v10) {
            v12 = v5 - 2;
            if (i) {
                for (j = v5 - 2;; j = v12) {
                    result = sub_8024F25C(j);
                    if (++v12 == v10)
                        break;
                }
            }
            if (++v9 == v8)
                break;
        }
    }
    v14 = v6 - 2;
    v15 = v5 < v7;
    if (v6 - 2 < v8) {
        while (1) {
            v16 = v5;
            if (v15) {
                for (k = v5;; k = v16) {
                    result = sub_8024F25C(k);
                    if (++v16 == v7)
                        break;
                }
            }
            if (++v14 == v8)
                break;
            v15 = v5 < v7;
        }
    }
    v18 = v28 - 2;
    v19 = v7 - 2;
    if (v27 < v8) {
        v20 = v7 + 2;
        for (l = v19 < v7 + 2;; l = v19 < v20) {
            v22 = v7 - 2;
            if (l) {
                for (m = v7 - 2;; m = v22) {
                    result = sub_8024F25C(m);
                    if (++v22 == v20)
                        break;
                }
            }
            if (++v18 == v8)
                break;
        }
        v18 = v28 - 2;
    }
    v24 = v5 < v7;
    if (v27 < v28 + 2) {
        while (1) {
            v25 = v5;
            if (v24) {
                for (n = v5;; n = v25) {
                    result = sub_8024F25C(n);
                    if (++v25 == v7)
                        break;
                }
            }
            if (++v18 == v28 + 2)
                break;
            v24 = v5 < v7;
        }
    }
    return result;
}
// 8028DAC0: using guessed type char byte_8028DAC0;
// 8028DB58: using guessed type char byte_8028DB58;
// 8028DB94: using guessed type int dword_8028DB94;
