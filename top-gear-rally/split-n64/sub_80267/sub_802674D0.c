#include "../../types-n64.h"
//----- (802674D0) --------------------------------------------------------
int __fastcall sub_802674D0(char *a1, int a2, int a3)
{
  int v3; // $a3
  BOOL v4; // $at
  int v5; // $v0
  char *v6; // $v1
  char v7; // $v0
  __int16 v9; // $v0
  char v10; // $v0
  char v11; // $v0
  __int16 v12; // $v1
  BOOL i; // $at
  int v14; // $v0
  int v15; // $v1
  int v16; // $t0
  int v17; // $t1
  int v18; // $t2
  int v19; // $t3
  int v20; // $t4
  int v21; // $t5
  BOOL j; // $at
  int v23; // $v0
  int v24; // $v1
  int v25; // $t0
  int v26; // $t1
  int v27; // $v0
  char *v28; // $a0
  int v29; // $a1
  int v30; // $v0
  char *v31; // $a0
  _BYTE *v32; // $a1
  char *v33; // $v1
  char v34; // $v0
  __int16 v35; // $v0
  char v36; // $v0
  char v37; // $v0
  __int16 v38; // $v1
  BOOL k; // $at
  int v40; // $v0
  int v41; // $v1
  int v42; // $t0
  int v43; // $t1
  int v44; // $t2
  int v45; // $t3
  int v46; // $t4
  int v47; // $t5
  BOOL l; // $at
  int v49; // $v0
  int v50; // $v1
  int v51; // $t0
  int v52; // $t1
  int v53; // $v0

  v3 = a2;
  if ( !a3 || a1 == (char *)a2 )
    return v3;
  if ( a2 < (int)a1 )
  {
    v4 = a3 < 16;
    goto LABEL_8;
  }
  if ( a2 >= (int)&a1[a3] )
  {
    v4 = a3 < 16;
LABEL_8:
    if ( !v4 )
    {
      v5 = (unsigned __int8)a1 & 3;
      if ( v5 == (a2 & 3) )
      {
        if ( ((unsigned __int8)a1 & 3) != 0 )
        {
          if ( v5 == 1 )
          {
            v11 = *a1;
            v12 = *(_WORD *)(a1 + 1);
            a1 += 3;
            a2 += 3;
            a3 -= 3;
            *(_BYTE *)(a2 - 3) = v11;
            *(_WORD *)(a2 - 2) = v12;
          }
          else if ( v5 == 2 )
          {
            v9 = *(_WORD *)a1;
            a1 += 2;
            a2 += 2;
            a3 -= 2;
            *(_WORD *)(a2 - 2) = v9;
          }
          else
          {
            v10 = *a1++;
            ++a2;
            --a3;
            *(_BYTE *)(a2 - 1) = v10;
          }
        }
        while ( a3 >= 32 )
        {
          v14 = *(_DWORD *)a1;
          v15 = *((_DWORD *)a1 + 1);
          v16 = *((_DWORD *)a1 + 2);
          v17 = *((_DWORD *)a1 + 3);
          v18 = *((_DWORD *)a1 + 4);
          v19 = *((_DWORD *)a1 + 5);
          v20 = *((_DWORD *)a1 + 6);
          v21 = *((_DWORD *)a1 + 7);
          a1 += 32;
          a2 += 32;
          a3 -= 32;
          *(_DWORD *)(a2 - 32) = v14;
          *(_DWORD *)(a2 - 28) = v15;
          *(_DWORD *)(a2 - 24) = v16;
          *(_DWORD *)(a2 - 20) = v17;
          *(_DWORD *)(a2 - 16) = v18;
          *(_DWORD *)(a2 - 12) = v19;
          *(_DWORD *)(a2 - 8) = v20;
          *(_DWORD *)(a2 - 4) = v21;
        }
        for ( i = a3 < 16; !i; i = a3 < 16 )
        {
          v23 = *(_DWORD *)a1;
          v24 = *((_DWORD *)a1 + 1);
          v25 = *((_DWORD *)a1 + 2);
          v26 = *((_DWORD *)a1 + 3);
          a1 += 16;
          a2 += 16;
          a3 -= 16;
          *(_DWORD *)(a2 - 16) = v23;
          *(_DWORD *)(a2 - 12) = v24;
          *(_DWORD *)(a2 - 8) = v25;
          *(_DWORD *)(a2 - 4) = v26;
        }
        for ( j = a3 < 4; !j; j = a3 < 4 )
        {
          v27 = *(_DWORD *)a1;
          a1 += 4;
          a2 += 4;
          a3 -= 4;
          *(_DWORD *)(a2 - 4) = v27;
        }
      }
    }
    if ( a3 )
    {
      v6 = &a1[a3];
      do
      {
        v7 = *a1++;
        *(_BYTE *)a2++ = v7;
      }
      while ( a1 != v6 );
    }
    return v3;
  }
  v28 = &a1[a3];
  v29 = a2 + a3;
  if ( a3 >= 16 )
  {
    v30 = (unsigned __int8)v28 & 3;
    if ( v30 == (v29 & 3) )
    {
      if ( ((unsigned __int8)v28 & 3) != 0 )
      {
        if ( v30 == 3 )
        {
          v37 = *(v28 - 1);
          v38 = *(_WORD *)(v28 - 3);
          v28 -= 3;
          v29 -= 3;
          a3 -= 3;
          *(_BYTE *)(v29 + 2) = v37;
          *(_WORD *)v29 = v38;
        }
        else if ( v30 == 2 )
        {
          v35 = *((_WORD *)v28 - 1);
          v28 -= 2;
          v29 -= 2;
          a3 -= 2;
          *(_WORD *)v29 = v35;
        }
        else
        {
          v36 = *--v28;
          --v29;
          --a3;
          *(_BYTE *)v29 = v36;
        }
      }
      while ( a3 >= 32 )
      {
        v40 = *((_DWORD *)v28 - 1);
        v41 = *((_DWORD *)v28 - 2);
        v42 = *((_DWORD *)v28 - 3);
        v43 = *((_DWORD *)v28 - 4);
        v44 = *((_DWORD *)v28 - 5);
        v45 = *((_DWORD *)v28 - 6);
        v46 = *((_DWORD *)v28 - 7);
        v47 = *((_DWORD *)v28 - 8);
        v28 -= 32;
        v29 -= 32;
        a3 -= 32;
        *(_DWORD *)(v29 + 28) = v40;
        *(_DWORD *)(v29 + 24) = v41;
        *(_DWORD *)(v29 + 20) = v42;
        *(_DWORD *)(v29 + 16) = v43;
        *(_DWORD *)(v29 + 12) = v44;
        *(_DWORD *)(v29 + 8) = v45;
        *(_DWORD *)(v29 + 4) = v46;
        *(_DWORD *)v29 = v47;
      }
      for ( k = a3 < 16; !k; k = a3 < 16 )
      {
        v49 = *((_DWORD *)v28 - 1);
        v50 = *((_DWORD *)v28 - 2);
        v51 = *((_DWORD *)v28 - 3);
        v52 = *((_DWORD *)v28 - 4);
        v28 -= 16;
        v29 -= 16;
        a3 -= 16;
        *(_DWORD *)(v29 + 12) = v49;
        *(_DWORD *)(v29 + 8) = v50;
        *(_DWORD *)(v29 + 4) = v51;
        *(_DWORD *)v29 = v52;
      }
      for ( l = a3 < 4; !l; l = a3 < 4 )
      {
        v53 = *((_DWORD *)v28 - 1);
        v28 -= 4;
        v29 -= 4;
        a3 -= 4;
        *(_DWORD *)v29 = v53;
      }
    }
  }
  if ( !a3 )
    return v3;
  v31 = v28 - 1;
  v32 = (_BYTE *)(v29 - 1);
  v33 = &v31[-a3];
  do
  {
    v34 = *v31--;
    *v32-- = v34;
  }
  while ( v31 != v33 );
  return v3;
}
