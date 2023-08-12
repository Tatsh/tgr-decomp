#include "types-win32.h"
//----- (10045050) --------------------------------------------------------
int __cdecl sub_10045050() {
    int result; // eax

    dword_100AC304 = 0;
    sub_10045110();
    result = 1;
    dword_100AC304 = 1;
    *(_DWORD *)(dword_10AA29B4 + 8) = sub_10046CD0;
    gGameMode = GAME_MODE_0;
    return result;
}
// 100AC304: using guessed type int dword_100AC304;
// 10AA29B4: using guessed type int dword_10AA29B4;
