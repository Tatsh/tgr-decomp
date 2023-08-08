#include "../types-win32.h"
//----- (10004C60) --------------------------------------------------------
int __cdecl sub_10004C60(void *a1) {
    int *v1;           // ebx
    int v2;            // eax
    int v3;            // eax
    int result;        // eax
    HANDLE Handles[2]; // [esp+10h] [ebp-228h] BYREF
    _DWORD v6[133];    // [esp+18h] [ebp-220h] BYREF
    int v7;            // [esp+234h] [ebp-4h]

    Handles[0] = hMutex_3;
    v1 = &dword_10221328[606 * dword_10094294];
    Handles[1] = (HANDLE)*v1;
    WaitForMultipleObjects(2u, Handles, 1, INFINITE);
    dword_10221310 = sub_10003460();
    v2 = v1[343] + 1;
    v1[343] = v2;
    if (v2 >= 8)
        v1[343] = 0;
    v1[v1[343] + 3] = dword_10221310;
    v1[v1[343] + 14] = 64;
    qmemcpy(&v1[40 * v1[343] + 22], a1, 0xA0u);
    ReleaseMutex((HANDLE)*v1);
    ReleaseMutex(hMutex_3);
    meth_10073B40(v6);
    v7 = 0;
    sub_100048D0((int)v6);
    meth_10073D60(v6, dword_10094294 | 0x40);
    sub_100061A0((int)v6, (float *)a1);
    v3 = sub_10004DD0(&unk, (int)v6);
    v7 = -1;
    if (v3 == -1) {
        debugPrint(v6);
        result = 0;
    } else {
        debugPrint(v6);
        result = 1;
    }
    return result;
}
// 10094294: using guessed type int dword_10094294;
// 10221310: using guessed type int dword_10221310;
// 10221328: using guessed type int dword_10221328[];
