//----- (1003D210) --------------------------------------------------------
int __cdecl sub_1003D210(HWND hWnd, int a2, int a3) {
    CHAR *v3;                       // ebp
    HGLOBAL v4;                     // eax
    char *v5;                       // ebx
    int v7;                         // esi
    HGLOBAL v8;                     // eax
    CHAR *v9;                       // eax
    HGLOBAL v10;                    // eax
    HGLOBAL v11;                    // eax
    void(__stdcall * v12)(HGLOBAL); // ebx
    HGLOBAL v13;                    // eax
    HGLOBAL v14;                    // eax
    HGLOBAL v15;                    // eax
    HGLOBAL v16;                    // eax
    LPARAM lParam;                  // [esp+10h] [ebp-4h] BYREF
    int v19;                        // [esp+1Ch] [ebp+8h]

    v3 = 0;
    lParam = 0;
    if (!a2 || !*(_DWORD *)a2 || dword_10AA288C)
        return 0;
    v4 = GlobalAlloc(0x42u, 0xC9u);
    v5 = (char *)GlobalLock(v4);
    if (v5) {
        strcpy(v5, byte_10A9DD28);
        v19 = sub_1003D3A0(*(_DWORD *)a2, *(_DWORD *)(a2 + 8), v5, (int)&lParam, a3);
        if (v19 >= 0) {
            PostMessageA(hWnd, 0x501u, 0, lParam);
            lParam = 0;
            v7 = lstrlenA(v5) + 8;
            v8 = GlobalAlloc(0x42u, v7);
            v9 = (CHAR *)GlobalLock(v8);
            v3 = v9;
            if (v9) {
                *(_DWORD *)v9 = (a3 != 0) + 1610612736;
                lstrcpyA(v9 + 4, v5);
                v19 = sub_1000C4D0(*(_DWORD *)a2, *(_DWORD *)(a2 + 8), 0, 1, (int)v3, v7);
            } else {
                v19 = -2147024882;
            }
        }
    } else {
        v19 = -2147024882;
    }
    if (v5) {
        v10 = GlobalHandle(v5);
        GlobalUnlock(v10);
        v11 = GlobalHandle(v5);
        v12 = (void(__stdcall *)(HGLOBAL))GlobalFree;
        GlobalFree(v11);
    } else {
        v12 = (void(__stdcall *)(HGLOBAL))GlobalFree;
    }
    if (lParam) {
        v13 = GlobalHandle((LPCVOID)lParam);
        GlobalUnlock(v13);
        v14 = GlobalHandle((LPCVOID)lParam);
        v12(v14);
    }
    if (v3) {
        v15 = GlobalHandle(v3);
        GlobalUnlock(v15);
        v16 = GlobalHandle(v3);
        v12(v16);
    }
    return v19;
}
// 10AA288C: using guessed type int dword_10AA288C;
