#include "types-win32.h"
//----- (10002BD0) --------------------------------------------------------
int pm_sub_10002BD0() {
    if (gPlayMusic == 1)
        return pm_sub_10002B40();
    if (gPlayMusic && dword_10220CD0 && dword_10220C3C)
        return EAR_DLL_ChangeChannelControl(dword_100940A8, 12) != 0;
    return 1;
}
// 100940A4: using guessed type int gPlayMusic;
// 10220C3C: using guessed type int dword_10220C3C;
// 10220CD0: using guessed type int dword_10220CD0;
// 10575484: using guessed type int (__stdcall *EAR_DLL_ChangeChannelControl)(_DWORD, _DWORD);
