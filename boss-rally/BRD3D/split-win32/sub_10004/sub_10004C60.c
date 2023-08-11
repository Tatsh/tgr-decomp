#include "types-win32.h"
//----- (10004C60) --------------------------------------------------------
int __cdecl sub_10004C60(void *a1) {
    HANDLE *v1;        // ebx
    int v2;            // eax
    int v3;            // eax
    int result;        // eax
    HANDLE Handles[2]; // [esp+10h] [ebp-228h] BYREF
    unk00214 a1a;      // [esp+18h] [ebp-220h] BYREF
    int v7;            // [esp+234h] [ebp-4h]

    Handles[0] = gMutex4;
    v1 = &gMutexes[606 * dword_10094294];
    Handles[1] = *v1;
    WaitForMultipleObjects(2u, Handles, 1, INFINITE);
    dword_10221310 = sub_10003460();
    v2 = (int)v1[343] + 1;
    v1[343] = (HANDLE)v2;
    if (v2 >= 8)
        v1[343] = 0;
    v1[(_DWORD)v1[343] + 3] = (HANDLE)dword_10221310;
    v1[(_DWORD)v1[343] + 14] = (HANDLE)64;
    qmemcpy(&v1[40 * (_DWORD)v1[343] + 22], a1, 0xA0u);
    ReleaseMutex(*v1);
    ReleaseMutex(gMutex4);
    meth_unk00214_10073B40_init(&a1a);
    v7 = 0;
    sub_100048D0(&a1a);
    meth_unk00214_10073D60(&a1a, dword_10094294 | 0x40);
    math_100061A0(&a1a, (float *)a1);
    v3 = sub_10004DD0(&unk, &a1a);
    v7 = -1;
    if (v3 == -1) {
        meth_DebugPrint(&a1a);
        result = 0;
    } else {
        meth_DebugPrint(&a1a);
        result = 1;
    }
    return result;
}
// 10094294: using guessed type int dword_10094294;
// 10221310: using guessed type int dword_10221310;
