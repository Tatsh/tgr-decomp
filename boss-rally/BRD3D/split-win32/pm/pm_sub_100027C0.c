#include "../types-win32.h"
//----- (100027C0) --------------------------------------------------------
int __cdecl pm_sub_100027C0(int a1) {
    int result; // eax

    if (g_Playmusic == 1)
        result = pm_sub_10002870(a1);
    else
        result = pm_sub_100027F0(a1);
    return result;
}
// 100940A4: using guessed type int g_Playmusic;
