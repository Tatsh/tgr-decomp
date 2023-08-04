#include "../../types-n64.h"
//----- (80262540) --------------------------------------------------------
int __fastcall sub_80262540(unsigned __int8 *a1, int a2, int a3)
{
  int v3; // $t8
  int v4; // $a2
  int v5; // $v0
  int v6; // $v1
  unsigned int v7; // $a3
  bool v8; // dc
  unsigned __int8 *v9; // $a3
  int j; // $v0
  int v11; // $v1
  int v12; // $a3
  int v13; // $a2
  unsigned __int8 *v14; // $a3
  int i; // $v0
  int v16; // $v1
  unsigned int v17; // $a3
  unsigned __int8 *v18; // $a3
  int v19; // $v1
  int v20; // $v0
  unsigned __int8 *v21; // $a3
  int k; // $v0
  int v23; // $v1

  if ( a3 >= 16 )
  {
    if ( (((unsigned __int8)a1 ^ (unsigned __int8)a2) & 3) != 0 )
    {
      v12 = -a2 & 3;
      v13 = a3 - v12;
      if ( v12 )
      {
        v14 = &a1[v12];
        for ( i = *a1; ; i = *a1 )
        {
          v16 = *(unsigned __int8 *)a2;
          ++a1;
          ++a2;
          if ( i != v16 )
            break;
          if ( a1 == v14 )
            goto LABEL_18;
        }
        return 1;
      }
LABEL_18:
      v17 = v13 & 0xFFFFFFFC;
      v8 = (v13 & 0xFFFFFFFC) == 0;
      a3 = v13 - (v13 & 0xFFFFFFFC);
      if ( !v8 )
      {
        v18 = &a1[v17];
        do
        {
          v19 = *(_DWORD *)a2;
          v20 = *(_DWORD *)a1;
          a1 += 4;
          a2 += 4;
          if ( v20 != v19 )
            return 1;
        }
        while ( a1 != v18 );
      }
    }
    else
    {
      v3 = -(int)a1 & 3;
      v4 = a3 - v3;
      if ( v3 )
      {
        v5 = *(_DWORD *)a1;
        v6 = *(_DWORD *)a2;
        a1 += v3;
        a2 += v3;
        if ( v5 != v6 )
          return 1;
      }
      v7 = v4 & 0xFFFFFFFC;
      v8 = (v4 & 0xFFFFFFFC) == 0;
      a3 = v4 - (v4 & 0xFFFFFFFC);
      if ( !v8 )
      {
        v9 = &a1[v7];
        for ( j = *(_DWORD *)a1; ; j = *(_DWORD *)a1 )
        {
          v11 = *(_DWORD *)a2;
          a1 += 4;
          a2 += 4;
          if ( j != v11 )
            break;
          if ( a1 == v9 )
            goto LABEL_22;
        }
        return 1;
      }
    }
  }
LABEL_22:
  v21 = &a1[a3];
  if ( a3 <= 0 )
    return 0;
  for ( k = *a1; ; k = *a1 )
  {
    v23 = *(unsigned __int8 *)a2;
    ++a1;
    ++a2;
    if ( k != v23 )
      break;
    if ( a1 == v21 )
      return 0;
  }
  return 1;
}
