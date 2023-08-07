#include "../../types-n64.h"
//----- (8024FBC8) --------------------------------------------------------
int __fastcall sub_8024FBC8(int a1, int a2, int a3, int a4) {
    int v4;     // $a1
    int v5;     // $s7
    int v6;     // $v0
    int v7;     // $a0
    int v8;     // $s4
    int v9;     // $s1
    int v10;    // $s3
    int i;      // $s0
    int v12;    // $a0
    int result; // $v0
    int v14;    // $s7
    int j;      // $t8
    int v16;    // $fp
    int v17;    // $s5
    int v18;    // $s0
    int k;      // $a0
    int v20;    // $s0
    int l;      // $a0
    int v22;    // $s0
    int m;      // $a0
    int v24;    // $s0
    int n;      // $a0
    int v26;    // $t8
    int v27;    // $t6
    int v28;    // [sp+40h] [-48h]
    int v29;    // [sp+44h] [-44h]
    int v30;    // [sp+60h] [-28h]
    int v31;    // [sp+6Ch] [-1Ch]
    int v32;    // [sp+70h] [-18h]
    int v33;    // [sp+88h] [+0h]
    int v34;    // [sp+88h] [+0h]
    int v35;    // [sp+94h] [+Ch]

    v4 = -a2 >> 2;
    v33 = a1 >> 2;
    v35 = -a4 >> 2;
    v5 = a3 >> 2;
    if (a3 >> 2 < a1 >> 2) {
        v33 = a3 >> 2;
        v5 = a1 >> 2;
    }
    v6 = v4;
    if (v35 < v4) {
        v4 = -a4 >> 2;
        v35 = v6;
    }
    v7 = v35 - v4;
    if (v5 - v33 < v35 - v4)
        v7 = v5 - v33;
    v8 = v7 >> 2;
    v9 = v4 + (v7 >> 2);
    if (v9 < v35 - (v7 >> 2)) {
        v10 = v35 - (v7 >> 2);
        for (i = v33;; i = v33) {
            v12 = i;
            if (i < v5) {
                while (1) {
                    sub_8024F25C(v12);
                    if (++i == v5)
                        break;
                    v12 = i;
                }
            }
            if (++v9 >= v10)
                break;
        }
    }
    result = 2 * v8;
    v34 = v33 + v8;
    v14 = v5 - v8;
    v31 = 2 * v8;
    v32 = 0;
    v30 = -2 * v8;
    if ((v8 & 0x40000000) == 0) {
        for (j = 0;; j = v32) {
            v16 = j >> 1;
            if ((j & 1) == 0) {
                v17 = v16 + v14;
                v28 = (v31 >> 1) + v14;
                v29 = v34 - (v31 >> 1);
                v18 = v34 - v16;
                if (v34 - v16 < v16 + v14) {
                    for (k = v34 - v16;; k = v18) {
                        result = sub_8024F25C(k);
                        if (++v18 >= v16 + v14)
                            break;
                    }
                }
                v20 = v34 - (v31 >> 1);
                if (v29 < v28) {
                    for (l = v34 - (v31 >> 1);; l = v20) {
                        result = sub_8024F25C(l);
                        if (++v20 >= v28)
                            break;
                    }
                }
                v22 = v34 - v16;
                if (v34 - v16 < v17) {
                    for (m = v34 - v16;; m = v22) {
                        result = sub_8024F25C(m);
                        if (++v22 >= v17)
                            break;
                    }
                }
                v24 = v34 - (v31 >> 1);
                if (v29 < v28) {
                    for (n = v34 - (v31 >> 1);; n = v24) {
                        result = sub_8024F25C(n);
                        if (++v24 >= v28)
                            break;
                    }
                }
            }
            v26 = v31;
            v27 = v30 + v32;
            v30 = v27;
            ++v32;
            if (v27 >= 0) {
                --v31;
                v30 = v27 - v26;
            }
            if (v31 < v32)
                break;
        }
    }
    return result;
}
// 8028DB58: using guessed type char byte_8028DB58;
// 8028DB94: using guessed type int dword_8028DB94;
