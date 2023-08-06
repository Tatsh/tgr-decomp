#include "../../types-n64.h"
//----- (80250B58) --------------------------------------------------------
int __fastcall sub_80250B58(int a1, int a2, int a3, int a4)
{
  int v4; // $t5
  int v5; // $fp
  int v6; // $s7
  int v7; // $s5
  int result; // $v0
  int v9; // $a0
  int i; // $t7
  int v11; // $t6
  int v12; // $s6
  int v13; // $s4
  int v14; // $s0
  int j; // $a0
  int k; // $a0
  int v17; // $s5
  int v18; // $lo
  char v19; // $s7
  int v20; // $fp
  int v21; // $s5
  int l; // $t2
  int v23; // $t7
  int v24; // $s6
  int v25; // $s4
  int v26; // $s0
  int m; // $a0
  int n; // $a0
  int v29; // $t2
  int v30; // $lo
  int v31; // [sp+44h] [-4Ch]
  int v32; // [sp+44h] [-4Ch]
  int v33; // [sp+48h] [-48h]
  int v34; // [sp+48h] [-48h]
  int v35; // [sp+4Ch] [-44h]
  int v36; // [sp+4Ch] [-44h]
  int v37; // [sp+50h] [-40h]
  int v38; // [sp+54h] [-3Ch]
  int v39; // [sp+58h] [-38h]
  int v40; // [sp+5Ch] [-34h]
  int v41; // [sp+84h] [-Ch]
  int v42; // [sp+88h] [-8h]
  int v43; // [sp+90h] [+0h]
  int v44; // [sp+94h] [+4h]
  int v45; // [sp+98h] [+8h]

  v44 = -a2 >> 2;
  v43 = a1 >> 2;
  v45 = a3 >> 2;
  if ( a3 >> 2 < a1 >> 2 )
  {
    v43 = a3 >> 2;
    v45 = a1 >> 2;
  }
  if ( -a4 >> 2 < v44 )
  {
    v44 = -a4 >> 2;
    v4 = -a2 >> 2;
  }
  else
  {
    v4 = -a4 >> 2;
  }
  if ( (v4 - v44) >> 1 >= 2 )
    v42 = (v4 - v44) >> 1;
  else
    v42 = 1;
  if ( (v45 - v43) >> 1 >= 2 )
    v41 = (v45 - v43) >> 1;
  else
    v41 = 1;
  v5 = 0;
  v6 = 2 * v42;
  v38 = v42 * v42;
  v40 = v42 * v42;
  v37 = v41 * v41;
  v39 = v41 * v41;
  v7 = -(v41 * v41) * 2 * v42;
  if ( v41 * v41 * 2 * v42 >= 0 )
  {
    v35 = 0;
    v9 = 0;
    v33 = v41 * v41 * 2 * v42;
    for ( i = 0; ; i = v5 & 1 )
    {
      if ( !i )
      {
        v31 = v9;
        v11 = (v43 + v45) >> 1;
        v12 = (v5 >> 1) + v11;
        v13 = v11 - (v5 >> 1);
        v14 = v13;
        if ( v13 < v12 )
        {
          for ( j = v11 - (v5 >> 1); ; j = v14 )
          {
            sub_8024F25C(j);
            if ( ++v14 >= v12 )
              break;
          }
          v14 = v13;
        }
        v9 = v31;
        if ( v13 < v12 )
        {
          for ( k = v14; ; k = v14 )
          {
            sub_8024F25C(k);
            if ( ++v14 == v12 )
              break;
          }
          v9 = v31;
        }
      }
      v17 = v7 + v9;
      v35 += v40;
      ++v5;
      v9 += v42 * v42;
      v7 = v17 + v9;
      if ( v7 > 0 )
      {
        v18 = v37 * v6--;
        v33 -= v39;
        v7 = v7 - v18 - v37 * v6;
      }
      if ( v33 < v35 )
        break;
    }
    result = v41;
  }
  else
  {
    result = v41;
  }
  v19 = 0;
  v20 = 2 * result;
  v21 = -v38 * 2 * result;
  if ( 2 * result * v38 >= 0 )
  {
    v34 = 0;
    v32 = 0;
    v36 = v40 * 2 * result;
    for ( l = 0; ; l = v19 & 1 )
    {
      if ( !l )
      {
        result = v43 + v45;
        v23 = (v43 + v45) >> 1;
        v24 = (v20 >> 1) + v23;
        v25 = v23 - (v20 >> 1);
        v26 = v25;
        if ( v25 < v24 )
        {
          for ( m = v23 - (v20 >> 1); ; m = v26 )
          {
            result = sub_8024F25C(m);
            if ( ++v26 >= v24 )
              break;
          }
          v26 = v25;
        }
        if ( v25 < v24 )
        {
          for ( n = v26; ; n = v26 )
          {
            result = sub_8024F25C(n);
            if ( ++v26 == v24 )
              break;
          }
        }
      }
      v29 = v41;
      ++v19;
      v34 += v39;
      v21 += v32 + v32 + v29 * v29;
      v32 += v29 * v29;
      if ( v21 > 0 )
      {
        v30 = v38 * v20--;
        v36 -= v40;
        v21 = v21 - v30 - v38 * v20;
      }
      if ( v36 < v34 )
        break;
    }
  }
  return result;
}
// 8028DB58: using guessed type char byte_8028DB58;
// 8028DB94: using guessed type int dword_8028DB94;
