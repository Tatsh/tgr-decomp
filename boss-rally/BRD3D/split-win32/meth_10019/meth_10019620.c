#include "types-win32.h"
//----- (10019620) --------------------------------------------------------
void __thiscall meth_10019620(void *this) {
    int v1; // [esp+0h] [ebp-4h]

    if (dword_100A79CC < 0) {
        if ((unsigned __int16)sub_1003BD50() < 0x80u) {
            flt_104B255C = 0.0;
            dword_100A79CC = 3;
            flt_104B0378 = (float)(sub_1003BD50() & 0x7FF);
            v1 = sub_1003BD50() & 0x7FF;
            dword_104B0380 = *(_DWORD *)&stru_106C3380.gap1C8[18232];
            flt_104B037C = (float)v1;
        }
    } else {
        flt_104B255C = flt_104B255C - *(float *)&dword_106C2CFC * -343.0;
        if (dword_100A79CC <= 0) {
            if (flt_104B255C > 2048.0)
                dword_100A79CC = -1;
        } else {
            --dword_100A79CC;
        }
    }
}
// 100A79CC: using guessed type int dword_100A79CC;
// 104B0378: using guessed type float flt_104B0378;
// 104B037C: using guessed type float flt_104B037C;
// 104B0380: using guessed type int dword_104B0380;
// 104B255C: using guessed type float flt_104B255C;
// 106C2CFC: using guessed type int dword_106C2CFC;
