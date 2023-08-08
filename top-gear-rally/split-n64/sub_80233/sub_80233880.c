#include "types-n64.h"
//----- (80233880) --------------------------------------------------------
int __fastcall sub_80233880(int a1, float *a2, __int16 a3) {
    float v6;          // $f0
    int v7;            // $s0
    int v8;            // $s1
    int v9;            // $s2
    int v10;           // $s3
    __int16 v11;       // $t8
    int v12;           // $s6
    float v13;         // $f10
    int v14;           // $v0
    int result;        // $v0
    int v16;           // $v1
    int v17;           // $a0
    __int16 v18;       // $t6
    int v19;           // $s4
    int v20;           // $t3
    __int16 v21;       // $t1
    float v22;         // $f0
    float v23;         // $f12
    int v24;           // $t4
    float v25;         // $f0
    float v26;         // $f0
    int v27;           // $t2
    int i;             // $s5
    unsigned int *v29; // $t5
    unsigned int j;    // $a0
    int v31;           // $a3
    __int16 v32;       // $a2
    int v33;           // $t8
    char v34;          // $v1
    __int16 v35;       // $t9
    int v36;           // $t7
    char v37;          // $a0
    int v38;           // $t6
    char v39;          // $v1

    sub_8022576C(*a2, a2[1]);
    v7 = 0x3FFF;
    v8 = 255;
    v9 = 0x3FFF;
    v10 = -16383;
    v11 = a3;
    v12 = 0;
    v13 = (float)(v6 * 180.0) / 3.1415927;
    v14 = (int)v13;
    if ((int)v13 >= 20 && (int)v13 < 340) {
        v7 = 0x3FFF;
        if (v14 >= 50) {
            v7 = 0x3FFF;
            if (v14 >= 130) {
                v7 = -128;
                if (v14 >= 160) {
                    v7 = -255;
                    if (v14 >= 200) {
                        v7 = -128;
                        if (v14 >= 230) {
                            v7 = 0x3FFF;
                            if (v14 >= 310) {
                                v8 = 128;
                                v9 = -64;
                                v10 = -16383;
                                result = 7;
                            } else {
                                v7 = 0x3FFF;
                                v8 = -16383;
                                v9 = -64;
                                v10 = -16383;
                                result = 6;
                            }
                        } else {
                            v8 = -16383;
                            v9 = -64;
                            v10 = -16383;
                            result = 5;
                        }
                    } else {
                        v8 = -16383;
                        v9 = 0x3FFF;
                        v10 = -16383;
                        result = 4;
                    }
                } else {
                    v8 = -16383;
                    v9 = 0x3FFF;
                    v10 = 64;
                    result = 3;
                }
            } else {
                v8 = -16383;
                v9 = 0x3FFF;
                v10 = 64;
                result = 2;
            }
        } else {
            v8 = 128;
            v9 = 0x3FFF;
            v10 = 64;
            result = 1;
        }
    } else {
        result = 0;
    }
    v16 = a1 + 2 * result;
    v17 = *(__int16 *)(v16 + 8316);
    v18 = 4 * a3;
    v19 = (__int16)(4 * a3);
    if (v17 < 256) {
        *(_WORD *)(v16 + 8316) = v17 + v18;
        *(_WORD *)(a1 + 8332) = ((*(_WORD *)(a1 + 8332) + 5) & 7) - 4;
        v20 = v19 >> 2;
        v21 = *(_WORD *)(a1 + 8332) + (*(__int16 *)(a1 + 8332) < 0);
        v22 = a2[1];
        if (v22 > 1.0) {
            v23 = 0.0;
            v24 = (__int16)v19;
        } else {
            v23 = 0.0;
            if (v22 <= 0.0) {
                v24 = -((__int16)(4 * v11) >> 1);
                if (v22 < -1.0)
                    v24 = -(__int16)v19;
            } else {
                v24 = (__int16)(4 * v11) >> 1;
            }
        }
        v25 = a2[2];
        if (v25 <= 1.0) {
            if (v23 >= v25) {
                v20 = -(__int16)(v19 >> 3);
                if (v25 < -1.0)
                    v20 = -(__int16)(v19 >> 2);
            } else {
                v20 = (__int16)(v19 >> 3);
            }
        } else {
            v20 = (__int16)v20;
        }
        v26 = *a2;
        if (*a2 <= 1.25) {
            if (v23 >= v26) {
                result = -v19;
                v27 = -(__int16)v19;
                if (v26 < -1.25) {
                    v27 = (__int16)result;
                    v20 = (__int16)(2 * v20);
                }
            } else {
                v27 = (__int16)(v19 >> 1);
            }
        } else {
            v27 = (__int16)v19;
        }
        for (i = 0;; i = 0) {
            do {
                if (i == 9) {
                    i = 10;
                } else {
                    v29 = *(unsigned int **)(*(_DWORD *)(a1 + 8312) + 40 * v12 + 4 * i + 24);
                    if (v29) {
                    LABEL_41:
                        while (1) {
                            for (j = *v29; HIBYTE(j) == 4; j = *v29) {
                                result = v29[1];
                                v29 += 2;
                                v31 = ((unsigned __int16)j >> 10) - 1;
                                if (!((unsigned __int16)j >> 10))
                                    goto LABEL_41;
                                do {
                                    v32 = *(_WORD *)result;
                                    v33 = (__int16)(*(_WORD *)result + v21);
                                    v34 = *(_WORD *)result + v21;
                                    if (v8 < v33 && v33 < v7) {
                                        v35 = *(_WORD *)(result + 2);
                                        v36 = (__int16)(v35 + v21);
                                        v37 = v35 + v21;
                                        if (v10 < v36 && v36 < v9) {
                                            v38 = (__int16)(*(_WORD *)(result + 4) + v21);
                                            if (v38 >= -47 && v38 < 224) {
                                                if ((((_BYTE)v35 + (_BYTE)v21) & 0x80) != 0)
                                                    *(_WORD *)result =
                                                        v32 + ((v27 * (4 - (v37 & 0xF))) >> 5);
                                                else
                                                    *(_WORD *)result =
                                                        v32 + ((v27 * ((v37 & 0xF) - 12)) >> 5);
                                                if ((v34 & 0x80) != 0)
                                                    *(_WORD *)(result + 2) +=
                                                        (v24 * (4 - (v34 & 0xF))) >> 5;
                                                else
                                                    *(_WORD *)(result + 2) +=
                                                        (v24 * ((v34 & 0xF) - 12)) >> 5;
                                                v39 = v34 + v37;
                                                if ((v39 & 0x80) != 0)
                                                    *(_WORD *)(result + 4) +=
                                                        (v20 * (8 - (v39 & 0xF))) >> 6;
                                                else
                                                    *(_WORD *)(result + 4) +=
                                                        (v20 * ((v39 & 0xF) - 8)) >> 6;
                                            }
                                        }
                                    }
                                    result += 16;
                                } while (v31-- != 0);
                            }
                            if (HIBYTE(j) == 184)
                                break;
                            v29 += 2;
                        }
                        ++i;
                    } else {
                        ++i;
                    }
                }
            } while (i != 10);
            if (++v12 == 3)
                break;
        }
    }
    return result;
}
// 802338E0: variable 'v6' is possibly undefined
