//----- (10002B70) --------------------------------------------------------
int pm_sub_10002B70() {
    if (g_Playmusic == 1)
        return pm_sub_10002AE0();
    if (g_Playmusic && dword_10220CD0 && dword_10220C3C)
        return EAR_DLL_ChangeChannelControl(dword_100940A8, 4) != 0;
    return 1;
}
// 100940A4: using guessed type int g_Playmusic;
// 10220C3C: using guessed type int dword_10220C3C;
// 10220CD0: using guessed type int dword_10220CD0;
// 10575484: using guessed type int (__stdcall *EAR_DLL_ChangeChannelControl)(_DWORD, _DWORD);