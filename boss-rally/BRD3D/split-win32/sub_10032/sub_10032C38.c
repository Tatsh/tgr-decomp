#include "types-win32.h"
//----- (10032C38) --------------------------------------------------------
int __cdecl sub_10032C38(int a1, int a2, int a3, int a4, int a5) {
    int result; // eax
    _DWORD *v6; // [esp+4h] [ebp-8h]
    _DWORD *v7; // [esp+8h] [ebp-4h]

    *(_DWORD *)&gUnk06594.gap1C8[12556] = (gUnk06594.gap1C8[12556] + 1) & 0x1F;
    if (a5) {
        v7 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v7 = -419430400;
        v7[1] = 0;
        if (a3 >= 0)
            sub_1003289F(a1, a2, a3, a4);
        else
            sub_1003289F(a1, a2, -a3, a4);
    }
    dword_106C1174 = 0;
    word_106C1788[8 * *(_DWORD *)&gUnk06594.gap1C8[12556]] = 2 * gWidth;
    word_106C178A[8 * *(_DWORD *)&gUnk06594.gap1C8[12556]] = 2 * gHeight;
    word_106C178C[8 * *(_DWORD *)&gUnk06594.gap1C8[12556]] = 511;
    word_106C178E[8 * *(_DWORD *)&gUnk06594.gap1C8[12556]] = 0;
    word_106C1790[8 * *(_DWORD *)&gUnk06594.gap1C8[12556]] = 4 * (gWidth / 2);
    word_106C1792[8 * *(_DWORD *)&gUnk06594.gap1C8[12556]] = 4 * (gHeight / 2);
    word_106C1794[8 * *(_DWORD *)&gUnk06594.gap1C8[12556]] = 511;
    word_106C1796[8 * *(_DWORD *)&gUnk06594.gap1C8[12556]] = 0;
    v6 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v6 = 58720272;
    v6[1] = &word_106C1788[8 * *(_DWORD *)&gUnk06594.gap1C8[12556]];
    *(_DWORD *)&gUnk06594.gap1C8[11664] = word_106C178C[8 * *(_DWORD *)&gUnk06594.gap1C8[12556]];
    result = 16 * *(_DWORD *)&gUnk06594.gap1C8[12556];
    *(_DWORD *)&gUnk06594.gap1C8[12400] = word_106C1794[8 * *(_DWORD *)&gUnk06594.gap1C8[12556]];
    return result;
}
// 100A81C0: using guessed type int gWidth;
// 100A81C4: using guessed type int gHeight;
// 106C0680: using guessed type int dword_106C0680;
// 106C1174: using guessed type int dword_106C1174;
// 106C1788: using guessed type __int16 word_106C1788[];
// 106C178A: using guessed type __int16 word_106C178A[];
// 106C178C: using guessed type __int16 word_106C178C[];
// 106C178E: using guessed type __int16 word_106C178E[];
// 106C1790: using guessed type __int16 word_106C1790[];
// 106C1792: using guessed type __int16 word_106C1792[];
// 106C1794: using guessed type __int16 word_106C1794[];
