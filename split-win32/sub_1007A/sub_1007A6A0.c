#include "../../types-win32.h"
//----- (1007A6A0) --------------------------------------------------------
int __cdecl sub_1007A6A0(HWND hWnd, intptr_t dwNewLong)
{
  bool isActiveWindow; // zf
  LONG v3; // eax

  if ( dwNewLong && (*(_BYTE *)(dwNewLong + 28) & 0x1F) == 31 )
  {
    SetWindowLongA(hWnd, -21, dwNewLong);       // GWL_USERDATA
    isActiveWindow = GetActiveWindow() == hWnd;
    v3 = *(_DWORD *)(dwNewLong + 20);
    if ( isActiveWindow )
    {
      LOBYTE(v3) = v3 | 8;
      *(_DWORD *)(dwNewLong + 20) = v3;
      return 0;
    }
    LOBYTE(v3) = v3 & 0xF7;
    *(_DWORD *)(dwNewLong + 20) = v3;
  }
  return 0;
}
