#include "types-win32.h"
//----- (1006AA50) --------------------------------------------------------
int sub_1006AA50() {
    int v0;     // ecx
    int result; // eax

    v0 = 8;
    if (gGameMode == GAME_MODE_2 || gGameMode == GAME_MODE_4)
        v0 = 1;
    result = 0;
    memset(dword_10B502E8, 0, 4 * v0);
    dword_11750308 = 0;
    return result;
}
// 1006AA6C: conditional instruction was optimized away because of 'ecx.4 in (==1|==8)'
// 10B502E8: using guessed type int dword_10B502E8[];
// 11750308: using guessed type int dword_11750308;
