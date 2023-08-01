//----- (10004A10) --------------------------------------------------------
int __cdecl atomic_sub_10004A10(int a1) {
    int v1; // edi

    WaitForSingleObject((HANDLE)dword_10221328[606 * a1], INFINITE);
    v1 = dword_10221354[606 * a1];
    ReleaseMutex((HANDLE)dword_10221328[606 * a1]);
    return v1;
}
// 10221328: using guessed type int dword_10221328[];
// 10221354: using guessed type int dword_10221354[];
