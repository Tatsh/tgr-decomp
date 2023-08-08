#include "../types-win32.h"
//----- (10071480) --------------------------------------------------------
BOOL __cdecl sub_10071480(int a1) {
    int *v1;     // esi
    BOOL result; // eax

    v1 = dword_11786854;
    do {
        WaitForSingleObject((HANDLE) * (v1 - 11), 0xFFFFFFFF);
        if (*(v1 - 10) == a1 && (*(_BYTE *)v1 & 0x3Fu) < 5)
            *v1 = 0;
        result = ReleaseMutex((HANDLE) * (v1 - 11));
        v1 += 603;
    } while ((int)v1 < (int)&unk_1178FF14);
    return result;
}
// 11786854: using guessed type int dword_11786854[];
