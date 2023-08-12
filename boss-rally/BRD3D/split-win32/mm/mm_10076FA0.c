#include "types-win32.h"
//----- (10076FA0) --------------------------------------------------------
MMRESULT __cdecl mm_10076FA0(LPSTR pszFileName, int a2, int a3, int a4, HMMIO hmmio) {
    HGLOBAL *v5;             // ebx
    HGLOBAL *v6;             // esi
    MMRESULT v7;             // edi
    HGLOBAL v8;              // eax
    int v10;                 // [esp-8h] [ebp-40h]
    struct _MMCKINFO v11;    // [esp+10h] [ebp-28h] BYREF
    struct _MMCKINFO pmmcki; // [esp+24h] [ebp-14h] BYREF

    v5 = (HGLOBAL *)a4;
    v6 = (HGLOBAL *)hmmio;
    v10 = a4;
    *(_DWORD *)hmmio = 0;
    *v5 = 0;
    *(_DWORD *)a2 = 0;
    v7 = mm_10076CE0(pszFileName, (int)&hmmio, v10, &pmmcki);
    if (!v7) {
        v7 = mm_10076E90((int)&hmmio, &v11, &pmmcki);
        if (!v7) {
            v8 = GlobalAlloc(0, v11.cksize);
            *v6 = v8;
            if (v8) {
                v7 = mm_10076ED0(hmmio, v11.cksize, (int)v8, (int)&v11, (int)&a4);
                if (!v7) {
                    *(_DWORD *)a2 = a4;
                    goto LABEL_11;
                }
            } else {
                v7 = 57344;
            }
        }
    }
    if (*v6) {
        GlobalFree(*v6);
        *v6 = 0;
    }
    if (*v5) {
        GlobalFree(*v5);
        *v5 = 0;
    }
LABEL_11:
    if (hmmio)
        mmioClose(hmmio, 0);
    return v7;
}
