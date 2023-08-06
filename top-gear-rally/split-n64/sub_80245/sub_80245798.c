#include "../../types-n64.h"
//----- (80245798) --------------------------------------------------------
int __fastcall sub_80245798(int a1)
{
  int v1; // $t0
  int v3; // $v0
  unsigned int v4; // $a0
  unsigned int v5; // $a1
  unsigned int v6; // $s7
  unsigned int v7; // $s6
  int result; // $v0
  int v9; // $t1
  int v10; // $s4
  int v11; // $s1
  unsigned int v12; // $s2
  int v13; // $s3
  int v14; // $s5

  v1 = *(unsigned __int8 *)(a1 + 12);
  v3 = *(_DWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a1 + 20);
  v5 = *(_DWORD *)(a1 + 24);
  if ( v1 == 4 )
  {
    v6 = (v3 * v4) >> 1;
    v7 = (v3 * v5) >> 1;
  }
  else
  {
    v6 = v3 * v4 * (v1 >> 3);
    v7 = v3 * v5 * (v1 >> 3);
  }
  result = v4 / v5;
  v9 = *(_DWORD *)(a1 + 40);
  if ( !v5 )
    __break(7u, 0);
  v10 = v9 / result;
  v11 = 1;
  if ( !result )
    __break(7u, 0);
  if ( result == -1 && v9 == 0x80000000 )
    __break(6u, 0);
  v12 = v7;
  v13 = 0;
  if ( result > 0 )
  {
    v14 = result + 1;
    do
    {
      result = sub_80245B00(
                 a1,
                 *(_DWORD *)a1 + v6 - v12,
                 *(_DWORD *)(a1 + 16),
                 *(_DWORD *)(a1 + 24),
                 *(_DWORD *)(a1 + 28),
                 *(_DWORD *)(a1 + 32) + v13,
                 *(_DWORD *)(a1 + 36),
                 v10);
      ++v11;
      v12 += v7;
      v13 += v10;
    }
    while ( v14 != v11 );
  }
  return result;
}
