#include "../../types-n64.h"
//----- (80240A30) --------------------------------------------------------
int __fastcall sub_80240A30(int *a1, unsigned int a2, unsigned int a3, int a4, int a5, _DWORD *a6, unsigned int *a7, int a8)
{
  unsigned int v8; // $s1
  int *v9; // $s2
  unsigned int v10; // $s4
  int *v11; // $t3
  int v12; // $t6
  int v13; // $t6
  int v14; // $t6
  unsigned int v15; // $s0
  int *v16; // $v1
  int result; // $v0
  unsigned int v18; // $s5
  BOOL v19; // $at
  int v20; // $fp
  unsigned int v21; // $s4
  int *v22; // $v0
  BOOL v23; // $at
  int v24; // $t4
  int v25; // $a0
  int v26; // $t6
  int v27; // $a0
  int v28; // $s0
  int *v29; // $t3
  int v30; // $a0
  unsigned int v31; // $s4
  char *v32; // $a1
  int *v33; // $v0
  int v34; // $s0
  int v35; // $t6
  int v36; // $s0
  int v37; // $s0
  int *v38; // $t3
  int v39; // $s4
  int i; // $s0
  int v41; // $v1
  unsigned int v42; // $s4
  int *v43; // $t3
  int v44; // $s3
  int v45; // $s2
  int v46; // $a3
  unsigned int v47; // $s1
  _DWORD *v48; // $t0
  int v49; // $t1
  unsigned int v50; // $v1
  unsigned int v51; // $s6
  unsigned int k; // $s1
  unsigned int v53; // $v0
  unsigned int v54; // $a0
  unsigned int v55; // $s0
  int v56; // $v1
  int *v57; // $a1
  int v58; // $v1
  unsigned int v59; // $a0
  int v60; // $a0
  int v61; // $v0
  int *v62; // $a1
  _DWORD *v63; // $t9
  int *v64; // $v1
  int v65; // $t8
  int v66; // $t6
  unsigned int j; // $s0
  _DWORD *v68; // $t7
  unsigned int v69; // $s0
  int v70; // $t7
  int v71; // $t9
  int v73; // $a2
  int *v74; // [sp+50h] [-590h]
  int v75; // [sp+68h] [-578h]
  int v76[2]; // [sp+70h] [-570h] BYREF
  char v77; // [sp+78h] [-568h] BYREF
  _DWORD v78[288]; // [sp+B4h] [-52Ch] BYREF
  int v79[15]; // [sp+534h] [-ACh] BYREF
  int v80; // [sp+570h] [-70h]
  int v81; // [sp+574h] [-6Ch]
  int *v82; // [sp+57Ch] [-64h]
  int v83; // [sp+594h] [-4Ch]
  int v84; // [sp+59Ch] [-44h] BYREF
  int v85[14]; // [sp+5A0h] [-40h] BYREF
  int v86; // [sp+5D8h] [-8h] BYREF
  int v87; // [sp+5DCh] [-4h]
  unsigned int v88; // [sp+5E4h] [+4h]
  _DWORD *v91; // [sp+5F4h] [+14h]

  v8 = a2;
  v9 = a1;
  v84 = 0;
  v85[0] = 0;
  v85[1] = 0;
  v85[2] = 0;
  v85[3] = 0;
  v85[4] = 0;
  v85[5] = 0;
  v85[6] = 0;
  v85[7] = 0;
  v85[8] = 0;
  v85[9] = 0;
  v85[10] = 0;
  v85[11] = 0;
  v85[12] = 0;
  v85[13] = 0;
  v86 = 0;
  v10 = a2;
  v11 = a1;
  if ( (a2 & 3) == 0 )
    goto LABEL_86;
  do
  {
    v12 = *v11;
    --v10;
    ++v11;
    ++*(&v84 + v12);
  }
  while ( a2 - (a2 & 3) != v10 );
  if ( v10 )
  {
LABEL_86:
    do
    {
      v14 = *v11;
      v10 -= 4;
      v11 += 4;
      ++*(&v84 + v14);
      ++*(&v84 + *(v11 - 3));
      ++*(&v84 + *(v11 - 2));
      ++*(&v84 + *(v11 - 1));
    }
    while ( v10 );
    v13 = v84;
  }
  else
  {
    v13 = v84;
  }
  v15 = 1;
  v16 = v85;
  if ( a2 == v13 )
  {
    result = 0;
    *a6 = 0;
    *a7 = 0;
  }
  else
  {
    v18 = *a7;
    do
    {
      if ( *v16 )
      {
        v19 = v18 < v15;
        goto LABEL_14;
      }
      ++v15;
      ++v16;
    }
    while ( v15 != 16 );
    v19 = v18 < 0x10;
LABEL_14:
    v20 = v15;
    if ( v19 )
      v18 = v15;
    v21 = 15;
    v22 = &v86;
    do
    {
      if ( *v22 )
      {
        v23 = v21 < v18;
        goto LABEL_21;
      }
      --v21;
      --v22;
    }
    while ( v21 );
    v23 = v18 != 0;
LABEL_21:
    v24 = v21;
    if ( v23 )
      v18 = v21;
    *a7 = v18;
    v25 = 1 << v15;
    if ( v15 >= v21 )
    {
LABEL_27:
      v28 = 0;
      v29 = v85;
      v30 = v25 - *v22;
      if ( v30 >= 0 )
      {
        *v22 += v30;
        v31 = v21 - 1;
        v76[1] = 0;
        v32 = &v77;
        v88 = v8;
        v33 = v22 - 1;
        if ( v31 )
        {
          v88 = v8;
          if ( (v31 & 3) == 0 )
            goto LABEL_87;
          do
          {
            --v33;
            v32 += 4;
            v28 += *v29;
            *((_DWORD *)v32 - 1) = v28;
            ++v29;
          }
          while ( &v84 + v31 - (v31 & 3) != v33 );
          if ( v33 != &v84 )
          {
LABEL_87:
            do
            {
              v33 -= 4;
              v32 += 16;
              v34 = v28 + *v29;
              *((_DWORD *)v32 - 4) = v34;
              v35 = v29[1];
              v29 += 4;
              v36 = v34 + v35;
              *((_DWORD *)v32 - 3) = v36;
              v37 = v36 + *(v29 - 2);
              *((_DWORD *)v32 - 2) = v37;
              v28 = v37 + *(v29 - 1);
              *((_DWORD *)v32 - 1) = v28;
            }
            while ( v33 != &v84 );
          }
        }
        v38 = v9;
        v39 = 0;
        for ( i = *v9; ; i = *v38 )
        {
          ++v38;
          if ( i )
          {
            v41 = v76[i];
            v78[v41] = v39;
            v76[i] = v41 + 1;
          }
          if ( ++v39 >= v88 )
            break;
        }
        v75 = v30;
        v42 = 0;
        v76[0] = 0;
        v43 = v78;
        v44 = -1;
        v45 = -v18;
        v79[0] = 0;
        v46 = 0;
        v47 = 0;
        if ( v24 < v20 )
        {
LABEL_80:
          v73 = 0;
          if ( v75 && v24 != 1 )
            v73 = -5;
          result = v73;
        }
        else
        {
          v74 = &v84 + v20;
          v48 = a6;
          while ( 1 )
          {
            v49 = *v74 - 1;
            if ( *v74 )
              break;
LABEL_79:
            ++v20;
            ++v74;
            if ( v24 < v20 )
              goto LABEL_80;
          }
          while ( 1 )
          {
            v50 = v45 + v18;
            v51 = v49 + 1;
            if ( (int)(v45 + v18) < v20 )
              break;
LABEL_64:
            v64 = &v76[v44];
            BYTE1(v80) = v20 - v45;
            if ( v43 < &v78[v88] )
            {
              v65 = 4 * *v43;
              if ( *v43 >= a3 )
              {
                ++v43;
                HIBYTE(v80) = *(_DWORD *)(a5 + v65 - 4 * a3) + 80;
                v81 = *(_DWORD *)(a4 + 4 * *(v43 - 1) - 4 * a3);
              }
              else
              {
                if ( (unsigned int)*v43 >= 0x100 )
                  HIBYTE(v80) = 96;
                else
                  HIBYTE(v80) = 0;
                v66 = *v43++;
                v81 = v66;
              }
            }
            else
            {
              HIBYTE(v80) = -64;
            }
            for ( j = v42 >> v45; j < v47; v68[1] = v81 )
            {
              v68 = (_DWORD *)(v46 + 8 * j);
              *v68 = v80;
              j += 1 << (v20 - v45);
            }
            v69 = 1 << (v20 + 31);
            if ( (v42 & v69) != 0 )
            {
              do
              {
                v42 ^= v69;
                v70 = v42 & (v69 >> 1);
                v69 >>= 1;
              }
              while ( v70 );
            }
            v42 ^= v69;
            if ( (v42 & ((1 << v45) - 1)) != *v64 )
            {
              do
              {
                v45 -= v18;
                v71 = *(v64 - 1);
                --v44;
                --v64;
              }
              while ( (v42 & ((1 << v45) - 1)) != v71 );
            }
            if ( v49-- == 0 )
              goto LABEL_79;
          }
          for ( k = v24 - v50; ; k = v24 - v50 )
          {
            ++v44;
            v45 = v50;
            if ( v18 < k )
              k = v18;
            v53 = v20 - v50;
            v54 = 1 << (v20 - v50);
            LOBYTE(v55) = v20 - v50;
            if ( v51 >= v54 || (v56 = v54 - v49 - 1, v57 = &v84 + v20, v53 >= k) )
            {
LABEL_55:
              v58 = a8;
            }
            else
            {
              v55 = v53 + 1;
              if ( v53 + 1 < k )
              {
                while ( 1 )
                {
                  v59 = v57[1];
                  ++v57;
                  if ( v59 >= 2 * v56 )
                    break;
                  ++v55;
                  v56 = 2 * v56 - v59;
                  if ( v55 >= k )
                    goto LABEL_55;
                }
                v58 = a8;
              }
              else
              {
                v58 = a8;
              }
            }
            v60 = *(_DWORD *)(v58 + 40);
            v83 = v24;
            v82 = v43;
            v87 = v49;
            v91 = v48;
            v47 = 1 << v55;
            v61 = (*(int (__fastcall **)(int, int, int, int))(v58 + 32))(v60, (1 << v55) + 1, 8, v46);
            v49 = v87;
            v43 = v82;
            v24 = v83;
            if ( !v61 )
              break;
            *v91 = v61 + 8;
            *(_DWORD *)(v61 + 4) = 0;
            v62 = &v79[v44];
            v48 = (_DWORD *)(v61 + 4);
            *v62 = v61 + 8;
            v46 = v61 + 8;
            if ( v44 )
            {
              v76[v44] = v42;
              BYTE1(v80) = v18;
              HIBYTE(v80) = v55;
              v81 = v61 + 8;
              v63 = (_DWORD *)(*(v62 - 1) + 8 * (v42 >> (v45 - v18)));
              *v63 = v80;
              v63[1] = v81;
            }
            v50 = v45 + v18;
            if ( (int)(v45 + v18) >= v20 )
              goto LABEL_64;
          }
          if ( v44 )
            sub_8024150C(v79[0], a8);
          result = -4;
        }
      }
      else
      {
        result = -3;
      }
    }
    else
    {
      while ( 1 )
      {
        v26 = *v16;
        ++v15;
        ++v16;
        v27 = v25 - v26;
        if ( v27 < 0 )
          break;
        v25 = 2 * v27;
        if ( v15 >= v21 )
          goto LABEL_27;
      }
      result = -3;
    }
  }
  return result;
}
