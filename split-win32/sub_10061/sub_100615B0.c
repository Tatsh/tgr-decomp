#include "../../types-win32.h"
//----- (100615B0) --------------------------------------------------------
int __cdecl sub_100615B0(_BYTE *a1, int a2, int a3, int a4, int a5)
{
  _BYTE *v5; // edi
  int v6; // esi
  int v7; // ebp
  int v8; // ecx
  _BYTE *v9; // eax

  v5 = a1;
  if ( !a1 )
    return 0;
  v6 = a3 - a2;
  v7 = 0;
  if ( a5 - a4 <= 0 )
    return 0;
  while ( 1 )
  {
    v8 = 0;
    v9 = v5;
    if ( v6 > 0 )
      break;
LABEL_7:
    ++v7;
    v5 += 4 * v6;
    if ( v7 >= a5 - a4 )
      return 0;
  }
  while ( *v9 || v9[1] != v9[2] )
  {
    v9 += 4;
    if ( ++v8 >= v6 )
      goto LABEL_7;
  }
  return 1;
}
