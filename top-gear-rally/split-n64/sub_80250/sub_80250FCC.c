#include "types-n64.h"
//----- (80250FCC) --------------------------------------------------------
int __fastcall sub_80250FCC(int a1, int a2, int a3, int a4) {
    int v4;     // $t1
    int v5;     // $v1
    int v6;     // $v0
    int v7;     // $s7
    int v8;     // $s6
    int v9;     // $s5
    int result; // $v0
    int v11;    // $fp
    int i;      // $t7
    int v13;    // $t3
    int v14;    // $s0
    int j;      // $a0
    int v16;    // $s0
    int k;      // $a0
    int v18;    // $s0
    int l;      // $a0
    int v20;    // $s0
    int m;      // $a0
    int v22;    // $s5
    int v23;    // $lo
    char v24;   // $s6
    int v25;    // $s7
    int v26;    // $s5
    int v27;    // $fp
    int n;      // $t3
    int v29;    // $t8
    int v30;    // $s0
    int ii;     // $a0
    int v32;    // $s0
    int jj;     // $a0
    int v34;    // $s0
    int kk;     // $a0
    int v36;    // $s0
    int ll;     // $a0
    int v38;    // $s5
    int v39;    // $lo
    int v40;    // [sp+40h] [-48h]
    int v41;    // [sp+40h] [-48h]
    int v42;    // [sp+44h] [-44h]
    int v43;    // [sp+44h] [-44h]
    int v44;    // [sp+48h] [-40h]
    int v45;    // [sp+4Ch] [-3Ch]
    int v46;    // [sp+50h] [-38h]
    int v47;    // [sp+54h] [-34h]
    int v48;    // [sp+7Ch] [-Ch]
    int v49;    // [sp+80h] [-8h]
    int v50;    // [sp+88h] [+0h]
    int v51;    // [sp+8Ch] [+4h]
    int v52;    // [sp+90h] [+8h]
    int v53;    // [sp+94h] [+Ch]

    v4 = (a3 >> 2) - (a1 >> 2);
    v51 = -a2 >> 2;
    v50 = a1 >> 2;
    v53 = -a4 >> 2;
    v52 = a3 >> 2;
    if (v4 < 0) {
        v50 = a3 >> 2;
        v52 = a1 >> 2;
        v4 = (a1 >> 2) - (a3 >> 2);
    }
    v5 = v53 - v51;
    if (v53 - v51 < 0)
        v5 = (-a2 >> 2) - (-a4 >> 2);
    v6 = v4 + 4;
    if ((v5 + 4) >> 1 < 2)
        v49 = 1;
    else
        v49 = (v5 + 4) >> 1;
    if (v6 >> 1 >= 2)
        v48 = v6 >> 1;
    else
        v48 = 1;
    v7 = 0;
    v8 = 2 * v49;
    v45 = v49 * v49;
    v47 = v49 * v49;
    v44 = v48 * v48;
    v46 = v48 * v48;
    v9 = -(v48 * v48) * 2 * v49;
    if (v48 * v48 * 2 * v49 >= 0) {
        v42 = 0;
        v11 = 0;
        v40 = v48 * v48 * 2 * v49;
        for (i = 0;; i = v7 & 1) {
            if (i) {
                v13 = v49;
            } else {
                v14 = 0;
                for (j = (v7 >> 1) + ((v50 + v52) >> 1);; j = (v7 >> 1) + ((v50 + v52) >> 1)) {
                    sub_8024F25C(j);
                    if (++v14 == 4)
                        break;
                }
                v16 = 0;
                for (k = (v7 >> 1) + ((v50 + v52) >> 1);; k = (v7 >> 1) + ((v50 + v52) >> 1)) {
                    sub_8024F25C(k);
                    if (++v16 == 4)
                        break;
                }
                v18 = 0;
                for (l = ((v50 + v52) >> 1) - (v7 >> 1);; l = ((v50 + v52) >> 1) - (v7 >> 1)) {
                    sub_8024F25C(l);
                    if (++v18 == 4)
                        break;
                }
                v20 = 0;
                for (m = ((v50 + v52) >> 1) - (v7 >> 1);; m = ((v50 + v52) >> 1) - (v7 >> 1)) {
                    sub_8024F25C(m);
                    if (++v20 == 4)
                        break;
                }
                v13 = v49;
            }
            v22 = v9 + v11;
            v42 += v47;
            ++v7;
            v11 += v13 * v13;
            v9 = v22 + v11;
            if (v9 > 0) {
                v23 = v44 * v8--;
                v40 -= v46;
                v9 = v9 - v23 - v44 * v8;
            }
            if (v40 < v42)
                break;
        }
        result = v48;
    } else {
        result = v48;
    }
    v24 = 0;
    v25 = 2 * result;
    v26 = -v45 * 2 * result;
    if (2 * result * v45 >= 0) {
        v41 = 0;
        v27 = 0;
        v43 = v47 * 2 * result;
        for (n = 0;; n = v24 & 1) {
            if (n) {
                v29 = v48;
            } else {
                v30 = 0;
                for (ii = (v25 >> 1) + ((v50 + v52) >> 1);;
                     ii = (v25 >> 1) + ((v50 + v52) >> 1) - v30) {
                    sub_8024F25C(ii);
                    if (++v30 == 4)
                        break;
                }
                v32 = 0;
                for (jj = (v25 >> 1) + ((v50 + v52) >> 1);;
                     jj = (v25 >> 1) + ((v50 + v52) >> 1) - v32) {
                    sub_8024F25C(jj);
                    if (++v32 == 4)
                        break;
                }
                v34 = 0;
                for (kk = ((v50 + v52) >> 1) - (v25 >> 1);;
                     kk = ((v50 + v52) >> 1) - (v25 >> 1) + v34) {
                    sub_8024F25C(kk);
                    if (++v34 == 4)
                        break;
                }
                v36 = 0;
                for (ll = ((v50 + v52) >> 1) - (v25 >> 1);;
                     ll = ((v50 + v52) >> 1) - (v25 >> 1) + v36) {
                    result = sub_8024F25C(ll);
                    if (++v36 == 4)
                        break;
                }
                v29 = v48;
            }
            v38 = v26 + v27;
            v41 += v46;
            ++v24;
            v27 += v29 * v29;
            v26 = v38 + v27;
            if (v26 > 0) {
                v39 = v45 * v25--;
                v43 -= v47;
                v26 = v26 - v39 - v45 * v25;
            }
            if (v43 < v41)
                break;
        }
    }
    return result;
}
// 8028DAC0: using guessed type char byte_8028DAC0;
// 8028DB58: using guessed type char byte_8028DB58;
// 8028DB94: using guessed type int dword_8028DB94;
