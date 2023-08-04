#include "../types-win32.h"
//----- (1001AB90) --------------------------------------------------------
int __stdcall d3d2enumDevicesCallback(GUID *a1, LPSTR lpDeviceDescription, LPSTR deviceName, #469 *desc, #469 *a5, LPVOID userArg)
{
  int *v6; // ebx
  #478 *v7; // ebp
  #478 *v8; // eax
  #478 *v9; // edx
  int v10; // eax
  int v11; // edi

  v6 = (int *)userArg;
  if ( userArg )
  {
    v7 = (#478 *)*((_DWORD *)userArg + 2);
    if ( v7 )
    {
      v8 = (#478 *)malloc(0x228u);
      v9 = v8;
      if ( v8 )
      {
        v10 = *(_DWORD *)v8;
        LOBYTE(v10) = *(_DWORD *)v9 & 0xFC;
        *(_DWORD *)v9 = v10;
        *((_DWORD *)v9 + 5) = 0;
        *((_DWORD *)v9 + 6) = 0;
        memset((char *)v9 + 28, 0, 0xFCu);
        *((_DWORD *)v9 + 7) = 252;
        memset((char *)v9 + 280, 0, 0xFCu);
        *((_DWORD *)v9 + 70) = 252;
        v6 = (int *)userArg;
        *((_DWORD *)v9 + 133) = 0;
        *((_DWORD *)v9 + 134) = 0;
        *((_DWORD *)v9 + 135) = 0;
        *((_DWORD *)v9 + 136) = 0;
        *((_DWORD *)v9 + 137) = 0;
        v11 = (int)v9;
      }
      else
      {
        v11 = 0;
      }
      if ( v11
        && sub_1001ADE0((#478 *)v11, a1, lpDeviceDescription, deviceName, desc, a5) >= 0
        && sub_1001B630(v7, v11) >= 0 )
      {
        ++v6[1];
      }
    }
  }
  return 1;
}
