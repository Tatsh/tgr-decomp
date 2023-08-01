//----- (10005BE0) --------------------------------------------------------
BOOL np_sub_10005BE0() {
    BOOL v0;    // ebp
    HANDLE *v1; // esi

    if (g_NetworkPlay > 1)
        sub_10072270();
    v0 = sub_1000C510((HANDLE *)&unk) == 0;
    if (g_hMutex_8) {
        CloseHandle(g_hMutex_8);
        g_hMutex_8 = 0;
    }
    if (g_hMutex_7) {
        CloseHandle(g_hMutex_7);
        g_hMutex_7 = 0;
    }
    if (g_hMutex_5) {
        CloseHandle(g_hMutex_5);
        g_hMutex_5 = 0;
    }
    if (g_hMutex_6) {
        CloseHandle(g_hMutex_6);
        g_hMutex_6 = 0;
    }
    if (g_hMutex_4) {
        CloseHandle(g_hMutex_4);
        g_hMutex_4 = 0;
    }
    if (hMutex_3) {
        CloseHandle(hMutex_3);
        hMutex_3 = 0;
    }
    if (g_hMutex_1) {
        CloseHandle(g_hMutex_1);
        g_hMutex_1 = 0;
    }
    if (g_hMutex_2) {
        CloseHandle(g_hMutex_2);
        g_hMutex_2 = 0;
    }
    if (g_hMutex_0) {
        CloseHandle(g_hMutex_0);
        g_hMutex_0 = 0;
    }
    if (hMutex) {
        CloseHandle(hMutex);
        hMutex = 0;
    }
    v1 = (HANDLE *)dword_10221328;
    do {
        if (*v1) {
            CloseHandle(*v1);
            *v1 = 0;
        }
        v1 += 606;
    } while ((int)v1 < (int)&dword_1022AAA8);
    return v0;
}
// 10221328: using guessed type int dword_10221328[];
// 1022AAA8: using guessed type int dword_1022AAA8;
// 1022AF18: using guessed type int g_NetworkPlay;
