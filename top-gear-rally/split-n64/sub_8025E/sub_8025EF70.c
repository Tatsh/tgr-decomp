#include "../../types-n64.h"
//----- (8025EF70) --------------------------------------------------------
int __fastcall sub_8025EF70(int a1)
{
  float *v2; // $s2
  int v3; // $s1
  int result; // $v0
  float v5; // $f0
  float v6[2]; // [sp+4Ch] [-24h] BYREF
  float v7; // [sp+54h] [-1Ch]

  v2 = *(float **)(a1 + 24);
  v3 = 0;
  do
  {
    v2[3] = 0.0;
    v2[2] = 0.0;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        sub_80259A18(v6, (float *)a1, *(_DWORD *)(a1 + 8));
        result = *(_DWORD *)(a1 + 8);
      }
      else if ( v3 == 2 )
      {
        sub_80259A18(v6, (float *)a1, *(_DWORD *)(a1 + 12));
        result = *(_DWORD *)(a1 + 12);
      }
      else
      {
        sub_80259A18(v6, (float *)a1, *(_DWORD *)(a1 + 16));
        result = *(_DWORD *)(a1 + 16);
      }
    }
    else
    {
      sub_80259A18(v6, (float *)a1, *(_DWORD *)(a1 + 4));
      result = *(_DWORD *)(a1 + 4);
    }
    ++v3;
    if ( *(_DWORD *)(result + 436) )
    {
      if ( v7 < 0.0 )
        v5 = 0.0;
      else
        v5 = v7 * *(float *)(a1 + 444);
    }
    else
    {
      v5 = 0.0;
    }
    v2[4] = v5;
    v2 = *(float **)v2;
  }
  while ( v3 != 4 );
  return result;
}
