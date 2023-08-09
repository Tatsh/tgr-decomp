#include "types-win32.h"
//----- (10002B40) --------------------------------------------------------
int pm_sub_10002B40() {
    int result; // eax

    if (gPlayMusic && dword_10220CD0 && dword_10220C3C)
        result = pm_sub_100027C0(dword_10220CD4);
    else
        result = 1;
    return result;
}
// 100940A4: using guessed type int g_Playmusic;
// 10220C3C: using guessed type int dword_10220C3C;
// 10220CD0: using guessed type int dword_10220CD0;
// 10220CD4: using guessed type int dword_10220CD4;
