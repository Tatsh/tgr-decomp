#include "../../types-win32.h"
//----- (1001B630) --------------------------------------------------------
int __thiscall meth_1001B630(#478 *this, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx

  if ( !a2 )
    return -2147024809;
  v3 = *((_DWORD *)this + 202);
  *(_DWORD *)(a2 + 548) = 0;
  *(_DWORD *)(a2 + 544) = v3;
  v4 = *((_DWORD *)this + 202);
  if ( v4 )
    *(_DWORD *)(v4 + 548) = a2;
  v5 = *((_DWORD *)this + 201);
  *((_DWORD *)this + 202) = a2;
  if ( !v5 )
    *((_DWORD *)this + 201) = a2;
  ++*((_DWORD *)this + 200);
  return 0;
}
