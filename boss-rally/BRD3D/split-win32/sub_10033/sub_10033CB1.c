#include "types-win32.h"
//----- (10033CB1) --------------------------------------------------------
int __cdecl sub_10033CB1(int a1, float a2, float a3, float a4, float a5) {
    int result; // eax
    float v6;   // [esp+0h] [ebp-8h]
    float v7;   // [esp+4h] [ebp-4h]

    v7 = sin_(a2) * a3;
    v6 = v7 * a5 / a4;
    if (dword_100AA8B4 == 2)
        v6 = v6 / 2.0;
    sub_10035C70(&dword_106C3310, (_DWORD *)(a1 + 48));
    sub_1003AFE0((int)flt_106C2990, (int)&dword_106C3310, a1, a3);
    sub_1003ACE0((int)&gUnk06594.gap1C8[8624], a1 + 16, v7);
    sub_1003ACE0((int)flt_106C0690, a1 + 32, v6);
    sub_10035C70(&dword_106C334C, flt_106C2990);
    sub_1003AF40(&dword_106C331C, flt_106C2990, (float *)&gUnk06594.gap1C8[8624]);
    sub_1003AF70(&dword_106C331C, flt_106C0690);
    sub_1003AF40(&dword_106C3340, flt_106C2990, (float *)&gUnk06594.gap1C8[8624]);
    sub_1003AF10(&dword_106C3340, flt_106C0690);
    sub_1003AEE0(&dword_106C3328, flt_106C2990, (float *)&gUnk06594.gap1C8[8624]);
    sub_1003AF70(&dword_106C3328, flt_106C0690);
    sub_1003AEE0(&dword_106C3334, flt_106C2990, (float *)&gUnk06594.gap1C8[8624]);
    sub_1003AF10(&dword_106C3334, flt_106C0690);
    sub_1003AFA0((int)&dword_106C3328, (int)&dword_106C3328, (int)&dword_106C3310, 0.75);
    sub_1003AFA0((int)&dword_106C3334, (int)&dword_106C3334, (int)&dword_106C3310, 0.75);
    sub_1003AFA0((int)&dword_106C331C, (int)&dword_106C331C, (int)&dword_106C3310, 0.75);
    sub_1003AFA0((int)&dword_106C3340, (int)&dword_106C3340, (int)&dword_106C3310, 0.75);
    flt_106C0210 = a3;
    result = LODWORD(a2);
    *(float *)&gUnk06594.gap1C8[7800] = a2;
    return result;
}
// 100AA8B4: using guessed type int dword_100AA8B4;
// 106C0210: using guessed type float flt_106C0210;
