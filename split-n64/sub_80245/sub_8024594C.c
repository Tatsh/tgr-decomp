#include "../../types-n64.h"
//----- (8024594C) --------------------------------------------------------
unsigned int __fastcall sub_8024594C(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // $t0
  int v8; // $v1
  unsigned int v9; // $a1
  unsigned int v10; // $a2
  unsigned int result; // $v0
  int v12; // $v1
  int v13; // $s4
  int v14; // $s1
  unsigned int v15; // $s2
  int v16; // $s3
  int v17; // $s5
  unsigned int v18; // [sp+64h] [-Ch]
  unsigned int v19; // [sp+68h] [-8h]

  v5 = *(unsigned __int8 *)(a1 + 12);
  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(_DWORD *)(a1 + 20);
  if ( v5 == 4 )
  {
    v19 = (v8 * v9) >> 1;
    v10 = *(_DWORD *)(a1 + 24);
    result = (v8 * v10) >> 1;
  }
  else
  {
    v19 = v8 * v9 * (v5 >> 3);
    v10 = *(_DWORD *)(a1 + 24);
    result = v8 * v10 * (v5 >> 3);
  }
  v12 = v9 / v10;
  if ( !v10 )
    __break(7u, 0);
  v13 = a5 / v12;
  v14 = 1;
  if ( !v12 )
    __break(7u, 0);
  if ( v12 == -1 && a5 == 0x80000000 )
    __break(6u, 0);
  v15 = result;
  v16 = a3;
  if ( v12 > 0 )
  {
    v17 = v12 + 1;
    do
    {
      v18 = result;
      sub_80245B00(a1, *(_DWORD *)a1 + v19 - v15, *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 24), a2, v16, a4, v13);
      result = v18;
      ++v14;
      v16 += v13;
      v15 += v18;
    }
    while ( v17 != v14 );
  }
  return result;
}
