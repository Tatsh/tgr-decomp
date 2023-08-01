//----- (100025C0) --------------------------------------------------------
int __cdecl pm_sub_100025C0(HWND hWnd) {
    int result; // eax

    if (g_Playmusic == 1) // 1 = uses MCI
        result = pm_sub_10002660(hWnd);
    else
        result = pm_sub_100025F0(hWnd); // EAR
    return result;
}
// 100940A4: using guessed type int g_Playmusic;
