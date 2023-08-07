#include "../../types-win32.h"
//----- (10076ED0) --------------------------------------------------------
int __cdecl sub_10076ED0(HMMIO hmmio, int a2, int a3, int a4, int a5) {
    int result;                 // eax
    unsigned int v6;            // edi
    unsigned int v7;            // eax
    unsigned int v8;            // esi
    HPSTR v9;                   // ecx
    char *v10;                  // eax
    char v11;                   // dl
    struct _MMIOINFO pmmioinfo; // [esp+10h] [ebp-48h] BYREF

    result = mmioGetInfo(hmmio, &pmmioinfo, 0) != 0;
    if (result)
        goto LABEL_11;
    v6 = a2;
    v7 = *(_DWORD *)(a4 + 4);
    if (a2 > v7)
        v6 = *(_DWORD *)(a4 + 4);
    v8 = 0;
    *(_DWORD *)(a4 + 4) = v7 - v6;
    if (!v6) {
    LABEL_10:
        result = mmioSetInfo(hmmio, &pmmioinfo, 0);
        if (!result) {
            *(_DWORD *)a5 = v6;
            return result;
        }
    LABEL_11:
        *(_DWORD *)a5 = 0;
        return result;
    }
    v9 = pmmioinfo.pchEndRead;
    v10 = pmmioinfo.pchNext;
    while (1) {
        if (v10 == v9) {
            result = mmioAdvance(hmmio, &pmmioinfo, 0);
            if (result)
                goto LABEL_11;
            v10 = pmmioinfo.pchNext;
            v9 = pmmioinfo.pchEndRead;
            if (pmmioinfo.pchNext == pmmioinfo.pchEndRead)
                break;
        }
        v11 = *v10++;
        *(_BYTE *)(v8 + a3) = v11;
        ++v8;
        pmmioinfo.pchNext = v10;
        if (v8 >= v6)
            goto LABEL_10;
    }
    result = 57603;
    *(_DWORD *)a5 = 0;
    return result;
}
