#include "types-win32.h"
//----- (10002CF0) --------------------------------------------------------
int pm_sub_10002CF0() {
    int result; // eax
    BOOL v1;    // esi
    BOOL v2;    // esi

    if (gPlayMusic == 1) {
        if (gPlayMusic) {
            --dword_10220CD0;
            v2 = mciSendCommandA(mciId, 0x808u, 0, 0) == 0;
            if (dword_10220CD0)
                result = v2;
            else
                result = mciSendCommandA(mciId, 0x804u, 0, 0) == 0 && v2;
        } else {
            result = 1;
        }
    } else if (gPlayMusic) {
        --dword_10220CD0;
        if (dword_10220C3C)
            v1 = EAR_DLL_ClearChannel(dword_100940A8, 0) == 0;
        else
            v1 = 1;
        if (!dword_10220CD0)
            sub_1002AEA0();
        result = v1;
    } else {
        result = 1;
    }
    return result;
}
// 100940A4: using guessed type int gPlayMusic;
// 10220C3C: using guessed type int dword_10220C3C;
// 10220CD0: using guessed type int dword_10220CD0;
// 10575480: using guessed type int (__stdcall *EAR_DLL_ClearChannel)(_DWORD, _DWORD);
