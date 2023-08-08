#include "types-n64.h"
//----- (8021B2F8) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_8021B2F8(float *a1, float a2, float a3, float a4, float a5) {
    float v6; // $f12
    float v7; // $f14

    sub_80264E50((float *)dword_8031AAD0,
                 a1[12],
                 a1[13],
                 a1[14],
                 *a1 + a1[12],
                 a1[1] + a1[13],
                 a1[2] + a1[14],
                 a1[8],
                 a1[9],
                 a1[10]);
    flt_8028A870 = a3;
    flt_8028A86C = 2.4000001;
    sub_80265180(v6,
                 v7,
                 (float)((float)(a2 * 1.3333334) * (float)(a5 / a4)) * 57.295776,
                 a4 / a5,
                 &word_8028A874,
                 (float *)dword_8031AA90,
                 0.0,
                 0.0,
                 1.0);
    sub_80260940((float *)dword_8031AAD0, (float *)dword_8031AA90, (int)&flt_8031AA50);
    dword_8028A878 = (int)sub_80255CD0();
    return sub_80260ED0(&flt_8031AA50, 0);
}
// 8021B390: write access to const memory at 8028A870 has been detected
// 8021B3A4: write access to const memory at 8028A86C has been detected
// 8021B434: write access to const memory at 8028A878 has been detected
// 8021B400: variable 'v6' is possibly undefined
// 8021B400: variable 'v7' is possibly undefined
// 8028A86C: using guessed type float flt_8028A86C;
// 8028A870: using guessed type float flt_8028A870;
// 8028A874: using guessed type __int16 word_8028A874;
// 8028A878: using guessed type int dword_8028A878;
// 8031AA50: using guessed type float flt_8031AA50;
// 8031AA90: using guessed type int dword_8031AA90[16];
// 8031AAD0: using guessed type int dword_8031AAD0[16];
