#include "types-win32.h"
//----- (10004E50) --------------------------------------------------------
int __cdecl sub_10004E50(void *a1, float *a2) {
    HANDLE *v2;        // ebx
    int v3;            // eax
    int v4;            // eax
    int result;        // eax
    HANDLE Handles[2]; // [esp+10h] [ebp-228h] BYREF
    unk00214 u214;     // [esp+18h] [ebp-220h] BYREF
    int v8;            // [esp+234h] [ebp-4h]

    Handles[0] = gMutex4;
    v2 = &gMutexes[606 * dword_10094294];
    Handles[1] = *v2;
    WaitForMultipleObjects(2u, Handles, 1, INFINITE);
    dword_10221310 = sub_10003460();
    v3 = (int)v2[343] + 1;
    v2[343] = (HANDLE)v3;
    if (v3 >= 8)
        v2[343] = 0;
    v2[(_DWORD)v2[343] + 3] = (HANDLE)dword_10221310;
    v2[(_DWORD)v2[343] + 14] = (HANDLE)128;
    qmemcpy(&v2[40 * (_DWORD)v2[343] + 22], a1, 0xA0u);
    ReleaseMutex(*v2);
    ReleaseMutex(gMutex4);
    meth_unk00214_10073B40_init(&u214);
    v8 = 0;
    sub_100048D0(&u214);
    meth_unk00214_10073D60(&u214, dword_10094294 | 0x80);
    sub_10006830(&u214, (float *)a1, a2);
    v4 = sub_10004DD0(&unk, &u214);
    v8 = -1;
    if (v4 == -1) {
        meth_DebugPrint(&u214);
        result = 0;
    } else {
        meth_DebugPrint(&u214);
        result = 1;
    }
    return result;
}
// 10094294: using guessed type int dword_10094294;
// 10221310: using guessed type int dword_10221310;
