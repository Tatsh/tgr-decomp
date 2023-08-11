#include "types-win32.h"
//----- (10038F30) --------------------------------------------------------
void __cdecl __noreturn cleanUpAndExitWithCode(int Code) {
    void *v1; // ecx

    if (gUnkC8Ptr1 && dword_100AC300) {
        *((_DWORD *)gUnkC8Ptr1 + 26) = 0;
        (*(void(__thiscall **)(void *, _DWORD))(*(_DWORD *)gUnkC8Ptr1 + 24))(gUnkC8Ptr1, 0);
    }
    sub_1002C4A0();
    sub_10016990();
    if (dword_10B501CC)
        dword_10B501CC();
    input_10079550();
    input_10078BC0();
    input_10078DB0();
    ReleaseDirectSound();
    if (gNetworkPlay)
        np_sub_10005BE0();
    sub_1003BFD0();
    sub_1003BF60();
    if (gPlayMusic)
        pm_sub_10002CF0();
    meth_DebugPrint(v1);
    if (dword_118AA0D0)
        dword_118AA0D0();
    if (dword_10690A28)
        dword_10690A28();
    car_10061620();
    meth_Pod_CleanUpPod(&gPod);
    sub_1002AEA0();
    ReleaseBRString();
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
