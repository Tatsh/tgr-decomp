#include "../../types-win32.h"
//----- (10044600) --------------------------------------------------------
int sub_10044600() {
    const char *v0; // eax
    LPCSTR v2;      // [esp-4h] [ebp-Ch]

    if (dword_10AA33D4) {
        if (++dword_10AA2A18 >= 5)
            dword_10AA2A18 = 0;
    } else {
        if (!dword_10AA33D0[0])
            goto LABEL_8;
        if (--dword_10AA2A18 < 0)
            dword_10AA2A18 = 4;
    }
    sub_10044540();
LABEL_8:
    if (unk) {
        v2 = getCaptionString(dword_100AC3C8[dword_10AA2A18]);
        v0 = getCaptionString(0xBDu);
        sprintf(byte_10A9DD28, v0, v2);
        sub_1003D210(g_HWND, dword_10A9D008, 1);
        strcpy(byte_10A9DD28, String2);
    }
    return 1;
}
// 10AA2A18: using guessed type int dword_10AA2A18;
// 10AA33D0: using guessed type int dword_10AA33D0[];
// 10AA33D4: using guessed type int dword_10AA33D4;
