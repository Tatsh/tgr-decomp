#include "types-win32.h"
//----- (10005CF0) --------------------------------------------------------
int __cdecl atomic_sub_10005CF0(int mutexMult) {
    int v1; // edi

    WaitForSingleObject(gMutexes[606 * mutexMult], INFINITE);
    v1 = unk_1022132C[606 * mutexMult];
    ReleaseMutex(gMutexes[606 * mutexMult]);
    return v1;
}
