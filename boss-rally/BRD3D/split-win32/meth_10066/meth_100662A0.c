#include "types-win32.h"
//----- (100662A0) --------------------------------------------------------
int __thiscall meth_100662A0(_DWORD *this) {
    int v2;     // ecx
    int v3;     // eax
    _DWORD *v4; // eax
    int v5;     // ecx
    double v6;  // st7
    __int16 v7; // cx
    int result; // eax

    if (g_GameMode) {
        if (g_GameMode == 1) {
            v2 = 2;
        } else if (g_GameMode == 6) {
            v2 = 9999;
        } else {
            v2 = dword_100B36FC;
        }
    } else {
        v2 = dword_100B4050;
    }
    v3 = ((char *)this - (char *)&unk_10ACD498) >> 7;
    this[25] = v3;
    *((_BYTE *)this + 92) = byte_100B37D0[3 * v3];
    *((_BYTE *)this + 93) = byte_100B37D1[3 * v3];
    *((_BYTE *)this + 94) = byte_100B37D2[3 * v3];
    this[26] = 0;
    this[29] = v3 >= dword_100B4050 + 13;
    if (v3 >= v2) {
        v5 = this[29];
        this[24] = 0;
        if (v5 == 1) {
            v6 = (double)(600 * (v3 - dword_100B4050) - 7760);
        } else if (g_chosenTrack == 2 || g_chosenTrack == 8) {
            v6 = (double)(520 * v3);
        } else {
            v6 = (double)(550 * v3);
        }
        *((float *)this + 20) = v6;
        sub_10065B20(dword_106C7CB8, *((float *)this + 20));
        *this = dword_10AF9B38;
        this[1] = dword_10AF9B3C;
        this[2] = dword_10AF9B40;
        this[10] = dword_10AF988C;
        this[11] = dword_10ACD490;
        this[19] = dword_10AF96C0;
        this[18] = dword_10AF96C0;
        this[17] = dword_10AF9B44;
        this[16] = dword_10AF9B44;
        debugPrint((void *)this[25]);
        this[3] = *this;
        this[4] = this[1];
        this[5] = this[2];
        this[12] = 0;
        this[14] = 0;
        this[13] = 0;
        v7 = dword_104BBE08 - 1;
        if ((__int16)(dword_104BBE08 - 1) > 2 || v7 < 0)
            v7 = 0;
        this[15] = (&stringOffsets[g_chosenTrack][21 * dword_10ACED0C])[7 * v7 + 17];
        this[21] = dword_100B36F8 - this[25] - 1;
    } else {
        v4 = &dword_10ACDEA8[2778 * v3];
        this[24] = v4;
        v4[960] = this;
    }
    result = dword_100B4050;
    if (this[25] >= dword_100B4050)
        return MakeEnemyCarColorPanels_0((size_t)this);
    this[30] = 0;
    this[31] = 0;
    return result;
}
// 100AA010: using guessed type int g_GameMode;
// 100B36F8: using guessed type int dword_100B36F8;
// 100B36FC: using guessed type int dword_100B36FC;
// 100B380C: using guessed type int g_chosenTrack;
// 100B4050: using guessed type int dword_100B4050;
// 100BD2A8: using guessed type char **stringOffsets[16];
// 104BBE08: using guessed type int dword_104BBE08;
// 10ACD490: using guessed type int dword_10ACD490;
// 10ACED0C: using guessed type int dword_10ACED0C;
// 10AF96C0: using guessed type int dword_10AF96C0;
// 10AF988C: using guessed type int dword_10AF988C;
// 10AF9B38: using guessed type int dword_10AF9B38;
// 10AF9B3C: using guessed type int dword_10AF9B3C;
// 10AF9B40: using guessed type int dword_10AF9B40;
// 10AF9B44: using guessed type int dword_10AF9B44;
