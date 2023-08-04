#include "../../types-n64.h"
//----- (80241600) --------------------------------------------------------
int __fastcall sub_80241600(_DWORD *a1, int a2, int a3)
{
  unsigned int v3; // $a3
  _BYTE *v4; // $s1
  int v7; // $s7
  unsigned int v8; // $s2
  unsigned int v9; // $s6
  unsigned int v10; // $s5
  unsigned __int8 *v11; // $s4
  int v12; // $a0
  unsigned int v13; // $a1
  int v14; // $t8
  unsigned __int8 *v15; // $t1
  int v16; // $t0
  int v17; // $v0
  unsigned int v18; // $a3
  int v19; // $a0
  int v20; // $t1
  unsigned int v21; // $v1
  unsigned __int8 *v22; // $t3
  int v23; // $t2
  int result; // $v0
  int v25; // $v0
  int v26; // $t5
  unsigned __int8 *v27; // $a2
  int v28; // $v0
  int v29; // $a0
  int v30; // $t3
  int v31; // $t5
  unsigned __int8 *v32; // $t4
  int v33; // $t9
  unsigned int v34; // $v1
  unsigned __int8 *v35; // $t1
  int v36; // $t8
  int v37; // $v0
  int v38; // $t2
  int v39; // $t8
  int v40; // $t0
  unsigned int v41; // $v1
  unsigned __int8 *v42; // $t9
  int v43; // $t2
  int v44; // $v0
  int v45; // $t6
  unsigned __int8 *v46; // $a2
  int v47; // $a0
  int v48; // $v0
  int v49; // $t4
  unsigned __int8 *v50; // $t5
  int v51; // $t2
  unsigned int v52; // $v1
  unsigned __int8 *v53; // $t8
  int v54; // $t1
  int v55; // $v0
  int v56; // $t5
  int v57; // $t0
  unsigned int v58; // $v0
  char *v59; // $s0
  char v60; // $t1
  _BYTE *v61; // $v1
  unsigned int v62; // $v0
  unsigned int v63; // $a3
  int v64; // $a0
  int v65; // $v0
  unsigned int v66; // $a3
  int v67; // $fp
  int v68; // $a0
  _BYTE *v69; // $v1
  unsigned int v70; // $v0
  unsigned __int8 *v71; // $t2
  int v72; // $t7
  int v73; // $t3
  int v74; // $t4
  _BYTE *v75; // $v1
  unsigned int v76; // $v0
  unsigned int v77; // $a3
  int v78; // $a0
  int v79; // $v0
  unsigned int v80; // $a3
  int v81; // $fp
  int v82; // $a0
  _BYTE *v83; // $v1
  unsigned int v84; // $v0
  unsigned __int8 *v85; // $t7
  int v86; // $t2
  int v87; // $v0
  _BYTE *v88; // $v1
  unsigned __int8 *v89; // $t0
  int v90; // $t1
  unsigned __int8 *v91; // $t9
  int v92; // $t2
  unsigned __int8 *v93; // $t3
  int v94; // $t1
  unsigned __int8 *v95; // $t8
  int v96; // $t2

  v3 = a1[11];
  v4 = (_BYTE *)a1[12];
  v7 = a1[3];
  v8 = a1[7];
  v9 = a1[8];
  v10 = *(_DWORD *)(a2 + 4);
  v11 = *(unsigned __int8 **)a2;
  if ( (unsigned int)v4 >= v3 )
    v12 = a1[10] - (_DWORD)v4;
  else
    v12 = v3 - (_DWORD)v4 - 1;
  v13 = v12;
  while ( 2 )
  {
    switch ( *(_DWORD *)v7 )
    {
      case 0:
        if ( v13 < 0x102 )
          goto LABEL_16;
        if ( v10 < 0xA )
        {
          v14 = *(unsigned __int8 *)(v7 + 16);
LABEL_17:
          v20 = *(_DWORD *)(v7 + 20);
          *(_DWORD *)v7 = 1;
          *(_DWORD *)(v7 + 12) = v14;
          *(_DWORD *)(v7 + 8) = v20;
          goto LABEL_18;
        }
        a1[8] = v9;
        a1[7] = v8;
        v15 = *(unsigned __int8 **)a2;
        v16 = *(_DWORD *)(a2 + 8);
        *(_DWORD *)a2 = v11;
        *(_DWORD *)(a2 + 8) = v16 + v11 - v15;
        *(_DWORD *)(a2 + 4) = v10;
        a1[12] = v4;
        v17 = sub_80241FC0(
                *(unsigned __int8 *)(v7 + 16),
                *(unsigned __int8 *)(v7 + 17),
                *(_DWORD *)(v7 + 20),
                *(_DWORD *)(v7 + 24),
                a1,
                (unsigned __int8 **)a2);
        v4 = (_BYTE *)a1[12];
        v18 = a1[11];
        a3 = v17;
        v9 = a1[8];
        v8 = a1[7];
        v11 = *(unsigned __int8 **)a2;
        v10 = *(_DWORD *)(a2 + 4);
        if ( (unsigned int)v4 >= v18 )
          v19 = a1[10] - (_DWORD)v4;
        else
          v19 = v18 - (_DWORD)v4 - 1;
        v13 = v19;
        if ( !v17 )
        {
LABEL_16:
          v14 = *(unsigned __int8 *)(v7 + 16);
          goto LABEL_17;
        }
        if ( v17 == 1 )
          *(_DWORD *)v7 = 7;
        else
          *(_DWORD *)v7 = 9;
        continue;
      case 1:
LABEL_18:
        v21 = *(_DWORD *)(v7 + 12);
        if ( v8 >= v21 )
          goto LABEL_22;
        do
        {
          if ( !v10 )
          {
            a1[7] = v8;
            a1[8] = v9;
            v22 = *(unsigned __int8 **)a2;
            v23 = *(_DWORD *)(a2 + 8);
            *(_DWORD *)a2 = v11;
            *(_DWORD *)(a2 + 8) = v23 + v11 - v22;
            *(_DWORD *)(a2 + 4) = 0;
            a1[12] = v4;
            return sub_80242490(a1, (_DWORD *)a2, a3);
          }
          a3 = 0;
          v25 = *v11;
          --v10;
          ++v11;
          v26 = v25 << v8;
          v8 += 8;
          v9 |= v26;
        }
        while ( v8 < v21 );
LABEL_22:
        v27 = (unsigned __int8 *)(8 * (*(_DWORD *)(4 * v21 - 2144810304) & v9) + *(_DWORD *)(v7 + 8));
        v28 = v27[1];
        v29 = *v27;
        v9 >>= v28;
        v8 -= v28;
        if ( !*v27 )
        {
          v30 = *((_DWORD *)v27 + 1);
          *(_DWORD *)v7 = 6;
          *(_DWORD *)(v7 + 8) = v30;
          continue;
        }
        if ( (v29 & 0x10) != 0 )
        {
          *(_DWORD *)(v7 + 8) = v29 & 0xF;
          v31 = *((_DWORD *)v27 + 1);
          *(_DWORD *)v7 = 2;
          *(_DWORD *)(v7 + 4) = v31;
          continue;
        }
        if ( (v29 & 0x40) == 0 )
        {
          *(_DWORD *)(v7 + 12) = v29;
          *(_DWORD *)(v7 + 8) = *((_DWORD *)v27 + 1);
          continue;
        }
        if ( (v29 & 0x20) != 0 )
        {
          *(_DWORD *)v7 = 7;
          continue;
        }
        *(_DWORD *)v7 = 9;
        *(_DWORD *)(a2 + 24) = "invalid literal/length code";
        a1[7] = v8;
        a1[8] = v9;
        v32 = *(unsigned __int8 **)a2;
        v33 = *(_DWORD *)(a2 + 8);
        *(_DWORD *)a2 = v11;
        *(_DWORD *)(a2 + 8) = v33 + v11 - v32;
        *(_DWORD *)(a2 + 4) = v10;
        a1[12] = v4;
        return sub_80242490(a1, (_DWORD *)a2, -3);
      case 2:
        v34 = *(_DWORD *)(v7 + 8);
        if ( v8 >= v34 )
          goto LABEL_35;
        do
        {
          if ( !v10 )
          {
            a1[8] = v9;
            a1[7] = v8;
            v35 = *(unsigned __int8 **)a2;
            v36 = *(_DWORD *)(a2 + 8);
            *(_DWORD *)a2 = v11;
            *(_DWORD *)(a2 + 8) = v36 + v11 - v35;
            *(_DWORD *)(a2 + 4) = 0;
            a1[12] = v4;
            return sub_80242490(a1, (_DWORD *)a2, a3);
          }
          a3 = 0;
          v37 = *v11;
          --v10;
          ++v11;
          v38 = v37 << v8;
          v8 += 8;
          v9 |= v38;
        }
        while ( v8 < v34 );
LABEL_35:
        v39 = *(unsigned __int8 *)(v7 + 17);
        v40 = *(_DWORD *)(v7 + 24);
        *(_DWORD *)(v7 + 4) += v9 & *(_DWORD *)(4 * v34 - 2144810304);
        v9 >>= v34;
        v8 -= v34;
        *(_DWORD *)v7 = 3;
        *(_DWORD *)(v7 + 12) = v39;
        *(_DWORD *)(v7 + 8) = v40;
LABEL_36:
        v41 = *(_DWORD *)(v7 + 12);
        if ( v8 >= v41 )
        {
LABEL_40:
          v46 = (unsigned __int8 *)(8 * (*(_DWORD *)(4 * v41 - 2144810304) & v9) + *(_DWORD *)(v7 + 8));
          v47 = *v46;
          v48 = v46[1];
          v9 >>= v48;
          v8 -= v48;
          if ( (v47 & 0x10) != 0 )
          {
            *(_DWORD *)(v7 + 8) = v47 & 0xF;
            v49 = *((_DWORD *)v46 + 1);
            *(_DWORD *)v7 = 4;
            *(_DWORD *)(v7 + 12) = v49;
          }
          else
          {
            if ( (v47 & 0x40) != 0 )
            {
              *(_DWORD *)v7 = 9;
              *(_DWORD *)(a2 + 24) = "invalid distance code";
              a1[7] = v8;
              a1[8] = v9;
              v50 = *(unsigned __int8 **)a2;
              v51 = *(_DWORD *)(a2 + 8);
              *(_DWORD *)a2 = v11;
              *(_DWORD *)(a2 + 8) = v51 + v11 - v50;
              *(_DWORD *)(a2 + 4) = v10;
              a1[12] = v4;
              return sub_80242490(a1, (_DWORD *)a2, -3);
            }
            *(_DWORD *)(v7 + 12) = v47;
            *(_DWORD *)(v7 + 8) = *((_DWORD *)v46 + 1);
          }
          continue;
        }
        while ( v10 )
        {
          a3 = 0;
          v44 = *v11;
          --v10;
          ++v11;
          v45 = v44 << v8;
          v8 += 8;
          v9 |= v45;
          if ( v8 >= v41 )
            goto LABEL_40;
        }
        a1[8] = v9;
        a1[7] = v8;
        v42 = *(unsigned __int8 **)a2;
        v43 = *(_DWORD *)(a2 + 8);
        *(_DWORD *)a2 = v11;
        *(_DWORD *)(a2 + 8) = v43 + v11 - v42;
        *(_DWORD *)(a2 + 4) = 0;
        a1[12] = v4;
        return sub_80242490(a1, (_DWORD *)a2, a3);
      case 3:
        goto LABEL_36;
      case 4:
        v52 = *(_DWORD *)(v7 + 8);
        if ( v8 >= v52 )
          goto LABEL_49;
        do
        {
          if ( !v10 )
          {
            a1[8] = v9;
            a1[7] = v8;
            v53 = *(unsigned __int8 **)a2;
            v54 = *(_DWORD *)(a2 + 8);
            *(_DWORD *)a2 = v11;
            *(_DWORD *)(a2 + 8) = v54 + v11 - v53;
            *(_DWORD *)(a2 + 4) = 0;
            a1[12] = v4;
            return sub_80242490(a1, (_DWORD *)a2, a3);
          }
          a3 = 0;
          v55 = *v11;
          --v10;
          ++v11;
          v56 = v55 << v8;
          v8 += 8;
          v9 |= v56;
        }
        while ( v8 < v52 );
LABEL_49:
        v8 -= v52;
        *(_DWORD *)(v7 + 12) += v9 & *(_DWORD *)(4 * v52 - 2144810304);
        v9 >>= v52;
        *(_DWORD *)v7 = 5;
LABEL_50:
        v57 = a1[9];
        v58 = *(_DWORD *)(v7 + 12);
        v59 = &v4[-v58];
        if ( (unsigned int)&v4[-v57] < v58 )
          v59 = &v4[a1[10] - v58 - v57];
        if ( *(_DWORD *)(v7 + 4) )
        {
          do
          {
            if ( v13 )
            {
              v60 = *v59;
            }
            else
            {
              v61 = (_BYTE *)a1[10];
              if ( v4 == v61 )
              {
                v62 = a1[9];
                v63 = a1[11];
                if ( v62 != v63 )
                {
                  v4 = (_BYTE *)a1[9];
                  if ( v62 >= v63 )
                    v64 = (int)&v61[-v62];
                  else
                    v64 = v63 - v62 - 1;
                  v13 = v64;
                }
              }
              if ( v13 )
              {
                v60 = *v59;
              }
              else
              {
                a1[12] = v4;
                v65 = sub_80242490(a1, (_DWORD *)a2, a3);
                v4 = (_BYTE *)a1[12];
                v66 = a1[11];
                v67 = v65;
                if ( (unsigned int)v4 >= v66 )
                {
                  v69 = (_BYTE *)a1[10];
                  v68 = v69 - v4;
                }
                else
                {
                  v68 = v66 - (_DWORD)v4 - 1;
                  v69 = (_BYTE *)a1[10];
                }
                v13 = v68;
                if ( v4 == v69 )
                {
                  v70 = a1[9];
                  if ( v70 != v66 )
                  {
                    v4 = (_BYTE *)a1[9];
                    if ( v70 >= v66 )
                      v68 = (int)&v69[-v70];
                    else
                      v68 = v66 - v70 - 1;
                    v13 = v68;
                  }
                }
                if ( !v68 )
                {
                  a1[8] = v9;
                  a1[7] = v8;
                  v71 = *(unsigned __int8 **)a2;
                  v72 = *(_DWORD *)(a2 + 8);
                  *(_DWORD *)a2 = v11;
                  *(_DWORD *)(a2 + 8) = v72 + v11 - v71;
                  *(_DWORD *)(a2 + 4) = v10;
                  a1[12] = v4;
                  return sub_80242490(a1, (_DWORD *)a2, v67);
                }
                v60 = *v59;
              }
            }
            ++v59;
            a3 = 0;
            *v4++ = v60;
            --v13;
            if ( v59 == (char *)a1[10] )
              v59 = (char *)a1[9];
            v73 = *(_DWORD *)(v7 + 4);
            *(_DWORD *)(v7 + 4) = v73 - 1;
          }
          while ( v73 != 1 );
        }
        *(_DWORD *)v7 = 0;
        continue;
      case 5:
        goto LABEL_50;
      case 6:
        if ( v13 )
        {
          v74 = *(_DWORD *)(v7 + 8);
        }
        else
        {
          v75 = (_BYTE *)a1[10];
          if ( v4 == v75 )
          {
            v76 = a1[9];
            v77 = a1[11];
            if ( v76 != v77 )
            {
              v4 = (_BYTE *)a1[9];
              if ( v76 >= v77 )
                v78 = (int)&v75[-v76];
              else
                v78 = v77 - v76 - 1;
              v13 = v78;
            }
          }
          if ( v13 )
          {
            v74 = *(_DWORD *)(v7 + 8);
          }
          else
          {
            a1[12] = v4;
            v79 = sub_80242490(a1, (_DWORD *)a2, a3);
            v4 = (_BYTE *)a1[12];
            v80 = a1[11];
            v81 = v79;
            if ( (unsigned int)v4 >= v80 )
            {
              v83 = (_BYTE *)a1[10];
              v82 = v83 - v4;
            }
            else
            {
              v82 = v80 - (_DWORD)v4 - 1;
              v83 = (_BYTE *)a1[10];
            }
            v13 = v82;
            if ( v4 == v83 )
            {
              v84 = a1[9];
              if ( v84 != v80 )
              {
                v4 = (_BYTE *)a1[9];
                if ( v84 >= v80 )
                  v82 = (int)&v83[-v84];
                else
                  v82 = v80 - v84 - 1;
                v13 = v82;
              }
            }
            if ( !v82 )
            {
              a1[7] = v8;
              a1[8] = v9;
              v85 = *(unsigned __int8 **)a2;
              v86 = *(_DWORD *)(a2 + 8);
              *(_DWORD *)a2 = v11;
              *(_DWORD *)(a2 + 8) = v86 + v11 - v85;
              *(_DWORD *)(a2 + 4) = v10;
              a1[12] = v4;
              return sub_80242490(a1, (_DWORD *)a2, v81);
            }
            v74 = *(_DWORD *)(v7 + 8);
          }
        }
        a3 = 0;
        *v4++ = v74;
        --v13;
        *(_DWORD *)v7 = 0;
        continue;
      case 7:
        a1[12] = v4;
        v87 = sub_80242490(a1, (_DWORD *)a2, a3);
        v88 = (_BYTE *)a1[12];
        v4 = v88;
        if ( v88 == (_BYTE *)a1[11] )
        {
          *(_DWORD *)v7 = 8;
LABEL_105:
          a1[8] = v9;
          a1[7] = v8;
          v91 = *(unsigned __int8 **)a2;
          v92 = *(_DWORD *)(a2 + 8);
          *(_DWORD *)a2 = v11;
          *(_DWORD *)(a2 + 8) = v92 + v11 - v91;
          *(_DWORD *)(a2 + 4) = v10;
          a1[12] = v4;
          result = sub_80242490(a1, (_DWORD *)a2, 1);
        }
        else
        {
          a1[7] = v8;
          a1[8] = v9;
          v89 = *(unsigned __int8 **)a2;
          v90 = *(_DWORD *)(a2 + 8);
          *(_DWORD *)a2 = v11;
          *(_DWORD *)(a2 + 8) = v90 + v11 - v89;
          *(_DWORD *)(a2 + 4) = v10;
          a1[12] = v88;
          result = sub_80242490(a1, (_DWORD *)a2, v87);
        }
        return result;
      case 8:
        goto LABEL_105;
      case 9:
        a1[8] = v9;
        a1[7] = v8;
        v93 = *(unsigned __int8 **)a2;
        v94 = *(_DWORD *)(a2 + 8);
        *(_DWORD *)a2 = v11;
        *(_DWORD *)(a2 + 8) = v94 + v11 - v93;
        *(_DWORD *)(a2 + 4) = v10;
        a1[12] = v4;
        return sub_80242490(a1, (_DWORD *)a2, -3);
      default:
        a1[8] = v9;
        a1[7] = v8;
        v95 = *(unsigned __int8 **)a2;
        v96 = *(_DWORD *)(a2 + 8);
        *(_DWORD *)a2 = v11;
        *(_DWORD *)(a2 + 8) = v96 + v11 - v95;
        *(_DWORD *)(a2 + 4) = v10;
        a1[12] = v4;
        return sub_80242490(a1, (_DWORD *)a2, -2);
    }
  }
}
