#include "types-win32.h"
//----- (10031DCF) --------------------------------------------------------
int sub_10031DCF() {
    int result; // eax
    int i;      // [esp+0h] [ebp-4h]

    if (!*(_DWORD *)&gUnk06594.gap1C8[12500]) {
        dword_106C0670 = 1097859072;
        dword_106C0674 = 1092616192;
        dword_106C0678 = 1101004800;
        sub_1003AE50((float *)&dword_106C0670);
    }
    if (*(_DWORD *)&gUnk06594.gap1C8[12504] || *(_DWORD *)&gUnk06594.gap1C8[12508]) {
        byte_106C1580 = ((unsigned __int8)byte_106C0260 + 765) >> 2;
        byte_106C335C = ((unsigned __int8)byte_106C1614 + 765) >> 2;
        byte_106C0968 = ((unsigned __int8)byte_106C0200 + 612) >> 2;
        byte_10690BF0 = 5 * (unsigned __int8)byte_106C0260 / 8;
        byte_106C0960 = 5 * (unsigned __int8)byte_106C1614 / 8;
        gUnk06594.gap1C8[12404] = 5 * (unsigned __int8)byte_106C0200 / 8;
    } else if (*(_DWORD *)&gUnk06594.gap1C8[12500]) {
        byte_106C1580 = -35;
        byte_106C335C = -18;
        byte_106C0968 = -1;
        byte_10690BF0 = 60;
        byte_106C0960 = 57;
        gUnk06594.gap1C8[12404] = 54;
    } else if (*(_DWORD *)&gUnk06594.gap1C8[12496]) {
        byte_106C1580 =
            (255 * (255 - (unsigned __int8)byte_10690BE8) +
             (unsigned __int8)byte_10690BE8 * (((unsigned __int8)byte_106C0260 + 255) >> 1)) /
            255;
        byte_106C335C =
            (255 * (255 - (unsigned __int8)byte_10690BE8) +
             (unsigned __int8)byte_10690BE8 * (((unsigned __int8)byte_106C1614 + 255) >> 1)) /
            255;
        byte_106C0968 =
            (204 * (255 - (unsigned __int8)byte_10690BE8) +
             (unsigned __int8)byte_10690BE8 * (((unsigned __int8)byte_106C0200 + 204) >> 1)) /
            255;
        byte_10690BF0 =
            (102 * (255 - (unsigned __int8)byte_10690BE8) +
             (unsigned __int8)byte_10690BE8 * (4 * (unsigned __int8)byte_106C0260 / 5)) /
            255;
        byte_106C0960 =
            (102 * (255 - (unsigned __int8)byte_10690BE8) +
             (unsigned __int8)byte_10690BE8 * (4 * (unsigned __int8)byte_106C1614 / 5)) /
            255;
        gUnk06594.gap1C8[12404] =
            (119 * (255 - (unsigned __int8)byte_10690BE8) +
             (unsigned __int8)byte_10690BE8 * (4 * (unsigned __int8)byte_106C0200 / 5)) /
            255;
    } else {
        byte_106C1580 = -1;
        byte_106C335C = -1;
        byte_106C0968 = -52;
        byte_10690BF0 = 102;
        byte_106C0960 = 102;
        gUnk06594.gap1C8[12404] = 119;
    }
    if (*(_DWORD *)&gUnk06594.gap1C8[12500]) {
        byte_10690FF8[0] = 34;
        gUnk06594.gap1C8[12108] = 34;
        byte_106C3358[0] = 34;
        byte_10690FF9 = 68;
        gUnk06594.gap1C8[12109] = 68;
        byte_106C3359 = 68;
        byte_10690FFA = 102;
        gUnk06594.gap1C8[12110] = 102;
        byte_106C335A = 102;
        byte_10690FFB = -1;
        gUnk06594.gap1C8[12111] = -1;
        byte_106C335B = -1;
    } else if (*(_DWORD *)&gUnk06594.gap1C8[12504]) {
        byte_10690FF8[0] = -48;
        gUnk06594.gap1C8[12108] = -48;
        byte_106C3358[0] = -16;
        byte_10690FF9 = -32;
        gUnk06594.gap1C8[12109] = -32;
        byte_106C3359 = -1;
        byte_10690FFA = -16;
        gUnk06594.gap1C8[12110] = -16;
        byte_106C335A = -1;
        byte_10690FFB = -1;
        gUnk06594.gap1C8[12111] = -1;
        byte_106C335B = -1;
    } else {
        byte_10690FF8[0] = (int)(unsigned __int8)byte_106C1580 >> 2;
        gUnk06594.gap1C8[12108] = (int)(unsigned __int8)byte_106C335C >> 2;
        byte_106C3358[0] = (int)(unsigned __int8)byte_106C0968 >> 2;
        byte_10690FF9 = (int)(unsigned __int8)byte_106C1580 >> 1;
        gUnk06594.gap1C8[12109] = (int)(unsigned __int8)byte_106C335C >> 1;
        byte_106C3359 = (int)(unsigned __int8)byte_106C0968 >> 1;
        byte_10690FFA =
            ((int)(unsigned __int8)byte_106C1580 >> 2) + ((int)(unsigned __int8)byte_106C1580 >> 1);
        gUnk06594.gap1C8[12110] =
            ((int)(unsigned __int8)byte_106C335C >> 2) + ((int)(unsigned __int8)byte_106C335C >> 1);
        byte_106C335A =
            ((int)(unsigned __int8)byte_106C0968 >> 2) + ((int)(unsigned __int8)byte_106C0968 >> 1);
        byte_10690FFB = byte_106C1580;
        gUnk06594.gap1C8[12111] = byte_106C335C;
        byte_106C335B = byte_106C0968;
    }
    dword_106C29E8 = ((unsigned __int8)gUnk06594.gap1C8[12404] << 8) |
                     ((unsigned __int8)byte_106C0960 << 16) |
                     ((unsigned __int8)byte_10690BF0 << 24);
    result = (unsigned __int8)byte_106C335C << 16;
    *(_DWORD *)&gUnk06594.gap1C8[9576] =
        ((unsigned __int8)byte_106C0968 << 8) | result | ((unsigned __int8)byte_106C1580 << 24);
    for (i = 0; i < 4; ++i) {
        result = (unsigned __int8)byte_106C3358[i] << 8;
        dword_106C0950[i] = result | ((unsigned __int8)gUnk06594.gap1C8[i + 12108] << 16) |
                            ((unsigned __int8)byte_10690FF8[i] << 24);
    }
    return result;
}
// 10690BE8: using guessed type char byte_10690BE8;
// 10690BF0: using guessed type char byte_10690BF0;
// 10690FF9: using guessed type char byte_10690FF9;
// 10690FFA: using guessed type char byte_10690FFA;
// 10690FFB: using guessed type char byte_10690FFB;
// 106C0200: using guessed type char byte_106C0200;
// 106C0260: using guessed type char byte_106C0260;
// 106C0670: using guessed type int dword_106C0670;
// 106C0674: using guessed type int dword_106C0674;
// 106C0678: using guessed type int dword_106C0678;
// 106C0950: using guessed type int dword_106C0950[];
// 106C0960: using guessed type char byte_106C0960;
// 106C0968: using guessed type char byte_106C0968;
// 106C1580: using guessed type char byte_106C1580;
// 106C1614: using guessed type char byte_106C1614;
// 106C29E8: using guessed type int dword_106C29E8;
// 106C3359: using guessed type char byte_106C3359;
// 106C335A: using guessed type char byte_106C335A;
// 106C335B: using guessed type char byte_106C335B;
// 106C335C: using guessed type char byte_106C335C;
