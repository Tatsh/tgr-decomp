#include "../types-win32.h"
//----- (100140E0) --------------------------------------------------------
_DWORD *__cdecl sub_100140E0(int a1) {
    _DWORD *v1;        // eax
    unsigned int *v2;  // eax
    int v3;            // ecx
    _DWORD *v4;        // eax
    _DWORD *v5;        // eax
    _DWORD *v6;        // eax
    _DWORD *v7;        // eax
    _DWORD *v8;        // eax
    _DWORD *v9;        // eax
    _DWORD *v10;       // eax
    _DWORD *result;    // eax
    unsigned int *v12; // [esp-44h] [ebp-4Ch]

    v1 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v1 = -1191181539;
    v1[1] = 5259840;
    v12 = (unsigned int *)dword_106C0680;
    dword_106C0680 += 8;
    sub_1002F900(v12, 0, 0, 0, 1003, 1001, 0, 1003, 0, 0, 0, 0, 1003, 1001, 0, 1003, 0);
    v2 = (unsigned int *)dword_106C0680;
    dword_106C0680 += 8;
    v3 = dword_11829328 & 0xFFFFFF;
    v2[1] = 1;
    *v2 = v3 | 0xDC000000;
    sub_1003B4F0((int)&flt_106C0860, (float *)dword_106C6490);
    flt_106C08A0 = 0.0;
    flt_106C08A4 = 0.0;
    dword_106C08A8 = -1082130432;
    dword_106C08AC = 0;
    flt_106C08B0 = -1.0;
    flt_106C08B4 = 0.0;
    dword_106C08B8 = 0;
    dword_106C08BC = 0;
    dword_106C08C0 = 0;
    dword_106C08C4 = -1082130432;
    dword_106C08C8 = 0;
    dword_106C08CC = 0;
    dword_106C08D0 = 0;
    dword_106C08D4 = 0;
    dword_106C08D8 = 0;
    dword_106C08DC = 1065353216;
    sub_1003B470((char *)&flt_106C0860, &flt_106C0860, &flt_106C08A0);
    qmemcpy(&flt_106C08A0, &flt_106C0860, 0x40u);
    sub_1003B470((char *)flt_1039B6D0, &flt_106C0860, flt_106C0218);
    v4 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v4 = -1191181823;
    v4[1] = 4;
    v5 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v5 = -1174403582;
    v5[1] = 192;
    if (!dword_106C661C) {
        switch (g_chosenTrack) {
        case 1:
        case 7:
            sub_10013D90(a1, (unsigned __int16)dword_1039B710, 96, 0x54u, 0x38u);
            sub_10013D90(a1, (unsigned __int16)dword_1039B718, 96, 0x5Cu, 0x50u);
            break;
        case 4:
        case 10:
            sub_10013D90(a1, (unsigned __int16)dword_1039B710, 112, 0x58u, 0x38u);
            sub_10013D90(a1, (unsigned __int16)dword_1039B718, 112, 0x68u, 0x58u);
            break;
        default:
            sub_10013D90(a1, (unsigned __int16)dword_1039B710, 160, 0x88u, 0x60u);
            sub_10013D90(a1, (unsigned __int16)dword_1039B718, 112, 0x68u, 0x58u);
            break;
        }
    }
    v6 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v6 = -419430400;
    v6[1] = 0;
    v7 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v7 = -1174400255;
    v7[1] = 0x80000;
    v8 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v8 = -1191181823;
    v8[1] = 0;
    v9 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v9 = -1174403582;
    v9[1] = dword_106C0688;
    v10 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v10 = -1174404094;
    v10[1] = dword_106C0920;
    result = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *result = -1191182334;
    result[1] = 1;
    return result;
}
// 100B380C: using guessed type int g_chosenTrack;
// 1039B710: using guessed type int dword_1039B710;
// 1039B718: using guessed type int dword_1039B718;
// 106C0680: using guessed type int dword_106C0680;
// 106C0688: using guessed type int dword_106C0688;
// 106C0860: using guessed type float flt_106C0860;
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
// 106C0920: using guessed type int dword_106C0920;
// 106C661C: using guessed type int dword_106C661C;
// 11829328: using guessed type int dword_11829328;
