//----- (100073E0) --------------------------------------------------------
unsigned int __cdecl sub_100073E0(float *a1, float *a2, int *a3) {
    char v3;             // al
    __int16 v4;          // cx
    char v5;             // al
    __int16 v6;          // dx
    char v7;             // al
    __int16 v8;          // cx
    char v9;             // al
    __int16 v10;         // dx
    unsigned int v11;    // esi
    __int16 v12;         // ax
    int v13;             // ecx
    int v14;             // esi
    unsigned int v15;    // esi
    __int16 v16;         // ax
    int v17;             // ecx
    int v18;             // esi
    __int16 v19;         // si
    __int16 v20;         // ax
    int v21;             // ecx
    __int16 v22;         // si
    int v23;             // esi
    __int16 v24;         // ax
    int v25;             // ecx
    int v26;             // esi
    unsigned __int8 v27; // al
    char v28;            // al
    char v29;            // al
    double v30;          // st7
    double v31;          // st7
    double v32;          // st7
    double v33;          // st7
    double v34;          // st7
    unsigned int result; // eax

    v3 = sub_10073C90(a3, 8);
    LOBYTE(v4) = 0;
    HIBYTE(v4) = v3;
    *a1 = mult_neg_1_32_32_32(v4);
    v5 = sub_10073C90(a3, 8);
    LOBYTE(v6) = 0;
    HIBYTE(v6) = v5;
    a1[1] = mult_neg_1_32_32_32(v6);
    v7 = sub_10073C90(a3, 8);
    LOBYTE(v8) = 0;
    HIBYTE(v8) = v7;
    a1[2] = mult_neg_1_32_32_32(v8);
    v9 = sub_10073C90(a3, 8);
    LOBYTE(v10) = 0;
    HIBYTE(v10) = v9;
    a1[3] = mult_neg_1_32_32_32(v10);
    v11 = (unsigned int)sub_100066E0(a2[4]) >> 7;
    v12 = sub_10073C90(a3, 14);
    v13 = v12 & 0x3000;
    if ((v12 & 0x3000) != 0) {
        if (v13 == 4096) {
            v14 = (v11 & 0x1F000) + 4096;
        } else if (v13 == 0x2000) {
            v14 = (v11 & 0x1F000) + 0x2000;
        } else {
            v14 = (v11 & 0x1F000) - 4096;
        }
    } else {
        v14 = v11 & 0x1F000;
    }
    a1[4] = sub_10007310((v12 & 0xFFF | (unsigned int)v14) << 7);
    v15 = (unsigned int)sub_100066E0(a2[5]) >> 7;
    v16 = sub_10073C90(a3, 14);
    v17 = v16 & 0x3000;
    if ((v16 & 0x3000) != 0) {
        if (v17 == 4096) {
            v18 = (v15 & 0x1F000) + 4096;
        } else if (v17 == 0x2000) {
            v18 = (v15 & 0x1F000) + 0x2000;
        } else {
            v18 = (v15 & 0x1F000) - 4096;
        }
    } else {
        v18 = v15 & 0x1F000;
    }
    a1[5] = sub_10007310((v16 & 0xFFF | (unsigned int)v18) << 7);
    v19 = (__int16)sub_10006770(a2[6]) >> 1;
    v20 = sub_10073C90(a3, 11);
    v21 = v20 & 0x600;
    if ((v20 & 0x600) != 0) {
        if (v21 == 512) {
            v22 = (v19 & 0x7E00) + 512;
        } else if (v21 == 1024) {
            v22 = (v19 & 0x7E00) + 1024;
        } else {
            v22 = (v19 & 0x7E00) - 512;
        }
    } else {
        v22 = v19 & 0x7E00;
    }
    a1[6] = mult_1_128(2 * (v20 & 0x1FFu | v22));
    v23 = sub_10006730(a2[30]);
    v24 = sub_10073C90(a3, 9);
    v25 = v24 & 0x180;
    if ((v24 & 0x180) != 0) {
        if (v25 == 128) {
            v26 = (v23 & 0xFFFF80) + 128;
        } else if (v25 == 256) {
            v26 = (v23 & 0xFFFF80) + 256;
        } else {
            v26 = (v23 & 0xFFFF80) - 128;
        }
    } else {
        v26 = v23 & 0xFFFF80;
    }
    a1[30] = sub_10007340(v24 & 0x7F | (unsigned int)v26);
    v27 = sub_10073C90(a3, 6);
    a1[31] = sub_100072C0(v27);
    v28 = sub_10073C90(a3, 2);
    a1[32] = sub_100072E0(v28);
    v29 = sub_10073C90(a3, 2);
    a1[33] = sub_100072E0(v29);
    if (sub_10073C90(a3, 1))
        v30 = 128.0;
    else
        v30 = 0.0;
    a1[34] = v30;
    if (sub_10073C90(a3, 1))
        v31 = 128.0;
    else
        v31 = 0.0;
    a1[35] = v31;
    if (sub_10073C90(a3, 1))
        v32 = 128.0;
    else
        v32 = 0.0;
    a1[36] = v32;
    if (sub_10073C90(a3, 1))
        v33 = 128.0;
    else
        v33 = 0.0;
    a1[37] = v33;
    if (sub_10073C90(a3, 1))
        v34 = 128.0;
    else
        v34 = 0.0;
    a1[38] = v34;
    result = sub_10073C90(a3, 1);
    if (result)
        a1[39] = 128.0;
    else
        a1[39] = 0.0;
    return result;
}
// 100072E0: using guessed type double __cdecl sub_100072E0(char);
