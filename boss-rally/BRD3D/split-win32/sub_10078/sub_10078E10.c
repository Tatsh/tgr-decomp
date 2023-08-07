#include "../../types-win32.h"
//----- (10078E10) --------------------------------------------------------
int __cdecl sub_10078E10(int a1) {
    int result; // eax

    result = g_ConfigJoystickIndex;
    if (g_ConfigJoystickIndex == 1 || g_ConfigJoystickIndex == 2) {
        result = dword_10B4E1E0;
        if (dword_10B4E1E0) {
            result = MEMORY[0x118ABDBC];
            if (MEMORY[0x118ABDBC]) {
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
// 100BD430: using guessed type int dword_100BD430;
// 106909E0: using guessed type int dword_106909E0;
// 10B4E1D0: using guessed type int g_ReadJoystick;
// 10B4E1E0: using guessed type int dword_10B4E1E0;
// 118ABDBC: using guessed type int dword_118ABDBC;
