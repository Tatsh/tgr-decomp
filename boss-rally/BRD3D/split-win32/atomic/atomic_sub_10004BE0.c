#include "types-win32.h"
//----- (10004BE0) --------------------------------------------------------
int atomic_sub_10004BE0() {
    WaitForSingleObject(gMutex5, INFINITE);
    if (!dword_1022AAF4)
        dword_1022AAF4 = 1;
    ReleaseMutex(gMutex5);
    return 1;
}
// 1022AAF4: using guessed type int dword_1022AAF4;
