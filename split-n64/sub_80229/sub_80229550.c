#include "../../types-n64.h"
//----- (80229550) --------------------------------------------------------
int *sub_80229550()
{
  signed int v0; // $s0
  int v1; // $t0
  int *v2; // $v1
  int v3; // $a0
  char *v4; // $v0
  int v5; // $t0
  int *result; // $v0
  int v7; // $v1
  char *v8; // $a3
  int v9; // $a2
  int *v10; // $v1
  int v11; // $a0
  int *v12; // $v1
  int v13; // $a0
  char v14[4]; // [sp+48h] [-A0h] BYREF
  int v15; // [sp+4Ch] [-9Ch]

  v0 = 0;
  v1 = 0;
  v2 = dword_803239A0;
  do
  {
    if ( (v2[26] & 2) != 0 )
    {
      ++v1;
    }
    else
    {
      v3 = v2[24];
      v4 = &v14[8 * v0];
      *((_DWORD *)v4 + 1) = v1;
      ++v0;
      if ( v3 )
        *(_DWORD *)v4 = *(_DWORD *)(v3 + 4008);
      else
        *(_DWORD *)v4 = v2[20];
      ++v1;
    }
    v2 += 30;
  }
  while ( v1 < 1 );
  v5 = 0;
  if ( v0 )
  {
    sub_80255E80((unsigned int)v14, v0, 8u, (int (__fastcall *)(unsigned int, unsigned int))sub_80229510);
    v5 = 0;
  }
  result = (int *)(v0 & 1);
  if ( v0 > 0 )
  {
    if ( (v0 & 1) == 0
      || ((v5 = 1, result = &dword_803239A0[30 * v15], (v7 = result[24]) != 0) ? (*(_DWORD *)(v7 + 4012) = 0) : (result[21] = 0),
          v0 != 1) )
    {
      v8 = &v14[8 * v5];
      do
      {
        v9 = -v5;
        result = (int *)(1 - v5 - 2);
        v10 = &dword_803239A0[30 * *((_DWORD *)v8 + 1)];
        v11 = v10[24];
        if ( v11 )
        {
          *(_DWORD *)(v11 + 4012) = v9;
          result = (int *)(1 - v5 - 2);
        }
        else
        {
          v10[21] = v9;
        }
        v5 += 2;
        v12 = &dword_803239A0[30 * *((_DWORD *)v8 + 3)];
        v13 = v12[24];
        if ( v13 )
          *(_DWORD *)(v13 + 4012) = result;
        else
          v12[21] = (int)result;
        v8 += 16;
      }
      while ( v5 != v0 );
    }
  }
  return result;
}
// 803239A0: using guessed type int dword_803239A0[24];
// 80229550: using guessed type char var_A0[4];
