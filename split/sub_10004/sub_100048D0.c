//----- (100048D0) --------------------------------------------------------
BOOL __cdecl sub_100048D0(int a1) {
    sub_10073B80((_DWORD *)a1);
    WaitForSingleObject(hMutex_3, INFINITE);
    dword_10221310 = sub_10003460();
    sub_10073DC0((_DWORD *)a1, dword_10221310);
    return ReleaseMutex(hMutex_3);
}
// 10221310: using guessed type int dword_10221310;