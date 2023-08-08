#include "../types-win32.h"
//----- (10003530) --------------------------------------------------------
BOOL __cdecl sub_10003530(const char *a1) {
    HANDLE v2; // [esp-4h] [ebp-Ch]

    WaitForSingleObject(hMutex, INFINITE);
    v2 = hMutex;
    strcpy(&byte_10220E80, a1);
    dword_1022AF08 = 1;
    return ReleaseMutex(v2);
}
// 10220E80: using guessed type char byte_10220E80;
// 1022AF08: using guessed type int dword_1022AF08;
