#include "../../types-win32.h"
//----- (10032A42) --------------------------------------------------------
int __cdecl sub_10032A42(int a1, int a2, int a3, int a4, int a5) {
    int result; // eax
    _DWORD *v6; // [esp+4h] [ebp-4h]

    dword_106C6654 = ((_BYTE)dword_106C6654 + 1) & 0x1F;
    if (a5) {
        if (a3 >= 0)
            sub_1003289F(a1, a2, a3, a4);
        else
            sub_1003289F(a1, a2, -a3, a4);
    }
    if (dword_106C65E4) {
        LOWORD(a1) = 2 * a1;
        LOWORD(a2) = 2 * a2;
        a3 *= 2;
        LOWORD(a4) = 2 * a4;
    }
    if (a3 >= 0) {
        if (dword_106C3364)
            word_106C1788[8 * dword_106C6654] = -2 * a3;
        else
            word_106C1788[8 * dword_106C6654] = 2 * a3;
        dword_106C1174 = 0;
    } else {
        if (dword_106C3364)
            word_106C1788[8 * dword_106C6654] = -2 * a3;
        else
            word_106C1788[8 * dword_106C6654] = 2 * a3;
        a3 = -a3;
        dword_106C1174 = 1;
    }
    word_106C178A[8 * dword_106C6654] = 2 * a4;
    word_106C178C[8 * dword_106C6654] = 511;
    word_106C178E[8 * dword_106C6654] = 0;
    word_106C1790[8 * dword_106C6654] = 2 * (a3 + 2 * a1);
    word_106C1792[8 * dword_106C6654] = 2 * (a4 + 2 * a2);
    word_106C1794[8 * dword_106C6654] = 511;
    word_106C1796[8 * dword_106C6654] = 0;
    v6 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v6 = 58720272;
    v6[1] = &word_106C1788[8 * dword_106C6654];
    dword_106C62D8 = word_106C178C[8 * dword_106C6654];
    result = word_106C1794[8 * dword_106C6654];
    dword_106C65B8 = result;
    return result;
}
// 106C0680: using guessed type int dword_106C0680;
// 106C1174: using guessed type int dword_106C1174;
// 106C1788: using guessed type __int16 word_106C1788[];
// 106C178A: using guessed type __int16 word_106C178A[];
// 106C178C: using guessed type __int16 word_106C178C[];
// 106C178E: using guessed type __int16 word_106C178E[];
// 106C1790: using guessed type __int16 word_106C1790[];
// 106C1792: using guessed type __int16 word_106C1792[];
// 106C1794: using guessed type __int16 word_106C1794[];
// 106C3364: using guessed type int dword_106C3364;
// 106C62D8: using guessed type int dword_106C62D8;
// 106C65B8: using guessed type int dword_106C65B8;
// 106C65E4: using guessed type int dword_106C65E4;
// 106C6654: using guessed type int dword_106C6654;
