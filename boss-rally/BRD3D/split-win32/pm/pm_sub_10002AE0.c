#include "../types-win32.h"
//----- (10002AE0) --------------------------------------------------------
int pm_sub_10002AE0() {
    if (!g_Playmusic)
        return 1;
    if (!dword_10220CD0)
        return 1;
    dword_10220CD8 = 1;
    if (!dword_10220C3C || !mciSendCommandA(mciId, 0x809u, 0, 0))
        return 1;
    mciSendCommandA(mciId, 0x804u, 0, 0);
    return 0;
}
// 100940A4: using guessed type int g_Playmusic;
// 10220C3C: using guessed type int dword_10220C3C;
// 10220CD0: using guessed type int dword_10220CD0;
// 10220CD8: using guessed type int dword_10220CD8;
