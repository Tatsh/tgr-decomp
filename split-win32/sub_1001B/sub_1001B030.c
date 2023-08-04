#include "../../types-win32.h"
//----- (1001B030) --------------------------------------------------------
int __thiscall sub_1001B030(_DWORD *this, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx

  if ( !a2 )
    return -2147024809;
  v3 = this[135];
  *(_DWORD *)(a2 + 112) = 0;
  *(_DWORD *)(a2 + 108) = v3;
  v4 = this[135];
  if ( v4 )
    *(_DWORD *)(v4 + 112) = a2;
  v5 = this[134];
  this[135] = a2;
  if ( !v5 )
    this[134] = a2;
  ++this[133];
  return 0;
}
