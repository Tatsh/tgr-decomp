#include "types-win32.h"
//----- (10031866) --------------------------------------------------------
char sub_10031866() {
    int v0;     // eax
    float v2;   // [esp+4h] [ebp-44h]
    float v3;   // [esp+Ch] [ebp-3Ch]
    float v4;   // [esp+14h] [ebp-34h]
    float v5;   // [esp+1Ch] [ebp-2Ch]
    float v6;   // [esp+24h] [ebp-24h]
    float v7;   // [esp+2Ch] [ebp-1Ch]
    _DWORD *v8; // [esp+34h] [ebp-14h]
    _DWORD *v9; // [esp+38h] [ebp-10h]
    float v10;  // [esp+3Ch] [ebp-Ch]
    int v11;    // [esp+40h] [ebp-8h]
    float v12;  // [esp+44h] [ebp-4h]

    if (*(_DWORD *)&gUnk06594.gap1C8[12500]) {
        byte_106C0200 = 0;
        byte_106C1614 = 0;
        byte_106C0260 = 0;
        byte_10690BE8 = 64;
        if (dword_100B4050 == 2)
            *(_DWORD *)&gUnk06594.gapC[12] = 992;
        else
            *(_DWORD *)&gUnk06594.gapC[12] = 968;
        *(_DWORD *)&gUnk06594.gap1C8[12176] = 1020;
    } else if (*(_DWORD *)&gUnk06594.gap1C8[12504]) {
        byte_106C0260 = -72;
        byte_106C1614 = -72;
        byte_106C0200 = -40;
        byte_10690BE8 = 64;
        if (dword_100B4050 == 2) {
            *(_DWORD *)&gUnk06594.gapC[12] = 950;
            *(_DWORD *)&gUnk06594.gap1C8[12176] = 1000;
        } else {
            *(_DWORD *)&gUnk06594.gapC[12] = 800;
            *(_DWORD *)&gUnk06594.gap1C8[12176] = 1050;
        }
    } else if (*(_DWORD *)&gUnk06594.gap1C8[12508]) {
        byte_106C0260 = 96;
        byte_106C1614 = 104;
        byte_106C0200 = 112;
        byte_10690BE8 = 64;
        if (dword_100A79CC > 0 && (dword_100A79CC & 1) != 0) {
            v12 = 100.0 / (sub_1003B0A0((float *)(*(_DWORD *)&gUnk06594.gap1C8[12104] + 48),
                                        &flt_104B0378) +
                           100.0);
            v7 = (float)(unsigned __int8)byte_106C0260;
            byte_106C0260 = (__int64)((1.0 - v12) * v7 + 240.0 * v12);
            v6 = (float)(unsigned __int8)byte_106C1614;
            byte_106C1614 = (__int64)((1.0 - v12) * v6 + 248.0 * v12);
            v5 = (float)(unsigned __int8)byte_106C0200;
            byte_106C0200 = (__int64)((1.0 - v12) * v5 + 255.0 * v12);
        }
        if (dword_100B4050 == 2) {
            *(_DWORD *)&gUnk06594.gapC[12] = 930;
            *(_DWORD *)&gUnk06594.gap1C8[12176] = 1000;
        } else {
            *(_DWORD *)&gUnk06594.gapC[12] = 850;
            *(_DWORD *)&gUnk06594.gap1C8[12176] = 1025;
        }
    } else if (*(_DWORD *)&gUnk06594.gap1C8[12496]) {
        v11 = (__int64)((*(float *)(dword_106C2CF8 + 56) - gUnk06594.field_4900) /
                        (*(float *)gUnk06594.gap4904 - gUnk06594.field_4900) * 255.0);
        if (v11 >= 0) {
            if (v11 > 255)
                LOBYTE(v11) = -1;
        } else {
            LOBYTE(v11) = 0;
        }
        if (gChosenTrack) {
            byte_106C0260 = gUnk06594.gap493C[12];
            byte_106C1614 = gUnk06594.gap493C[13];
            byte_106C0200 = gUnk06594.gap493C[14];
        } else {
            if (*(float *)(*(_DWORD *)&gUnk06594.gap1C8[12104] + 52) <= 1024.0)
                v10 = 0.0;
            else
                v10 = *(float *)(*(_DWORD *)&gUnk06594.gap1C8[12104] + 48) * 0.00043945311 *
                      ((*(float *)(*(_DWORD *)&gUnk06594.gap1C8[12104] + 52) - 1024.0) *
                       0.00087890623);
            v4 = (float)(unsigned __int8)gUnk06594.gap493C[12];
            byte_106C0260 = (__int64)((1.0 - v10) * v4 + 160.0 * v10);
            v3 = (float)(unsigned __int8)gUnk06594.gap493C[13];
            byte_106C1614 = (__int64)((1.0 - v10) * v3 + 160.0 * v10);
            v2 = (float)(unsigned __int8)gUnk06594.gap493C[14];
            byte_106C0200 = (__int64)((1.0 - v10) * v2 + 160.0 * v10);
        }
        byte_10690BE8 = v11;
        if (dword_100B4050 == 2)
            *(_DWORD *)&gUnk06594.gapC[12] = 995;
        else
            *(_DWORD *)&gUnk06594.gapC[12] = 980;
        *(_DWORD *)&gUnk06594.gap1C8[12176] = 1000;
    } else {
        byte_106C0260 = 0;
        byte_106C1614 = 0;
        byte_106C0200 = 0;
        byte_10690BE8 = -1;
        *(_DWORD *)&gUnk06594.gapC[12] = 0;
        *(_DWORD *)&gUnk06594.gap1C8[12176] = 1000;
    }
    dword_106C2CF4 =
        128000 / (*(_DWORD *)&gUnk06594.gap1C8[12176] - *(_DWORD *)&gUnk06594.gapC[12]);
    dword_106C1618 = ((500 - *(_DWORD *)&gUnk06594.gapC[12]) << 8) /
                     (*(_DWORD *)&gUnk06594.gap1C8[12176] - *(_DWORD *)&gUnk06594.gapC[12]);
    v9 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v9 = -1140850680;
    v9[1] =
        (unsigned __int16)(((500 - *(_DWORD *)&gUnk06594.gapC[12]) << 8) /
                           (*(_DWORD *)&gUnk06594.gap1C8[12176] - *(_DWORD *)&gUnk06594.gapC[12])) |
        ((unsigned __int16)(128000 /
                            (*(_DWORD *)&gUnk06594.gap1C8[12176] - *(_DWORD *)&gUnk06594.gapC[12]))
         << 16);
    v8 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v8 = -134217728;
    v0 = ((unsigned __int8)byte_106C0200 << 8) | ((unsigned __int8)byte_106C1614 << 16) |
         ((unsigned __int8)byte_106C0260 << 24);
    LOBYTE(v0) = -1;
    v8[1] = v0;
    return v0;
}
// 100A79CC: using guessed type int dword_100A79CC;
// 100B380C: using guessed type int gChosenTrack;
// 100B4050: using guessed type int dword_100B4050;
// 104B0378: using guessed type float flt_104B0378;
// 10690BE8: using guessed type char byte_10690BE8;
// 106C0200: using guessed type char byte_106C0200;
// 106C0260: using guessed type char byte_106C0260;
// 106C0680: using guessed type int dword_106C0680;
// 106C1614: using guessed type char byte_106C1614;
// 106C1618: using guessed type int dword_106C1618;
// 106C2CF4: using guessed type int dword_106C2CF4;
// 106C2CF8: using guessed type int dword_106C2CF8;
