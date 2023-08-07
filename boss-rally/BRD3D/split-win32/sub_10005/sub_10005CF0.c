#include "../../types-win32.h"
//----- (10005CF0) --------------------------------------------------------
int __cdecl sub_10005CF0(int a1) {
    int v1; // edi

    WaitForSingleObject((HANDLE)dword_10221328[606 * a1], INFINITE);
    v1 = dword_1022132C[606 * a1];
    ReleaseMutex((HANDLE)dword_10221328[606 * a1]);
    return v1;
}
// 10221328: using guessed type int dword_10221328[];
// 1022132C: using guessed type int dword_1022132C[];
