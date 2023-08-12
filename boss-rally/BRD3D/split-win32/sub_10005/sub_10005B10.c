#include "types-win32.h"
//----- (10005B10) --------------------------------------------------------
int sub_10005B10() {
    HANDLE *mutex; // esi

    mutex = gMutexes;
    do {
        *mutex = CreateMutexA(0, 0, 0);
        mutex += 0x25E;
    } while ((int)mutex < (int)&gMutexesEnd);
    gMutex9 = CreateMutexA(0, 0, 0);
    gMutex0 = CreateMutexA(0, 0, 0);
    gMutex1 = CreateMutexA(0, 0, 0);
    gMutex2 = CreateMutexA(0, 0, 0);
    dword_10221310 = 0;
    dword_10220DD8 = 0;
    sub_10075100();
    gMutex4 = CreateMutexA(0, 0, 0);
    gMutex3 = CreateMutexA(0, 0, 0);
    gMutex5 = CreateMutexA(0, 0, 0);
    gMutex6 = CreateMutexA(0, 0, 0);
    gMutex7 = CreateMutexA(0, 0, 0);
    gMutex8 = CreateMutexA(0, 0, 0);
    atomic_sub_10005960();
    return 1;
}
// 10220DD8: using guessed type int dword_10220DD8;
// 10221310: using guessed type int dword_10221310;
