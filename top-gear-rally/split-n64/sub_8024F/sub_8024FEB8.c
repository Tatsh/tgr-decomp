#include "../../types-n64.h"
//----- (8024FEB8) --------------------------------------------------------
int __fastcall sub_8024FEB8(int a1, int a2, int a3, int a4) {
    int v4;     // $t6
    BOOL v5;    // $at
    int v6;     // $s0
    int v7;     // $a0
    int v8;     // $a3
    int v9;     // $fp
    int result; // $v0
    int v11;    // $a1
    int v12;    // $s2
    int v13;    // $s5
    int v14;    // $s1
    int v15;    // $s3
    BOOL i;     // $at
    int v17;    // $s0
    int j;      // $a0
    int v19;    // $s1
    BOOL k;     // $at
    int v21;    // $s0
    int l;      // $a0
    int v23;    // $s2
    int v24;    // $t5
    BOOL m;     // $at
    int v26;    // $s0
    int n;      // $a0
    int v28;    // $s2
    int v29;    // $s5
    int v30;    // $s6
    int v31;    // $s3
    BOOL ii;    // $at
    int v33;    // $s0
    int jj;     // $a0
    int v35;    // $fp
    int v36;    // $s5
    int v37;    // $s6
    int kk;     // $t4
    int v39;    // $t2
    int v40;    // $s0
    int ll;     // $a0
    int v42;    // $s0
    int mm;     // $a0
    int v44;    // $s0
    int nn;     // $a0
    int v46;    // $s0
    int i1;     // $a0
    int v48;    // $s0
    int i2;     // $a0
    int v50;    // $s0
    int i3;     // $a0
    int v52;    // $s0
    int i4;     // $a0
    int v54;    // $s0
    int i5;     // $a0
    int v56;    // $t5
    int v58;    // [sp+44h] [-4Ch]
    int v59;    // [sp+48h] [-48h]
    int v60;    // [sp+5Ch] [-34h]
    int v61;    // [sp+68h] [-28h]
    int v62;    // [sp+90h] [+0h]
    int v63;    // [sp+94h] [+4h]
    int v64;    // [sp+9Ch] [+Ch]

    v4 = a1 >> 2;
    v5 = a3 >> 2 < a1 >> 2;
    v6 = -a2 >> 2;
    v7 = a1 >> 2;
    v8 = -a4 >> 2;
    v9 = a3 >> 2;
    if (v5) {
        v7 = a3 >> 2;
        v9 = v4;
    }
    if (v8 < v6) {
        v6 = v8;
        v8 = -a2 >> 2;
    }
    result = v9 - v7;
    if (v9 - v7 >= v8 - v6)
        v11 = v8 - v6;
    else
        v11 = v9 - v7;
    v60 = (v11 >> 2) + 1;
    v62 = v7;
    v64 = v8;
    v12 = v6 + v60;
    v58 = v8 - v60;
    v59 = v6 + v60;
    v63 = v6;
    if (v8 - v60 >= v6 + v60) {
        v13 = v7 - 2;
        v14 = v7 + 2;
        v62 = v7;
        v64 = v8;
        v63 = v6;
        v15 = v8 - v60;
        for (i = v7 - 2 < v7 + 2;; i = v13 < v14) {
            v17 = v13;
            if (i) {
                for (j = v13;; j = v17) {
                    result = sub_8024F25C(j);
                    if (++v17 == v14)
                        break;
                }
            }
            if (v15 < ++v12)
                break;
        }
        v12 = v59;
    }
    if (v58 >= v59) {
        v19 = v9 + 2;
        for (k = v9 - 2 < v9 + 2;; k = v9 - 2 < v19) {
            v21 = v9 - 2;
            if (k) {
                for (l = v9 - 2;; l = v21) {
                    result = sub_8024F25C(l);
                    if (++v21 == v19)
                        break;
                }
            }
            if (v64 - v60 < ++v12)
                break;
        }
    }
    v23 = v64 - 2;
    if (v64 - 2 < v64 + 2) {
        for (m = v9 - v60 < v62 + v60;; m = v9 - v60 < v62 + v60) {
            v26 = v62 + v60;
            if (!m) {
                for (n = v62 + v60;; n = v26) {
                    result = sub_8024F25C(n);
                    if (v9 - v60 < ++v26)
                        break;
                }
            }
            if (++v23 == v64 + 2)
                break;
        }
        v24 = v63;
    } else {
        v24 = v63;
    }
    v28 = v24 - 2;
    v29 = v24 + 2;
    v30 = v9 - v60;
    v31 = v62 + v60;
    if (v24 - 2 < v24 + 2) {
        for (ii = v30 < v31;; ii = v30 < v31) {
            v33 = v62 + v60;
            if (!ii) {
                for (jj = v62 + v60;; jj = v33) {
                    result = sub_8024F25C(jj);
                    if (v9 - v60 < ++v33)
                        break;
                }
            }
            if (++v28 == v29)
                break;
        }
    }
    v35 = v9 - v60;
    v36 = 0;
    v37 = 2 * (v60 + 1);
    v61 = -2 * (v60 + 1);
    if (((v60 + 1) & 0x40000000) == 0) {
        for (kk = 0;; kk = v36 & 1) {
            if (kk) {
                v39 = v61;
            } else {
                v40 = 0;
                for (ll = v31 - (v36 >> 1);; ll = v31 - (v36 >> 1)) {
                    sub_8024F25C(ll);
                    if (++v40 == 4)
                        break;
                }
                v42 = 0;
                for (mm = v31 - (v36 >> 1);; mm = v31 - (v36 >> 1)) {
                    sub_8024F25C(mm);
                    if (++v42 == 4)
                        break;
                }
                v44 = 0;
                for (nn = (v36 >> 1) + v35;; nn = (v36 >> 1) + v35) {
                    sub_8024F25C(nn);
                    if (++v44 == 4)
                        break;
                }
                v46 = 0;
                for (i1 = (v36 >> 1) + v35;; i1 = (v36 >> 1) + v35) {
                    sub_8024F25C(i1);
                    if (++v46 == 4)
                        break;
                }
                v48 = 0;
                for (i2 = (v37 >> 1) + v35;; i2 = (v37 >> 1) + v35 - v48) {
                    sub_8024F25C(i2);
                    if (++v48 == 4)
                        break;
                }
                v50 = 0;
                for (i3 = (v37 >> 1) + v35;; i3 = (v37 >> 1) + v35 - v50) {
                    sub_8024F25C(i3);
                    if (++v50 == 4)
                        break;
                }
                v52 = 0;
                for (i4 = v31 - (v37 >> 1);; i4 = v31 - (v37 >> 1) + v52) {
                    sub_8024F25C(i4);
                    if (++v52 == 4)
                        break;
                }
                v54 = 0;
                for (i5 = v31 - (v37 >> 1);; i5 = v31 - (v37 >> 1) + v54) {
                    result = sub_8024F25C(i5);
                    if (++v54 == 4)
                        break;
                }
                v39 = v61;
            }
            v56 = v39 + v36;
            v61 = v39 + v36;
            if (v39 + v36++ >= 0)
                v61 = v56 - v37--;
            if (v37 < v36)
                break;
        }
    }
    return result;
}
// 8028DAC0: using guessed type char byte_8028DAC0;
// 8028DB58: using guessed type char byte_8028DB58;
// 8028DB94: using guessed type int dword_8028DB94;
