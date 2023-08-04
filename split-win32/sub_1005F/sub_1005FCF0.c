#include "../../types-win32.h"
//----- (1005FCF0) --------------------------------------------------------
int sub_1005FCF0()
{
  int v0; // eax
  int v1; // edx
  int result; // eax

  dword_10AA27EC = g_TransmissionType;
  dword_10AA27F0 = (int)g_UltraCarHeader;
  dword_10AA26F0 = dword_10AA28A0;
  dword_10AA27F4 = g_SuspensionType;
  LOBYTE(dword_10AA26F4[0]) = dword_10AA28B8;
  dword_10AA27F8 = g_ConfigJoystickIndex;
  BYTE1(dword_10AA26F4[0]) = dword_10AA28A4;
  if ( !g_GameMode )
  {
    v0 = 2 * ((unsigned __int8)dword_10AA28A4 + 12 * (unsigned __int8)dword_10AA28B8);
    v1 = (unsigned __int8)byte_100B3821[v0];
    g_chosenTrack = (unsigned __int8)byte_100B3820[v0];
    g_ChosenWeather = v1;
  }
  dword_10AA2A10 |= (unsigned __int16)dword_10AA27E0;
  result = HIWORD(dword_10AA27E0) | dword_10AA2A14;
  dword_10AA2A14 = result;
  return result;
}
// 10094354: using guessed type int g_TransmissionType;
// 10094358: using guessed type int g_SuspensionType;
// 100AA010: using guessed type int g_GameMode;
// 100B380C: using guessed type int g_chosenTrack;
// 1022B350: using guessed type int g_ChosenWeather;
// 10AA26F0: using guessed type int dword_10AA26F0;
// 10AA26F4: using guessed type int dword_10AA26F4[];
// 10AA27E0: using guessed type int dword_10AA27E0;
// 10AA27EC: using guessed type int dword_10AA27EC;
// 10AA27F0: using guessed type int dword_10AA27F0;
// 10AA27F4: using guessed type int dword_10AA27F4;
// 10AA27F8: using guessed type int dword_10AA27F8;
// 10AA28A0: using guessed type int dword_10AA28A0;
// 10AA28A4: using guessed type int dword_10AA28A4;
// 10AA28B8: using guessed type int dword_10AA28B8;
// 10AA2A10: using guessed type int dword_10AA2A10;
// 10AA2A14: using guessed type int dword_10AA2A14;
// 10B4E1D0: using guessed type int g_ConfigJoystickIndex;
