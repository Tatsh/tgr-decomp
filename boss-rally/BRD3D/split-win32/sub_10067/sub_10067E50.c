#include "../types-win32.h"
//----- (10067E50) --------------------------------------------------------
void __cdecl sub_10067E50(int a1, int a2, int a3, float a4, int *a5, int a6) {
    double v6; // st7
    int v7;    // eax

    v6 = sub_1003B0E0((float *)a5, (float *)(a6 + 48));
    if (v6 < *(float *)&dword_10AF9B94) {
        dword_10AF9B58 = *a5;
        dword_10AF9B5C = a5[1];
        v7 = a5[2];
        *(float *)&dword_10AF9B94 = v6;
        dword_10AF9B60 = v7;
        dword_10AF9B84 = a2;
        dword_10AF9B70 = a6;
        dword_10AF9B8C = a1;
        flt_10AF9B98 = a4;
        dword_10AF9B9C = a3;
    }
}
// 10AF9B58: using guessed type int dword_10AF9B58;
// 10AF9B5C: using guessed type int dword_10AF9B5C;
// 10AF9B60: using guessed type int dword_10AF9B60;
// 10AF9B70: using guessed type int dword_10AF9B70;
// 10AF9B84: using guessed type int dword_10AF9B84;
// 10AF9B8C: using guessed type int dword_10AF9B8C;
// 10AF9B94: using guessed type int dword_10AF9B94;
// 10AF9B98: using guessed type float flt_10AF9B98;
// 10AF9B9C: using guessed type int dword_10AF9B9C;
