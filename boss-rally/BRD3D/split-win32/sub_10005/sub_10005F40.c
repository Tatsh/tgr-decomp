#include "../../types-win32.h"
//----- (10005F40) --------------------------------------------------------
int __cdecl sub_10005F40(int a1) {
    int v1; // esi

    WaitForSingleObject((HANDLE)dword_10221328[606 * a1], INFINITE);
    v1 = (atomic_sub_10004A10(a1) & 0x3F) - 4;
    ReleaseMutex((HANDLE)dword_10221328[606 * a1]);
    return v1 <= 0 ? 0 : v1;
}
// 10221328: using guessed type int dword_10221328[];
