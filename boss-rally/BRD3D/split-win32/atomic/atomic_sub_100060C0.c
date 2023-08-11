#include "types-win32.h"
//----- (100060C0) --------------------------------------------------------
BOOL atomic_sub_100060C0() {
    WaitForSingleObject(gMutex7, 0xFFFFFFFF);
    dword_10220DD0 = 0;
    return ReleaseMutex(gMutex7);
}
// 10220DD0: using guessed type int dword_10220DD0;
