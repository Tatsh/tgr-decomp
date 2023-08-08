#include "../types-win32.h"
//----- (10043180) --------------------------------------------------------
int sub_10043180() {
    int v0;         // eax
    const char *v1; // eax
    LPCSTR v3;      // [esp-4h] [ebp-Ch]

    if (dword_10AA33D4) {
        if (++dword_10AA2A00 > 4)
            dword_10AA2A00 = 0;
    } else if (dword_10AA33D0[0]) {
        if (--dword_10AA2A00 < 0)
            dword_10AA2A00 = 4;
    }
    v0 = dword_100AC4C0[dword_10AA2A00];
    g_ChosenWeather = v0;
    if (unk) {
        v3 = getCaptionString(dword_100AC3B0[v0]);
        v1 = getCaptionString(0xBAu);
        sprintf(byte_10A9DD28, v1, v3);
        sub_1003D210(g_HWND, dword_10A9D008, 1);
        strcpy(byte_10A9DD28, String2);
    }
    return 1;
}
// 1022B350: using guessed type int g_ChosenWeather;
// 10AA2A00: using guessed type int dword_10AA2A00;
// 10AA33D0: using guessed type int dword_10AA33D0[];
// 10AA33D4: using guessed type int dword_10AA33D4;
