#include "../../types-n64.h"
//----- (8026D660) --------------------------------------------------------
char *__fastcall sub_8026D660(int a1, unsigned __int8 a2)
{
  int v2; // $v0
  double v3; // $f20
  _WORD *v4; // $t6
  int v5; // $v1
  int v6; // $v0
  const char *v7; // $a1
  int v9; // $v1
  char *v10; // $s5
  int v11; // $a1
  __int16 v12; // $t7
  int v13; // $a0
  int v14; // $v0
  int v15; // $t9
  int v16; // $t7
  int v17; // $v1
  __int16 v18; // $t8
  double v19; // $f0
  int v20; // $v0
  int v21; // $t6
  int v22; // $s4
  __int16 v23; // $t8
  int i; // $f8
  char *v25; // $s5
  int v26; // $s1
  int v27; // $s0
  double v28; // $f2
  int v29; // $s0
  bool j; // dc
  int v31; // $s4
  char *v32; // $s5
  __int16 k; // $t7
  __int16 v34; // $a1
  __int16 v35; // $v0
  int v36; // $s3
  char *v37; // $v0
  int v38; // $a1
  int v39; // $v1
  char *v40; // $v0
  int v41; // $t9
  int v42; // [sp+74h] [-5Ch] BYREF
  int v43; // [sp+78h] [-58h]
  __int16 v44; // [sp+9Ah] [-36h]
  char v45; // [sp+B0h] [-20h] BYREF
  char v46[31]; // [sp+B1h] [-1Fh] BYREF
  int v47; // [sp+D0h] [+0h]

  v47 = a1;
  v2 = *(_DWORD *)(a1 + 36);
  v3 = *(double *)a1;
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      if ( a2 != 103 && a2 != 71 )
      {
        v4 = (_WORD *)a1;
        goto LABEL_9;
      }
      *(_DWORD *)(a1 + 36) = 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 36) = 6;
  }
  v4 = (_WORD *)a1;
LABEL_9:
  v5 = (*v4 & 0x7FF0) >> 4;
  if ( v5 == 2047 )
  {
    v44 = 0;
    if ( (*v4 & 0xF) != 0 || v4[1] || v4[2] || v4[3] )
      v6 = 2;
    else
      v6 = 1;
  }
  else if ( v5 <= 0 )
  {
    v6 = 0;
    if ( v5 >= 0 )
      v44 = 0;
    else
      v6 = 2;
  }
  else
  {
    *(_WORD *)a1 = *v4 & 0x800F | 0x3FF0;
    v44 = v5 - 1022;
    v6 = -1;
  }
  if ( v6 <= 0 )
  {
    if ( !(_WORD)v6 )
    {
      v44 = 0;
      return (char *)sub_8026D0F0();
    }
    v9 = 0;
    v10 = v46;
    if ( v3 < 0.0 )
      v3 = -v3;
    v11 = 6;
    v12 = 30103 * v44 / 100000 - 4;
    v44 = v12;
    if ( v12 >= 0 )
    {
      v17 = 0;
      v18 = v44 & 0xFFFC;
      if ( v44 > 0 )
      {
        v19 = 1.0;
        v44 &= 0xFFFCu;
        v20 = v18;
        if ( v18 > 0 )
        {
          do
          {
            v21 = v20 >> 1;
            if ( (v20 & 1) != 0 )
              v19 = v19 * *(double *)&dword_802ABB00[2 * v17];
            v20 >>= 1;
            ++v17;
          }
          while ( v21 > 0 );
        }
        v3 = v3 / v19;
      }
    }
    else
    {
      v13 = 3 - v12;
      v14 = v13 & 0xFFFFFFFC;
      v44 = -(v13 & 0xFFFC);
      if ( (int)(v13 & 0xFFFFFFFC) > 0 )
      {
        do
        {
          v15 = v14 >> 1;
          if ( (v14 & 1) != 0 )
            v3 = v3 * *(double *)&dword_802ABB00[2 * v9];
          v14 >>= 1;
          ++v9;
        }
        while ( v15 > 0 );
        v16 = a2;
LABEL_43:
        if ( v16 == 102 )
          v11 = v44 + 10;
        v22 = v11 + *(_DWORD *)(v47 + 36);
        if ( v22 >= 20 )
          v22 = 19;
        v45 = 48;
        if ( v22 > 0 )
        {
          if ( v3 <= 0.0 )
          {
            v23 = v44;
            goto LABEL_67;
          }
          for ( i = (int)v3; ; i = (int)v3 )
          {
            v22 -= 8;
            v25 = v10 + 8;
            v26 = i;
            if ( v22 > 0 )
              v3 = (v3 - (double)i) * 100000000.0;
            v27 = 8;
            if ( i <= 0 )
            {
LABEL_58:
              *(float *)&v28 = 0.0;
            }
            else
            {
              v27 = 7;
              while ( 1 )
              {
                sub_8026E970(&v42, v26, 10);
                *--v25 = v43 + 48;
                v26 = v42;
                if ( v42 <= 0 )
                  break;
                if ( --v27 < 0 )
                  goto LABEL_58;
              }
              *(float *)&v28 = 0.0;
            }
            *((float *)&v28 + 1) = 0.0;
            v29 = v27 - 1;
            for ( j = v29 < 0; ; j = 0 )
            {
              --v29;
              if ( j )
                break;
              *--v25 = 48;
              if ( v29 < 0 )
                break;
            }
            v10 = v25 + 8;
            if ( v22 <= 0 || v28 >= v3 )
              break;
          }
        }
        v23 = v44;
LABEL_67:
        v31 = v10 - &v45 - 1;
        v44 = v23 + 7;
        v32 = v46;
        if ( v46[0] == 48 )
        {
          for ( k = v44; ; k = v44 )
          {
            ++v32;
            --v31;
            v44 = k - 1;
            if ( *v32 != 48 )
              break;
          }
        }
        if ( a2 == 102 )
        {
          v34 = v44 + 1;
        }
        else
        {
          if ( a2 == 101 || (v35 = 0, a2 == 69) )
            v35 = 1;
          v34 = v35;
        }
        v36 = (__int16)(v34 + *(_DWORD *)(v47 + 36));
        if ( v31 < v36 )
          v36 = (__int16)v31;
        if ( v36 <= 0 )
          return (char *)sub_8026D0F0();
        v37 = &v32[v36];
        if ( v36 >= v31 )
        {
          v38 = 48;
        }
        else
        {
          if ( (unsigned __int8)*v37 >= 0x35u )
          {
            v38 = 57;
LABEL_86:
            v39 = v36 - 1;
            if ( v38 == (unsigned __int8)*(v37 - 1) )
            {
              v40 = &v32[v39];
              do
              {
                v41 = (unsigned __int8)*(v40 - 1);
                --v39;
                --v40;
                LOWORD(v36) = v36 - 1;
              }
              while ( v38 == v41 );
            }
            if ( v38 == 57 )
              ++v32[v39];
            if ( v39 < 0 )
              ++v44;
            return (char *)sub_8026D0F0();
          }
          v38 = 48;
        }
        v37 = &v32[v36];
        goto LABEL_86;
      }
    }
    v16 = a2;
    goto LABEL_43;
  }
  if ( (__int16)v6 == 2 )
    v7 = (const char *)&dword_802ABB48;
  else
    v7 = dword_802ABB4C;
  *(_DWORD *)(a1 + 20) = 3;
  return sub_80260B20(*(char **)(a1 + 8), v7, 3);
}
// 802ABB00: using guessed type int dword_802ABB00[2];
// 802ABB48: using guessed type int dword_802ABB48;
