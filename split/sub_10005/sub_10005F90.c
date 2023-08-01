//----- (10005F90) --------------------------------------------------------
int __cdecl sub_10005F90(int offsetX606) {
    int v1; // edi

    WaitForSingleObject((HANDLE)dword_10221328[606 * offsetX606], INFINITE);
    v1 = dword_10221C9C[606 * offsetX606];
    ReleaseMutex((HANDLE)dword_10221328[606 * offsetX606]);
    if (v1 < 0)
        v1 = 0;
    return v1;
}
// 10221328: using guessed type int dword_10221328[];
