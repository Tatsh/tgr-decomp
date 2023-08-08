#include "types-win32.h"
//----- (10002C30) --------------------------------------------------------
BOOL pm_sub_10002C30() {
    BOOL result; // eax

    if (g_Playmusic == 1) {
        if (g_Playmusic && dword_10220CD0 && dword_10220C3C &&
            mciSendCommandA(mciId, 0x808u, 0, 0)) {
            mciSendCommandA(mciId, 0x804u, 0, 0);
            result = 0;
        } else {
            result = 1;
        }
    } else if (g_Playmusic && dword_10220CD0 && dword_10220C3C) {
        result = EAR_DLL_ClearChannel(dword_100940A8, 0) == 0;
    } else {
        result = 1;
    }
    return result;
}
// 100940A4: using guessed type int g_Playmusic;
// 10220C3C: using guessed type int dword_10220C3C;
// 10220CD0: using guessed type int dword_10220CD0;
// 10575480: using guessed type int (__stdcall *EAR_DLL_ClearChannel)(_DWORD, _DWORD);
