#include "../types-win32.h"
//----- (100682A0) --------------------------------------------------------
size_t MakeEnemyCarColorPanels()
{
  size_t v0; // ecx
  size_t *v1; // eax
  int v2; // esi
  int *v3; // edi
  size_t result; // eax

  if ( g_ConfigJoystickIndex == 1 || g_ConfigJoystickIndex == 2 )
  {
    g_ConfigJoystickIndex = sub_100791D0();
    switch ( g_ConfigJoystickIndex )
    {
      case 1:
        g_ConfigJoystickPtr = (WORD *)&MEMORY[0x10B4DFD8];
        break;
      case 2:
        g_ConfigJoystickPtr = (WORD *)&MEMORY[0x10B4E080];
        break;
      case 3:
        g_ConfigJoystickPtr = (WORD *)&MEMORY[0x10B4E128];
        break;
      default:
        g_ConfigJoystickPtr = g_Config;
        break;
    }
  }
  v0 = 0;
  v1 = &SizeInBytes;
  do
  {
    *v1 = v0;
    v1 += 6;
    ++v0;
  }
  while ( (int)v1 < (int)aMakeenemycarco_4 );
  sub_10073060();
  v2 = 0;
  if ( dword_100B36FC > 0 )
  {
    v3 = dword_10AD0850;
    do
    {
      sub_10073080(v2++, *v3);
      v3 += 2778;
    }
    while ( v2 < dword_100B36FC );
  }
  pm_sub_10073320(1);
  strftime(0, SizeInBytes, Format, Tm);
  result = dword_100B36FC;
  if ( dword_100B36FC > 1 )
    result = strftime((char *)2, SizeInBytes, Format, Tm);
  if ( dword_100B36FC > 2 )
    result = strftime((char *)4, SizeInBytes, Format, Tm);
  return result;
}
// 100B36FC: using guessed type int dword_100B36FC;
// 10AD0850: using guessed type int dword_10AD0850[];
// 10B4E1D0: using guessed type int g_ReadJoystick;
