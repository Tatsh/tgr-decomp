#include "types-win32.h"
//----- (1003BF60) --------------------------------------------------------
int sub_1003BF60() {
    int result; // eax

    sub_100586A0();
    KillTimer(gHwnd, uIDEvent);
    if (dword_10AA2884)
        sub_10072270();
    sub_1003C550();
    result = dword_10AA287C;
    if (dword_10AA287C != 2 && dword_10AA287C != 3) {
        result = dword_10AA29D8;
        if (dword_10AA29D8) {
            *(_BYTE *)(dword_10AA29D8 + 11108) = 0;
            result = dword_10AA29D8;
            *(_DWORD *)(dword_10AA29D8 + 28) &= 0xFFFFFFEF;
        }
    }
    dword_10A9CFFC = 0;
    dword_10AA2884 = 0;
    gNetworkPlay = 0;
    dword_10AA2888 = 0;
    return result;
}
// 1022AF18: using guessed type int gNetworkPlay;
// 10A9CFFC: using guessed type int dword_10A9CFFC;
// 10AA287C: using guessed type int dword_10AA287C;
// 10AA2884: using guessed type int dword_10AA2884;
// 10AA2888: using guessed type int dword_10AA2888;
// 10AA29D8: using guessed type int dword_10AA29D8;
