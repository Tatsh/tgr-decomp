#include "types-win32.h"
//----- (10072CA0) --------------------------------------------------------
HMMIO __cdecl sub_10072CA0(LPSTR pszFileName) {
    HGLOBAL v1; // eax
    HMMIO v2;   // ebx
    HGLOBAL v3; // eax
    HGLOBAL v4; // eax
    HGLOBAL v5; // eax
    HGLOBAL v6; // eax
    HGLOBAL v7; // eax
    HGLOBAL v8; // eax
    int v10;    // [esp+10h] [ebp-4h] BYREF

    v1 = GlobalAlloc(0x40u, 0x1ACu);
    v2 = (HMMIO)GlobalLock(v1);
    if (v2) {
        *(_DWORD *)v2 = 0;
        *((_DWORD *)v2 + 2) = 0;
        *((_DWORD *)v2 + 39) = 0;
        *((_DWORD *)v2 + 10) = 0;
        strcpy((char *)v2 + 164, pszFileName);
        if (!mm_10076FA0(pszFileName, (int)(v2 + 1), (int)&v10, (int)(v2 + 2), v2) &&
            !sub_100722D0((int *)v2) && !sub_10072450((int)&dword_11828F48, (int)v2)) {
            if (strrchr((const char *)v2 + 164, 92))
                *((_DWORD *)v2 + 40) = &strrchr((const char *)v2 + 164, 92)[-163 - (_DWORD)v2];
            else
                *((_DWORD *)v2 + 40) = 0;
            *(_DWORD *)(v2 + 3) = *(_DWORD *)(HMMIO)(*((_DWORD *)v2 + 2) + 4);
            *((_DWORD *)v2 + 4) = 400;
            *((_DWORD *)v2 + 5) = 400;
            sub_100724D0((int)v2);
            sub_100724B0((int)v2);
            sub_10072490((int)v2);
            return v2;
        }
    }
    if (!v2)
        return v2;
    sub_10072520((int)v2);
    if (*((_DWORD *)v2 + 2)) {
        v3 = GlobalHandle(*((LPCVOID *)v2 + 2));
        GlobalUnlock(v3);
        v4 = GlobalHandle(*((LPCVOID *)v2 + 2));
        GlobalFree(v4);
    }
    if (*(_DWORD *)v2) {
        v5 = GlobalHandle(*(LPCVOID *)v2);
        GlobalUnlock(v5);
        v6 = GlobalHandle(*(LPCVOID *)v2);
        GlobalFree(v6);
    }
    v7 = GlobalHandle(v2);
    GlobalUnlock(v7);
    v8 = GlobalHandle(v2);
    GlobalFree(v8);
    return 0;
}
