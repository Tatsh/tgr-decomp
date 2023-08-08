#include "types-win32.h"
//----- (1003D3A0) --------------------------------------------------------
SIZE_T __cdecl sub_1003D3A0(SIZE_T dwBytes, int a2, LPCSTR lpString, int a4, int a5) {
    SIZE_T result;       // eax
    const CHAR *v6;      // ebp
    const CHAR *v7;      // edi
    int v8;              // ebx
    int v9;              // eax
    HGLOBAL v10;         // eax
    CHAR *v11;           // eax
    CHAR *v12;           // esi
    HGLOBAL v13;         // eax
    HGLOBAL v14;         // eax
    LPCVOID pMem;        // [esp+0h] [ebp-4h] BYREF
    signed int dwBytesa; // [esp+8h] [ebp+4h]
    int v17;             // [esp+18h] [ebp+14h]

    result = dwBytes;
    pMem = 0;
    if (dwBytes) {
        v6 = aSS_0;
        if (!a5)
            v6 = aSS_1;
        dwBytesa = sub_1003D180(dwBytes, a2, (int)&pMem);
        if (dwBytesa >= 0) {
            v7 = (const CHAR *)*((_DWORD *)pMem + 2);
            if (!v7)
                v7 = aUnknown;
            v8 = lstrlenA(v6);
            v17 = lstrlenA(v7) + v8;
            v9 = lstrlenA(lpString);
            v10 = GlobalAlloc(0x42u, v17 + v9 + 1);
            v11 = (CHAR *)GlobalLock(v10);
            v12 = v11;
            if (v11) {
                wsprintfA(v11, v6, v7, lpString);
                *(_DWORD *)a4 = v12;
            } else {
                dwBytesa = -2147024882;
            }
        }
        if (pMem) {
            v13 = GlobalHandle(pMem);
            GlobalUnlock(v13);
            v14 = GlobalHandle(pMem);
            GlobalFree(v14);
        }
        result = dwBytesa;
    }
    return result;
}
