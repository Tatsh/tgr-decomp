#include "../../types-win32.h"
//----- (1001B510) --------------------------------------------------------
int __thiscall meth_1001B510(#468 *this, #462 *a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // [esp+Ch] [ebp-Ch] BYREF
  int v7; // [esp+10h] [ebp-8h]
  #468 *v8; // [esp+14h] [ebp-4h]

  if ( (*(_BYTE *)this & 0x10) != 0 )
    return 0;
  if ( !a2 )
    return -2005522670;
  v4 = *(_DWORD *)a2;
  v6 = 1;
  v8 = this;
  v7 = 0;
  result = (*(int (__stdcall **)(#462 *, int (__stdcall *)(GUID *, LPSTR, LPSTR, #469 *, #469 *, LPVOID), int *))(v4 + 12))(
             a2,
             d3d2enumDevicesCallback,
             &v6);
  if ( result >= 0 )
  {
    if ( v6 && v7 && *((_DWORD *)this + 200) == v7 )
    {
      v5 = *(_DWORD *)this;
      LOBYTE(v5) = *(_DWORD *)this | 0x10;
      *(_DWORD *)this = v5;
      result = 0;
    }
    else
    {
      result = -2005522671;
    }
  }
  return result;
}
