#include "../../types-win32.h"
//----- (10071510) --------------------------------------------------------
int __cdecl sub_10071510(int a1) {
    int v1; // edi

    WaitForSingleObject((HANDLE)dword_1178FEF8[10251 * a1], 0xFFFFFFFF);
    v1 = dword_1178FF24[10251 * a1];
    ReleaseMutex((HANDLE)dword_1178FEF8[10251 * a1]);
    return v1;
}
// 1178FEF8: using guessed type int dword_1178FEF8[];
// 1178FF24: using guessed type int dword_1178FF24[];
