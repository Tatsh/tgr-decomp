#include "types-win32.h"
//----- (1000EF80) --------------------------------------------------------
__int16 __fastcall sub_1000EF80(int a1, int a2, float *a3, int a4) {
    int v5;           // ebp
    __int64 v6;       // rax
    int v7;           // esi
    __int16 v8;       // di
    int v9;           // eax
    __int16 v10;      // dx
    int v11;          // eax
    int v12;          // eax
    int v13;          // ebp
    int v14;          // edx
    int *v15;         // edi
    int v16;          // eax
    unsigned int v17; // ecx
    float *v18;       // esi
    double v19;       // st7
    __int64 v20;      // rax
    char v21;         // bl
    __int64 v22;      // rax
    __int64 v23;      // rax
    int v24;          // ecx
    int v25;          // edx
    char v26;         // bl
    double v27;       // st6
    __int16 v29;      // [esp+10h] [ebp-28h]
    __int16 v30;      // [esp+14h] [ebp-24h]
    __int16 v31;      // [esp+18h] [ebp-20h]
    __int16 v32;      // [esp+1Ch] [ebp-1Ch]
    int v33;          // [esp+20h] [ebp-18h]
    int v34;          // [esp+24h] [ebp-14h]
    int v35;          // [esp+28h] [ebp-10h]
    int v36;          // [esp+2Ch] [ebp-Ch]
    char v38;         // [esp+34h] [ebp-4h]
    __int16 v39;      // [esp+3Ch] [ebp+4h]
    __int16 v40;      // [esp+40h] [ebp+8h]

    v5 = a1;
    v6 = (__int64)(sub_1003B7B0(*a3, a3[1]) * 57.295776);
    if ((int)v6 < 20 || (int)v6 >= 340) {
        v39 = 255;
        v29 = 0x3FFF;
        v31 = 0x3FFF;
        v30 = -16383;
        v7 = 0;
    } else if ((int)v6 >= 50) {
        if ((int)v6 >= 130) {
            if ((int)v6 >= 160) {
                if ((int)v6 >= 200) {
                    if ((int)v6 >= 230) {
                        v29 = 0x3FFF;
                        if ((int)v6 >= 310) {
                            v39 = 128;
                            v31 = -64;
                            v30 = -16383;
                            v7 = 7;
                        } else {
                            v31 = -64;
                            v39 = -16383;
                            v30 = -16383;
                            v7 = 6;
                        }
                    } else {
                        v29 = -128;
                        v39 = -16383;
                        v31 = -64;
                        v30 = -16383;
                        v7 = 5;
                    }
                } else {
                    v29 = -255;
                    v39 = -16383;
                    v31 = 0x3FFF;
                    v30 = -16383;
                    v7 = 4;
                }
            } else {
                v29 = -128;
                v39 = -16383;
                v31 = 0x3FFF;
                v30 = 64;
                v7 = 3;
            }
        } else {
            v39 = -16383;
            v29 = 0x3FFF;
            v31 = 0x3FFF;
            v30 = 64;
            v7 = 2;
        }
    } else {
        v39 = 128;
        v29 = 0x3FFF;
        v31 = 0x3FFF;
        v30 = 64;
        v7 = 1;
    }
    v8 = 4 * a4;
    car_10061460(*(unsigned __int8 *)(v5 + 10668),
                 *(unsigned __int8 *)(v5 + 10669),
                 *(unsigned __int8 *)(v5 + 10670));
    sub_10074E40(v7, v5 + 10864, v5 + 10896);
    LOWORD(v9) = *(_WORD *)(v5 + 2 * v7 + 10696);
    if ((__int16)v9 >= word_100AC6A4)
        return v9;
    *(_WORD *)(v5 + 2 * v7 + 10696) = v8 + v9;
    v10 = (*(_BYTE *)(v5 + 10712) - 3) & 7;
    *(_WORD *)(v5 + 10712) = v10 - 4;
    v11 = (__int16)(v10 - 4);
    v33 = v11;
    if (v11 < 0)
        v33 = ++v11;
    if (a3[1] <= 1.0) {
        if (a3[1] <= 0.0) {
            if (a3[1] >= -1.0)
                LOWORD(v11) = v8 >> 1;
            else
                v11 = 4 * a4;
            v12 = -v11;
        } else {
            LOWORD(v12) = v8 >> 1;
        }
        v32 = v12;
    } else {
        v32 = 4 * a4;
    }
    if (a3[2] <= 1.0) {
        if (a3[2] <= 0.0) {
            if (a3[2] >= -1.0)
                LOWORD(v5) = v8 >> 3;
            else
                LOWORD(v5) = v8 >> 2;
            v13 = -v5;
        } else {
            LOWORD(v13) = v8 >> 3;
        }
    } else {
        LOWORD(v13) = v8 >> 2;
    }
    if (*a3 <= 1.25) {
        if (*a3 <= 0.0) {
            if (*a3 < -1.25) {
                v40 = -4 * a4;
                LOWORD(v13) = 2 * v13;
                goto LABEL_44;
            }
            v8 = -4 * a4;
        } else {
            v8 >>= 1;
        }
    }
    v40 = v8;
LABEL_44:
    v9 = 8198;
    v36 = 8198;
    do {
        v14 = 0;
        v35 = 0;
        do {
            if (v14 != 9) {
                v15 = *(int **)(*(_DWORD *)(a1 + 10692) + 4 * (v14 + v9));
                if (v15) {
                    while (1) {
                        while (1) {
                            v16 = *v15;
                            v17 = HIBYTE(*v15);
                            if (v17 != 4)
                                break;
                            v18 = (float *)v15[1];
                            v15 += 2;
                            if ((unsigned __int16)v16 >> 10) {
                                v19 = (double)v33;
                                v34 = (unsigned __int16)v16 >> 10;
                                do {
                                    v20 = (__int64)(*v18 + v19);
                                    v21 = v20;
                                    if ((__int16)v20 > v39 && (__int16)v20 < v29) {
                                        v22 = (__int64)(v18[1] + v19);
                                        v38 = v22;
                                        if ((__int16)v22 > v30 && (__int16)v22 < v31) {
                                            v23 = (__int64)(v18[2] + v19);
                                            if ((__int16)v23 > -48 && (__int16)v23 < 224) {
                                                if (v38 >= 0)
                                                    v24 = v40 * ((v38 & 0xF) - 12);
                                                else
                                                    v24 = v40 * (4 - (v38 & 0xF));
                                                *v18 = (double)(v24 >> 5) + *v18;
                                                if (v21 >= 0)
                                                    v25 = v32 * ((v21 & 0xF) - 12);
                                                else
                                                    v25 = v32 * (4 - (v21 & 0xF));
                                                v26 = v38 + v21;
                                                v18[1] = (double)(v25 >> 5) + v18[1];
                                                if (v26 >= 0)
                                                    v27 = (double)(((__int16)v13 *
                                                                    ((v26 & 0xF) - 8)) >>
                                                                   6);
                                                else
                                                    v27 = (double)(((__int16)v13 *
                                                                    (8 - (v26 & 0xF))) >>
                                                                   6);
                                                v18[2] = v27 + v18[2];
                                            }
                                        }
                                    }
                                    v18 += 8;
                                    --v34;
                                } while (v34);
                                v14 = v35;
                            }
                        }
                        if (v17 == 184)
                            break;
                        v15 += 2;
                    }
                    v9 = v36;
                }
            }
            v35 = ++v14;
        } while (v14 < 10);
        v9 += 10;
        v36 = v9;
    } while (v9 < 8228);
    return v9;
}
// 100AC6A4: using guessed type __int16 word_100AC6A4;
