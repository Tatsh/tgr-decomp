#include "types-win32.h"
//----- (100025F0) --------------------------------------------------------
int __cdecl pm_sub_100025F0(HWND hWnd) {
    unsigned int v2; // eax

    if (!gPlayMusic)
        return 1;
    if (++dword_10220CD0 != 1)
        return 1;
    v2 = GetTicks();
    srand(v2);
    dword_10220CD4 = 2;
    dword_10220C44 = 0;
    playParmsPlayTo = 0;
    pm_setupEAR(hWnd);
    dword_10220C3C = 0;
    dword_10220C48 = 0;
    return pm_10002260();
}
// 100940A4: using guessed type int gPlayMusic;
// 10220C38: using guessed type int playParmsPlayTo;
// 10220C3C: using guessed type int dword_10220C3C;
// 10220C44: using guessed type int dword_10220C44;
// 10220C48: using guessed type int dword_10220C48;
// 10220CD0: using guessed type int dword_10220CD0;
// 10220CD4: using guessed type int dword_10220CD4;
