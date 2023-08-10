#include "types-win32.h"
//----- (10006EC0) --------------------------------------------------------
unsigned int __cdecl sub_10006EC0(int a1, int *a2) {
    char v2;             // al
    __int16 v3;          // cx
    char v4;             // al
    __int16 v5;          // dx
    char v6;             // al
    __int16 v7;          // cx
    char v8;             // al
    __int16 v9;          // dx
    unsigned int v10;    // eax
    unsigned int v11;    // eax
    __int16 v12;         // ax
    __int16 v13;         // ax
    __int16 v14;         // ax
    char v15;            // al
    char v16;            // al
    char v17;            // al
    char v18;            // al
    char v19;            // al
    char v20;            // al
    double v21;          // st7
    double v22;          // st7
    double v23;          // st7
    double v24;          // st7
    double v25;          // st7
    int v26;             // eax
    unsigned __int8 v27; // al
    char v28;            // al
    char v29;            // al
    double v30;          // st7
    double v31;          // st7
    double v32;          // st7
    double v33;          // st7
    double v34;          // st7
    unsigned int result; // eax

    v2 = meth_10073C90(a2, 8);
    LOBYTE(v3) = 0;
    HIBYTE(v3) = v2;
    *(float *)a1 = mult_neg_1_32_32_32(v3);
    v4 = meth_10073C90(a2, 8);
    LOBYTE(v5) = 0;
    HIBYTE(v5) = v4;
    *(float *)(a1 + 4) = mult_neg_1_32_32_32(v5);
    v6 = meth_10073C90(a2, 8);
    LOBYTE(v7) = 0;
    HIBYTE(v7) = v6;
    *(float *)(a1 + 8) = mult_neg_1_32_32_32(v7);
    v8 = meth_10073C90(a2, 8);
    LOBYTE(v9) = 0;
    HIBYTE(v9) = v8;
    *(float *)(a1 + 12) = mult_neg_1_32_32_32(v9);
    v10 = meth_10073C90(a2, 17);
    *(float *)(a1 + 16) = mult_1_32_32_8(v10 << 7);
    v11 = meth_10073C90(a2, 17);
    *(float *)(a1 + 20) = mult_1_32_32_8(v11 << 7);
    v12 = meth_10073C90(a2, 15);
    *(float *)(a1 + 24) = mult_1_128(2 * v12);
    v13 = meth_10073C90(a2, 16);
    *(float *)(a1 + 28) = mult_1_256(v13);
    v14 = meth_10073C90(a2, 16);
    *(float *)(a1 + 32) = mult_1_256(v14);
    *(_DWORD *)(a1 + 36) = 0;
    v15 = meth_10073C90(a2, 5);
    *(float *)(a1 + 40) = mult_1_8(8 * v15);
    v16 = meth_10073C90(a2, 5);
    *(float *)(a1 + 44) = mult_1_8(8 * v16);
    v17 = meth_10073C90(a2, 5);
    *(float *)(a1 + 48) = mult_1_8(8 * v17);
    v18 = meth_10073C90(a2, 4);
    *(float *)(a1 + 52) = mult_1_8(16 * v18);
    v19 = meth_10073C90(a2, 4);
    *(float *)(a1 + 56) = sub_10007250(4 * v19);
    v20 = meth_10073C90(a2, 4);
    v21 = sub_100072A0(16 * v20);
    *(float *)(a1 + 64) = v21;
    *(float *)(a1 + 60) = v21;
    v22 = v21 - -35.0;
    if (v22 >= 360.0)
        v22 = v22 - 360.0;
    *(float *)(a1 + 72) = v22;
    *(float *)(a1 + 68) = v22;
    *(float *)(a1 + 76) = (float)meth_10073C90(a2, 1);
    *(float *)(a1 + 80) = (float)meth_10073C90(a2, 1);
    *(float *)(a1 + 84) = (float)meth_10073C90(a2, 1);
    *(float *)(a1 + 88) = (float)meth_10073C90(a2, 1);
    if (meth_10073C90(a2, 1))
        v23 = 128.0;
    else
        v23 = 0.0;
    *(float *)(a1 + 108) = v23;
    if (meth_10073C90(a2, 1))
        v24 = 1.0;
    else
        v24 = 0.0;
    *(float *)(a1 + 112) = v24;
    if (meth_10073C90(a2, 1))
        v25 = 1.0;
    else
        v25 = 0.0;
    *(float *)(a1 + 116) = v25;
    v26 = meth_10073C90(a2, 24);
    *(float *)(a1 + 120) = sub_10007340(v26);
    v27 = meth_10073C90(a2, 6);
    *(float *)(a1 + 124) = sub_100072C0(v27);
    v28 = meth_10073C90(a2, 2);
    *(float *)(a1 + 128) = sub_100072E0(v28);
    v29 = meth_10073C90(a2, 2);
    *(float *)(a1 + 132) = sub_100072E0(v29);
    if (meth_10073C90(a2, 1))
        v30 = 128.0;
    else
        v30 = 0.0;
    *(float *)(a1 + 136) = v30;
    if (meth_10073C90(a2, 1))
        v31 = 128.0;
    else
        v31 = 0.0;
    *(float *)(a1 + 140) = v31;
    if (meth_10073C90(a2, 1))
        v32 = 128.0;
    else
        v32 = 0.0;
    *(float *)(a1 + 144) = v32;
    if (meth_10073C90(a2, 1))
        v33 = 128.0;
    else
        v33 = 0.0;
    *(float *)(a1 + 148) = v33;
    if (meth_10073C90(a2, 1))
        v34 = 128.0;
    else
        v34 = 0.0;
    *(float *)(a1 + 152) = v34;
    result = meth_10073C90(a2, 1);
    if (result)
        *(float *)(a1 + 156) = 128.0;
    else
        *(float *)(a1 + 156) = 0.0;
    return result;
}
// 100072E0: using guessed type double __cdecl sub_100072E0(char);
