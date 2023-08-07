#include "../../types-win32.h"
//----- (10008CF0) --------------------------------------------------------
void __cdecl __noreturn sub_10008CF0(int a1) {
    _DWORD *v1;      // eax
    _DWORD v2[8192]; // [esp+8h] [ebp-8000h] BYREF

    sub_10016990();
    dword_106C0680 = (int)v2;
    sub_10019260();
    sub_10019270();
    sub_100192F0(20);
    sub_10019300(a1, g_Width / 2, 220);
    v1 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v1 = -1207959552;
    v1[1] = 0;
    dword_10B501D0(v2);
    while (!GetAsyncKeyState(27))
        Sleep(1u);
    cleanUpAndExitWithCode(1);
}
// 100A81C0: using guessed type int g_Width;
// 106C0680: using guessed type int dword_106C0680;
// 10B501D0: using guessed type int (__cdecl *dword_10B501D0)(_DWORD);
