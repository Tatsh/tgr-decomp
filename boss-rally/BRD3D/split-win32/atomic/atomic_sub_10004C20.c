#include "types-win32.h"
//----- (10004C20) --------------------------------------------------------
int atomic_sub_10004C20() {
    WaitForSingleObject(gMutex6, INFINITE);
    if (!dword_10221314)
        dword_10221314 = 1;
    ReleaseMutex(gMutex6);
    return 1;
}
// 10221314: using guessed type int dword_10221314;
