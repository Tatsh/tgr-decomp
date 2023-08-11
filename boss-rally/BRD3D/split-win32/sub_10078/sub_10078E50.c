#include "types-win32.h"
//----- (10078E50) --------------------------------------------------------
int sub_10078E50() {
    int result; // eax

    result = gConfigJoystickIndex;
    if (gConfigJoystickIndex == 1 || gConfigJoystickIndex == 2) {
        result = dword_10B4E1E0;
        if (dword_10B4E1E0) {
            result = MEMORY[0x118ABDBC];
            if (MEMORY[0x118ABDBC]) {
                result = dword_106909E0;
                if (!dword_106909E0)
                    gDIEffectSquareDuration = 250000;
            }
        }
    }
    return result;
  }
  // 100BD438: using guessed type int dword_100BD438;
  // 106909E0: using guessed type int dword_106909E0;
  // 10B4E1D0: using guessed type int g_ReadJoystick;
  // 10B4E1E0: using guessed type int dword_10B4E1E0;
  // 118ABDBC: using guessed type int dword_118ABDBC;
