#include "../../types-n64.h"
//----- (80241FC0) --------------------------------------------------------
int __fastcall sub_80241FC0(int a1, int a2, int a3, int a4, _DWORD *a5, unsigned __int8 **a6)
{
  unsigned int v6; // $v0
  unsigned int v7; // $t0
  unsigned int v8; // $t1
  unsigned int v9; // $t2
  unsigned __int8 *v10; // $t3
  unsigned int v11; // $t4
  int v12; // $a0
  int v13; // $s2
  unsigned int v14; // $t5
  int v15; // $s3
  BOOL i; // $at
  int v17; // $a1
  int v18; // $t6
  unsigned __int8 *v19; // $a0
  int v20; // $v1
  unsigned __int8 *v21; // $v0
  int j; // $a1
  int v23; // $a1
  int v24; // $t7
  int v25; // $v1
  unsigned int v26; // $t1
  int v27; // $t8
  unsigned int v28; // $t2
  unsigned int k; // $a0
  int v30; // $a1
  int v31; // $t6
  unsigned __int8 *v32; // $v0
  int l; // $v1
  int v34; // $a1
  bool v35; // dc
  unsigned int v36; // $v1
  int v37; // $a1
  int v38; // $t8
  unsigned int v39; // $a1
  unsigned int v40; // $s4
  char v41; // $t7
  char *v42; // $v0
  unsigned int v43; // $v1
  unsigned int v44; // $a1
  char v45; // $t6
  char v46; // $t8
  unsigned int v47; // $v1
  char v48; // $t7
  BOOL v49; // $at
  char v50; // $t9
  int v51; // $a1
  unsigned __int8 *v52; // $t3
  int result; // $v0
  int v54; // $a1
  unsigned __int8 *v55; // $t3
  unsigned __int8 *v56; // $t3
  unsigned __int8 *v57; // $t3

  v6 = a5[11];
  v7 = a5[12];
  v8 = a5[7];
  v9 = a5[8];
  v10 = *a6;
  v11 = (unsigned int)a6[1];
  if ( v7 >= v6 )
    v12 = a5[10] - v7;
  else
    v12 = v6 - v7 - 1;
  v13 = dword_8028CAC0[a1];
  v14 = v12;
  v15 = dword_8028CAC0[a2];
  for ( i = v8 < 0x14; ; i = v8 < 0x14 )
  {
    if ( i )
    {
      do
      {
        v17 = *v10;
        --v11;
        ++v10;
        v18 = v17 << v8;
        v8 += 8;
        v9 |= v18;
      }
      while ( v8 < 0x14 );
    }
    v19 = (unsigned __int8 *)(8 * (v9 & v13) + a3);
    v20 = *v19;
    v21 = v19;
    if ( *v19 )
    {
      for ( j = v19[1]; ; j = v21[1] )
      {
        v9 >>= j;
        v8 -= j;
        if ( (v20 & 0x10) != 0 )
          break;
        if ( (v20 & 0x40) != 0 )
        {
          if ( (v20 & 0x20) != 0 )
          {
            a5[7] = v8 & 7;
            a5[8] = v9;
            v55 = &v10[-(v8 >> 3)];
            a6[2] += v55 - *a6;
            a6[1] = (unsigned __int8 *)(v11 + (v8 >> 3));
            *a6 = v55;
            a5[12] = v7;
            result = 1;
          }
          else
          {
            a6[6] = "invalid literal/length code";
            a5[7] = v8 & 7;
            a5[8] = v9;
            v56 = &v10[-(v8 >> 3)];
            a6[2] += v56 - *a6;
            a6[1] = (unsigned __int8 *)(v11 + (v8 >> 3));
            *a6 = v56;
            a5[12] = v7;
            result = -3;
          }
          return result;
        }
        v21 = (unsigned __int8 *)(8 * (dword_8028CAC0[v20] & v9) + *((_DWORD *)v21 + 1));
        v20 = *v21;
        if ( !*v21 )
        {
          v54 = v21[1];
          ++v7;
          --v14;
          v9 >>= v54;
          v8 -= v54;
          *(_BYTE *)(v7 - 1) = *((_DWORD *)v21 + 1);
          goto LABEL_45;
        }
      }
      v24 = dword_8028CAC0[v20 & 0xF];
      v25 = v20 & 0xF;
      v26 = v8 - v25;
      v27 = v24 & v9;
      v28 = v9 >> v25;
      for ( k = v27 + *((_DWORD *)v21 + 1); v26 < 0xF; v28 |= v31 )
      {
        v30 = *v10;
        --v11;
        ++v10;
        v31 = v30 << v26;
        v26 += 8;
      }
      v32 = (unsigned __int8 *)(8 * (v28 & v15) + a4);
      for ( l = *v32; ; l = *v32 )
      {
        v34 = v32[1];
        v28 >>= v34;
        v26 -= v34;
        if ( (l & 0x10) != 0 )
          break;
        if ( (l & 0x40) != 0 )
        {
          a6[6] = "invalid distance code";
          a5[7] = v26 & 7;
          a5[8] = v28;
          v52 = &v10[-(v26 >> 3)];
          a6[2] += v52 - *a6;
          a6[1] = (unsigned __int8 *)(v11 + (v26 >> 3));
          *a6 = v52;
          a5[12] = v7;
          return -3;
        }
        v51 = *((_DWORD *)v32 + 1);
        if ( v51 == 65537 )
        {
          while ( 1 )
            ;
        }
        v32 = (unsigned __int8 *)(8 * (dword_8028CAC0[l] & v28) + v51);
      }
      v35 = v26 >= (l & 0xFu);
      v36 = l & 0xF;
      if ( !v35 )
      {
        do
        {
          v37 = *v10;
          --v11;
          ++v10;
          v38 = v37 << v26;
          v26 += 8;
          v28 |= v38;
        }
        while ( v26 < v36 );
      }
      v39 = (dword_8028CAC0[v36] & v28) + *((_DWORD *)v32 + 1);
      v40 = v7 - a5[9];
      v9 = v28 >> v36;
      v8 = v26 - v36;
      v14 -= k;
      if ( v40 < v39 )
      {
        v43 = v39 - v40;
        v42 = (char *)(a5[10] - (v39 - v40));
        if ( v39 - v40 < k )
        {
          k -= v43;
          if ( (v43 & 3) == 0 )
            goto LABEL_52;
          v44 = v43 - (v43 & 3);
          do
          {
            v45 = *v42;
            --v43;
            ++v7;
            ++v42;
            *(_BYTE *)(v7 - 1) = v45;
          }
          while ( v44 != v43 );
          if ( v43 )
          {
LABEL_52:
            do
            {
              v43 -= 4;
              v7 += 4;
              *(_BYTE *)(v7 - 4) = *v42;
              v46 = v42[1];
              v42 += 4;
              *(_BYTE *)(v7 - 3) = v46;
              *(_BYTE *)(v7 - 2) = *(v42 - 2);
              *(_BYTE *)(v7 - 1) = *(v42 - 1);
            }
            while ( v43 );
            v42 = (char *)a5[9];
          }
          else
          {
            v42 = (char *)a5[9];
          }
        }
      }
      else
      {
        v41 = *(_BYTE *)(v7 - v39);
        v42 = (char *)(v7 - v39 + 2);
        v7 += 2;
        *(_BYTE *)(v7 - 2) = v41;
        k -= 2;
        *(_BYTE *)(v7 - 1) = *(v42 - 1);
      }
      v47 = k - (k & 3);
      if ( (k & 3) == 0 )
        goto LABEL_53;
      do
      {
        v48 = *v42;
        --k;
        ++v7;
        ++v42;
        *(_BYTE *)(v7 - 1) = v48;
      }
      while ( v47 != k );
      if ( k )
      {
LABEL_53:
        do
        {
          k -= 4;
          v7 += 4;
          *(_BYTE *)(v7 - 4) = *v42;
          v50 = v42[1];
          v42 += 4;
          *(_BYTE *)(v7 - 3) = v50;
          *(_BYTE *)(v7 - 2) = *(v42 - 2);
          *(_BYTE *)(v7 - 1) = *(v42 - 1);
        }
        while ( k );
        v49 = v14 < 0x102;
      }
      else
      {
        v49 = v14 < 0x102;
      }
    }
    else
    {
      v23 = v19[1];
      ++v7;
      --v14;
      v9 >>= v23;
      v8 -= v23;
      *(_BYTE *)(v7 - 1) = *((_DWORD *)v19 + 1);
LABEL_45:
      v49 = v14 < 0x102;
    }
    if ( v49 || v11 < 0xA )
      break;
  }
  a5[7] = v8 & 7;
  a5[8] = v9;
  v57 = &v10[-(v8 >> 3)];
  a6[2] += v57 - *a6;
  a6[1] = (unsigned __int8 *)(v11 + (v8 >> 3));
  *a6 = v57;
  a5[12] = v7;
  return 0;
}
// 8028CAC0: using guessed type int dword_8028CAC0[];
