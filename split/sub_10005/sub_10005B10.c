//----- (10005B10) --------------------------------------------------------
int sub_10005B10() {
    int *mutex; // esi

    mutex = dword_10221328;
    do {
        *mutex = (int)CreateMutexA(0, 0, 0);
        mutex += 606;
    } while ((int)mutex < (int)&dword_1022AAA8);
    hMutex = CreateMutexA(0, 0, 0);
    g_hMutex_0 = CreateMutexA(0, 0, 0);
    g_hMutex_1 = CreateMutexA(0, 0, 0);
    g_hMutex_2 = CreateMutexA(0, 0, 0);
    dword_10221310 = 0;
    dword_10220DD8 = 0;
    sub_10075100();
    hMutex_3 = CreateMutexA(0, 0, 0);
    g_hMutex_4 = CreateMutexA(0, 0, 0);
    g_hMutex_5 = CreateMutexA(0, 0, 0);
    g_hMutex_6 = CreateMutexA(0, 0, 0);
    g_hMutex_7 = CreateMutexA(0, 0, 0);
    g_hMutex_8 = CreateMutexA(0, 0, 0);
    sub_10005960();
    return 1;
}
// 10220DD8: using guessed type int dword_10220DD8;
// 10221310: using guessed type int dword_10221310;
// 10221328: using guessed type int dword_10221328[];
// 1022AAA8: using guessed type int dword_1022AAA8;
