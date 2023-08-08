#include "types-win32.h"
//----- (100060F0) --------------------------------------------------------
BOOL sub_100060F0() {
    WaitForSingleObject(hMutex, INFINITE);
    if (dword_1022AEF8 >= 0) {
        sub_10072AF0(dword_1022AEF8, 0x200020u);
        dword_1022AEF8 = -1;
    }
    if (dword_1022AF08) {
        dword_104B0338 = (int)&byte_10220E80;
        dword_104B033C = 1077936128;
        dword_1022AF08 = 0;
    }
    return ReleaseMutex(hMutex);
}
// 10220E80: using guessed type char byte_10220E80;
// 1022AEF8: using guessed type int dword_1022AEF8;
// 1022AF08: using guessed type int dword_1022AF08;
// 104B0338: using guessed type int dword_104B0338;
// 104B033C: using guessed type int dword_104B033C;
