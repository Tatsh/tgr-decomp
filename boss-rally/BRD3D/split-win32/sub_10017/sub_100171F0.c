#include "types-win32.h"
//----- (100171F0) --------------------------------------------------------
_DWORD *__cdecl sub_100171F0(int a1, int a2, float a3, int a4, int a5) {
    __int64 v5;      // rax
    char Buffer[32]; // [esp+0h] [ebp-20h] BYREF

    v5 = (__int64)(a3 * 100.0);
    sprintf(Buffer,
            "%s%d:%02d.%02d",
            (const char *)a2,
            (int)v5 / 100 / 60,
            (int)v5 / 100 % 60,
            (_DWORD)v5 + 20 * (4 * ((int)v5 / -100) - (int)v5 / 100));
    text_10019300(Buffer, a4, a5 + 15);
    return text_10019300((char *)a1, a4, a5);
}
