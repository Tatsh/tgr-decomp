#include "../../types-n64.h"
//----- (8023BF60) --------------------------------------------------------
int *sub_8023BF60()
{
  int v0; // $s7
  int *v1; // $t2
  int v2; // $v0
  int *result; // $v0
  float *v4; // $v0
  float v5; // $f0
  float v6; // $f2
  float v7; // $f12
  _DWORD *v8; // $s0
  int v9; // $a0
  __int16 v10; // $fp
  __int16 v11; // $t0
  __int16 v12; // $t1
  float v13; // $a1
  float v14; // $a2
  float v15; // $a3
  float *v16; // $t2
  __int16 v17; // $t0
  __int16 v18; // $t1
  char *v19; // $s0
  int v20; // $a0
  char *v21; // $v1
  float *v22; // $a2
  int v23; // $s2
  char *v24; // $s3
  int v25; // $a0
  int v26; // $s2
  float *v27; // $s6
  int v28; // $s0
  float *v29; // $s1
  float *v30; // $s5
  int v31; // $v1
  int v32; // $v0
  int v33; // $s3
  char *v34; // $s4
  int v35; // $v0
  int v36; // $t8
  __int16 v37; // $v0
  __int16 v38; // $t6
  __int16 v39; // $t9
  __int16 v40; // $t7
  __int16 v41; // $t8
  __int16 *v42; // $v0
  __int16 *v43; // $v1
  __int16 v44; // $t5
  __int16 v45; // $t9
  __int16 v46; // $t7
  __int16 v47; // $t6
  int v48; // $v0
  float *v49; // [sp+50h] [-B0h]
  float *v50; // [sp+54h] [-ACh]
  int *v51; // [sp+78h] [-88h]
  float *v52; // [sp+7Ch] [-84h]
  float *v53; // [sp+7Ch] [-84h]
  _DWORD v54[16]; // [sp+88h] [-78h] BYREF
  __int16 v55; // [sp+CAh] [-36h]
  float *v56; // [sp+D8h] [-28h]
  int v57; // [sp+E8h] [-18h]
  __int16 v58; // [sp+F2h] [-Eh]
  __int16 v59; // [sp+F4h] [-Ch]

  v0 = (int)(float)(0.0 * 4096.0);
  v55 = (int)(float)((float)(9.8100004 * 0.0) * 127.0);
  v1 = dword_803239A0;
  v2 = 1805591161;
  while ( 2 )
  {
    v56 = (float *)v2;
    if ( !v2 )
    {
      result = &dword_80323A0C[3];
      goto LABEL_41;
    }
    v4 = v56;
    v5 = v56[1886];
    v6 = v56[1887];
    v7 = v56[1888];
    v8 = v56 + 1890;
    v9 = (int)(v56 + 1890);
    v10 = (int)(float)((float)(v5 - v56[12]) * 127.0);
    v11 = (int)(float)((float)(v6 - v56[13]) * 127.0);
    v12 = (int)(float)((float)(v7 - v56[14]) * 127.0);
    v56[1886] = v5 - (float)((float)v10 * 0.0078740157);
    v13 = v4[1886];
    v4[1887] = v6 - (float)((float)v11 * 0.0078740157);
    v14 = v4[1887];
    v4[1888] = v7 - (float)((float)v12 * 0.0078740157);
    v15 = v4[1888];
    v51 = v1;
    v58 = v12;
    v59 = v11;
    sub_80260E78(v9, v13, v14, v15);
    sub_80260854((int)v54, COERCE_INT(0.0078740157), COERCE_INT(0.0078740157), COERCE_INT(0.0078740157));
    sub_80267470(v54, v8, (int)v8);
    v16 = v56;
    v17 = v59;
    v18 = v58;
    v57 = 0;
    v50 = v56;
    v49 = v56;
    do
    {
      if ( *((_DWORD *)v16 + 1060) )
      {
        v19 = (char *)v56 + 18 * v57;
        v20 = *((__int16 *)v19 + 3736);
        v21 = (char *)&v56[144 * v57];
        v22 = &v56[54 * v57];
        v23 = (int)(v22 + 1658);
        v24 = (char *)(v22 + 1652);
        if ( *((_WORD *)v19 + 3736) )
        {
          if ( v20 != 3 && v20 == 4 )
          {
            v21[4316] = 50;
            v21[4317] = 100;
            v21[4318] = 95;
            v21[4332] = -46;
            v21[4333] = -16;
            v21[4334] = -66;
            v25 = (int)(v21 + 4368);
LABEL_13:
            v59 = v17;
            v58 = v18;
            v52 = v16;
            sub_80260B20(v25, v21 + 4304, 64);
            sub_80260B20(v23, v24, 24);
            v17 = v59;
            v18 = v58;
            v16 = v52;
            *((_WORD *)v19 + 3737) = *((_WORD *)v19 + 3736);
            goto LABEL_14;
          }
          *((_WORD *)v19 + 3736) = -1;
          v21[4332] = v21[4396];
          v21[4333] = v21[4397];
          v21[4334] = v21[4398];
          v21[4316] = v21[4380];
          v21[4317] = v21[4381];
          v21[4318] = v21[4382];
        }
        else
        {
          v21[4332] = 48;
          v21[4316] = 48;
          v21[4333] = 32;
          v21[4317] = 32;
          v21[4334] = 16;
          v21[4318] = 16;
        }
        v25 = (int)(v21 + 4368);
        goto LABEL_13;
      }
LABEL_14:
      v26 = 8;
      v27 = v50 + 128;
      v28 = (int)(v50 + 1204);
      v29 = v50 + 1208;
      v30 = v49 + 4;
      do
      {
        if ( v26 == 1 || *((_DWORD *)v16 + 1060) )
        {
          v32 = (int)&v56[54 * v57 + 6 * v26];
          v33 = v32 + 6608;
          v34 = (char *)(v32 + 6584);
          v59 = v17;
          v58 = v18;
          v53 = v16;
          sub_80260B20(v28, (char *)v27 + 4240, 64);
          sub_80260B20(v33, v34, 24);
          v17 = v59;
          v18 = v58;
          v16 = v53;
          *((_WORD *)v30 + 3736) = *((_WORD *)v30 + 3735);
          v31 = *((__int16 *)v30 + 3736);
        }
        else
        {
          v31 = *((__int16 *)v30 + 3736);
        }
        v27 -= 16;
        v30 = (float *)((char *)v30 - 2);
        if ( v31 == -1 )
        {
          *(_BYTE *)(v28 + 15) = 0;
          *((_BYTE *)v29 + 15) = 0;
        }
        else if ( v26 < 5 )
        {
          *(_BYTE *)(v28 + 15) = -1;
          *((_BYTE *)v29 + 15) = -1;
        }
        else
        {
          v35 = -255 * v26 + 2040;
          v36 = v35 >> 2;
          if ( v35 < 0 )
            v36 = (-255 * v26 + 2043) >> 2;
          *(_BYTE *)(v28 + 15) = v36;
          *((_BYTE *)v29 + 15) = v36;
        }
        v37 = (_WORD)v26 << 11;
        if ( v31 == 3 )
        {
          *(_WORD *)(v28 + 8) = 1040;
          *((_WORD *)v29 + 4) = 16;
        }
        else
        {
          *(_WORD *)(v28 + 8) = 16;
          *((_WORD *)v29 + 4) = 1040;
        }
        *(_WORD *)(v28 + 10) = v37;
        *((_WORD *)v29 + 5) = v37;
        if ( v31 == -1 || v26 == 1 || v26 == 2 && *((_DWORD *)v16 + 1060) )
        {
          v38 = *(_WORD *)(v28 + 2) + v17;
          v39 = *(_WORD *)(v28 + 4) + v18;
          *(_WORD *)v28 += v10;
          *(_WORD *)(v28 + 2) = v38;
          *(_WORD *)(v28 + 4) = v39;
          v40 = *((_WORD *)v29 + 1);
          v41 = *((_WORD *)v29 + 2);
          *(_WORD *)v29 += v10;
          *((_WORD *)v29 + 1) = v40 + v17;
          *((_WORD *)v29 + 2) = v41 + v18;
        }
        else if ( v26 != 8 )
        {
          v42 = (__int16 *)&v56[54 * v57 + 6 * v26];
          v43 = v42 + 3307;
          v44 = *(_WORD *)(v28 + 2);
          *(_WORD *)v28 += ((v42[3304] * v0) >> 12) + v10;
          v45 = *(_WORD *)(v28 + 4) + v18;
          *(_WORD *)(v28 + 2) = v44 + ((v42[3305] * v0) >> 12) + v17;
          *(_WORD *)(v28 + 4) = v45;
          v46 = *((_WORD *)v29 + 1);
          *(_WORD *)v29 += ((v42[3307] * v0) >> 12) + v10;
          v47 = *((_WORD *)v29 + 2);
          *((_WORD *)v29 + 1) = v46 + ((v42[3308] * v0) >> 12) + v17;
          *((_WORD *)v29 + 2) = v47 + ((v42[3309] * v0) >> 12) + v18;
          v48 = *(__int16 *)(v28 + 4);
          if ( *((__int16 *)v29 + 2) < v48 )
            *((_WORD *)v29 + 2) = v48;
          else
            v43[2] -= v55;
        }
        --v26;
        v28 -= 64;
        v29 -= 16;
      }
      while ( v26 );
      v49 = (float *)((char *)v49 + 18);
      v50 += 144;
      ++v57;
      ++v16;
    }
    while ( v57 != 4 );
    result = &dword_80323A0C[3];
    v1 = v51;
LABEL_41:
    v1 += 30;
    if ( v1 < &dword_80323A0C[3] )
    {
      v2 = v1[24];
      continue;
    }
    return result;
  }
}
// 8026FF10: using guessed type int dword_8026FF10;
// 8028AA80: using guessed type int dword_8028AA80;
// 8028AA84: using guessed type int dword_8028AA84;
// 8028AA8C: using guessed type int dword_8028AA8C;
// 8028AAD8: using guessed type float flt_8028AAD8;
// 8028B7F0: using guessed type int dword_8028B7F0;
// 8028B940: using guessed type int dword_8028B940;
// 803239A0: using guessed type int dword_803239A0[24];
// 80323A0C: using guessed type int dword_80323A0C[512];
