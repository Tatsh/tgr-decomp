//----- (10038F30) --------------------------------------------------------
void __cdecl __noreturn cleanUpAndExitWithCode(int Code) {
    void *v1; // ecx

    if (dword_10AA2904 && dword_100AC300) {
        *((_DWORD *)dword_10AA2904 + 26) = 0;
        (*(void(__thiscall **)(void *, _DWORD))(*(_DWORD *)dword_10AA2904 + 24))(dword_10AA2904, 0);
    }
    sub_1002C4A0();
    sub_10016990();
    if (dword_10B501CC)
        dword_10B501CC();
    sub_10079550();
    sub_10078BC0();
    sub_10078DB0();
    ReleaseDirectSound();
    if (g_NetworkPlay)
        np_sub_10005BE0();
    sub_1003BFD0();
    sub_1003BF60();
    if (g_Playmusic)
        pm_sub_10002CF0();
    debugPrint(v1);
    if (dword_118AA0D0)
        dword_118AA0D0();
    if (dword_10690A28)
        dword_10690A28();
    sub_10061620();
    meth_10008970(dword_10A99780);
    sub_1002AEA0();
    sub_10074050();
    CoUninitialize();
    exit(Code);
}
// 10038FAB: variable 'v1' is possibly undefined
// 100940A4: using guessed type int g_Playmusic;
// 100AC300: using guessed type int dword_100AC300;
// 1022AF18: using guessed type int g_NetworkPlay;
// 10690A28: using guessed type int (*dword_10690A28)(void);
// 10B501CC: using guessed type int (*dword_10B501CC)(void);
// 118AA0D0: using guessed type int (*dword_118AA0D0)(void);
