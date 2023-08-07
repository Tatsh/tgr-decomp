#include "../../types-win32.h"
//----- (10014450) --------------------------------------------------------
_DWORD *__cdecl sub_10014450(int a1, int a2) {
    _DWORD *v2;        // eax
    _DWORD *v3;        // eax
    _DWORD *v4;        // eax
    _DWORD *v5;        // eax
    unsigned int *v6;  // eax
    _DWORD *v7;        // eax
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
    _DWORD *v19;       // eax
    _DWORD *v20;       // eax
    _DWORD *v21;       // eax
    _DWORD *v22;       // eax
    _DWORD *v23;       // eax
    _DWORD *v24;       // eax
    _DWORD *v25;       // eax
    unsigned int *v27; // [esp-44h] [ebp-48h]

    v2 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v2 = -419430400;
    v2[1] = 0;
    v3 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v3 = -1174399998;
    v3[1] = 0;
    v4 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v4 = -1157627903;
    v4[1] = -1;
    v5 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v5 = -1174402046;
    v5[1] = dword_106C0258;
    v27 = (unsigned int *)dword_106C0680;
    dword_106C0680 += 8;
    sub_1002F900(v27, 0, 0, 0, 1003, 1001, 0, 1003, 0, 0, 0, 0, 1003, 1001, 0, 1003, 0);
    v6 = (unsigned int *)dword_106C0680;
    dword_106C0680 += 8;
    *v6 = dword_1182931C & 0xFFFFFF | 0xDC000000;
    v6[1] = 1;
    v7 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v7 = -40894464;
    v7[1] = &unk_100BAAC8;
    v8 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v8 = -175112192;
    v8[1] = 117538912;
    v9 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v9 = -436207616;
    v9[1] = 0;
    v10 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v10 = -218103808;
    v10[1] = 125825280;
    v11 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v11 = -419430400;
    v11[1] = 0;
    v12 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v12 = -175632384;
    v12[1] = 98400;
    v13 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v13 = -234881024;
    v13[1] = 1032444;
    v14 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v14 = -1174401534;
    v14[1] = 0;
    v15 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v15 = -1174400255;
    v15[1] = 0;
    v16 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v16 = -1191181823;
    v16[1] = 4;
    v17 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v17 = -1174403582;
    v17[1] = 192;
    if (dword_106C6620) {
        v18 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v18 = -1174404094;
        v18[1] = 128;
        v19 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v19 = -1191181539;
        v19[1] = 5262160;
        sub_10013D90(a1, (unsigned __int16)dword_1039B714, 224, 0xE0u, 0xFFu);
    }
    v20 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v20 = -419430400;
    v20[1] = 0;
    v21 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v21 = -1174400255;
    v21[1] = 0x80000;
    v22 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v22 = -1191181823;
    v22[1] = 0;
    v23 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v23 = -1174403582;
    v23[1] = dword_106C0688;
    v24 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v24 = -1174404094;
    v24[1] = dword_106C0920;
    v25 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v25 = -1191182334;
    v25[1] = 1;
    return sub_10013A40(a2);
}
// 1039B714: using guessed type int dword_1039B714;
// 106C0258: using guessed type int dword_106C0258;
// 106C0680: using guessed type int dword_106C0680;
// 106C0688: using guessed type int dword_106C0688;
// 106C0920: using guessed type int dword_106C0920;
// 106C6620: using guessed type int dword_106C6620;
// 1182931C: using guessed type int dword_1182931C;
