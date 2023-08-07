#include "../../types-win32.h"
//----- (10065740) --------------------------------------------------------
int __thiscall meth_10065740(_DWORD *this) {
    int v2;         // eax
    long double v3; // st4
    double v4;      // st7
    __int16 v5;     // cx
    int v6;         // eax
    int v7;         // ecx
    int result;     // eax
    int v9;         // [esp+0h] [ebp-28h]
    int v10;        // [esp+4h] [ebp-24h]
    float v11;      // [esp+8h] [ebp-20h]
    float v12;      // [esp+8h] [ebp-20h]
    int v13;        // [esp+8h] [ebp-20h]
    float v14;      // [esp+14h] [ebp-14h]
    float v15;      // [esp+18h] [ebp-10h]
    float v16;      // [esp+18h] [ebp-10h]
    float v17;      // [esp+18h] [ebp-10h]
    float v18;      // [esp+1Ch] [ebp-Ch]
    float v19;      // [esp+20h] [ebp-8h]
    float v20;      // [esp+24h] [ebp-4h]

    meth_10076B20(this);
    if (g_GameMode == 2 || g_GameMode == 4 || g_GameMode == 3 && dword_100B4050 == 1 ||
        !g_GameMode) {
        meth_10076A40(this, this[80]);
        v14 = 0.0;
        v15 = 0.5;
    } else {
        meth_10076A40(this, this[80]);
        if (g_NetworkPlay)
            v2 = this[81];
        else
            v2 = this[80];
        v14 = (float)(v2 >> 1);
        v15 = (float)((v2 & 1) == 0);
    }
    v20 = cos_(dword_106C7C94);
    v18 = sin_(dword_106C7C94);
    v11 = dword_106C7C94 - -1.5707964;
    v19 = cos_(v11);
    v12 = dword_106C7C94 - -1.5707964;
    v16 = v15 - 0.5;
    v3 = sin_(v12) * v16;
    v4 = v19 * v16;
    v17 = v14 - -1.0;
    *(float *)&v13 = flt_106C7C90 - -0.1;
    *(float *)&v10 = flt_106C7C8C - v3 * 3.0 - v18 * v17 * 8.0;
    *(float *)&v9 = flt_106C7C88 - v4 * 3.0 - v20 * v17 * 8.0;
    meth_10076420((float *)this, v9, v10, v13);
    *((float *)this + 1021) = (v14 - -0.5) * -8.0;
    meth_100764C0((float *)this, dword_106C7C94);
    this[992] = this[12];
    this[993] = this[13];
    this[994] = this[14];
    this[983] = this[12];
    this[984] = this[13];
    this[985] = this[14];
    meth_10001FF0((#482 *)this);
    this[936] = 0;
    this[937] = 0;
    this[938] = 0;
    this[939] = -180;
    meth_100767A0(this, 0, 0, 0);
    if (dword_106C7CB8) {
        this[1004] = 0;
        this[1019] = 0;
        this[1017] = 0;
        v5 = dword_104BBE08 - 1;
        if ((__int16)(dword_104BBE08 - 1) > 2 || v5 < 0)
            v5 = 0;
        this[1020] = (&stringOffsets[g_chosenTrack][21 * this[921]])[7 * v5 + 17];
        this[995] = dword_106C7CB8;
        this[996] = 0;
        sub_1003ADA0(
            (float *)this + 997, (float *)(dword_106C7CB8 + 76), (float *)(dword_106C7CB8 + 116));
    } else {
        this[997] = 1065353216;
        this[998] = 0;
        this[999] = 0;
    }
    v6 = this[80];
    v7 = dword_100B36F8 - v6;
    this[1002] = 0;
    this[1018] = 0;
    this[1022] = v7 - 1;
    this[1000] = 0;
    if (v6 < dword_100B4050 || g_GameMode == 1 || g_GameMode == 2 || g_GameMode == 4 ||
        g_GameMode == 6) {
        this[1003] = -1;
        this[1001] = -1;
    } else {
        this[1003] = 0;
        this[1001] = 0;
    }
    this[2643] = 0;
    this[2660] = 0;
    this[2502] = 0;
    this[1037] = 0;
    this[1036] = 0;
    this[1038] = 0;
    this[1039] = 0;
    this[1040] = 0;
    this[1041] = 0;
    this[1042] = 0;
    this[1043] = 0;
    this[1044] = 0;
    this[1045] = 0;
    this[1046] = 0;
    this[1032] = 0;
    this[961] = 0;
    meth_10065630(this);
    result = meth_10065710(this);
    this[990] = 0;
    this[986] = 0;
    this[987] = 0;
    this[988] = 0;
    this[989] = 1065353216;
    return result;
}
// 100AA010: using guessed type int g_GameMode;
// 100B36F8: using guessed type int dword_100B36F8;
// 100B380C: using guessed type int g_chosenTrack;
// 100B4050: using guessed type int dword_100B4050;
// 100BD2A8: using guessed type char **stringOffsets[16];
// 1022AF18: using guessed type int g_NetworkPlay;
// 104BBE08: using guessed type int dword_104BBE08;
// 106C7C88: using guessed type float flt_106C7C88;
// 106C7C8C: using guessed type float flt_106C7C8C;
// 106C7C90: using guessed type float flt_106C7C90;
