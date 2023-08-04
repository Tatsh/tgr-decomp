#include "../../types-win32.h"
//----- (10077200) --------------------------------------------------------
int __cdecl sub_10077200(_DWORD *a1)
{
  IDirectInputDevice2A *v1; // eax
  int result; // eax
  HRESULT v3; // eax
  int v4; // [esp+10h] [ebp-110h] BYREF
  int v5; // [esp+14h] [ebp-10Ch]
  char v6[224]; // [esp+40h] [ebp-E0h]

  v1 = g_DirectInputDevice2A;
  if ( !g_DirectInputDevice2A )
  {
    g_ConfigJoystickIndex = 2;
    g_ConfigJoystickPtr = (int)&MEMORY[0x10B4E080];
    sub_100791D0();
    v1 = g_DirectInputDevice2A;
    if ( !g_DirectInputDevice2A )
      return 1;
  }
  v1->lpVtbl->Poll(v1);
  v3 = g_DirectInputDevice2A->lpVtbl->GetDeviceState(g_DirectInputDevice2A, 272, &v4);
  if ( v3 && v3 == -2147024866 )
    sub_100773D0();
  for ( result = 0; result < 128; ++result )
  {
    if ( (v6[result] & 0x80) != 0 )
    {
      *a1 = 256;
      return result;
    }
  }
  if ( v4 >= -50 )
  {
    if ( v4 <= 50 )
    {
      if ( v5 >= -50 )
      {
        if ( v5 <= 50 )
        {
          result = -1;
        }
        else
        {
          *a1 = 33536;
          result = 0;
        }
      }
      else
      {
        result = 0;
        *a1 = 33280;
      }
    }
    else
    {
      result = 0;
      *a1 = 33024;
    }
  }
  else
  {
    *a1 = 0x8000;
    result = 0;
  }
  return result;
}
// 10B4E1D0: using guessed type int g_ReadJoystick;
// 10B4E1D4: using guessed type int dword_10B4E1D4;
