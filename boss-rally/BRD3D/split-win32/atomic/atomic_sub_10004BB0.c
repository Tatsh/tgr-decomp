#include "../types-win32.h"
//----- (10004BB0) --------------------------------------------------------
int atomic_sub_10004BB0() {
    WaitForSingleObject(g_hMutex_4, INFINITE);
    dword_1022AAA8 = 1;
    ReleaseMutex(g_hMutex_4);
    return 1;
}
// 1022AAA8: using guessed type int dword_1022AAA8;
