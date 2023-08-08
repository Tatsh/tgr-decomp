#include "../types-win32.h"
//----- (100048D0) --------------------------------------------------------
BOOL __cdecl sub_100048D0(int a1) {
    meth_10073B80((_DWORD *)a1);
    WaitForSingleObject(hMutex_3, INFINITE);
    dword_10221310 = sub_10003460();
    meth_10073DC0((_DWORD *)a1, dword_10221310);
    return ReleaseMutex(hMutex_3);
}
// 10221310: using guessed type int dword_10221310;
