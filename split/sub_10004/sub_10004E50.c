//----- (10004E50) --------------------------------------------------------
int __cdecl sub_10004E50(void *a1, float *a2) {
    int *v2;           // ebx
    int v3;            // eax
    int v4;            // eax
    int result;        // eax
    HANDLE Handles[2]; // [esp+10h] [ebp-228h] BYREF
    _DWORD v7[133];    // [esp+18h] [ebp-220h] BYREF
    int v8;            // [esp+234h] [ebp-4h]

    Handles[0] = hMutex_3;
    v2 = &dword_10221328[606 * dword_10094294];
    Handles[1] = (HANDLE)*v2;
    WaitForMultipleObjects(2u, Handles, 1, INFINITE);
    dword_10221310 = sub_10003460();
    v3 = v2[343] + 1;
    v2[343] = v3;
    if (v3 >= 8)
        v2[343] = 0;
    v2[v2[343] + 3] = dword_10221310;
    v2[v2[343] + 14] = 128;
    qmemcpy(&v2[40 * v2[343] + 22], a1, 0xA0u);
    ReleaseMutex((HANDLE)*v2);
    ReleaseMutex(hMutex_3);
    sub_10073B40(v7);
    v8 = 0;
    sub_100048D0((int)v7);
    sub_10073D60(v7, dword_10094294 | 0x80);
    sub_10006830((int)v7, (float *)a1, a2);
    v4 = sub_10004DD0(&unk, (int)v7);
    v8 = -1;
    if (v4 == -1) {
        debugPrint(v7);
        result = 0;
    } else {
        debugPrint(v7);
        result = 1;
    }
    return result;
}
// 10094294: using guessed type int dword_10094294;
// 10221310: using guessed type int dword_10221310;
// 10221328: using guessed type int dword_10221328[];