#include "types-win32.h"
//----- (1006AB20) --------------------------------------------------------
int *sub_1006AB20() {
    int *result;             // eax
    enum MACRO_GAME_MODE v1; // esi
    int v2;                  // ecx
    int v3;                  // edx

    result = (int *)dword_11750308;
    if (dword_11750308) {
        result = (int *)dword_106909B4;
        if (!dword_106909B4) {
            v1 = gGameMode;
            v2 = 8;
            if (gGameMode == GAME_MODE_2 || gGameMode == GAME_MODE_4)
                v2 = 1;
            result = dword_10B502E8;
            v3 = v2;
            do {
                if (*result < 0x10000)
                    ++*result;
                ++result;
                --v3;
            } while (v3);
            if (v1 == GAME_MODE_2 || v1 == GAME_MODE_4) {
                result = (int *)(dword_10B502EC - 1);
                if (dword_11750314 < dword_10B502EC - 1)
                    result = (int *)++dword_11750314;
            }
        }
    }
    return result;
}
// 1006AB4F: conditional instruction was optimized away because of 'ecx.4 in (==1|==8)'
// 106909B4: using guessed type int dword_106909B4;
// 10B502E8: using guessed type int dword_10B502E8[];
// 10B502EC: using guessed type int dword_10B502EC;
// 11750308: using guessed type int dword_11750308;
// 11750314: using guessed type int dword_11750314;
