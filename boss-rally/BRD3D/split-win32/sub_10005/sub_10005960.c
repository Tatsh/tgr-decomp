#include "types-win32.h"
//----- (10005960) --------------------------------------------------------
int sub_10005960() {
    int *unkObjInstance; // esi
    int *v1;             // eax

    unkObjInstance = unk_10221334;
    do {
        WaitForSingleObject((HANDLE) * (unkObjInstance - 3), INFINITE);
        *(unkObjInstance - 1) = 0;
        memset(unkObjInstance, 0, 0x20u);
        unkObjInstance[8] = 0;
        memset(unkObjInstance + 11, 0, 0x20u);
        unkObjInstance[339] = 0;
        unkObjInstance[340] = 0;
        unkObjInstance[341] = -1;
        unkObjInstance[343] = 0;
        unkObjInstance[344] = 0;
        unkObjInstance[342] = 0;
        unkObjInstance[602] = 0;
        ReleaseMutex((HANDLE) * (unkObjInstance - 3));
        unkObjInstance += 606;
    } while ((int)unkObjInstance < (int)dword_1022AAB4);
    WaitForSingleObject(gMutex9, INFINITE);
    dword_1022AEF8 = -1;
    dword_1022AF08 = 0;
    byte_10220E80 = 0;
    ReleaseMutex(gMutex9);
    WaitForSingleObject(gMutex0, INFINITE);
    memset(dword_102212D0, 0, sizeof(dword_102212D0));
    ReleaseMutex(gMutex0);
    WaitForSingleObject(gMutex1, INFINITE);
    dword_10220DD4 = INFINITE;
    ReleaseMutex(gMutex1);
    WaitForSingleObject(gMutex2, INFINITE);
    dword_10221318 = INFINITE;
    ReleaseMutex(gMutex2);
    WaitForSingleObject(gMutex3, INFINITE);
    gMutexesEnd = 0;
    ReleaseMutex(gMutex3);
    WaitForSingleObject(gMutex5, INFINITE);
    dword_1022AAF4 = 0;
    ReleaseMutex(gMutex5);
    WaitForSingleObject(gMutex6, INFINITE);
    dword_10221314 = 0;
    ReleaseMutex(gMutex6);
    WaitForSingleObject(gMutex7, INFINITE);
    dword_10220DD0 = 0;
    ReleaseMutex(gMutex7);
    WaitForSingleObject(gMutex8, INFINITE);
    dword_1022AF00 = INFINITE;
    ReleaseMutex(gMutex8);
    dword_10220DD8 = 0;
    dword_1022AF3C = INFINITE;
    v1 = dword_1022AAB4;
    do {
        *(v1 - 1) = 0;
        *v1 = 0;
        v1 += 2;
    } while ((int)v1 < (int)&dword_1022AAF4);
    dword_1022AF20 = 0;
    dword_106909D8 = 0;
    return 1;
}
// 10220DD0: using guessed type int dword_10220DD0;
// 10220DD4: using guessed type int dword_10220DD4;
// 10220DD8: using guessed type int dword_10220DD8;
// 10220E80: using guessed type char byte_10220E80;
// 10221314: using guessed type int dword_10221314;
// 10221318: using guessed type int dword_10221318;
// 1022AAF4: using guessed type int dword_1022AAF4;
// 1022AEF8: using guessed type int dword_1022AEF8;
// 1022AF00: using guessed type int dword_1022AF00;
// 1022AF08: using guessed type int dword_1022AF08;
// 1022AF20: using guessed type int dword_1022AF20;
// 1022AF3C: using guessed type int dword_1022AF3C;
// 106909D8: using guessed type int dword_106909D8;
