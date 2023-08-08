#include "../types-win32.h"
//----- (10076CE0) --------------------------------------------------------
MMRESULT __cdecl sub_10076CE0(LPSTR pszFileName, int a2, int a3, LPMMCKINFO pmmcki) {
    CHAR *v4;             // ecx
    HMMIO v5;             // eax
    HMMIO v6;             // edi
    MMRESULT v7;          // esi
    LPMMCKINFO v8;        // ebx
    unsigned __int16 v9;  // ax
    _DWORD *v10;          // eax
    int v11;              // ecx
    LONG v12;             // eax
    _DWORD *v14;          // ebx
    char pch[4];          // [esp+10h] [ebp-24h] BYREF
    int v16;              // [esp+14h] [ebp-20h]
    int v17;              // [esp+18h] [ebp-1Ch]
    int v18;              // [esp+1Ch] [ebp-18h]
    struct _MMCKINFO v19; // [esp+20h] [ebp-14h] BYREF

    v4 = pszFileName;
    *(_DWORD *)a3 = 0;
    v5 = mmioOpenA(v4, 0, 0x10000u);
    v6 = v5;
    if (v5) {
        v8 = pmmcki;
        v7 = mmioDescend(v5, pmmcki, 0, 0);
        if (!v7) {
            if (v8->ckid != 1179011410 || v8->fccType != 1163280727)
                goto LABEL_21;
            v19.ckid = 544501094;
            v7 = mmioDescend(v6, &v19, v8, 0x10u);
            if (v7)
                goto LABEL_22;
            if (v19.cksize < 0x10)
                goto LABEL_21;
            if (mmioRead(v6, pch, 16) != 16) {
                v7 = 57602;
                goto LABEL_22;
            }
            if (*(_WORD *)pch == 1) {
                v9 = 0;
                pszFileName = 0;
            } else {
                if (mmioRead(v6, (HPSTR)&pszFileName, 2) != 2) {
                    v7 = 57602;
                    goto LABEL_22;
                }
                v9 = (unsigned __int16)pszFileName;
            }
            v10 = GlobalAlloc(0, v9 + 18);
            v11 = a3;
            *(_DWORD *)a3 = v10;
            if (!v10) {
                v7 = 57344;
                goto LABEL_22;
            }
            *v10 = *(_DWORD *)pch;
            v10[1] = v16;
            v10[2] = v17;
            v10[3] = v18;
            *(_WORD *)(*(_DWORD *)v11 + 16) = (_WORD)pszFileName;
            if ((_WORD)pszFileName) {
                v12 = mmioRead(v6, (HPSTR)(*(_DWORD *)v11 + 18), (unsigned __int16)pszFileName);
                if (v12 != (unsigned __int16)pszFileName) {
                LABEL_21:
                    v7 = 57601;
                    goto LABEL_22;
                }
            }
            v7 = mmioAscend(v6, &v19, 0);
            if (!v7) {
                *(_DWORD *)a2 = v6;
                return 0;
            }
        }
    } else {
        v7 = 57600;
    }
LABEL_22:
    v14 = (_DWORD *)a3;
    if (*(_DWORD *)a3) {
        GlobalFree(*(HGLOBAL *)a3);
        *v14 = 0;
    }
    if (v6) {
        mmioClose(v6, 0);
        v6 = 0;
    }
    *(_DWORD *)a2 = v6;
    return v7;
}
