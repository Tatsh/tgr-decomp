#include "../../types-win32.h"
//----- (10067AE0) --------------------------------------------------------
double __cdecl sub_10067AE0(int a1, int a2, float a3, int a4) {
    double v4;   // st7
    int v6[3];   // [esp+8h] [ebp-24h] BYREF
    float v7[3]; // [esp+14h] [ebp-18h] BYREF
    float v8[3]; // [esp+20h] [ebp-Ch] BYREF
    float v9;    // [esp+38h] [ebp+Ch]
    float v10;   // [esp+38h] [ebp+Ch]

    sub_1003AEE0((float *)v6, (float *)a1, (float *)LODWORD(a3));
    sub_1003AEE0(v8, (float *)LODWORD(a3), (float *)a4);
    sub_1003AEE0(v7, (float *)a1, (float *)a2);
    v4 = sub_1003B170((float *)v6);
    if (v4 != 0.0) {
        v9 = v4;
        sub_1003AD70((int)v6, v9);
    }
    v10 = -(sub_1003AC90(v7, (float *)v6) / *(float *)&dword_106C2CFC);
    return (1.0 - sub_1003AC90(v8, (float *)v6) / *(float *)&dword_106C2CFC * -0.002915452) /
           (1.0 - v10 * 0.002915452);
}
// 106C2CFC: using guessed type int dword_106C2CFC;
