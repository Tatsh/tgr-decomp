#include "types-win32.h"
//----- (10031688) --------------------------------------------------------
_DWORD *__cdecl sub_10031688(int a1, int a2, int a3, int a4, __int16 a5, __int16 a6, int a7) {
    _DWORD *result;       // eax
    _DWORD *v8;           // [esp+0h] [ebp-20h]
    _DWORD *v9;           // [esp+4h] [ebp-1Ch]
    unsigned int *v10;    // [esp+8h] [ebp-18h]
    _DWORD *v11;          // [esp+Ch] [ebp-14h]
    _DWORD *v12;          // [esp+10h] [ebp-10h]
    _DWORD *v13;          // [esp+14h] [ebp-Ch]
    _DWORD *v14;          // [esp+18h] [ebp-8h]
    unsigned __int16 v15; // [esp+1Ch] [ebp-4h]

    if (*(_DWORD *)&gUnk06594.gap1C8[12444]) {
        a1 *= 2;
        a2 *= 2;
        a3 *= 2;
        a4 *= 2;
    }
    v15 = (a7 >> 2) & 0x3E | (8 * a6) & 0x7C0 | (a5 << 8) & 0xF800 | 1;
    v14 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v14 = -419430400;
    v14[1] = 0;
    v13 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v13 = -1191181539;
    v13[1] = 252329984;
    v12 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v12 = -1174399998;
    v12[1] = 3145728;
    v11 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v11 = -150994944;
    v11[1] = (v15 << 16) | v15;
    v10 = (unsigned int *)dword_106C0680;
    dword_106C0680 += 8;
    *v10 = ((unsigned __int16)((a4 + a2) << gUnk06594.gap1C8[12444]) - 1) & 0xFFF |
           ((((unsigned __int16)((a3 + a1) << gUnk06594.gap1C8[12444]) - 1) & 0xFFF) << 12) |
           0xE1000000;
    v10[1] = a2 & 0xFFF | ((a1 & 0xFFF) << 12);
    v9 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v9 = -419430400;
    v9[1] = 0;
    v8 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v8 = -1174399998;
    result = v8;
    v8[1] = 0;
    return result;
}
// 106C0680: using guessed type int dword_106C0680;
