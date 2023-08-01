//----- (10013A40) --------------------------------------------------------
_DWORD *__cdecl sub_10013A40(int a1) {
    _DWORD *result;      // eax
    _DWORD *v2;          // eax
    _DWORD *v3;          // eax
    _DWORD *v4;          // eax
    _DWORD *v5;          // eax
    _DWORD *v6;          // eax
    _DWORD *v7;          // eax
    unsigned int *v8;    // eax
    _DWORD *v9;          // eax
    _DWORD *v10;         // eax
    int v11;             // eax
    _DWORD *v12;         // ecx
    _DWORD *v13;         // eax
    __int16 v14;         // cx
    _WORD *v15;          // eax
    unsigned __int8 v16; // si
    int v17;             // edi
    unsigned int *v18;   // edx
    int v19;             // ecx
    bool v20;            // zf
    _DWORD *v21;         // eax
    bool v22;            // cc
    unsigned int *v23;   // [esp-44h] [ebp-6Ch]
    int v24;             // [esp+10h] [ebp-18h]
    int *v25;            // [esp+14h] [ebp-14h]
    _WORD *v26;          // [esp+18h] [ebp-10h]
    int v27;             // [esp+1Ch] [ebp-Ch]
    int v28;             // [esp+20h] [ebp-8h]
    int v29;             // [esp+24h] [ebp-4h]
    _WORD *v30;          // [esp+2Ch] [ebp+4h]

    if (!dword_106C6620 || (result = (_DWORD *)g_chosenTrack, g_chosenTrack == 2) ||
        g_chosenTrack == 8) {
        v2 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v2 = -419430400;
        v2[1] = 0;
        v3 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v3 = -1174399998;
        v3[1] = 0x100000;
        v23 = (unsigned int *)dword_106C0680;
        dword_106C0680 += 8;
        sub_1002F900(v23, 0, 0, 0, 1004, 1001, 0, 1004, 0, 0, 0, 0, 1000, 0, 0, 0, 1000);
        v4 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v4 = -1191181539;
        v4[1] = 202918480;
        v5 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v5 = -1224736768;
        v5[1] = 4;
        v6 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v6 = -1241513984;
        v6[1] = 143360;
        v7 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v7 = 16973888;
        v7[1] = dword_106C32D0;
        v8 = (unsigned int *)dword_106C0680;
        dword_106C0680 += 8;
        *v8 = dword_11829108 & 0xFFFFFF | 0xDC000000;
        v8[1] = 1;
        v9 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v9 = -234872830;
        v9[1] = 516350;
        v10 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v10 = -1157627903;
        v10[1] = -1;
        v29 = 0;
        if (dword_100B36F8 > 0) {
            v25 = (int *)(a1 + 96);
            do {
                v11 = *v25;
                if (*v25) {
                    v28 = 4;
                    v12 = (_DWORD *)dword_106C0680;
                    dword_106C0680 += 8;
                    *v12 = 17170496;
                    v12[1] = v11 + 9940;
                    v24 = v11 + 4512;
                    v30 = (_WORD *)(v11 + 9024);
                    do {
                        v13 = (_DWORD *)dword_106C0680;
                        dword_106C0680 += 8;
                        v14 = 1024;
                        *v13 = 67142655;
                        v13[1] = v24;
                        v15 = v30;
                        v16 = 0;
                        v26 = v30;
                        v27 = 1024;
                        v17 = 0x10000;
                        do {
                            if (*(v15 - 1) || *v15 || v15[1] || v15[11] || v15[12] || v15[13]) {
                                v18 = (unsigned int *)dword_106C0680;
                                dword_106C0680 += 8;
                                v19 = v14 & 0xFF00;
                                *v18 =
                                    v19 | (unsigned __int8)(v16 + 1) | ((v16 | 0xFFFFB100) << 16);
                                v15 = v26;
                                v18[1] = v19 | (unsigned __int8)(v16 + 5) | v17 & 0xFF0000;
                            }
                            v17 += 0x40000;
                            v15 += 12;
                            v16 += 4;
                            v14 = v27 + 1024;
                            v26 = v15;
                            v27 += 1024;
                        } while (v17 < 1900544);
                        v20 = v28 == 1;
                        v30 += 108;
                        v24 += 1152;
                        --v28;
                    } while (!v20);
                    v21 = (_DWORD *)dword_106C0680;
                    dword_106C0680 += 8;
                    *v21 = -1124073472;
                    v21[1] = 0;
                }
                v22 = ++v29 < dword_100B36F8;
                v25 += 32;
            } while (v22);
        }
        result = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *result = -1224736768;
        result[1] = 0x2000;
    }
    return result;
}
// 100B36F8: using guessed type int dword_100B36F8;
// 100B380C: using guessed type int g_chosenTrack;
// 106C0680: using guessed type int dword_106C0680;
// 106C32D0: using guessed type int dword_106C32D0;
// 106C6620: using guessed type int dword_106C6620;
// 11829108: using guessed type int dword_11829108;
