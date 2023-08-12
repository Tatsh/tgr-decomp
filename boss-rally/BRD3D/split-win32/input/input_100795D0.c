#include "types-win32.h"
//----- (100795D0) --------------------------------------------------------
int input_100795D0() {
  int configJoystickIndex; // esi
  int v1;                  // edi
  int result;              // eax
  int v3;                  // esi
  int v4;                  // esi

  configJoystickIndex = gConfigJoystickIndex;
  v1 = dword_10B4E1E0;
  gConfigJoystickIndex = 2;
  gConfigJoystickPtr = &gConfig.joystick2;
  dword_10B4E1E0 = 1;
  input_100791D0();
  result = input_10079550();
  gConfigJoystickIndex = configJoystickIndex;
  v3 = configJoystickIndex - 1;
  if (v3) {
    v4 = v3 - 1;
    if (v4) {
      if (v4 == 1)
        gConfigJoystickPtr = &gConfig.joystick3;
      else
        gConfigJoystickPtr = (BossRallyConfigJoystick *)&gConfig;
      dword_10B4E1E0 = v1;
    } else {
      gConfigJoystickPtr = &gConfig.joystick2;
      dword_10B4E1E0 = v1;
    }
  } else {
    dword_10B4E1E0 = v1;
    gConfigJoystickPtr = &gConfig.joystick1;
  }
  return result;
}
// 10B4E1D0: using guessed type int gConfigJoystickIndex;
// 10B4E1E0: using guessed type int dword_10B4E1E0;
