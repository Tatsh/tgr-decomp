#include "types-n64.h"
//----- (8026CE50) --------------------------------------------------------
int __fastcall sub_8026CE50(_DWORD *a1, char a2) {
    const char *v3; // $s3
    int v4;         // $s0
    int v5;         // $t1
    int v6;         // $t0
    int v7;         // $t9
    int v8;         // $t2
    int v9;         // $t6
    BOOL v10;       // $at
    __int64 v11;    // $a1
    int v12;        // $v1
    int v13;        // $a1
    __int64 v14;    // $v1
    int v15;        // $t1
    int i;          // $t6
    int v17;        // $t9
    char *v18;      // $t7
    int result;     // $v0
    int v20;        // $a1
    int v21;        // $a0
    int v22;        // $t8
    int v23;        // $t9
    __int64 v24;    // [sp+38h] [-58h]
    __int64 v25;    // [sp+40h] [-50h]
    int v26[4];     // [sp+50h] [-40h] BYREF
    __int64 v27;    // [sp+60h] [-30h]
    int v28;        // [sp+70h] [-20h]
    char v29[24];   // [sp+78h] [-18h] BYREF

    if (a2 == 88)
        v3 = MEMORY[0x802A63F4];
    else
        v3 = MEMORY[0x802A63E0];
    v4 = 24;
    if (a2 == 111) {
        v5 = 8;
    } else {
        v6 = 16;
        if (a2 != 120 && a2 != 88)
            v6 = 10;
        v5 = v6;
    }
    v7 = a1[1];
    HIDWORD(v27) = *a1;
    LODWORD(v27) = v7;
    if (a2 == 100 || a2 == 105) {
        if (SHIDWORD(v27) <= 0) {
            v9 = HIDWORD(v27);
            if (v27 < 0) {
                v10 = v27 == 0;
                LODWORD(v27) = -(int)v27;
                HIDWORD(v27) = ~HIDWORD(v27) + v10;
                v8 = ~v9 + v10;
            } else {
                v8 = HIDWORD(v27);
            }
        } else {
            v8 = HIDWORD(v27);
        }
    } else {
        v8 = HIDWORD(v27);
    }
    HIDWORD(v11) = HIDWORD(v27);
    if (v8) {
    LABEL_22:
        v4 = 23;
        goto LABEL_23;
    }
    if (!(_DWORD)v27) {
        if (!a1[9])
            goto LABEL_24;
        goto LABEL_22;
    }
    v4 = 23;
LABEL_23:
    LODWORD(v11) = v27;
    v28 = v5;
    sub_8026604C(v11, v5);
    v5 = v28;
    v29[23] = v3[v12];
LABEL_24:
    v28 = v5;
    HIDWORD(v14) = sub_80266088(v27, v5);
    v15 = v28;
    *(_QWORD *)a1 = v14;
    if (v14 > 0) {
        v24 = v15;
        v25 = *(_QWORD *)a1;
        for (i = v15 >> 31;; i = HIDWORD(v24)) {
            sub_8026E870((int)v26, v13, v25, __SPAIR64__(i, v24));
            v17 = v26[1];
            *a1 = v26[0];
            a1[1] = v17;
            v18 = &v29[--v4];
            *v18 = v3[v26[3]];
            v25 = *(_QWORD *)a1;
            if (*(__int64 *)a1 <= 0 || v4 <= 0)
                break;
        }
    }
    a1[5] = 24 - v4;
    result = sub_80260B20(a1[2], &v29[v4], 24 - v4);
    v20 = a1[5];
    v21 = a1[9];
    if (v20 < v21)
        a1[4] = v21 - v20;
    if (v21 < 0 && (a1[12] & 0x14) == 16) {
        v22 = a1[10];
        v23 = a1[3];
        result = a1[4];
        if (v22 - v23 - result - v20 > 0)
            a1[4] = v22 - v23 - v20;
    }
    return result;
}
// 8026CFC4: conditional instruction was optimized away because of '$s0.4 in (17..18)'
// 8026CF70: variable 'v12' is possibly undefined
// 8026CFA8: variable 'v14' is possibly undefined
// 8026CFFC: variable 'v13' is possibly undefined
