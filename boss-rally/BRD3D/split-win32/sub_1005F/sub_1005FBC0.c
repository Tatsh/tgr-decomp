#include "types-win32.h"
//----- (1005FBC0) --------------------------------------------------------
int __cdecl sub_1005FBC0(int a1) {
  int v1;              // ecx
  int v2;              // edx
  __int16 *v3;         // eax
  unsigned __int16 v4; // si
  int result;          // eax

  LOBYTE(dword_10AA28B8) = dword_10AA26F4[0];
  gTransmissionType = gTransmissionType0;
  gSuspensionType = gSuspensionType0;
  dword_10AA28A4 = BYTE1(dword_10AA26F4[0]);
  gConfigJoystickIndex = gConfigJoystickIndex0;
  dword_10AA28A0 = dword_10AA26F0;
  gTireType = gTireType0;
  switch (gConfigJoystickIndex0) {
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
  sprintf(byte_10AA2518, "%d", dword_10AA26F0 + 1);
  sprintf(byte_10A9D618, "%d", dword_10AA28A4 + 1);
  dword_10AA28AC = dword_10AA28A4;
  if (a1) {
    v1 = 0;
    v2 = 4;
    v3 = &word_10AA270E[4 * (char)dword_10AA28B8];
    do {
        v4 = *v3++;
        v1 += v4;
        --v2;
    } while (v2);
    dword_10AA28C4 = v1;
  }
  dword_10AA2A10 |= (unsigned __int16)dword_10AA27E0;
  result = HIWORD(dword_10AA27E0) | dword_10AA2A14;
  dword_10AA2A14 = result;
  return result;
}
// 10094354: using guessed type int gTransmissionType;
// 10094358: using guessed type int gSuspensionType;
// 10AA26F0: using guessed type int dword_10AA26F0;
// 10AA26F4: using guessed type int dword_10AA26F4[];
// 10AA270E: using guessed type __int16 word_10AA270E[];
// 10AA27E0: using guessed type int dword_10AA27E0;
// 10AA27EC: using guessed type int gTransmissionType0;
// 10AA27F0: using guessed type int gTireType0;
// 10AA27F4: using guessed type int gSuspensionType0;
// 10AA27F8: using guessed type int gConfigJoystickIndex0;
// 10AA28A0: using guessed type int dword_10AA28A0;
// 10AA28A4: using guessed type int dword_10AA28A4;
// 10AA28AC: using guessed type int dword_10AA28AC;
// 10AA28B8: using guessed type int dword_10AA28B8;
// 10AA2A10: using guessed type int dword_10AA2A10;
// 10AA2A14: using guessed type int dword_10AA2A14;
// 10B4E1D0: using guessed type int gConfigJoystickIndex;
