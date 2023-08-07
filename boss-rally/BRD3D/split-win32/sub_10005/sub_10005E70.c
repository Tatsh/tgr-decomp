#include "../../types-win32.h"
//----- (10005E70) --------------------------------------------------------
char *__cdecl sub_10005E70(int a1) {
    WaitForSingleObject((HANDLE)dword_10221328[606 * a1], INFINITE);
    strcpy(byte_1022AAF8, &byte_10221898[2424 * a1]);
    ReleaseMutex((HANDLE)dword_10221328[606 * a1]);
    return byte_1022AAF8;
}
// 10221328: using guessed type int dword_10221328[];
