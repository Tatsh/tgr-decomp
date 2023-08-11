#include "types-win32.h"
//----- (10005E40) --------------------------------------------------------
int __cdecl atomic_sub_10005E40(int a1) {
    int v1; // esi

    WaitForSingleObject(gMutex0, INFINITE);
    v1 = dword_102212D0[a1];
    ReleaseMutex(gMutex0);
    return v1;
}
