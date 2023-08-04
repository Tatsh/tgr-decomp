#include "../../types-n64.h"
//----- (8021C878) --------------------------------------------------------
int __fastcall sub_8021C878(int a1, unsigned int a2, int a3, int a4, int a5)
{
  int v7; // $s7
  int v8; // $t3
  int v9; // $s0
  _BYTE *v10; // $v0
  _BYTE *j; // $v0
  char v13; // $t4
  int v14; // $a1
  _BYTE *v15; // $t4
  int v16; // $s7
  _BYTE *v17; // $t5
  int v18; // $t8
  int v19; // $a2
  unsigned int i; // $t8
  int v21; // $t2
  bool v22; // dc
  int v23; // $v1
  int v24; // $a0
  int v25; // [sp+50h] [-30h] BYREF
  int v26; // [sp+58h] [-28h]
  int v27; // [sp+60h] [-20h]
  signed int v29; // [sp+84h] [+4h]

  v29 = a2;
  v7 = 0;
  v8 = 0;
  v25 = 0;
  v9 = v27;
  for ( i = a2; ; i = v29 )
  {
    v21 = v7;
    v22 = i >= v7 + 4;
    v7 += 4;
    if ( !v22 )
      break;
    v23 = 0;
    v14 = 0;
    v19 = 0;
    do
    {
      while ( 1 )
      {
        v24 = v9;
        for ( v23 += a5; ; v23 += a5 )
        {
          v9 = *(char *)(a3 + v23);
          if ( v9 != v24 || 132 * a5 < v23 - v19 || a5 << 7 < v23 - v14 || v23 >= a4 )
            break;
          if ( a5 << 7 < v23 - v14 )
          {
            v19 = v23;
            goto LABEL_8;
          }
          v24 = *(char *)(a3 + v23);
        }
        if ( v23 - v19 >= 3 * a5 )
          break;
        v19 = v23;
        if ( v23 >= a4 )
          goto LABEL_8;
      }
      if ( v14 == v19 )
        goto LABEL_22;
LABEL_8:
      if ( !a5 )
        __break(7u, 0);
      if ( a5 == -1 && v19 - v14 == 0x80000000 )
        __break(6u, 0);
      v10 = (_BYTE *)(a1 + v7);
      if ( v7 + (v19 - v14) / a5 >= v29 )
        return -1;
      if ( !a5 )
        __break(7u, 0);
      if ( a5 == -1 && v14 - v19 == 0x80000000 )
        __break(6u, 0);
      *v10 = (v14 - v19) / a5;
      ++v7;
      for ( j = v10 + 1; v14 < v19; *(j - 1) = v13 )
      {
        v13 = *(_BYTE *)(a3 + v14);
        v14 += a5;
        ++v7;
        ++j;
      }
LABEL_22:
      v14 = v23;
      if ( v19 != v23 )
      {
        if ( v29 < v7 + 2 )
          return -1;
        v15 = (_BYTE *)(a1 + v7);
        v16 = v7 + 1;
        v17 = (_BYTE *)(a1 + v16);
        v7 = v16 + 1;
        v18 = v23 - v19 - 3 * a5;
        *v15 = v18 / a5;
        if ( !a5 )
          __break(7u, 0);
        if ( a5 == -1 && v18 == 0x80000000 )
          __break(6u, 0);
        *v17 = v24;
      }
      v19 = v23;
    }
    while ( v23 < a4 );
    v25 = v7 - v21 - 4;
    v26 = v8;
    sub_80260B20(a1 + v21, (char *)&v25, 4);
    ++a3;
    v8 = v26 + 1;
    if ( v26 + 1 >= a5 )
      return v7;
  }
  return -1;
}
