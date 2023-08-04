#include "../../types-win32.h"
//----- (1003E3A0) --------------------------------------------------------
int sub_1003E3A0()
{
  int result; // eax

  g_ConfigJoystickIndex = dword_100AC520[dword_10AA2A0C];
  switch ( g_ConfigJoystickIndex )
  {
    case 1:
      g_ConfigJoystickPtr = g_Config.joystick1;
      break;
    case 2:
      g_ConfigJoystickPtr = g_Config.joystick2;
      break;
    case 3:
      g_ConfigJoystickPtr = g_Config.joystick3;
      break;
    default:
      g_ConfigJoystickPtr = &g_Config;
      break;
  }
  dword_10AA2A1C = dword_10B4E1E0 == 0;
  dword_10AA2A20 = dword_10B4E1D8 == 0;
  dword_10AA2A24 = dword_10B4E1DC == 0;
  dword_10AA2A28 = dword_10B4E7A0 == 0;
  strcpy(String1, byte_10B4E1E4);
  sub_1003E2C0();
  dword_100AC648 = dword_10B4E710;
  dword_10AA2A00 = dword_10B4E714;
  dword_100AC64C = dword_10B4E71C;
  dword_10AA2A08 = dword_10B4E718;
  dword_100AC650 = dword_10B4E720;
  dword_100AC654 = dword_10B4E724;
  dword_10AA2A0C = dword_10B4E728;
  if ( dword_10B4E728 == 1 )
    dword_10AA2A0C = 2;
  dword_100AC658 = dword_10B4E72C;
  dword_100AC65C = dword_10B4E738;
  word_100AB3E4 |= dword_10B4E730;
  dword_10AA2A10 = dword_10B4E730;
  result = dword_10B4E734 | dword_100AB3EC;
  dword_10AA2A14 = dword_10B4E734;
  dword_10AA2A18 = dword_10B4E73C;
  dword_100AB3EC |= dword_10B4E734;
  return result;
}
// 100AB3E4: using guessed type __int16 word_100AB3E4;
// 100AB3EC: using guessed type int dword_100AB3EC;
// 100AC648: using guessed type int dword_100AC648;
// 100AC64C: using guessed type int dword_100AC64C;
// 100AC650: using guessed type int dword_100AC650;
// 100AC654: using guessed type int dword_100AC654;
// 100AC658: using guessed type int dword_100AC658;
// 100AC65C: using guessed type int dword_100AC65C;
// 10AA2A00: using guessed type int dword_10AA2A00;
// 10AA2A08: using guessed type int dword_10AA2A08;
// 10AA2A0C: using guessed type int dword_10AA2A0C;
// 10AA2A10: using guessed type int dword_10AA2A10;
// 10AA2A14: using guessed type int dword_10AA2A14;
// 10AA2A18: using guessed type int dword_10AA2A18;
// 10AA2A1C: using guessed type int dword_10AA2A1C;
// 10AA2A20: using guessed type int dword_10AA2A20;
// 10AA2A24: using guessed type int dword_10AA2A24;
// 10AA2A28: using guessed type int dword_10AA2A28;
// 10B4E1D0: using guessed type int g_ConfigJoystickIndex;
// 10B4E1D8: using guessed type int dword_10B4E1D8;
// 10B4E1DC: using guessed type int dword_10B4E1DC;
// 10B4E1E0: using guessed type int dword_10B4E1E0;
// 10B4E710: using guessed type int dword_10B4E710;
// 10B4E714: using guessed type int dword_10B4E714;
// 10B4E718: using guessed type int dword_10B4E718;
// 10B4E71C: using guessed type int dword_10B4E71C;
// 10B4E720: using guessed type int dword_10B4E720;
// 10B4E724: using guessed type int dword_10B4E724;
// 10B4E728: using guessed type int dword_10B4E728;
// 10B4E72C: using guessed type int dword_10B4E72C;
// 10B4E730: using guessed type int dword_10B4E730;
// 10B4E734: using guessed type int dword_10B4E734;
// 10B4E738: using guessed type int dword_10B4E738;
// 10B4E73C: using guessed type int dword_10B4E73C;
// 10B4E7A0: using guessed type int dword_10B4E7A0;
