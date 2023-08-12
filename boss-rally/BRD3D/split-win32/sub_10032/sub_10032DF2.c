#include "types-win32.h"
//----- (10032DF2) --------------------------------------------------------
int sub_10032DF2() {
    int result; // eax
    _DWORD *v1; // [esp+0h] [ebp-4h]

    v1 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v1 = 58720272;
    v1[1] = &word_106C1788[8 * *(_DWORD *)&gUnk06594.gap1C8[12556]];
    result = word_106C178C[8 * *(_DWORD *)&gUnk06594.gap1C8[12556]];
    *(_DWORD *)&gUnk06594.gap1C8[11664] = result;
    *(_DWORD *)&gUnk06594.gap1C8[12400] = word_106C1794[8 * *(_DWORD *)&gUnk06594.gap1C8[12556]];
    return result;
}
// 106C0680: using guessed type int dword_106C0680;
// 106C1788: using guessed type __int16 word_106C1788[];
// 106C178C: using guessed type __int16 word_106C178C[];
// 106C1794: using guessed type __int16 word_106C1794[];
