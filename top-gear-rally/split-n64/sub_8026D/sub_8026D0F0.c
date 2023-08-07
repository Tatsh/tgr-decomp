#include "../../types-n64.h"
//----- (8026D0F0) --------------------------------------------------------
int sub_8026D0F0() {
    unsigned __int8 v0; // $s4
    int v1;             // $s3
    int v2;             // $s2
    const char *v3;     // $s1
    _DWORD *v4;         // $s0
    int v5;             // $v1
    int v6;             // $s2
    int v7;             // $v0
    int v8;             // $t8
    int v9;             // $v1
    int v10;            // $v0
    BOOL v11;           // $at
    int v12;            // $t8
    int v13;            // $t7
    int v14;            // $t9
    int result;         // $v0
    int v16;            // $v0
    int v17;            // $s3
    BOOL v18;           // $at
    int v19;            // $t8
    int v20;            // $t8
    int v21;            // $v0
    int v22;            // $t7
    char v23;           // $t9
    const char *v24;    // $s1
    int v25;            // $v0
    int v26;            // $t6
    int v27;            // $s3
    int v28;            // $t8
    int v29;            // $t7
    _BYTE *v30;         // $s1
    _BYTE *v31;         // $s1
    int v32;            // $lo
    int v33;            // $lo
    int v34;            // $v1
    int v35;            // $t6
    int v36;            // $t8

    v2 = (__int16)v2;
    v1 = (__int16)v1;
    if ((__int16)v1 <= 0) {
        v3 = (const char *)dword_802ABB50;
        v1 = 1;
    }
    v5 = v0;
    if (v0 == 102 || (v0 == 103 || v0 == 71) && (__int16)v2 >= -4 && (__int16)v2 < v4[9]) {
        v6 = (__int16)(v2 + 1);
        if (v0 == 102) {
        LABEL_16:
            if (v6 > 0) {
                if (v1 >= v6) {
                    sub_80260B20((char *)(v4[2] + v4[5]), v3, v6);
                    v16 = v4[9];
                    v4[5] += v6;
                    v17 = (__int16)(v1 - v6);
                    if (v16 > 0 || (v4[12] & 8) != 0) {
                        *(_BYTE *)(v4[2] + v4[5]) = 46;
                        v16 = v4[9];
                        ++v4[5];
                        v18 = v16 < v17;
                    } else {
                        v18 = v16 < v17;
                    }
                    if (v18)
                        v17 = (__int16)v16;
                    result = (int)sub_80260B20((char *)(v4[2] + v4[5]), &v3[v6], v17);
                    v19 = v4[9] - v17;
                    v4[5] += v17;
                    v4[6] = v19;
                } else {
                    sub_80260B20((char *)(v4[2] + v4[5]), v3, v1);
                    result = v4[9];
                    v4[5] += v1;
                    v4[6] = v6 - v1;
                    if (result > 0 || (v4[12] & 8) != 0) {
                        *(_BYTE *)(v4[2] + v4[5]) = 46;
                        result = v4[9];
                        ++v4[7];
                    }
                    v4[8] = result;
                }
            } else {
                v9 = -v6;
                *(_BYTE *)(v4[2] + v4[5]) = 48;
                v10 = v4[9];
                ++v4[5];
                if (v10 > 0 || (v4[12] & 8) != 0) {
                    *(_BYTE *)(v4[2] + v4[5]) = 46;
                    v10 = v4[9];
                    ++v4[5];
                    v11 = v10 < v9;
                } else {
                    v11 = v10 < v9;
                }
                if (v11) {
                    v9 = (__int16)v10;
                    v12 = v10 - (__int16)v10;
                } else {
                    v12 = v10 + v6;
                }
                v4[6] = v9;
                v4[9] = v12;
                if (v12 < v1)
                    v1 = (__int16)v12;
                v13 = v4[2];
                v14 = v4[5];
                v4[7] = v1;
                result = (int)sub_80260B20((char *)(v13 + v14), v3, v1);
                v4[8] = v4[9] - v1;
            }
            goto LABEL_67;
        }
        v7 = v4[9];
        if ((v4[12] & 8) == 0) {
            if (v1 >= v7) {
                v8 = v7 - v6;
                goto LABEL_14;
            }
            v4[9] = v1;
            v7 = v1;
        }
        v8 = v7 - v6;
    LABEL_14:
        v4[9] = v8;
        if (v8 < 0)
            v4[9] = 0;
        goto LABEL_16;
    }
    if (v0 == 103 || v0 == 71) {
        v21 = v4[9];
        v0 = 69;
        if (v1 < v21) {
            v4[9] = v1;
            v22 = v1 - 1;
        } else {
            v22 = v21 - 1;
        }
        v4[9] = v22;
        if (v22 < 0)
            v4[9] = 0;
        if (v5 == 103)
            v0 = 101;
        v20 = v4[2];
    } else {
        v20 = v4[2];
    }
    v23 = *v3;
    v24 = v3 + 1;
    *(_BYTE *)(v20 + v4[5]) = v23;
    v25 = v4[9];
    ++v4[5];
    if (v25 > 0 || (v4[12] & 8) != 0) {
        *(_BYTE *)(v4[2] + v4[5]) = 46;
        v25 = v4[9];
        ++v4[5];
    }
    if (v25 > 0) {
        v27 = (__int16)(v1 - 1);
        if (v25 < v27)
            v27 = (__int16)v25;
        sub_80260B20((char *)(v4[2] + v4[5]), v24, v27);
        v28 = v4[9] - v27;
        v4[5] += v27;
        v4[6] = v28;
        v26 = v4[2];
    } else {
        v26 = v4[2];
    }
    v29 = v4[5];
    v30 = (_BYTE *)(v26 + v29 + 1);
    *(_BYTE *)(v26 + v29) = v0;
    if ((v2 & 0x8000u) != 0) {
        *v30 = 45;
        v31 = (_BYTE *)(v26 + v29 + 2);
        v2 = -(__int16)v2;
    } else {
        *v30 = 43;
        v31 = (_BYTE *)(v26 + v29 + 2);
    }
    if (v2 >= 100) {
        if (v2 >= 1000) {
            v32 = v2 / 1000;
            v2 %= 1000;
            *v31++ = v32 + 48;
        }
        v33 = v2 / 100;
        v2 %= 100;
        *v31++ = v33 + 48;
        result = 10;
    } else {
        result = 10;
    }
    *v31 = v2 / 10 + 48;
    v31[1] = v2 % 10 + 48;
    v4[7] = &v31[-v4[2] + 2 - v4[5]];
LABEL_67:
    if ((v4[12] & 0x14) == 16) {
        v34 = v4[10];
        v35 = v4[8];
        v36 = v4[3] + v4[5] + v4[6] + v4[7];
        result = v36 + v35;
        if (v36 + v35 < v34)
            v4[4] = v34 - (v36 + v35);
    }
    return result;
}
// 8026D0FC: variable 'v2' is possibly undefined
// 8026D108: variable 'v1' is possibly undefined
// 8026D134: variable 'v0' is possibly undefined
// 8026D154: variable 'v4' is possibly undefined
// 8026D260: variable 'v3' is possibly undefined
// 802ABB50: using guessed type int dword_802ABB50[2];
