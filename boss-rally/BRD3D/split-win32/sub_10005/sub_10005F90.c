#include "types-win32.h"
//----- (10005F90) --------------------------------------------------------
int __cdecl sub_10005F90(int mutexMult) {
    int v1; // edi

    WaitForSingleObject(gMutexes[606 * mutexMult], INFINITE);
    v1 = dword_10221C9C[606 * mutexMult];
    ReleaseMutex(gMutexes[606 * mutexMult]);
    if (v1 < 0)
        v1 = 0;
    return v1;
}
