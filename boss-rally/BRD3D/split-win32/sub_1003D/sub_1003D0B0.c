#include "types-win32.h"
//----- (1003D0B0) --------------------------------------------------------
int __cdecl sub_1003D0B0(SIZE_T dwBytes, LPDWORD a2) {
    SIZE_T size;                                         // ebx
    const void *lpv;                                     // esi
    int(__stdcall * v4)(SIZE_T, const void *, SIZE_T *); // ebp
    int v5;                                              // edi
    HGLOBAL mem;                                         // eax
    HGLOBAL v7;                                          // eax
    HGLOBAL v8;                                          // eax

    size = dwBytes;
    lpv = 0;
    v4 = *(int(__stdcall **)(SIZE_T, const void *, SIZE_T *))(*(_DWORD *)dwBytes + 88);
    v5 = v4(dwBytes, 0, &dwBytes);
    if (v5 == -2005467106) {
        mem = GlobalAlloc(0x42u, dwBytes);
        lpv = GlobalLock(mem);
        if (lpv) {
            v5 = v4(size, lpv, &dwBytes);
            if (v5 >= 0) {
                *a2 = (DWORD)lpv;
                lpv = 0;
            }
        } else {
            v5 = -2147024882;
        }
    }
    if (lpv) {
        v7 = GlobalHandle(lpv);
        GlobalUnlock(v7);
        v8 = GlobalHandle(lpv);
        GlobalFree(v8);
    }
    return v5;
}
