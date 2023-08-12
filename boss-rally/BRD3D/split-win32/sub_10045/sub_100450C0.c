#include "types-win32.h"
//----- (100450C0) --------------------------------------------------------
int __cdecl sub_100450C0() {
    int result; // eax

    sub_10041BD0();
    sub_10045C90();
    result = 1;
    *(_DWORD *)(dword_10AA29B0 + 8) = sub_10046DC0;
    gGameMode = GAME_MODE_0;
    return result;
}
// 10AA29B0: using guessed type int dword_10AA29B0;
