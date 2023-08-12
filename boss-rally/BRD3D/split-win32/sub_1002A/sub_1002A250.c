#include "types-win32.h"
//----- (1002A250) --------------------------------------------------------
int __cdecl sub_1002A250(int a1) {
    int result; // eax

    result = *(_DWORD *)(a1 + 4);
    if (result) {
        if (result == 0x8000) {
            dword_105553DC = 0;
        } else if (result == 49152) {
            dword_105553DC = 3;
        }
    }
    return result;
}
// 105553DC: using guessed type int dword_105553DC;
