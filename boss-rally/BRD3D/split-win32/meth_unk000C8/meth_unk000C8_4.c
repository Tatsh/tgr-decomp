#include "types-win32.h"
//----- (1005AE70) --------------------------------------------------------
int __thiscall meth_unk000C8_4(unk000C8 *this) {
    void *v2;                // ecx
    const CHAR *v3;          // eax
    int v4;                  // edx
    enum MACRO_GAME_MODE v5; // eax
    int result;              // eax

    sub_1003E3A0();
    if (!this->field_C) {
        DDrawDoInit();
        if (!sub_10060210(gHwnd)) {
            v3 = GetStringWithIndex(0xABu);
            ShowMessageBoxAA(gHwnd, 0, v3);
            exit(1);
        }
        this->lpFn0(this);
        this->field_C = 1;
        this->field_68 = 1;
    }
    v4 = gGameMode1;
    if (gGameMode1 == 5) {
        dword_10AA28A4 = 0;
        memset(byte_10A9D618, 0, 0x20u);
        v2 = 0;
        BYTE1(dword_10AA26F4[0]) = 0;
    }
    v5 = gGameMode;
    if (gGameMode == GAME_MODE_4 && dword_106805B8 == 2 && dword_10AA289C) {
        sub_10045EA0();
        v4 = gGameMode1;
        v5 = GAME_MODE_0;
        gGameMode = GAME_MODE_0;
    }
    if (v5 || v4 && v4 != 5) {
        if (v5 == GAME_MODE_6) {
            dword_10AA2878 = 1;
            sub_100447D0();
        } else {
            if (v5 != GAME_MODE_2)
                goto LABEL_21;
            dword_10AA2878 = 1;
            sub_10041930();
        }
        dword_10AA2878 = 0;
        goto LABEL_21;
    }
    result = sub_1005F940();
    if (!result)
        return result;
    sub_10045EA0();
    sub_10041B50();
    dword_10AA289C = 1;
LABEL_21:
    if (dword_10A9D000) {
        if (!dword_10AA2A50) {
            dword_10AA2A50 = 1;
            meth_100441A0(v2);
        }
    }
    return 1;
}
// 1005AF94: variable 'v2' is possibly undefined
// 10220B20: using guessed type int gGameMode1;
// 106805B8: using guessed type int dword_106805B8;
// 10A9D000: using guessed type int dword_10A9D000;
// 10AA26F4: using guessed type int dword_10AA26F4[];
// 10AA2878: using guessed type int dword_10AA2878;
// 10AA289C: using guessed type int dword_10AA289C;
// 10AA28A4: using guessed type int dword_10AA28A4;
// 10AA2A50: using guessed type int dword_10AA2A50;
