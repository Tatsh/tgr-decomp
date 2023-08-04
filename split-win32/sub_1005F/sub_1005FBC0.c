#include "../../types-win32.h"
//----- (1005FBC0) --------------------------------------------------------
int __cdecl sub_1005FBC0(int a1)
{
  int v1; // ecx
  int v2; // edx
  __int16 *v3; // eax
  unsigned __int16 v4; // si
  int result; // eax

  LOBYTE(dword_10AA28B8) = dword_10AA26F4[0];
  g_TransmissionType = dword_10AA27EC;
  g_SuspensionType = dword_10AA27F4;
  dword_10AA28A4 = BYTE1(dword_10AA26F4[0]);
  g_ConfigJoystickIndex = dword_10AA27F8;
  dword_10AA28A0 = dword_10AA26F0;
  g_UltraCarHeader = (void *)dword_10AA27F0;
  switch ( dword_10AA27F8 )
  {
    case 1:
      g_ConfigJoystickPtr = (int)&MEMORY[0x10B4DFD8];
      break;
    case 2:
      g_ConfigJoystickPtr = (int)&MEMORY[0x10B4E080];
      break;
    case 3:
      g_ConfigJoystickPtr = (int)&MEMORY[0x10B4E128];
      break;
    default:
      g_ConfigJoystickPtr = (int)&g_Config;
      break;
  }
  sprintf(byte_10AA2518, "%d", dword_10AA26F0 + 1);
  sprintf(byte_10A9D618, "%d", dword_10AA28A4 + 1);
  dword_10AA28AC = dword_10AA28A4;
  if ( a1 )
  {
    v1 = 0;
    v2 = 4;
    v3 = &word_10AA270E[4 * (char)dword_10AA28B8];
    do
    {
      v4 = *v3++;
      v1 += v4;
      --v2;
    }
    while ( v2 );
    dword_10AA28C4 = v1;
  }
  dword_10AA2A10 |= (unsigned __int16)dword_10AA27E0;
  result = HIWORD(dword_10AA27E0) | dword_10AA2A14;
  dword_10AA2A14 = result;
  return result;
}
// 10094354: using guessed type int g_TransmissionType;
// 10094358: using guessed type int g_SuspensionType;
// 10AA26F0: using guessed type int dword_10AA26F0;
// 10AA26F4: using guessed type int dword_10AA26F4[];
// 10AA270E: using guessed type __int16 word_10AA270E[];
// 10AA27E0: using guessed type int dword_10AA27E0;
// 10AA27EC: using guessed type int dword_10AA27EC;
// 10AA27F0: using guessed type int dword_10AA27F0;
// 10AA27F4: using guessed type int dword_10AA27F4;
// 10AA27F8: using guessed type int dword_10AA27F8;
// 10AA28A0: using guessed type int dword_10AA28A0;
// 10AA28A4: using guessed type int dword_10AA28A4;
// 10AA28AC: using guessed type int dword_10AA28AC;
// 10AA28B8: using guessed type int dword_10AA28B8;
// 10AA2A10: using guessed type int dword_10AA2A10;
// 10AA2A14: using guessed type int dword_10AA2A14;
// 10B4E1D0: using guessed type int g_ReadJoystick;
// 10B4E1D4: using guessed type int dword_10B4E1D4;
