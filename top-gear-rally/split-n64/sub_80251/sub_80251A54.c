#include "../../types-n64.h"
//----- (80251A54) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
__int16 *__fastcall sub_80251A54(__int16 *a1, __int16 *a2, __int16 *a3, __int16 *a4) {
    int v4;          // $s3
    __int16 *v5;     // $t0
    __int16 *v6;     // $t1
    __int16 *v7;     // $t2
    __int16 *v8;     // $t3
    int v9;          // $s5
    int v10;         // $s4
    __int16 *result; // $v0
    int v12;         // $t4
    int v13;         // $v1
    int v14;         // $a3
    __int16 *v15;    // $s1
    __int16 *v16;    // $s1
    __int16 *v17;    // $s2
    int v18;         // $s0
    int v19;         // $s3
    int v20;         // $t6
    __int16 *v21;    // $s2
    int v22;         // $s0
    int v23;         // $s3
    int v24;         // $t8
    __int16 *v25;    // [sp+3Ch] [-3Ch]
    __int16 *v26;    // [sp+3Ch] [-3Ch]
    int v27;         // [sp+48h] [-30h]
    int v28;         // [sp+4Ch] [-2Ch]

    v4 = 0;
    v5 = a1;
    v6 = a2;
    v7 = a3;
    v8 = a4;
    if ((char *)a3 - (char *)a1 <= 0)
        v9 = (char *)a1 - (char *)a3;
    else
        v9 = (char *)a3 - (char *)a1;
    v10 = (char *)a2 - (char *)a4;
    if ((char *)a4 - (char *)a2 > 0)
        v10 = (char *)a4 - (char *)a2;
    result = &word_8028DBB0;
    word_8028DBB0 = 1;
    if (v9 >= v10 && (int)a3 < (int)a1) {
    LABEL_11:
        v5 = a3;
        v7 = a1;
        v6 = a4;
        v8 = a2;
        goto LABEL_12;
    }
    if (v9 < v10) {
        if ((int)a4 >= (int)a2) {
            v12 = (char *)a4 - (char *)a2;
            goto LABEL_13;
        }
        goto LABEL_11;
    }
LABEL_12:
    v12 = (char *)v8 - (char *)v6;
LABEL_13:
    if (v12 >= 0)
        v13 = 1;
    else
        v13 = -1;
    if ((char *)v7 - (char *)v5 >= 0)
        v14 = 1;
    else
        v14 = -1;
    v15 = v5;
    if (v9 < v10) {
        v21 = v6;
        v22 = 0;
        if ((int)v8 >= (int)v6) {
            result = (__int16 *)((char *)v8 + 1);
            do {
                v23 = v4 + 1;
                if (v22 >= v10) {
                    v22 -= v10;
                    v15 = (__int16 *)((char *)v15 + v14);
                }
                v24 = v23 & 7;
                if (v23 < 0 && (v23 & 7) != 0)
                    v24 -= 8;
                v4 = v24;
                if (((unsigned __int8)v21 & 1) != 0) {
                    v26 = result;
                    v28 = v14;
                    sub_80246A80();
                    result = v26;
                    v14 = v28;
                }
                v21 = (__int16 *)((char *)v21 + 1);
                v22 += v9;
            } while (result != v21);
        }
    } else {
        v16 = v5;
        v17 = v6;
        v18 = 0;
        if ((int)v7 >= (int)v5) {
            result = (__int16 *)((char *)v7 + 1);
            do {
                v19 = v4 + 1;
                if (v18 >= v9) {
                    v18 -= v9;
                    v17 = (__int16 *)((char *)v17 + v13);
                }
                v20 = v19 & 7;
                if (v19 < 0 && (v19 & 7) != 0)
                    v20 -= 8;
                v4 = v20;
                if (((unsigned __int8)v16 & 1) != 0) {
                    v25 = result;
                    v27 = v13;
                    sub_80246A80();
                    result = v25;
                    v13 = v27;
                }
                v16 = (__int16 *)((char *)v16 + 1);
                v18 += v10;
            } while (result != v16);
        }
    }
    return result;
}
// 80251AE4: write access to const memory at 8028DBB0 has been detected
// 8028DBB0: using guessed type __int16 word_8028DBB0;
