#include "types-win32.h"
//----- (100682A0) --------------------------------------------------------
size_t car_MakeEnemyCarColorPanels() {
  size_t v0;     // ecx
  size_t *v1;    // eax
  int v2;        // esi
  int *v3;       // edi
  size_t result; // eax

  if (gConfigJoystickIndex == 1 || gConfigJoystickIndex == 2) {
    gConfigJoystickIndex = input_100791D0();
    switch (gConfigJoystickIndex) {
    case 1:
      gConfigJoystickPtr = &gConfig.joystick1;
      break;
    case 2:
      gConfigJoystickPtr = &gConfig.joystick2;
      break;
    case 3:
      gConfigJoystickPtr = &gConfig.joystick3;
      break;
    default:
      gConfigJoystickPtr = (BossRallyConfigJoystick *)&gConfig;
      break;
    }
  }
  v0 = 0;
  v1 = &SizeInBytes;
  do {
    *v1 = v0;
    v1 += 6;
    ++v0;
  } while ((int)v1 < (int)aMakeenemycarco_4);
  sub_10073060();
  v2 = 0;
  if (dword_100B36FC > 0) {
    v3 = dword_10AD0850;
    do {
      sub_10073080(v2++, *v3);
      v3 += 2778;
    } while (v2 < dword_100B36FC);
  }
  pm_sub_10073320(1);
  strftime(0, SizeInBytes, Format, Tm);
  result = dword_100B36FC;
  if (dword_100B36FC > 1)
    result = strftime((char *)2, SizeInBytes, Format, Tm);
  if (dword_100B36FC > 2)
    result = strftime((char *)4, SizeInBytes, Format, Tm);
  return result;
}
// 100B36FC: using guessed type int dword_100B36FC;
// 10AD0850: using guessed type int dword_10AD0850[];
// 10B4E1D0: using guessed type int gConfigJoystickIndex;
