#include "types-win32.h"
//----- (10004BB0) --------------------------------------------------------
int atomic_sub_10004BB0() {
    WaitForSingleObject(gMutex3, INFINITE);
    gMutexesEnd = 1;
    ReleaseMutex(gMutex3);
    return 1;
}
// 1022AAA8: using guessed type int dword_1022AAA8;
