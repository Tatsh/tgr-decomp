#include "types-win32.h"
//----- (10078ED0) --------------------------------------------------------
HRESULT input_10078ED0() {
  HRESULT result; // eax

  result = gConfigJoystickIndex;
  if (gConfigJoystickIndex == 1 || gConfigJoystickIndex == 2) {
    result = dword_10B4E1E0;
    if (dword_10B4E1E0) {
      result = gDIEffectSquare.dwStartDelay;
      if (gDIEffectSquare.dwStartDelay) {
        result = dword_106909E0;
        if (!dword_106909E0) {
          gDIEffectSquare.dwDuration = gDIEffectSquareDuration;
          result = (HRESULT)gDirectInputEffect;
          if (gDirectInputEffect)
              result = gDirectInputEffect->lpVtbl->SetParameters(
                  gDirectInputEffect, &gDIEffectSquare, 0x20000041);
        }
      }
    }
  }
  return result;
}
// 100BD438: using guessed type int gDIEffectSquareDuration;
// 106909E0: using guessed type int dword_106909E0;
// 10B4E1D0: using guessed type int gConfigJoystickIndex;
// 10B4E1E0: using guessed type int dword_10B4E1E0;
