#include "../../types-win32.h"
//----- (10005D90) --------------------------------------------------------
int sub_10005D90() {
    int v0;     // esi
    int result; // eax

    WaitForSingleObject(g_hMutex_2, INFINITE);
    if (dword_10221318 < 0) {
        ReleaseMutex(g_hMutex_2);
        result = -1;
    } else {
        v0 = dword_10221288[dword_10221318--];
        ReleaseMutex(g_hMutex_2);
        result = v0;
    }
    return result;
}
// 10221318: using guessed type int dword_10221318;
