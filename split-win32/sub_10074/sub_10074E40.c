#include "../../types-win32.h"
//----- (10074E40) --------------------------------------------------------
int __cdecl sub_10074E40(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7[3]; // [esp+8h] [ebp-Ch]

  result = a1;
  if ( a1 >= 0 && a1 < 8 )
  {
    v4 = 0;
    if ( *(int *)(a3 + 4 * a1) < 3 )
    {
      v7[0] = a1;
      v4 = 1;
    }
    v5 = a1 - 1 + (a1 - 1 < 0 ? 8 : 0);
    if ( *(int *)(a3 + 4 * v5) < 3 )
      v7[v4++] = v5;
    result = a1 + 1;
    if ( a1 + 1 >= 8 )
      result = a1 - 7;
    if ( *(int *)(a3 + 4 * result) < 3 )
      v7[v4++] = result;
    if ( v4 )
    {
      v6 = rand();
      result = sub_10074ED0(v7[v4 * v6 / 0x8000], a2, a3);
    }
  }
  return result;
}
