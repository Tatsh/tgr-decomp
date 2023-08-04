#include "../../types-win32.h"
//----- (10038250) --------------------------------------------------------
int __cdecl sub_10038250(int a1)
{
  int result; // eax
  int *v2; // esi
  int i; // edi
  char v4; // cl
  char v5; // dl
  char v6; // al

  result = *(_DWORD *)(a1 + 124);
  v2 = *(int **)(a1 + 120);
  for ( i = 0; i < result; ++i )
  {
    v4 = *(_BYTE *)v2;
    v5 = *((_BYTE *)v2 + 1);
    *(_BYTE *)v2 = *((_BYTE *)v2 + 3);
    v6 = *((_BYTE *)v2 + 2);
    *((_BYTE *)v2 + 3) = v4;
    *((_BYTE *)v2 + 2) = v5;
    *((_BYTE *)v2 + 1) = v6;
    sub_1002B970(v2);
    sub_100382A0((char *)*v2);
    result = *(_DWORD *)(a1 + 124);
    ++v2;
  }
  return result;
}
