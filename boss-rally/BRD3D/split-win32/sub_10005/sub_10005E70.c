#include "types-win32.h"
//----- (10005E70) --------------------------------------------------------
char *__cdecl sub_10005E70(int mutexMult) {
    WaitForSingleObject(gMutexes[606 * mutexMult], INFINITE);
    strcpy(byte_1022AAF8, &byte_10221898[2424 * mutexMult]);
    ReleaseMutex(gMutexes[606 * mutexMult]);
    return byte_1022AAF8;
}
