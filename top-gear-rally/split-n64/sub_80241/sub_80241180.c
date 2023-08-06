#include "../../types-n64.h"
//----- (80241180) --------------------------------------------------------
int __fastcall sub_80241180(unsigned int a1, unsigned int a2, int *a3, unsigned int *a4, unsigned int *a5, int *a6, int *a7, int a8)
{
  int result; // $v0
  int v9; // $v1
  int v10; // $v0
  int v11; // $v1
  int v12; // [sp+34h] [-4h]

  result = sub_80240A30(a3, a1, 0x101u, (int)dword_8028C8D0, (int)dword_8028C94C, a6, a4, a8);
  v9 = result;
  if ( result )
  {
    if ( result == -3 )
    {
      *(_DWORD *)(a8 + 24) = "oversubscribed literal/length tree";
    }
    else
    {
      if ( result == -5 )
      {
        sub_8024150C(*a6, a8);
        *(_DWORD *)(a8 + 24) = "incomplete literal/length tree";
        v9 = -3;
      }
      result = v9;
    }
  }
  else
  {
    v10 = sub_80240A30(&a3[a1], a2, 0, (int)dword_8028C9C8, (int)dword_8028CA40, a7, a5, a8);
    v11 = v10;
    if ( v10 )
    {
      if ( v10 == -3 )
      {
        *(_DWORD *)(a8 + 24) = "oversubscribed literal/length tree";
      }
      else if ( v10 == -5 )
      {
        sub_8024150C(*a7, a8);
        *(_DWORD *)(a8 + 24) = "incomplete literal/length tree";
        v11 = -3;
      }
      v12 = v11;
      sub_8024150C(*a6, a8);
      result = v12;
    }
    else
    {
      result = 0;
    }
  }
  return result;
}
// 8028C8D0: using guessed type int dword_8028C8D0[31];
// 8028C94C: using guessed type int dword_8028C94C[8];
// 8028C9C8: using guessed type int dword_8028C9C8[30];
// 8028CA40: using guessed type int dword_8028CA40[4];
