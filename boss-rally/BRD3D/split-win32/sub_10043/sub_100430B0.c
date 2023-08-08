#include "types-win32.h"
//----- (100430B0) --------------------------------------------------------
int sub_100430B0() {
    int v0;          // eax
    const char *v1;  // eax
    char Buffer[32]; // [esp+8h] [ebp-20h] BYREF

    if (dword_10AA33D4) {
        v0 = ++dword_100BD3E0;
        if (dword_100BD3E0 <= 12)
            goto LABEL_8;
        v0 = 1;
        goto LABEL_7;
    }
    v0 = dword_100BD3E0;
    if (dword_10AA33D0[0]) {
        v0 = dword_100BD3E0 - 1;
        dword_100BD3E0 = v0;
        if (v0 < 1) {
            v0 = 12;
        LABEL_7:
            dword_100BD3E0 = v0;
            goto LABEL_8;
        }
    }
LABEL_8:
    dword_100AC658 = v0;
    if (unk) {
        _itoa(v0, Buffer, 10);
        v1 = getCaptionString(0xB9u);
        sprintf(byte_10A9DD28, v1, Buffer);
        sub_1003D210(g_HWND, dword_10A9D008, 1);
        strcpy(byte_10A9DD28, String2);
    }
    return 1;
}
// 100AC658: using guessed type int dword_100AC658;
// 10AA33D0: using guessed type int dword_10AA33D0[];
// 10AA33D4: using guessed type int dword_10AA33D4;
