#include "../../types-win32.h"
//----- (1001B320) --------------------------------------------------------
HRESULT __thiscall sub_1001B320(_DWORD *this, IDirectDraw *ddraw)
{
  HRESULT result; // eax
  IDirectDrawVtbl *ddrawVtbl; // ecx
  int v5; // eax
  int v6; // [esp+14h] [ebp-Ch] BYREF
  int v7; // [esp+18h] [ebp-8h]
  _DWORD *this_1; // [esp+1Ch] [ebp-4h]

  if ( (*(_BYTE *)this & 8) != 0 )
    return 0;
  if ( !ddraw )
    return -2005522670;
  ddrawVtbl = ddraw->lpVtbl;
  v6 = 1;
  this_1 = this;
  v7 = 0;
  result = ddrawVtbl->EnumDisplayModes(ddraw, 0, 0, &v6, enumModesCallback);
  if ( result >= 0 )
  {
    if ( v6 && v7 && this[197] == v7 )
    {
      v5 = *this;
      LOBYTE(v5) = *this | 8;
      *this = v5;
      result = 0;
    }
    else
    {
      result = -2005522671;
    }
  }
  return result;
}
