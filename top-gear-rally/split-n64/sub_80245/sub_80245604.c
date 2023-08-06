#include "../../types-n64.h"
//----- (80245604) --------------------------------------------------------
int __fastcall sub_80245604(int a1, int a2, int a3)
{
  int v3; // $a3
  int v6; // $v0
  unsigned int v7; // $a0
  unsigned int v8; // $a1
  unsigned int v9; // $s7
  unsigned int v10; // $s6
  int result; // $v0
  int v12; // $t0
  int v13; // $s4
  int v14; // $s1
  unsigned int v15; // $s2
  int v17; // $s5

  v3 = *(unsigned __int8 *)(a1 + 12);
  v6 = *(_DWORD *)(a1 + 16);
  v7 = *(_DWORD *)(a1 + 20);
  v8 = *(_DWORD *)(a1 + 24);
  if ( v3 == 4 )
  {
    v9 = (v6 * v7) >> 1;
    v10 = (v6 * v8) >> 1;
  }
  else
  {
    v9 = v6 * v7 * (v3 >> 3);
    v10 = v6 * v8 * (v3 >> 3);
  }
  result = v7 / v8;
  v12 = *(_DWORD *)(a1 + 40);
  if ( !v8 )
    __break(7u, 0);
  v13 = v12 / result;
  v14 = 1;
  if ( !result )
    __break(7u, 0);
  if ( result == -1 && v12 == 0x80000000 )
    __break(6u, 0);
  v15 = v10;
  if ( result > 0 )
  {
    v17 = result + 1;
    do
    {
      result = sub_80245B00(
                 a1,
                 *(_DWORD *)a1 + v9 - v15,
                 *(_DWORD *)(a1 + 16),
                 *(_DWORD *)(a1 + 24),
                 a2,
                 a3,
                 *(_DWORD *)(a1 + 36),
                 v13);
      ++v14;
      v15 += v10;
      a3 += v13;
    }
    while ( v17 != v14 );
  }
  return result;
}
