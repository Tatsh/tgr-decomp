#include "types-win32.h"
//----- (10019B50) --------------------------------------------------------
int sub_10019B50() {
    int result;           // eax
    int v1;               // ebx
    int v2;               // esi
    unsigned __int16 *v3; // edx
    int v4;               // esi
    _DWORD *v5;           // eax
    _DWORD *v6;           // eax
    _DWORD *v7;           // eax
    _DWORD *v8;           // eax
    _DWORD *v9;           // eax
    unsigned int *v10;    // eax
    _DWORD *v11;          // eax
    _DWORD *v12;          // eax
    _DWORD *v13;          // eax
    void *v14;            // ecx
    double v15;           // st6
    int v16;              // edi
    __int64 v17;          // rax
    int v18;              // ebp
    int v19;              // ebp
    double v20;           // st7
    int v21;              // ebp
    char *v22;            // esi
    double v23;           // st5
    double v24;           // st7
    double v25;           // rtt
    double v26;           // st5
    double v27;           // st1
    char v29;             // c0
    double v30;           // st7
    double v31;           // st7
    double v32;           // st7
    int v33;              // edi
    int v34;              // esi
    int v35;              // eax
    int *v36;             // ecx
    int v37;              // edx
    int v38;              // eax
    _DWORD *v39;          // eax
    unsigned int *v40;    // [esp-44h] [ebp-84h]
    float v41;            // [esp+10h] [ebp-30h]
    float v42;            // [esp+10h] [ebp-30h]
    float v43;            // [esp+10h] [ebp-30h]
    float v44;            // [esp+10h] [ebp-30h]
    float v45;            // [esp+14h] [ebp-2Ch]
    float v46;            // [esp+14h] [ebp-2Ch]
    float v47;            // [esp+14h] [ebp-2Ch]
    float v48;            // [esp+18h] [ebp-28h]
    float v49;            // [esp+18h] [ebp-28h]
    float v50;            // [esp+18h] [ebp-28h]
    float v51;            // [esp+1Ch] [ebp-24h]
    float v52;            // [esp+20h] [ebp-20h]
    float v53;            // [esp+24h] [ebp-1Ch]
    float v54;            // [esp+24h] [ebp-1Ch]
    float v55;            // [esp+28h] [ebp-18h]
    char *v56;            // [esp+28h] [ebp-18h]
    char *v57;            // [esp+2Ch] [ebp-14h]
    float v58;            // [esp+30h] [ebp-10h]
    float v59;            // [esp+34h] [ebp-Ch] BYREF
    float v60;            // [esp+38h] [ebp-8h]

    result = dword_106C6620;
    if (dword_106C6620 || dword_106C6624) {
        v1 = dword_106C1988;
        v2 = 0;
        if (dword_106C1988 <= 0) {
        LABEL_7:
            v4 = 0;
            v57 = (char *)&unk_104B2570 + 3132 * dword_106C5708;
            if (dword_106C6624)
                meth_DebugPrint((void *)(65 * dword_106C5708));
            v5 = (_DWORD *)dword_106C0680;
            dword_106C0680 += 8;
            *v5 = -419430400;
            v5[1] = 0;
            v6 = (_DWORD *)dword_106C0680;
            dword_106C0680 += 8;
            *v6 = -1174399998;
            v6[1] = 0;
            v7 = (_DWORD *)dword_106C0680;
            dword_106C0680 += 8;
            *v7 = -1157627903;
            v7[1] = -1;
            v8 = (_DWORD *)dword_106C0680;
            dword_106C0680 += 8;
            *v8 = -1174402046;
            v8[1] = dword_106C0258;
            v40 = (unsigned int *)dword_106C0680;
            dword_106C0680 += 8;
            sub_1002F900(v40, 0, 0, 0, 1003, 0, 0, 0, 1001, 0, 0, 0, 1003, 0, 0, 0, 1001);
            v9 = (_DWORD *)dword_106C0680;
            dword_106C0680 += 8;
            *v9 = -1191181539;
            v9[1] = 5259840;
            v10 = (unsigned int *)dword_106C0680;
            dword_106C0680 += 8;
            if (dword_106C6624) {
                *v10 = dword_11829100[dword_106C5708] & 0xFFFFFF | 0xDD000000;
                v10[1] = (unsigned int)&unk_104B3DE8 + 0x4000 * dword_106C5708;
                v10 = (unsigned int *)dword_106C0680;
                dword_106C0680 += 8;
                *v10 = dword_11829100[dword_106C5708] & 0xFFFFFF | 0xDC000000;
            } else {
                *v10 = dword_1182931C & 0xFFFFFF | 0xDC000000;
            }
            v10[1] = 1;
            v11 = (_DWORD *)dword_106C0680;
            dword_106C0680 += 8;
            *v11 = -234872830;
            v11[1] = 1040638;
            v12 = (_DWORD *)dword_106C0680;
            dword_106C0680 += 8;
            *v12 = -1241513984;
            v12[1] = 12288;
            v13 = (_DWORD *)dword_106C0680;
            dword_106C0680 += 8;
            if (dword_106C6620) {
                *v13 = -100597761;
                v13[1] = -522125313;
            } else {
                *v13 = -100597761;
                v13[1] = 2021689599;
            }
            sub_1003B4F0((int)&flt_106C0860, (float *)dword_106C6490);
            flt_106C0898 = 0.0;
            flt_106C0894 = 0.0;
            flt_106C0890 = 0.0;
            flt_106C08A0 = 0.0;
            flt_106C08A4 = 0.0;
            dword_106C08A8 = 947912960;
            dword_106C08AC = 0;
            flt_106C08B0 = 0.000061037019;
            flt_106C08B4 = 0.0;
            dword_106C08B8 = 0;
            dword_106C08BC = 0;
            dword_106C08C0 = 0;
            dword_106C08C4 = 947912960;
            dword_106C08C8 = 0;
            dword_106C08CC = 0;
            dword_106C08D0 = 0;
            dword_106C08D4 = 0;
            dword_106C08D8 = 0;
            dword_106C08DC = 1065353216;
            sub_1003B470((char *)&flt_106C0860, &flt_106C0860, &flt_106C08A0);
            if (dword_106C6624) {
                sub_10060780(
                    v1, (char *)&unk_104B3DE8 + 0x4000 * dword_106C5708, dword_11829318 << 12, 0);
                sub_1003B340(&v59, (float *)&unk_104BBDF0 + 3 * dword_106C5708, &flt_106C0860);
                sub_1003AE50(&v59);
                v14 = (void *)dword_106C1174;
                if (dword_106C1174 != dword_106C3364)
                    v59 = -v59;
                v45 = 32.0 - v59 * 28.0;
                v55 = v59 * 3.5;
                v41 = 32.0 - v60 * -28.0;
                v53 = v60 * -3.5;
                do {
                    v15 = v55 + v45;
                    v45 = v15;
                    v41 = v53 + v41;
                    v16 = (__int64)v15;
                    v17 = (__int64)v41;
                    v18 = v17;
                    if ((int)v17 >= 2 && (int)v17 <= 61 && v16 >= 2 && v16 <= 61) {
                        sub_1001A4B0(dword_106C5708);
                        sub_1001A4D0(dword_106C5708, v18 - 2, v16 - 1, v4);
                        sub_1001A4D0(dword_106C5708, v18 - 2, v16, v4);
                        sub_1001A4D0(dword_106C5708, v18 - 2, v16 + 1, v4);
                        sub_1001A4D0(dword_106C5708, v18 - 1, v16 - 2, v4);
                        sub_1001A4D0(dword_106C5708, v18 - 1, v16 - 1, v4);
                        sub_1001A4D0(dword_106C5708, v18 - 1, v16, v4);
                        sub_1001A4D0(dword_106C5708, v18 - 1, v16 + 1, v4);
                        sub_1001A4D0(dword_106C5708, v18 - 1, v16 + 2, v4);
                        sub_1001A4D0(dword_106C5708, v18, v16 - 2, v4);
                        sub_1001A4D0(dword_106C5708, v18, v16 - 1, v4);
                        sub_1001A4D0(dword_106C5708, v18, v16, v4);
                        sub_1001A4D0(dword_106C5708, v18, v16 + 1, v4);
                        sub_1001A4D0(dword_106C5708, v18, v16 + 2, v4);
                        sub_1001A4D0(dword_106C5708, v18 + 1, v16 - 2, v4);
                        sub_1001A4D0(dword_106C5708, v18 + 1, v16 - 1, v4);
                        sub_1001A4D0(dword_106C5708, v18 + 1, v16, v4);
                        sub_1001A4D0(dword_106C5708, v18 + 1, v16 + 1, v4);
                        sub_1001A4D0(dword_106C5708, v18 + 1, v16 + 2, v4);
                        v19 = v18 + 2;
                        sub_1001A4D0(dword_106C5708, v19, v16 - 1, v4);
                        sub_1001A4D0(dword_106C5708, v19, v16, v4);
                        sub_1001A4D0(dword_106C5708, v19, v16 + 1, v4);
                    }
                    ++v4;
                } while (v4 < 16);
            }
            meth_DebugPrint(v14);
            sub_1003B470((char *)&flt_106C0860, &flt_106C0860, flt_106C0218);
            if (dword_106C6620) {
                v51 = 96.0;
                v52 = 144.0;
            } else {
                v51 = 128.0;
                v52 = 128.0;
            }
            if (dword_106C1174 != dword_106C3364)
                v20 = (double)-gWidth;
            else
                v20 = (double)gWidth;
            v21 = 0;
            v54 = v20 + v20;
            v58 = (double)gHeight + (double)gHeight;
            if (dword_104B2550 > 0) {
                v22 = v57 + 4;
                v56 = v57 + 4;
                do {
                    v23 = (double)*((__int16 *)v22 - 1);
                    v24 = (double)*((__int16 *)v22 - 2);
                    v48 = v23;
                    v25 = v23;
                    v26 = (double)*(__int16 *)v22;
                    v42 = v26;
                    v27 = v26 * flt_106C088C + v25 * flt_106C087C + v24 * flt_106C086C;
                    v46 =
                        v42 * flt_106C0880 + v48 * flt_106C0870 + v24 * flt_106C0860 + flt_106C0890;
                    v49 =
                        v42 * flt_106C0884 + v48 * flt_106C0874 + v24 * flt_106C0864 + flt_106C0894;
                    if (!v29) {
                        v43 = v27 + *(float *)&flt_106C089C;
                        v30 = 0.5 / v43;
                        v44 = v30;
                        v31 = v30 * v49;
                        v50 = v31;
                        if (v31 >= -1.0 && v50 <= 1.0) {
                            v32 = v44 * v46;
                            v47 = v32;
                            if (v32 >= -1.0 && v47 <= 1.0 && (int)(__int64)(v44 * v51) >= 2) {
                                v33 = (__int64)(v44 * v52);
                                if (v33 >= 2) {
                                    v34 = (__int64)(v47 * v54) + 4 * (gWidth / 2);
                                    v35 = (__int64)(v50 * v58) + 4 * (gHeight / 2);
                                    v36 = (int *)dword_106C0680;
                                    dword_106C0680 += 8;
                                    v37 = ((v35 + v33) >> 2) & 0xFFF |
                                          ((((unsigned __int16)v34 +
                                             (unsigned __int16)(__int64)(v44 * v51)) &
                                                0x3FFC |
                                            0x38C000) >>
                                           2 << 12);
                                    v38 = (((v34 >> 2) & 0xFFF) << 12) | (v35 >> 2) & 0xFFF;
                                    v22 = v56;
                                    *v36 = v37;
                                    v36[1] = v38;
                                }
                            }
                        }
                    }
                    ++v21;
                    v22 += 6;
                    v56 = v22;
                } while (v21 < dword_104B2550);
            }
            v39 = (_DWORD *)dword_106C0680;
            dword_106C0680 += 8;
            *v39 = -419430400;
            v39[1] = 0;
            result = dword_106C0680;
            dword_106C0680 += 8;
            *(_DWORD *)result = -1174400255;
            *(_DWORD *)(result + 4) = 0x80000;
        } else {
            v3 = (unsigned __int16 *)&unk_106C6498;
            while (1) {
                result = 21 * *v3;
                if ((*(_BYTE *)(dword_106C7CA8 + 84 * *v3 + 76) & 0x10) != 0)
                    break;
                ++v2;
                ++v3;
                if (v2 >= dword_106C1988)
                    goto LABEL_7;
            }
        }
    }
    return result;
}
// 1001A1A8: variable 'v14' is possibly undefined
// 1001A31E: variable 'v29' is possibly undefined
// 100A81C0: using guessed type int gWidth;
// 100A81C4: using guessed type int gHeight;
// 104B2550: using guessed type int dword_104B2550;
// 106C0258: using guessed type int dword_106C0258;
// 106C0680: using guessed type int dword_106C0680;
// 106C0860: using guessed type float flt_106C0860;
// 106C0864: using guessed type float flt_106C0864;
// 106C086C: using guessed type float flt_106C086C;
// 106C0870: using guessed type float flt_106C0870;
// 106C0874: using guessed type float flt_106C0874;
// 106C087C: using guessed type float flt_106C087C;
// 106C0880: using guessed type float flt_106C0880;
// 106C0884: using guessed type float flt_106C0884;
// 106C088C: using guessed type float flt_106C088C;
// 106C0890: using guessed type float flt_106C0890;
// 106C0894: using guessed type float flt_106C0894;
// 106C0898: using guessed type float flt_106C0898;
// 106C08A0: using guessed type float flt_106C08A0;
// 106C08A4: using guessed type float flt_106C08A4;
// 106C08A8: using guessed type int dword_106C08A8;
// 106C08AC: using guessed type int dword_106C08AC;
// 106C08B0: using guessed type float flt_106C08B0;
// 106C08B4: using guessed type float flt_106C08B4;
// 106C08B8: using guessed type int dword_106C08B8;
// 106C08BC: using guessed type int dword_106C08BC;
// 106C08C0: using guessed type int dword_106C08C0;
// 106C08C4: using guessed type int dword_106C08C4;
// 106C08C8: using guessed type int dword_106C08C8;
// 106C08CC: using guessed type int dword_106C08CC;
// 106C08D0: using guessed type int dword_106C08D0;
// 106C08D4: using guessed type int dword_106C08D4;
// 106C08D8: using guessed type int dword_106C08D8;
// 106C08DC: using guessed type int dword_106C08DC;
// 106C1174: using guessed type int dword_106C1174;
// 106C1988: using guessed type int dword_106C1988;
// 106C3364: using guessed type int dword_106C3364;
// 106C5708: using guessed type int dword_106C5708;
// 106C6620: using guessed type int dword_106C6620;
// 106C6624: using guessed type int dword_106C6624;
// 106C7CA8: using guessed type int dword_106C7CA8;
// 11829100: using guessed type int dword_11829100[];
// 11829318: using guessed type int dword_11829318;
// 1182931C: using guessed type int dword_1182931C;
