#include "../types-win32.h"
//----- (10001760) --------------------------------------------------------
int __thiscall meth_10001760(#480 * this) {
    int result;          // eax
    double v3;           // st7
    int v4;              // edx
    double v5;           // st7
    double v7;           // st7
    char v8;             // c0
    unsigned __int8 v10; // c0
    unsigned __int8 v11; // c3
    char v13;            // c0
    float v14;           // [esp+8h] [ebp-4h]

    if (*((_DWORD *)this + 0x3DF))
        return sub_1003AFE0((int)this + 0x28E0, (int)this + 0x30, (int)this + 0x20, 1.1);
    v3 = *((float *)this + 0xE) - -0.66000003;
    v4 = *((_DWORD *)this + 0xC);
    *((_DWORD *)this + 0xA39) = *((_DWORD *)this + 0xD);
    *((float *)this + 0xA3A) = v3;
    *((_DWORD *)this + 0xA38) = v4;
    v5 = sub_1003B170((float *)this + 0x81);
    result = g_GameMode;
    v14 = v5;
    if (g_GameMode != 5) {
        v7 = 0.0;
        if (v8) {
            v7 = 2.0;
        } else if (v14 < 7.0) {
            v7 = 4.0 - v14 * 0.5714286;
        }
        if (v7 <= *((float *)this + 0xA37)) {
            if (v7 < *((float *)this + 0xA37)) {
                *((float *)this + 0xA37) = *((float *)this + 0xA37) - 0.1;
                if (v13)
                    *((float *)this + 0xA37) = v7;
            }
        } else {
            *((float *)this + 0xA37) = *((float *)this + 0xA37) - -0.1;
            if (!(v10 | v11))
                *((float *)this + 0xA37) = v7;
        }
        result = sub_1003B020((int)this + 0x28E0, (int)this, *((float *)this + 0xA37));
    }
    return result;
}
// 100017E8: variable 'v8' is possibly undefined
// 1000183A: variable 'v10' is possibly undefined
// 1000183A: variable 'v11' is possibly undefined
// 1000186D: variable 'v13' is possibly undefined
// 100AA010: using guessed type int g_GameMode;
