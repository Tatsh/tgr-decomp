#include "types-win32.h"
//----- (10078E10) --------------------------------------------------------
int __cdecl input_10078E10(int a1) {
    int result; // eax

    result = gConfigJoystickIndex;
    if (gConfigJoystickIndex == 1 || gConfigJoystickIndex == 2) {
        result = dword_10B4E1E0;
        if (dword_10B4E1E0) {
            result = gDIEffectSquare.dwStartDelay;
            if (gDIEffectSquare.dwStartDelay) {
                result = dword_106909E0;
                if (!dword_106909E0) {
                    result = a1;
                    diEffectRglDirection_0 = a1;
                }
            }
        }
    }
    return result;
}
// 106909E0: using guessed type int dword_106909E0;
// 10B4E1D0: using guessed type int gConfigJoystickIndex;
// 10B4E1E0: using guessed type int dword_10B4E1E0;
