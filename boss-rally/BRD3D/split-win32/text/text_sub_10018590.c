#include "types-win32.h"
//----- (10018590) --------------------------------------------------------
_DWORD *__cdecl text_sub_10018590(char *message) {
    int messageX;      // ebp
    int v2;            // ebx
    void *v3;          // esi
    void *v4;          // edi
    _DWORD *v5;        // eax
    _DWORD *v6;        // eax
    unsigned int *v7;  // ecx
    _DWORD *v8;        // eax
    _DWORD *v9;        // eax
    _DWORD *v10;       // eax
    _DWORD *v11;       // eax
    _DWORD *v12;       // eax
    _DWORD *v13;       // eax
    _DWORD *v14;       // eax
    _DWORD *v15;       // eax
    _DWORD *v16;       // eax
    _DWORD *v17;       // eax
    _DWORD *v18;       // eax
    void *v19;         // ecx
    _DWORD *v20;       // eax
    _DWORD *v21;       // eax
    _DWORD *v22;       // eax
    _DWORD *v23;       // eax
    int v24;           // ecx
    _DWORD *v25;       // eax
    int v26;           // ecx
    _DWORD *v27;       // eax
    _DWORD *v28;       // eax
    _DWORD *v29;       // eax
    char *v30;         // esi
    const char *v31;   // edi
    char v32;          // al
    int v33;           // edx
    unsigned int *v34; // eax
    int v35;           // ecx
    int v36;           // edi
    int v37;           // edx
    _DWORD *v38;       // eax
    _DWORD *v39;       // eax
    _DWORD *v40;       // eax
    int v41;           // eax
    __int16 v42;       // si
    int *v43;          // eax
    __int16 v44;       // dx
    unsigned int *v45; // edx
    int v46;           // eax
    int v47;           // ecx
    __int16 v48;       // cx
    int v49;           // eax
    int v50;           // eax
    char v51;          // al
    _DWORD *v52;       // eax
    _DWORD *v53;       // eax
    _DWORD *result;    // eax
    _DWORD *v55;       // eax
    bool v56;          // cc
    _DWORD *v57;       // eax
    int v58;           // edx
    _DWORD *v59;       // eax
    _DWORD *v60;       // eax
    _DWORD *v61;       // eax
    _DWORD *v62;       // eax
    _DWORD *v63;       // eax
    _DWORD *v64;       // eax
    _DWORD *v65;       // eax
    _DWORD *v66;       // eax
    _DWORD *v67;       // eax
    _DWORD *v68;       // eax
    _DWORD *v69;       // eax
    _DWORD *v70;       // eax
    _DWORD *v71;       // eax
    _DWORD *v72;       // eax
    _DWORD *v73;       // eax
    _DWORD *v74;       // eax
    _DWORD *v75;       // eax
    _DWORD *v76;       // eax
    _DWORD *v77;       // eax
    _DWORD *v78;       // eax
    _DWORD *v79;       // eax
    _DWORD *v80;       // eax
    _DWORD *v81;       // eax
    int v82;           // [esp+10h] [ebp-20h]
    unsigned int v83;  // [esp+14h] [ebp-1Ch] BYREF
    unsigned int v84;  // [esp+18h] [ebp-18h] BYREF
    int v85;           // [esp+1Ch] [ebp-14h] BYREF
    int v86;           // [esp+20h] [ebp-10h]
    char *v87;         // [esp+24h] [ebp-Ch]
    int *v88;          // [esp+28h] [ebp-8h]
    int *v89;          // [esp+2Ch] [ebp-4h]

    messageX = gMessageX;
    v82 = dword_104B0348;
    v86 = gMessageY - 30 * dword_104B0348 / 40;
    if (dword_106C65E4) {
        messageX = 2 * gMessageX;
        v86 = 2 * (gMessageY - 30 * dword_104B0348 / 40);
        v82 = 2 * dword_104B0348;
    }
    if (dword_100B8C90 > 1 || v82 < 25) {
        v2 = 20;
        v88 = dword_100A6150;
        v3 = &unk_100A7738;
        v4 = &unk_100A7878;
        v89 = dword_11829158;
    } else {
        v2 = 40;
        v88 = dword_100A6070;
        v3 = &unk_100A74B8;
        v4 = &unk_100A75F8;
        v89 = dword_11829238;
    }
    v5 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v5 = -419430400;
    v5[1] = 0;
    v6 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v6 = -1174399998;
    v6[1] = 0x100000;
    v7 = (unsigned int *)dword_106C0680;
    dword_106C0680 += 8;
    if (byte_104B0360)
        sub_1002F900(v7, 1003, 1005, 1002, 1005, 0, 0, 0, 1001, 1000, 1001, 1002, 0, 0, 0, 0, 1002);
    else
        sub_1002F900(v7, 1003, 1005, 1002, 1005, 0, 0, 0, 1001, 1000, 0, 1002, 0, 0, 0, 0, 1002);
    v8 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v8 = -1191181539;
    v8[1] = 202916416;
    v9 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v9 = -1174402046;
    v9[1] = dword_106C0258;
    v10 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v10 = -1174401534;
    v10[1] = 0;
    v11 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v11 = -1174400255;
    v11[1] = 0;
    v12 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v12 = -1174401023;
    v12[1] = 0;
    v13 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v13 = -1157627903;
    v13[1] = -1;
    v14 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v14 = -402653184;
    v14[1] = 0;
    v15 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v15 = -436207616;
    v15[1] = 0;
    v16 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v16 = -419430400;
    v16[1] = 0;
    v17 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v17 = -183500368;
    v17[1] = 117440512;
    v18 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v18 = -49283072;
    v19 = v4;
    if (!byte_104B0360)
        v19 = v3;
    v18[1] = v19;
    v20 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v20 = -218103808;
    v20[1] = 118747136;
    v21 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v21 = -177732688;
    v21[1] = 17399856;
    v22 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v22 = -234872830;
    v22[1] = 16900254;
    if (dword_104B0364) {
        v23 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v23 = -83886080;
        v24 = ((unsigned __int8)dword_100A74B0 |
               (((unsigned __int8)dword_100A74AC | (dword_100A74A8 << 8)) << 8))
              << 8;
        LOBYTE(v24) = -1;
        v23[1] = v24;
        v25 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v25 = -100597761;
        v26 = ((unsigned __int8)dword_104B0370 |
               (((unsigned __int8)dword_104B036C | (dword_104B0368 << 8)) << 8))
              << 8;
        LOBYTE(v26) = -1;
        v25[1] = v26;
    } else {
        v27 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        if (byte_104B0358) {
            *v27 = -83886080;
            v27[1] = -8453889;
            v28 = (_DWORD *)dword_106C0680;
            dword_106C0680 += 8;
            *v28 = -100597761;
            v28[1] = -32769;
        } else {
            *v27 = -83886080;
            v27[1] = -939523841;
            v29 = (_DWORD *)dword_106C0680;
            dword_106C0680 += 8;
            *v29 = -100597761;
            v29[1] = -421134081;
        }
    }
    v30 = message;
    if (*message) {
        v31 = message + 2;
        v87 = message + 2;
        do {
            if (*v30 == 32) {
                messageX += 14 * v82 / 40 + 1;
            } else {
                if (*v30 != 37)
                    goto LABEL_24;
                v32 = v30[1];
                switch (v32) {
                case 0:
                    goto LABEL_24;
                case 37:
                    ++v30;
                    ++v31;
                    message = v30;
                    v87 = (char *)v31;
                LABEL_24:
                    if (*v30 >= 33) {
                        v33 = byte_100A5FEF[*v30];
                        v34 = (unsigned int *)dword_106C0680;
                        v35 = v88[v33 + 1] - v88[v33] + 1;
                        dword_106C0680 += 8;
                        v36 = v35 - 1;
                        v37 = v89[v33];
                        v34[1] = 1;
                        *v34 = v37 & 0xFFFFFF | 0xDC000000;
                        v38 = (_DWORD *)dword_106C0680;
                        dword_106C0680 += 8;
                        *v38 = -570425344;
                        v38[1] = 1065353216;
                        v39 = (_DWORD *)dword_106C0680;
                        dword_106C0680 += 8;
                        *v39 = -553648128;
                        v39[1] = -1082130432;
                        v40 = (_DWORD *)dword_106C0680;
                        dword_106C0680 += 8;
                        *v40 = -234872830;
                        v40[1] = ((v35 << 14) - 0x2000) & 0xFFF000 | (4 * (_WORD)v2 - 2) & 0xFFF;
                        v41 = v35 * v82 / v2;
                        if (messageX < 0 || (v42 = v41 + messageX, v41 + messageX > 320) ||
                            v86 < 0 || v86 + v82 > 240) {
                            v45 = (unsigned int *)dword_106C0680;
                            v46 = (4 * (messageX + v41)) >> 2;
                            dword_106C0680 += 8;
                            if ((__int16)v46 <= 0)
                                LOWORD(v46) = 0;
                            v47 = (4 * (v82 + v86)) >> 2;
                            if ((__int16)v47 <= 0)
                                LOWORD(v47) = 0;
                            *v45 = v47 & 0xFFF | ((v46 & 0xFFF | 0xFFFE3000) << 12);
                            if ((__int16)((4 * messageX) >> 2) <= 0)
                                v48 = 0;
                            else
                                v48 = (4 * messageX) >> 2;
                            v49 = (4 * v86) >> 2;
                            if ((__int16)v49 <= 0)
                                LOWORD(v49) = 0;
                            v45[1] = ((v48 & 0xFFF) << 12) | v49 & 0xFFF;
                        } else {
                            v43 = (int *)dword_106C0680;
                            dword_106C0680 += 8;
                            v44 = v86;
                            *v43 = ((4 * (v86 + v82)) >> 2) & 0xFFF |
                                   (((4 * v42) & 0x3FFC | 0x38C000) >> 2 << 12);
                            v43[1] =
                                ((4 * (v44 & 0xFFF)) >> 2) | ((4 * (messageX & 0xFFF)) >> 2 << 12);
                        }
                        v30 = message;
                        v50 = v36 * v82 / v2;
                        v31 = v87;
                        messageX += v50;
                    }
                    break;
                case 105:
                    ++v30;
                    ++v31;
                    break;
                case 110:
                    ++v30;
                    ++v31;
                    break;
                case 120:
                    sscanf(v31, "%02x%02x%02x", &v85, &v83, &v84);
                    v55 = (_DWORD *)dword_106C0680;
                    dword_106C0680 += 8;
                    *v55 = -100597761;
                    v55[1] =
                        (((unsigned __int8)v84 | (((unsigned __int8)v83 | (v85 << 8)) << 8)) << 8) |
                        0xFF;
                    v83 += 128;
                    v56 = (unsigned int)(v85 + 128) <= 0xFF;
                    v85 += 128;
                    v84 += 128;
                    if (!v56)
                        v85 = 255;
                    if (v83 > 0xFF)
                        v83 = 255;
                    if (v84 > 0xFF)
                        v84 = 255;
                    v30 += 7;
                    v57 = (_DWORD *)dword_106C0680;
                    dword_106C0680 += 8;
                    *v57 = -83886080;
                    v58 = ((unsigned __int8)v84 | (((unsigned __int8)v83 | (v85 << 8)) << 8)) << 8;
                    LOBYTE(v58) = -1;
                    v31 += 7;
                    v57[1] = v58;
                    break;
                default:
                    if (*v31) {
                        v59 = (_DWORD *)dword_106C0680;
                        dword_106C0680 += 8;
                        *v59 = -419430400;
                        v59[1] = 0;
                        switch (v30[1]) {
                        case '0':
                            v70 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            *v70 = -100597761;
                            v70[1] = 255;
                            break;
                        case '1':
                        case 'w':
                            v68 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            *v68 = -100597761;
                            v68[1] = -1;
                            break;
                        case '5':
                            v69 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            *v69 = -100597761;
                            v69[1] = -2139062017;
                            break;
                        case 'O':
                            v62 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            *v62 = -100597761;
                            v62[1] = -8912641;
                            break;
                        case 'Y':
                            v64 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            *v64 = -100597761;
                            v64[1] = -360193;
                            break;
                        case 'b':
                            v66 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            *v66 = -100597761;
                            v66[1] = 51455;
                            break;
                        case 'g':
                            v65 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            *v65 = -100597761;
                            v65[1] = 9830655;
                            break;
                        case 'o':
                            v61 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            *v61 = -100597761;
                            v61[1] = -849411841;
                            break;
                        case 'p':
                            v67 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            *v67 = -100597761;
                            v67[1] = -939472641;
                            break;
                        case 'r':
                            v60 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            *v60 = -100597761;
                            v60[1] = -1107296001;
                            break;
                        case 'y':
                            v63 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            *v63 = -100597761;
                            v63[1] = -720641;
                            break;
                        default:
                            break;
                        }
                        switch (*v31) {
                        case '0':
                            v81 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            *v81 = -83886080;
                            v81[1] = 255;
                            goto LABEL_81;
                        case '1':
                        case 'w':
                            v30 += 2;
                            v79 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            v31 += 2;
                            *v79 = -83886080;
                            v79[1] = -1;
                            break;
                        case '5':
                            v30 += 2;
                            v80 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            v31 += 2;
                            *v80 = -83886080;
                            v80[1] = -2139062017;
                            break;
                        case 'O':
                            v30 += 2;
                            v73 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            v31 += 2;
                            *v73 = -83886080;
                            v73[1] = -8912641;
                            break;
                        case 'Y':
                            v30 += 2;
                            v75 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            v31 += 2;
                            *v75 = -83886080;
                            v75[1] = -758617601;
                            break;
                        case 'b':
                            v30 += 2;
                            v77 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            v31 += 2;
                            *v77 = -83886080;
                            v77[1] = 51455;
                            break;
                        case 'g':
                            v30 += 2;
                            v76 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            v31 += 2;
                            *v76 = -83886080;
                            v76[1] = 9830655;
                            break;
                        case 'o':
                            v30 += 2;
                            v72 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            v31 += 2;
                            *v72 = -83886080;
                            v72[1] = -849411841;
                            break;
                        case 'p':
                            v30 += 2;
                            v78 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            v31 += 2;
                            *v78 = -83886080;
                            v78[1] = -939472641;
                            break;
                        case 'r':
                            v30 += 2;
                            v71 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            v31 += 2;
                            *v71 = -83886080;
                            v71[1] = -939523841;
                            break;
                        case 'y':
                            v30 += 2;
                            v74 = (_DWORD *)dword_106C0680;
                            dword_106C0680 += 8;
                            v31 += 2;
                            *v74 = -83886080;
                            v74[1] = -759299841;
                            break;
                        default:
                        LABEL_81:
                            v30 += 2;
                            v31 += 2;
                            break;
                        }
                        break;
                    }
                    goto LABEL_24;
                }
            }
            v51 = *++v30;
            ++v31;
            message = v30;
            v87 = (char *)v31;
        } while (v51);
    }
    v52 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v52 = -419430400;
    v52[1] = 0;
    v53 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v53 = -1174400255;
    v53[1] = 0x80000;
    result = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *result = -1174399998;
    result[1] = 0;
    return result;
}
// 100A6070: using guessed type int dword_100A6070[];
// 100A6150: using guessed type int dword_100A6150[];
// 100A74A8: using guessed type int dword_100A74A8;
// 100A74AC: using guessed type int dword_100A74AC;
// 100A74B0: using guessed type int dword_100A74B0;
// 100B8C90: using guessed type int dword_100B8C90;
// 104B0340: using guessed type int gMessageX;
// 104B0344: using guessed type int gMessageY;
// 104B0348: using guessed type int dword_104B0348;
// 104B0358: using guessed type char byte_104B0358;
// 104B0360: using guessed type char byte_104B0360;
// 104B0364: using guessed type int dword_104B0364;
// 104B0368: using guessed type int dword_104B0368;
// 104B036C: using guessed type int dword_104B036C;
// 104B0370: using guessed type int dword_104B0370;
// 106C0258: using guessed type int dword_106C0258;
// 106C0680: using guessed type int dword_106C0680;
// 106C65E4: using guessed type int dword_106C65E4;
// 11829158: using guessed type int dword_11829158[];
// 11829238: using guessed type int dword_11829238[];
