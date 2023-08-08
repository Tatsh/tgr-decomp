#include "../types-win32.h"
//----- (1003C740) --------------------------------------------------------
int __cdecl sub_1003C740(SIZE_T dwBytes, int a2, int a3, int a4) {
    int *v5;          // edi
    int v6;           // ebp
    int v7;           // edi
    _DWORD *v8;       // eax
    int v9;           // ecx
    int v10;          // ecx
    int v11;          // edx
    unsigned int v12; // eax
    int v13;          // edx
    int v14;          // eax
    HGLOBAL v15;      // eax
    HGLOBAL v16;      // eax
    LPCVOID v17;      // eax
    HGLOBAL v18;      // eax
    HGLOBAL v19;      // eax
    int v20;          // [esp+1Ch] [ebp-A4h]
    LPCVOID pMem;     // [esp+30h] [ebp-90h] BYREF
    int v22[2];       // [esp+34h] [ebp-8Ch] BYREF
    int v23;          // [esp+3Ch] [ebp-84h]
    int v24;          // [esp+40h] [ebp-80h]
    int v25;          // [esp+44h] [ebp-7Ch]
    int v26[4];       // [esp+48h] [ebp-78h] BYREF
    int v27;          // [esp+58h] [ebp-68h] BYREF
    int v28;          // [esp+5Ch] [ebp-64h]
    int v29;          // [esp+68h] [ebp-58h]
    int v30;          // [esp+6Ch] [ebp-54h]
    int v31[20];      // [esp+70h] [ebp-50h] BYREF

    pMem = 0;
    if (!dwBytes)
        return -2005467006;
    memset(v31, 0, sizeof(v31));
    v31[0] = 80;
    v5 = 0;
    v31[2] = *(_DWORD *)a2;
    v31[3] = *(_DWORD *)(a2 + 4);
    v31[4] = *(_DWORD *)(a2 + 8);
    v31[5] = *(_DWORD *)(a2 + 12);
    v23 = 0;
    v22[0] = 20;
    v24 = 0;
    v22[1] = 0;
    v25 = 0;
    if (lstrlenA((LPCSTR)(a3 + 200))) {
        v23 = a3 + 200;
        v5 = v22;
    }
    if (lstrlenA((LPCSTR)(a3 + 400))) {
        v24 = a3 + 400;
        v5 = v22;
    }
    if (lstrlenA((LPCSTR)(a3 + 600))) {
        v25 = a3 + 600;
        v5 = v22;
    }
    v6 = *(_DWORD *)dwBytes;
    v7 = (*(int(__stdcall **)(SIZE_T, int *, int, _DWORD, int *))(*(_DWORD *)dwBytes + 156))(
        dwBytes, v31, 129, 0, v5);
    if (v7 < 0 || (v26[1] = 0,
                   v26[0] = 16,
                   v26[2] = (int)dplay4aShortName,
                   v26[3] = 0,
                   v7 = sub_1003D0B0(dwBytes, (LPDWORD)&pMem),
                   v7 < 0)) {
    LABEL_17:
        v8 = pMem;
        goto LABEL_18;
    }
    v8 = pMem;
    if (*((_DWORD *)pMem + 11) < 8u) {
        v9 = 0;
        if (dword_1022AF1C)
            v9 = 512;
        v20 = v9;
        v10 = *(_DWORD *)(a4 + 4);
        v28 = *(_DWORD *)a4;
        v11 = *(_DWORD *)(a4 + 12);
        *(_DWORD *)a4 = dwBytes;
        *(_DWORD *)(a4 + 12) = 0;
        v12 = v8[1];
        v29 = v11;
        v30 = *(_DWORD *)(a4 + 16);
        *(_DWORD *)(a4 + 16) = (v12 >> 8) & 1;
        v7 = (*(int(__stdcall **)(SIZE_T, int *, int *, int, _DWORD, _DWORD, int))(v6 + 24))(
            dwBytes, &v27, v26, v10, 0, 0, v20);
        if (v7 >= 0) {
            v17 = pMem;
            *(_DWORD *)(a4 + 8) = v27;
            dword_100AC648 = *((_DWORD *)v17 + 16);
            g_chosenTrack = dword_100AC648;
            dword_10AA2A00 = *((_DWORD *)v17 + 17);
            g_ChosenWeather = dword_10AA2A00;
            dword_10AA2A18 = *((_DWORD *)v17 + 18);
            dword_100BD3E0 = *((_DWORD *)v17 + 19);
            dword_100AC658 = dword_100BD3E0;
            qmemcpy(g_lpSessionDesc_dwUser3,
                    *((const void **)v17 + 12),
                    sizeof(g_lpSessionDesc_dwUser3));
            v18 = GlobalHandle(v17);
            GlobalUnlock(v18);
            v19 = GlobalHandle(pMem);
            GlobalFree(v19);
            return 0;
        }
        v13 = v29;
        v14 = v30;
        *(_DWORD *)a4 = v28;
        *(_DWORD *)(a4 + 12) = v13;
        *(_DWORD *)(a4 + 16) = v14;
        goto LABEL_17;
    }
    v7 = -2005467096;
LABEL_18:
    if (v8) {
        v15 = GlobalHandle(v8);
        GlobalUnlock(v15);
        v16 = GlobalHandle(pMem);
        GlobalFree(v16);
    }
    return v7;
}
// 100AC648: using guessed type int dword_100AC648;
// 100AC658: using guessed type int dword_100AC658;
// 100B380C: using guessed type int g_chosenTrack;
// 1022AF1C: using guessed type int dword_1022AF1C;
// 1022B350: using guessed type int g_ChosenWeather;
// 10AA2A00: using guessed type int dword_10AA2A00;
// 10AA2A18: using guessed type int dword_10AA2A18;
