#include "../types-win32.h"
//----- (1003289F) --------------------------------------------------------
int __cdecl sub_1003289F(int a1, int a2, int a3, int a4) {
    int result;  // eax
    float v5;    // [esp+4h] [ebp-20h]
    float v6;    // [esp+Ch] [ebp-18h]
    float v7;    // [esp+14h] [ebp-10h]
    float v8;    // [esp+18h] [ebp-Ch]
    _DWORD *v9;  // [esp+1Ch] [ebp-8h]
    _DWORD *v10; // [esp+20h] [ebp-4h]

    if (a1 < dword_10575508) {
        a3 -= dword_10575508 - a1;
        a1 = dword_10575508;
    }
    if (a3 + a1 > dword_10575500)
        a3 = dword_10575500 - a1;
    if (a3 < 0)
        a3 = 0;
    if (a2 < dword_1057550C) {
        a4 -= dword_1057550C - a2;
        a2 = dword_1057550C;
    }
    if (a4 + a2 > dword_105754FC)
        a4 = dword_105754FC - a2;
    if (a4 < 0)
        a4 = 0;
    if (dword_106C65E4) {
        a1 *= 2;
        a2 *= 2;
        a3 *= 2;
        a4 *= 2;
    }
    v10 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v10 = -419430400;
    v10[1] = 0;
    v9 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    v8 = (float)a1;
    v7 = (float)a2;
    *v9 = (__int64)(v7 * 1.0) & 0xFFF | (((__int64)(v8 * 1.0) & 0xFFF) << 12) | 0xE2000000;
    v6 = (float)(a3 + a1);
    v5 = (float)(a4 + a2);
    result = (__int64)(v5 * 1.0) & 0xFFF;
    v9[1] = result | (((__int64)(v6 * 1.0) & 0xFFF) << 12);
    return result;
}
// 105754FC: using guessed type int dword_105754FC;
// 10575500: using guessed type int dword_10575500;
// 10575508: using guessed type int dword_10575508;
// 1057550C: using guessed type int dword_1057550C;
// 106C0680: using guessed type int dword_106C0680;
// 106C65E4: using guessed type int dword_106C65E4;
