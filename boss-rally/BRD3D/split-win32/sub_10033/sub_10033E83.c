#include "types-win32.h"
//----- (10033E83) --------------------------------------------------------
_DWORD *__cdecl sub_10033E83(int a1, float a2, float a3, float a4, float a5) {
    float v6;  // [esp+0h] [ebp-18h]
    float a3a; // [esp+4h] [ebp-14h]
    float a3b; // [esp+4h] [ebp-14h]
    float a4a; // [esp+8h] [ebp-10h]
    float a4b; // [esp+8h] [ebp-10h]

    a4a = *(float *)(a1 + 56) + *(float *)(a1 + 8);
    a3a = *(float *)(a1 + 52) + *(float *)(a1 + 4);
    v6 = *(float *)(a1 + 48) + *(float *)a1;
    sub_100309A0((int)&stru_106C3380.gap1C8[9080],
                 *(float *)(a1 + 48),
                 *(float *)(a1 + 52),
                 *(float *)(a1 + 56),
                 v6,
                 a3a,
                 a4a,
                 *(float *)(a1 + 32),
                 *(float *)(a1 + 36),
                 *(float *)(a1 + 40));
    *(float *)&stru_106C3380.gap1C8[9580] = a3;
    dword_106C3360 = 0.80000001;
    a4b = a4 / a5;
    a3b = a2 * 1.3333334 * (a5 / a4) * 57.295776;
    sub_10030930(flt_106C0218, &word_106C067C, a3b, a4b, 0.80000001, a3);
    sub_100306C0((float *)&stru_106C3380.gap1C8[9080], flt_106C0218, &flt_106C29A8);
    dword_106C32D0 = (int)sub_10069490();
    return sub_100307A0(&flt_106C29A8, (_DWORD *)dword_106C32D0);
}
// 106C29A8: using guessed type float flt_106C29A8;
// 106C32D0: using guessed type int dword_106C32D0;
