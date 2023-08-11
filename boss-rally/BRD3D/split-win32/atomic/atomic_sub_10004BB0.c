#include "types-win32.h"
//----- (10004BB0) --------------------------------------------------------
int atomic_sub_10004BB0() {
    WaitForSingleObject(gMutex3, INFINITE);
    gMutexesEnd = HANDLE_FLAG_INHERIT;
    ReleaseMutex(gMutex3);
    return 1;
}
