#include "../../types-win32.h"
//----- (1001B5A0) --------------------------------------------------------
int __thiscall meth_1001B5A0(int *this)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // eax

  v2 = (_DWORD *)this[201];
  if ( v2 )
  {
    do
    {
      v3 = v2[136];
      v4 = v2[137];
      if ( v3 )
        *(_DWORD *)(v3 + 548) = v4;
      else
        this[201] = v4;
      if ( v4 )
        *(_DWORD *)(v4 + 544) = v3;
      else
        this[202] = v3;
      v2[137] = 0;
      v2[136] = 0;
      if ( v2 )
      {
        meth_1001AEE0((int)v2);
        free(v2);
      }
      v2 = (_DWORD *)v4;
    }
    while ( v4 );
  }
  v5 = *this;
  this[200] = 0;
  LOBYTE(v5) = v5 & 0xEF;
  this[201] = 0;
  this[202] = 0;
  *this = v5;
  return 0;
}
