#include "../../types-n64.h"
//----- (8021D84C) --------------------------------------------------------
int __fastcall sub_8021D84C(int a1) {
    int result;   // $v0
    int v2;       // $t5
    int v3;       // $t3
    int v4;       // $t2
    int v5;       // $t1
    float v6;     // $f2
    float i;      // $f0
    int v8;       // $a3
    int v9;       // $t0
    int v10;      // $v0
    int v11;      // $t6
    float *v12;   // $s1
    float *v13;   // $s0
    int v14;      // $a3
    float v15;    // $f0
    int v16;      // $t0
    __int16 *v17; // $v1
    __int16 *v18; // $a0
    int v19;      // $t7
    int v20;      // $a1
    int v21;      // $a2
    int v22;      // $t1
    int v23;      // $s0
    int v24;      // $lo
    float v25;    // $f2
    float v26;    // $f12
    __int16 v27;  // $v0
    float v28;    // $f16
    float v29;    // $f14
    float v30;    // $f14
    float v31;    // $f2
    float v32;    // $f2
    bool v33;     // $fcc0
    float j;      // $f0

    result = *(_DWORD *)(a1 + 4);
    if (result) {
        v2 = *(_DWORD *)result;
        v3 = 0;
        v4 = 0;
        if (*(int *)result > 0) {
            do {
                ++v3;
                v5 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + v4 + 4);
                if ((*(_WORD *)(v5 + 16) & 4) != 0) {
                    v6 = *(float *)(v5 + 20);
                    *(float *)(v5 + 28) = *(float *)(v5 + 28) - 0.0;
                    i = *(float *)(v5 + 28);
                    if (v6 <= i) {
                        if (i < *(float *)(v5 + 24))
                            goto LABEL_7;
                    } else {
                        result = *(unsigned __int16 *)(v5 + 16);
                        if ((result & 1) != 0) {
                            *(_WORD *)(v5 + 16) = result & 0xFFFB;
                            *(_WORD *)(v5 + 18) = 0;
                            i = (float)(v6 * 2.0) - i;
                            *(float *)(v5 + 28) = i;
                            goto LABEL_7;
                        }
                    }
                } else {
                    v25 = *(float *)(v5 + 20);
                    v14 = 0;
                    *(float *)(v5 + 28) = *(float *)(v5 + 28) + 0.0;
                    i = *(float *)(v5 + 28);
                    if (i < v25) {
                        v12 = *(float **)(v5 + 32);
                        v15 = 0.0;
                        v13 = v12;
                        goto LABEL_14;
                    }
                    v26 = *(float *)(v5 + 24);
                    if (i >= v26) {
                        v27 = *(_WORD *)(v5 + 16);
                        if ((v27 & 1) == 0) {
                            v15 = 0.0;
                            v14 = 0;
                            v12 = *(float **)(v5 + 4 * *(_DWORD *)(v5 + 12) + 28);
                            v13 = v12;
                        LABEL_14:
                            v16 = *(_DWORD *)v5;
                            v17 = (__int16 *)(v12 + 1);
                            v18 = (__int16 *)(v13 + 1);
                            v19 = 6 * *(_DWORD *)v5;
                            v20 = (int)v12 + v19 + 4;
                            result = (int)(float)(v15 * 4096.0);
                            v21 = (int)v13 + v19 + 4;
                            if (*(int *)v5 > 0) {
                                v22 = *(_DWORD *)(v5 + 4);
                                do {
                                    v23 = *v17;
                                    ++v14;
                                    v22 += 16;
                                    v24 = (*v18 - v23) * result;
                                    v17 += 3;
                                    v18 += 3;
                                    v20 += 3;
                                    v21 += 3;
                                    *(_WORD *)(v22 - 16) = v23 + (v24 >> 12);
                                    *(_WORD *)(v22 - 14) =
                                        *(v17 - 2) + (((*(v18 - 2) - *(v17 - 2)) * result) >> 12);
                                    *(_WORD *)(v22 - 12) =
                                        *(v17 - 1) + (((*(v18 - 1) - *(v17 - 1)) * result) >> 12);
                                    *(_BYTE *)(v22 - 4) =
                                        *(_BYTE *)(v20 - 3) +
                                        (((*(char *)(v21 - 3) - *(char *)(v20 - 3)) * result) >>
                                         12);
                                    *(_BYTE *)(v22 - 3) =
                                        *(_BYTE *)(v20 - 2) +
                                        (((*(char *)(v21 - 2) - *(char *)(v20 - 2)) * result) >>
                                         12);
                                    *(_BYTE *)(v22 - 2) =
                                        *(_BYTE *)(v20 - 1) +
                                        (((*(char *)(v21 - 1) - *(char *)(v20 - 1)) * result) >>
                                         12);
                                } while (v14 != v16);
                            }
                            goto LABEL_46;
                        }
                        v28 = v26 - v25;
                        v29 = v26 - v25;
                        if ((v27 & 2) != 0) {
                            v30 = v28 * 2.0;
                            v31 = v26 + (float)(v28 * 2.0);
                            if (v31 < i) {
                                for (i = i - v30; v31 < i; i = i - v30)
                                    ;
                            }
                            v29 = v30 * 0.5;
                            v32 = v31 - v29;
                            if (v32 < i) {
                                v33 = v32 < i;
                                goto LABEL_38;
                            }
                            *(_WORD *)(v5 + 16) = v27 | 4;
                            i = (float)(v26 * 2.0) - i;
                            *(float *)(v5 + 28) = i;
                        } else {
                            v32 = v26 + v29;
                            v33 = (float)(v26 + v29) < i;
                        LABEL_38:
                            if (v33) {
                                for (j = i - v29; v32 < j; j = j - v29)
                                    ;
                                i = j - v28;
                            } else {
                                i = i - v28;
                            }
                            *(float *)(v5 + 28) = i;
                        }
                        *(_WORD *)(v5 + 18) = 0;
                    LABEL_7:
                        v8 = *(unsigned __int16 *)(v5 + 18);
                    LABEL_8:
                        v9 = *(_DWORD *)(v5 + 12);
                        v10 = v5 + 4 * v8;
                        if (v8 >= v9) {
                        LABEL_12:
                            v11 = 4 * v8;
                        } else {
                            while (i >= **(float **)(v10 + 32)) {
                                ++v8;
                                v10 += 4;
                                if (v8 >= v9)
                                    goto LABEL_12;
                            }
                            v11 = 4 * v8;
                        }
                        v12 = *(float **)(v5 + 4 * (v8 - 1) + 32);
                        v13 = *(float **)(v5 + v11 + 32);
                        v14 = 0;
                        v15 = (float)(i - *v12) / (float)(*v13 - *v12);
                        goto LABEL_14;
                    }
                    if (v25 <= i) {
                        v8 = *(unsigned __int16 *)(v5 + 18);
                        goto LABEL_8;
                    }
                }
            LABEL_46:
                v4 += 4;
            } while (v3 != v2);
        }
    }
    return result;
}
// 8028AAD8: using guessed type float flt_8028AAD8;
