#include "../../types-win32.h"
//----- (1002B340) --------------------------------------------------------
void sub_1002B340() {
    _DWORD *v0;        // eax
    _DWORD *v1;        // eax
    _DWORD *v2;        // eax
    _DWORD *v3;        // esi
    _DWORD *v4;        // eax
    int v5;            // esi
    _DWORD *v6;        // eax
    _DWORD *v7;        // eax
    unsigned int *v8;  // eax
    int v9;            // esi
    int v10;           // edx
    int v11;           // eax
    unsigned int *v12; // esi
    unsigned int *v13; // eax
    _DWORD *v14;       // eax
    unsigned int *v15; // [esp-54h] [ebp-58h]
    unsigned int *v16; // [esp-54h] [ebp-58h]

    if (*(float *)&dword_10575518 != 1.0) {
        v0 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v0 = -419430400;
        v0[1] = 0;
        v1 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v1 = -1174399998;
        v1[1] = 0;
        v2 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v2 = -1191181539;
        v2[1] = 252329984;
        v15 = (unsigned int *)dword_106C0680;
        dword_106C0680 += 8;
        sub_1002F900(v15, 0, 0, 0, 1003, 0, 0, 0, 1003, 0, 0, 0, 1003, 0, 0, 0, 1003);
        v3 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v3 = -503316480;
        v3[1] = (((__int64)(double)(g_Width1 << dword_106C65E4) & 0xFFF) << 12) |
                (__int64)(double)(g_Height1 << dword_106C65E4) & 0xFFF;
        v4 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v4 = -100597761;
        v4[1] = 0;
        v5 = dword_10575508;
        if (dword_10575508) {
            if (sub_1002B300())
                dword_100A81BC = 3;
            v6 = (_DWORD *)dword_106C0680;
            dword_106C0680 += 8;
            *v6 = -1191181539;
            v6[1] = 5260096;
            v16 = (unsigned int *)dword_106C0680;
            dword_106C0680 += 8;
            sub_1002F900(v16, 0, 0, 0, 1003, 0, 0, 0, 1003, 0, 0, 0, 1003, 0, 0, 0, 1003);
            v7 = (_DWORD *)dword_106C0680;
            dword_106C0680 += 8;
            *v7 = -100663296;
            v7[1] = 255;
            v8 = (unsigned int *)dword_106C0680;
            dword_106C0680 += 8;
            v9 = v5 << dword_106C65E4;
            v10 = g_Height1 << dword_106C65E4;
            v8[1] = 0;
            *v8 = ((_WORD)v10 - 1) & 0xFFF | ((v9 + 0xFFFFF) << 12) & 0xFFF000 | 0xE1000000;
        }
        v11 = dword_10575500;
        if (dword_10575500 >= g_Width1) {
            if (*(float *)&dword_10575518 == 0.0 && dword_100A81BC) {
                v13 = (unsigned int *)dword_106C0680;
                dword_106C0680 += 8;
                --dword_100A81BC;
                *v13 = ((unsigned __int16)(g_Height1 << dword_106C65E4) - 1) & 0xFFF |
                       (((g_Width1 << dword_106C65E4) + 0xFFFFF) << 12) & 0xFFF000 | 0xE1000000;
                v13[1] = 0;
            }
        } else if (dword_100A81BC) {
            v12 = (unsigned int *)dword_106C0680;
            dword_106C0680 += 8;
            --dword_100A81BC;
            *v12 = ((unsigned __int16)(g_Height1 << dword_106C65E4) - 1) & 0xFFF |
                   (((g_Width1 << dword_106C65E4) + 0xFFFFF) << 12) & 0xFFF000 | 0xE1000000;
            v12[1] = ((v11 << dword_106C65E4) & 0xFFF) << 12;
        }
        v14 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        v14[1] = 0;
        *v14 = -419430400;
    }
}
// 100A81BC: using guessed type int dword_100A81BC;
// 10575500: using guessed type int dword_10575500;
// 10575508: using guessed type int dword_10575508;
// 10575518: using guessed type int dword_10575518;
// 106C0680: using guessed type int dword_106C0680;
// 106C0684: using guessed type int g_Width1;
// 106C299C: using guessed type int g_Height1;
// 106C65E4: using guessed type int dword_106C65E4;
// 106C65EC: using guessed type int dword_106C65EC;
