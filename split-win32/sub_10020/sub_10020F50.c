#include "../../types-win32.h"
//----- (10020F50) --------------------------------------------------------
int __cdecl sub_10020F50(_DWORD *a1)
{
  int v1; // eax

  v1 = (int)(*a1 << 16) >> 24;
  if ( !v1 )
    return sub_100243D0((int)a1);
  if ( v1 == 3 )
    return sub_10020F80((int)a1);
  return (int)(a1 + 2);
}
