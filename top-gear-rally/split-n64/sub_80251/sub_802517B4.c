#include "types-n64.h"
//----- (802517B4) --------------------------------------------------------
int __fastcall sub_802517B4(int a1, int a2, int a3) {
    int v3;     // $a2
    int v4;     // $s6
    int v5;     // $s7
    int v6;     // $s5
    int i;      // $t6
    int v8;     // $t3
    int v9;     // $s0
    int j;      // $a0
    int v11;    // $s0
    int k;      // $a0
    int v13;    // $s0
    int l;      // $a0
    int v15;    // $s0
    int m;      // $a0
    int v17;    // $s0
    int n;      // $a0
    int v19;    // $s0
    int ii;     // $a0
    int v21;    // $s0
    int jj;     // $a0
    int v23;    // $s0
    int kk;     // $a0
    int result; // $v0
    int v26;    // $t4
    int v28;    // [sp+44h] [-1Ch]

    v3 = a3 + 2;
    v4 = 2 * v3;
    v5 = a1 >> 2;
    v6 = 0;
    v28 = -2 * v3;
    if ((v3 & 0x40000000) == 0) {
        for (i = 0;; i = v6 & 1) {
            if (i) {
                v8 = v28;
            } else {
                v9 = 0;
                for (j = (v6 >> 1) + v5;; j = (v6 >> 1) + v5) {
                    sub_8024F25C(j);
                    if (++v9 == 4)
                        break;
                }
                v11 = 0;
                for (k = (v6 >> 1) + v5;; k = (v6 >> 1) + v5) {
                    sub_8024F25C(k);
                    if (++v11 == 4)
                        break;
                }
                v13 = 0;
                for (l = v5 - (v6 >> 1);; l = v5 - (v6 >> 1)) {
                    sub_8024F25C(l);
                    if (++v13 == 4)
                        break;
                }
                v15 = 0;
                for (m = v5 - (v6 >> 1);; m = v5 - (v6 >> 1)) {
                    sub_8024F25C(m);
                    if (++v15 == 4)
                        break;
                }
                v17 = 0;
                for (n = (v4 >> 1) + v5;; n = (v4 >> 1) + v5 - v17) {
                    sub_8024F25C(n);
                    if (++v17 == 4)
                        break;
                }
                v19 = 0;
                for (ii = (v4 >> 1) + v5;; ii = (v4 >> 1) + v5 - v19) {
                    sub_8024F25C(ii);
                    if (++v19 == 4)
                        break;
                }
                v21 = 0;
                for (jj = v5 - (v4 >> 1);; jj = v5 - (v4 >> 1) + v21) {
                    sub_8024F25C(jj);
                    if (++v21 == 4)
                        break;
                }
                v23 = 0;
                for (kk = v5 - (v4 >> 1);; kk = v5 - (v4 >> 1) + v23) {
                    result = sub_8024F25C(kk);
                    if (++v23 == 4)
                        break;
                }
                v8 = v28;
            }
            v26 = v8 + v6;
            v28 = v8 + v6;
            if (v8 + v6++ >= 0)
                v28 = v26 - v4--;
            if (v4 < v6)
                break;
        }
    }
    return result;
}
// 8028DAC0: using guessed type char byte_8028DAC0;
// 8028DB58: using guessed type char byte_8028DB58;
// 8028DB94: using guessed type int dword_8028DB94;
