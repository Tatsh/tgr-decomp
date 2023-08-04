#include "../../types-n64.h"
//----- (8025159C) --------------------------------------------------------
int __fastcall sub_8025159C(int a1, int a2, int a3, char a4)
{
  int result; // $v0
  int i; // $t8
  int v6; // $t1
  int v7; // $s5
  int v8; // $s4
  int v9; // $s0
  int v10; // $fp
  int j; // $a0
  int v12; // $s0
  int k; // $a0
  int v14; // $s0
  int l; // $a0
  int v16; // $s0
  int m; // $a0
  int v18; // $t4
  int v19; // $t0
  int v20; // [sp+40h] [-38h]
  int v21; // [sp+5Ch] [-1Ch]
  int v22; // [sp+60h] [-18h]
  int v23; // [sp+64h] [-14h]
  int v24; // [sp+78h] [+0h]

  v24 = a1;
  if ( a4 )
    v24 = a1 >> 2;
  result = 2 * a3;
  v22 = 2 * a3;
  v23 = 0;
  v21 = -2 * a3;
  if ( (a3 & 0x40000000) == 0 )
  {
    for ( i = 0; ; i = v23 )
    {
      v6 = v22 >> 1;
      if ( (i & 1) == 0 )
      {
        v7 = (i >> 1) + v24;
        v8 = v24 - (i >> 1);
        v20 = v6 + v24;
        v9 = v8;
        v10 = v24 - v6;
        if ( v7 >= v8 )
        {
          for ( j = v24 - (i >> 1); ; j = v9 )
          {
            result = sub_8024F25C(j);
            if ( v7 < ++v9 )
              break;
          }
        }
        v12 = v10;
        if ( v20 >= v10 )
        {
          for ( k = v10; ; k = v12 )
          {
            result = sub_8024F25C(k);
            if ( v20 < ++v12 )
              break;
          }
        }
        v14 = v8;
        if ( v7 >= v8 )
        {
          for ( l = v8; ; l = v14 )
          {
            result = sub_8024F25C(l);
            if ( v7 < ++v14 )
              break;
          }
        }
        v16 = v10;
        if ( v20 >= v10 )
        {
          for ( m = v10; ; m = v16 )
          {
            result = sub_8024F25C(m);
            if ( v20 < ++v16 )
              break;
          }
        }
      }
      v18 = v22;
      v19 = v21 + v23;
      v21 = v19;
      ++v23;
      if ( v19 >= 0 )
      {
        --v22;
        v21 = v19 - v18;
      }
      if ( v22 < v23 )
        break;
    }
  }
  return result;
}
// 8028DB58: using guessed type char byte_8028DB58;
// 8028DB94: using guessed type int dword_8028DB94;
