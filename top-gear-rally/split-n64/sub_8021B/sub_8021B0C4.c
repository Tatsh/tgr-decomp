#include "../../types-n64.h"
//----- (8021B0C4) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_8021B0C4(float *a1, float a2, float a3, float a4, float a5) {
    float v7; // $f0
    float v8; // [sp+2Ch] [-4h]

    v7 = sub_80261610(a2);
    flt_8031B1F0 = a1[12];
    flt_8031B1F4 = a1[13];
    v8 = v7 * a3;
    flt_8031B1F8 = a1[14];
    sub_8022494C(&flt_8031ABF0, &flt_8031B1F0, a1, a3);
    sub_802244FC((float *)dword_8031ABD0, a1 + 4, v8);
    sub_802244FC((float *)dword_8031ABE0, a1 + 8, (float)(v8 * a5) / a4);
    flt_8031B22C = 6.8699406e28;
    flt_8031B230 = -2.6755534e19;
    flt_8031B234 = -1.9874443e37;
    sub_80224894((float *)&dword_8031B1FC, &flt_8031ABF0, (float *)dword_8031ABD0);
    sub_802248C8((float *)&dword_8031B1FC, (float *)dword_8031ABE0);
    sub_80224894((float *)&dword_8031B220, &flt_8031ABF0, (float *)dword_8031ABD0);
    sub_8022483C((float *)&dword_8031B220, (float *)dword_8031ABE0);
    sub_80224808((float *)&dword_8031B208, &flt_8031ABF0, (float *)dword_8031ABD0);
    sub_802248C8((float *)&dword_8031B208, (float *)dword_8031ABE0);
    sub_80224808((float *)&dword_8031B214, &flt_8031ABF0, (float *)dword_8031ABD0);
    sub_8022483C((float *)&dword_8031B214, (float *)dword_8031ABE0);
    sub_802248FC((float *)&dword_8031B208, (float *)&dword_8031B208, &flt_8031B1F0, 0.75);
    sub_802248FC((float *)&dword_8031B214, (float *)&dword_8031B214, &flt_8031B1F0, 0.75);
    sub_802248FC((float *)&dword_8031B1FC, (float *)&dword_8031B1FC, &flt_8031B1F0, 0.75);
    sub_802248FC((float *)&dword_8031B220, (float *)&dword_8031B220, &flt_8031B1F0, 0.75);
    flt_8028AACC = a3;
    flt_8028AAC4 = a2;
}
// 8021B2D8: write access to const memory at 8028AACC has been detected
// 8021B2F4: write access to const memory at 8028AAC4 has been detected
// 8021B1C4: write access to const memory at 8031B22C has been detected
// 8021B1C8: write access to const memory at 8031B230 has been detected
// 8021B1D0: write access to const memory at 8031B234 has been detected
// 8021B14C: write access to const memory at 8031B1F0 has been detected
// 8021B15C: write access to const memory at 8031B1F4 has been detected
// 8021B170: write access to const memory at 8031B1F8 has been detected
// 8028AAC4: using guessed type float flt_8028AAC4;
// 8028AACC: using guessed type float flt_8028AACC;
// 8031ABD0: using guessed type int dword_8031ABD0[4];
// 8031ABE0: using guessed type int dword_8031ABE0[4];
// 8031ABF0: using guessed type float flt_8031ABF0;
// 8031B1F0: using guessed type float flt_8031B1F0;
// 8031B1F4: using guessed type float flt_8031B1F4;
// 8031B1F8: using guessed type float flt_8031B1F8;
// 8031B1FC: using guessed type int dword_8031B1FC;
// 8031B208: using guessed type int dword_8031B208;
// 8031B214: using guessed type int dword_8031B214;
// 8031B220: using guessed type int dword_8031B220;
// 8031B22C: using guessed type float flt_8031B22C;
// 8031B230: using guessed type float flt_8031B230;
// 8031B234: using guessed type float flt_8031B234;
