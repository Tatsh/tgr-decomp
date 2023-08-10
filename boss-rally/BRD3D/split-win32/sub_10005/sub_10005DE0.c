#include "types-win32.h"
//----- (10005DE0) --------------------------------------------------------
int __cdecl sub_10005DE0(int mutexMult, _BYTE *a2, _BYTE *a3, _BYTE *a4) {
    int v4; // edi

    WaitForSingleObject(gMutexes[606 * mutexMult], INFINITE);
    v4 = unk_10221358[606 * mutexMult];
    *a2 = unk_1022135C[2424 * mutexMult];
    *a3 = unk_1022135D[2424 * mutexMult];
    *a4 = unk_1022135E[2424 * mutexMult];
    ReleaseMutex(gMutexes[606 * mutexMult]);
    return v4;
}
