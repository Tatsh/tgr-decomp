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

    if (dword_106C661C) {
        byte_106C0200 = 0;
        byte_106C1614 = 0;
        byte_106C0260 = 0;
        byte_10690BE8 = 64;
        if (dword_100B4050 == 2)
            dword_106C3398 = 992;
        else
            dword_106C3398 = 968;
        dword_106C64D8 = 1020;
    } else if (dword_106C6620) {
        byte_106C0260 = -72;
        byte_106C1614 = -72;
        byte_106C0200 = -40;
        byte_10690BE8 = 64;
        if (dword_100B4050 == 2) {
            dword_106C3398 = 950;
            dword_106C64D8 = 1000;
        } else {
            dword_106C3398 = 800;
            dword_106C64D8 = 1050;
        }
    } else if (dword_106C6624) {
        byte_106C0260 = 96;
        byte_106C1614 = 104;
        byte_106C0200 = 112;
        byte_10690BE8 = 64;
        if (dword_100A79CC > 0 && (dword_100A79CC & 1) != 0) {
            v12 = 100.0 / (sub_1003B0A0((float *)dword_106C6490 + 12, &flt_104B0378) + 100.0);
            v7 = (float)(unsigned __int8)byte_106C0260;
            byte_106C0260 = (__int64)((1.0 - v12) * v7 + 240.0 * v12);
            v6 = (float)(unsigned __int8)byte_106C1614;
            byte_106C1614 = (__int64)((1.0 - v12) * v6 + 248.0 * v12);
            v5 = (float)(unsigned __int8)byte_106C0200;
            byte_106C0200 = (__int64)((1.0 - v12) * v5 + 255.0 * v12);
        }
        if (dword_100B4050 == 2) {
            dword_106C3398 = 930;
            dword_106C64D8 = 1000;
        } else {
            dword_106C3398 = 850;
            dword_106C64D8 = 1025;
        }
    } else if (dword_106C6618) {
        v11 = (__int64)((*(float *)(dword_106C2CF8 + 56) - flt_106C7C80) /
                        (flt_106C7C84 - flt_106C7C80) * 255.0);
        if (v11 >= 0) {
            if (v11 > 255)
                LOBYTE(v11) = -1;
        } else {
            LOBYTE(v11) = 0;
        }
        if (g_chosenTrack) {
            byte_106C0260 = byte_106C7CC8;
            byte_106C1614 = byte_106C7CC9;
            byte_106C0200 = byte_106C7CCA;
        } else {
            if (*((float *)dword_106C6490 + 13) <= 1024.0)
                v10 = 0.0;
            else
                v10 = *((float *)dword_106C6490 + 12) * 0.00043945311 *
                      ((*((float *)dword_106C6490 + 13) - 1024.0) * 0.00087890623);
            v4 = (float)(unsigned __int8)byte_106C7CC8;
            byte_106C0260 = (__int64)((1.0 - v10) * v4 + 160.0 * v10);
            v3 = (float)(unsigned __int8)byte_106C7CC9;
            byte_106C1614 = (__int64)((1.0 - v10) * v3 + 160.0 * v10);
            v2 = (float)(unsigned __int8)byte_106C7CCA;
            byte_106C0200 = (__int64)((1.0 - v10) * v2 + 160.0 * v10);
        }
        byte_10690BE8 = v11;
        if (dword_100B4050 == 2)
            dword_106C3398 = 995;
        else
            dword_106C3398 = 980;
        dword_106C64D8 = 1000;
    } else {
        byte_106C0260 = 0;
        byte_106C1614 = 0;
        byte_106C0200 = 0;
        byte_10690BE8 = -1;
        dword_106C3398 = 0;
        dword_106C64D8 = 1000;
    }
    dword_106C2CF4 = 128000 / (dword_106C64D8 - dword_106C3398);
    dword_106C1618 = ((500 - dword_106C3398) << 8) / (dword_106C64D8 - dword_106C3398);
    v9 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v9 = -1140850680;
    v9[1] = (unsigned __int16)(((500 - dword_106C3398) << 8) / (dword_106C64D8 - dword_106C3398)) |
            ((unsigned __int16)(128000 / (dword_106C64D8 - dword_106C3398)) << 16);
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
// 100B380C: using guessed type int g_chosenTrack;
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
// 106C3398: using guessed type int dword_106C3398;
// 106C64D8: using guessed type int dword_106C64D8;
// 106C6618: using guessed type int dword_106C6618;
// 106C661C: using guessed type int dword_106C661C;
// 106C6620: using guessed type int dword_106C6620;
// 106C6624: using guessed type int dword_106C6624;
// 106C7C80: using guessed type float flt_106C7C80;
// 106C7C84: using guessed type float flt_106C7C84;
// 106C7CC8: using guessed type char byte_106C7CC8;
// 106C7CC9: using guessed type char byte_106C7CC9;
// 106C7CCA: using guessed type char byte_106C7CCA;
