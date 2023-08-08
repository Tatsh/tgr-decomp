#include "../types-win32.h"
//----- (10005DE0) --------------------------------------------------------
int __cdecl sub_10005DE0(int a1, _BYTE *a2, _BYTE *a3, _BYTE *a4) {
    int v4; // edi

    WaitForSingleObject((HANDLE)dword_10221328[606 * a1], INFINITE);
    v4 = dword_10221358[606 * a1];
    *a2 = byte_1022135C[2424 * a1];
    *a3 = byte_1022135D[2424 * a1];
    *a4 = byte_1022135E[2424 * a1];
    ReleaseMutex((HANDLE)dword_10221328[606 * a1]);
    return v4;
}
// 10221328: using guessed type int dword_10221328[];
// 10221358: using guessed type int dword_10221358[];
