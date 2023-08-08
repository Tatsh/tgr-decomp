#include "../types-win32.h"
//----- (10045090) --------------------------------------------------------
int __cdecl sub_10045090() {
    int result; // eax

    sub_10045C90();
    result = 1;
    *(_DWORD *)(dword_10AA29B0 + 8) = sub_10046DC0;
    g_GameMode = 0;
    return result;
}
// 100AA010: using guessed type int g_GameMode;
// 10AA29B0: using guessed type int dword_10AA29B0;
