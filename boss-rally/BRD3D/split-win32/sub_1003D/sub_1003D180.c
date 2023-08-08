#include "types-win32.h"
//----- (1003D180) --------------------------------------------------------
int __cdecl sub_1003D180(SIZE_T dwBytes, int a2, int a3) {
    SIZE_T v3;                                                // ebx
    const void *v4;                                           // edi
    int(__stdcall * v5)(SIZE_T, int, const void *, SIZE_T *); // ebp
    int v6;                                                   // esi
    HGLOBAL v7;                                               // eax
    const void *v8;                                           // eax
    HGLOBAL v9;                                               // eax
    HGLOBAL v10;                                              // eax

    v3 = dwBytes;
    v4 = 0;
    v5 = *(int(__stdcall **)(SIZE_T, int, const void *, SIZE_T *))(*(_DWORD *)dwBytes + 84);
    v6 = v5(dwBytes, a2, 0, &dwBytes);
    if (v6 == -2005467106) {
        v7 = GlobalAlloc(0x42u, dwBytes);
        v8 = GlobalLock(v7);
        v4 = v8;
        if (v8) {
            v6 = v5(v3, a2, v8, &dwBytes);
            if (v6 >= 0) {
                *(_DWORD *)a3 = v4;
                return 0;
            }
        } else {
            v6 = -2147024882;
        }
    }
    if (v4) {
        v9 = GlobalHandle(v4);
        GlobalUnlock(v9);
        v10 = GlobalHandle(v4);
        GlobalFree(v10);
    }
    return v6;
}
