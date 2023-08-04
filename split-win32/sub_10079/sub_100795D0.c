#include "../../types-win32.h"
//----- (100795D0) --------------------------------------------------------
int sub_100795D0()
{
  int v0; // esi
  int v1; // edi
  int result; // eax
  int v3; // esi
  int v4; // esi

  v0 = g_ConfigJoystickIndex;
  v1 = dword_10B4E1E0;
  g_ConfigJoystickIndex = 2;
  g_ConfigJoystickPtr = (WORD *)&MEMORY[0x10B4E080];
  dword_10B4E1E0 = 1;
  sub_100791D0();
  result = sub_10079550();
  g_ConfigJoystickIndex = v0;
  v3 = v0 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
        g_ConfigJoystickPtr = (WORD *)&MEMORY[0x10B4E128];
      else
        g_ConfigJoystickPtr = g_Config;
      dword_10B4E1E0 = v1;
    }
    else
    {
      g_ConfigJoystickPtr = (WORD *)&MEMORY[0x10B4E080];
      dword_10B4E1E0 = v1;
    }
  }
  else
  {
    dword_10B4E1E0 = v1;
    g_ConfigJoystickPtr = (WORD *)&MEMORY[0x10B4DFD8];
  }
  return result;
}
// 10B4E1D0: using guessed type int g_ReadJoystick;
// 10B4E1E0: using guessed type int dword_10B4E1E0;
