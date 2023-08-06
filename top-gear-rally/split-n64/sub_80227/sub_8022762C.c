#include "../../types-n64.h"
//----- (8022762C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_8022762C(int a1)
{
  int v2; // $s0
  float v3; // $f0
  float *v4; // $v1
  float v5; // $f12
  int j; // $v0
  int v7; // $t6
  float *v8; // $v1
  float v9; // $f2
  int i; // $a0
  float v11; // $f0
  float v12; // $f6
  float *v13; // $s0
  float v14; // $f0
  _DWORD *v15; // $v1
  float v16; // $f22
  float v17; // $f0
  float v18; // $f2
  int v19; // $t8
  int v20; // $t6
  float v21; // $f0
  float v22; // $f12
  float v23; // $f0
  int v24; // $v1
  float v25; // $f0
  int v26; // $s0
  float v27; // $f0
  int v28; // $v0
  _DWORD *v29; // $v1
  int v30; // $s2
  float v31; // $f0
  float v32; // $f4
  float v33; // $f2
  float v34; // $f0
  int v35; // $v0
  int v36; // $v0
  float v37; // $f4
  int v38; // $t3
  _DWORD *v39; // $v1
  int v40; // $v0
  BOOL v41; // $at
  int v42; // $v1
  float v43; // $f4
  float v44; // $f20
  float v45; // $f14
  int v46; // $a0
  int *v47; // $v1
  int v48; // $v0
  float k; // $f0
  float v50; // $f2
  float v51; // $f12
  bool v52; // $fcc0
  bool v53; // $fcc0
  float v54; // $f2
  float v55; // $f20
  float v56; // $f0
  float *v57; // [sp+70h] [-130h]
  float *v58; // [sp+7Ch] [-124h]
  float *v59; // [sp+80h] [-120h]
  float v60; // [sp+8Ch] [-114h]
  float v61; // [sp+94h] [-10Ch]
  int v62; // [sp+F8h] [-A8h]
  float v63; // [sp+108h] [-98h]
  float v64[3]; // [sp+10Ch] [-94h] BYREF
  float v65; // [sp+118h] [-88h]
  float v66; // [sp+11Ch] [-84h]
  float v67[4]; // [sp+12Ch] [-74h] BYREF
  float v68[3]; // [sp+13Ch] [-64h] BYREF
  float v69[10]; // [sp+148h] [-58h] BYREF
  float v70; // [sp+170h] [-30h] BYREF
  float v71; // [sp+174h] [-2Ch]
  float v72; // [sp+178h] [-28h]
  int v73; // [sp+180h] [-20h]
  float v74; // [sp+188h] [-18h]
  float v75; // [sp+190h] [-10h]
  float v76[3]; // [sp+194h] [-Ch] BYREF

  if ( (*(_DWORD *)(*(_DWORD *)(a1 + 3792) + 104) & 1) != 0 )
    goto LABEL_168;
  if ( (**(_DWORD **)(a1 + 8308) & 0x2000000) != 0 )
  {
    *(_DWORD *)(a1 + 3912) = 1;
    sub_80221108(a1);
  }
  sub_8022D7E0(0, 255, 255, 255, 255);
  v2 = *(_DWORD *)(a1 + 3936);
  v59 = (float *)(a1 + 4056);
  v73 = *(_DWORD *)(a1 + 3932);
  v3 = sub_80224B08((float *)(a1 + 4056));
  v4 = (float *)(*(_DWORD *)(a1 + 3932) + 40 * *(_DWORD *)(a1 + 3936));
  v5 = (float)(v3 * 3.0) + 20.0;
  j = v73;
  v70 = v4[19];
  v71 = v4[20];
  v7 = 40 * v2;
  v72 = v4[21];
  if ( v5 > 80.0 )
    v5 = 80.0;
  v8 = (float *)(v73 + v7);
  v9 = *(float *)(v73 + v7 + 100);
  for ( i = *(unsigned __int16 *)(v73 + 20); ; i = *(unsigned __int16 *)(j + 20) )
  {
    v11 = v8[35];
    ++v2;
    v8 += 10;
    v5 = v5 - (float)(v9 - v11);
    if ( v2 == i )
    {
      j = *(_DWORD *)j;
      v2 = 0;
      if ( (*(_WORD *)(j + 22) & 1) != 0 )
      {
        for ( j = *(_DWORD *)(j + 4); (*(_WORD *)(j + 22) & 1) != 0; j = *(_DWORD *)(j + 4) )
          ;
        v8 = (float *)j;
      }
      else
      {
        v8 = (float *)j;
      }
    }
    if ( v5 < 0.0 )
      break;
    v9 = v8[25];
  }
  v70 = v8[19];
  v71 = v8[20];
  v72 = v8[21];
  if ( sub_80226D9C(a1, 0, *(_DWORD *)(a1 + 3936), *(_DWORD *)(a1 + 3932)) )
  {
    sub_802249D4(&flt_8031B730, &flt_8031B730, &flt_8031B740);
    if ( 0.0 != *(float *)(a1 + 3804) )
    {
      v12 = 0.5;
LABEL_25:
      sub_802248FC((float *)(a1 + 3804), (float *)(a1 + 3804), &flt_8031B730, v12 + 0.0);
      v13 = (float *)(a1 + 3804);
      goto LABEL_27;
    }
    if ( 0.0 != *(float *)(a1 + 3808) )
    {
      v12 = 0.5;
      goto LABEL_25;
    }
    if ( 0.0 != *(float *)(a1 + 3812) )
    {
      v12 = 0.5;
      goto LABEL_25;
    }
    *(_DWORD *)(a1 + 3804) = -6044687;
    *(_DWORD *)(a1 + 3808) = 853003467;
    *(_DWORD *)(a1 + 3812) = 1459937227;
  }
  v13 = (float *)(a1 + 3804);
LABEL_27:
  sub_802248FC(v13, v13, &v70, 0.40000001);
  v74 = sub_80224404(v59, (float *)a1);
  sub_802245F0((int)v76, (float *)(a1 + 48), v13);
  v67[0] = 0.0;
  v67[1] = 0.0;
  v67[2] = 1.0;
  sub_8022439C(v68, v67, v76);
  sub_8022439C(v69, v76, v68);
  v75 = sub_80224404((float *)(a1 + 16), v76);
  v14 = sub_80224404((float *)a1, v76);
  v15 = *(_DWORD **)(a1 + 8308);
  *(float *)(a1 + 7644) = v14;
  *v15 |= 0x10000u;
  v58 = (float *)(a1 + 3828);
  sub_802245F0(
    a1 + 3828,
    (float *)(*(_DWORD *)(a1 + 3932) + 40 * *(_DWORD *)(a1 + 3936) + 76),
    (float *)(*(_DWORD *)(a1 + 3932) + 40 * *(_DWORD *)(a1 + 3936) + 116));
  sub_80224808(
    (float *)(a1 + 3840),
    (float *)(*(_DWORD *)(a1 + 3932) + 40 * *(_DWORD *)(a1 + 3936) + 64),
    (float *)(*(_DWORD *)(a1 + 3932) + 40 * *(_DWORD *)(a1 + 3936) + 88));
  v57 = (float *)(a1 + 3852);
  sub_8022439C((float *)(a1 + 3852), (float *)(a1 + 3828), (float *)(a1 + 3840));
  sub_80224760((float *)(a1 + 3852));
  sub_8022439C((float *)(a1 + 3840), (float *)(a1 + 3852), (float *)(a1 + 3828));
  sub_80224760((float *)(a1 + 3840));
  sub_80224808(
    (float *)(a1 + 3868),
    (float *)(a1 + 48),
    (float *)(*(_DWORD *)(a1 + 3932) + 40 * *(_DWORD *)(a1 + 3936) + 76));
  sub_80224990((float *)(a1 + 3868), v59, 0.40000001);
  v16 = sub_80224404((float *)(a1 + 3840), (float *)(a1 + 3868));
  v17 = sub_80224404((float *)a1, (float *)(a1 + 3840));
  dword_8028B80C = 0;
  dword_8028B808 = 0;
  if ( v16 >= 0.0 )
    v18 = v16;
  else
    v18 = -v16;
  v19 = *(_DWORD *)(a1 + 3936);
  v20 = *(_DWORD *)(a1 + 3932);
  v66 = v17;
  v65 = v18;
  sub_80224808(v64, (float *)(v20 + 40 * v19 + 64), (float *)(v20 + 40 * v19 + 76));
  v21 = sub_80224404((float *)(a1 + 3840), v64);
  v63 = v21;
  if ( v21 <= 5.0 )
    v22 = v21 * 0.40000001;
  else
    v22 = v21 - 3.0;
  if ( v22 < v65 )
  {
    if ( v16 <= 0.0 )
    {
      if ( v66 >= 0.05 )
      {
        if ( v66 > 0.15 )
        {
          dword_8028B80C = 0;
          dword_8028B808 = 1;
        }
      }
      else
      {
        dword_8028B80C = 1;
        dword_8028B808 = 0;
      }
    }
    else if ( v66 <= -0.05 )
    {
      if ( v66 < -0.15 )
      {
        dword_8028B80C = 1;
        dword_8028B808 = 0;
      }
    }
    else
    {
      dword_8028B80C = 0;
      dword_8028B808 = 1;
    }
    goto LABEL_92;
  }
  if ( sub_80224B08(v59) > 10.0 )
  {
    v23 = sub_80224404(v59, (float *)(a1 + 3840));
    if ( v23 <= 0.1 )
    {
      v24 = 0;
      if ( v23 < -0.1 )
        v24 = -1;
    }
    else
    {
      v24 = 1;
    }
    v62 = v24;
    v25 = sub_80224404((float *)(a1 + 64), v68);
    if ( v25 <= 0.1 )
    {
      v26 = 0;
      if ( v25 < -0.1 )
        v26 = -1;
    }
    else
    {
      v26 = 1;
    }
    v27 = sub_80224404((float *)a1, v68);
    if ( v27 <= 0.1 )
    {
      v28 = 0;
      if ( v27 < -0.1 )
        v28 = -1;
    }
    else
    {
      v28 = 1;
    }
    if ( v62 || v28 )
    {
      if ( v62 && !(v62 + v28) )
      {
        if ( v62 == 1 && v26 == 1 )
        {
          dword_8028B808 = 0;
          dword_8028B80C = 1;
        }
        else if ( v62 == -1 && v26 == -1 )
        {
          dword_8028B808 = 1;
          dword_8028B80C = 0;
        }
        goto LABEL_92;
      }
      if ( v62 && v62 == v28 )
      {
        if ( v62 == 1 && v26 == 1 )
        {
          dword_8028B808 = 1;
          dword_8028B80C = 0;
        }
        else if ( v62 == -1 && v26 == -1 )
        {
          dword_8028B808 = 0;
          dword_8028B80C = 1;
        }
        goto LABEL_92;
      }
      if ( !v26 && !v28 )
        goto LABEL_92;
      if ( !v26 && !v62 )
      {
        **(_DWORD **)(a1 + 8308) &= 0xFFFEFFFF;
        goto LABEL_92;
      }
      if ( v26 == v28 )
      {
        if ( v26 == 1 )
        {
          dword_8028B808 = 1;
          dword_8028B80C = 0;
        }
        else
        {
          if ( v26 != -1 )
          {
            v29 = *(_DWORD **)(a1 + 8308);
LABEL_88:
            *v29 &= 0xFFFEFFFF;
            goto LABEL_92;
          }
          dword_8028B808 = 0;
          dword_8028B80C = 1;
        }
        v29 = *(_DWORD **)(a1 + 8308);
        goto LABEL_88;
      }
      if ( !v26 || v26 + v62 )
        **(_DWORD **)(a1 + 8308) &= 0xFFFEFFFF;
    }
  }
LABEL_92:
  v30 = 0;
  v31 = sub_80224B08(v59);
  v32 = v75;
  if ( v31 > 10.0 )
  {
    v75 = v75 * 1.0;
    if ( (float)(v32 * 1.0) <= 1.0 )
    {
      if ( v75 < -1.0 )
      {
        v75 = -1.0;
        **(_DWORD **)(a1 + 8308) &= 0xFFFEFFFF;
      }
    }
    else
    {
      **(_DWORD **)(a1 + 8308) &= 0xFFFEFFFF;
      v75 = 1.0;
    }
  }
  if ( v75 < 0.0 )
    v33 = (float)((float)((float)((float)(v75 + 1.0) * (float)(v75 + 1.0)) * (float)(v75 + 1.0)) * (float)(v75 + 1.0))
        - 1.0;
  else
    v33 = 1.0
        - (float)((float)((float)((float)(1.0 - v75) * (float)(1.0 - v75)) * (float)(1.0 - v75)) * (float)(1.0 - v75));
  v75 = v33;
  v34 = sub_80224B08(v59);
  if ( *(float *)(a1 + 7644) >= 0.0 )
  {
    v36 = *(_DWORD *)(a1 + 3700);
    if ( v36 )
    {
      *(_DWORD *)(a1 + 3700) = v36 - 1;
      v39 = *(_DWORD **)(a1 + 8308);
LABEL_115:
      *v39 |= 0x10000u;
      if ( v75 < 0.0 )
        *(float *)(*(_DWORD *)(a1 + 8308) + 32) = -1.0;
      else
        *(_DWORD *)(*(_DWORD *)(a1 + 8308) + 32) = 1065353216;
      **(_DWORD **)(a1 + 8308) |= 0x20000u;
      v40 = *(_DWORD *)(a1 + 3704);
      v41 = v40 < 271;
      if ( v40 >= 151 )
      {
        v40 = 30;
        if ( v41 )
        {
          v42 = *(_DWORD *)(a1 + 8308);
          v43 = *(float *)(v42 + 32) * -1.0;
          *(float *)(v42 + 32) = v43;
          v40 = *(_DWORD *)(a1 + 3704);
        }
        else
        {
          *(_DWORD *)(a1 + 3704) = 30;
        }
      }
      *(_DWORD *)(a1 + 3704) = v40 + 1;
      if ( v40 + 1 >= 31 && v34 < 1.0 )
      {
        *(_DWORD *)(a1 + 3696) = 60;
        *(_DWORD *)(a1 + 3704) = 0;
        *(_DWORD *)(a1 + 3708) = 0;
      }
      goto LABEL_125;
    }
    if ( v74 >= -1.0 )
    {
      v37 = v75;
LABEL_107:
      *(float *)(*(_DWORD *)(a1 + 8308) + 32) = -v37;
      v38 = *(_DWORD *)(a1 + 3708) + 1;
      *(_DWORD *)(a1 + 3708) = v38;
      if ( v38 >= 31 && v34 < 1.0 )
      {
        *(_DWORD *)(a1 + 3700) = 60;
        *(_DWORD *)(a1 + 3704) = 0;
        *(_DWORD *)(a1 + 3708) = 0;
      }
      goto LABEL_125;
    }
    **(_DWORD **)(a1 + 8308) |= 0x40000u;
  }
  else
  {
    v35 = *(_DWORD *)(a1 + 3696);
    if ( v35 )
    {
      *(_DWORD *)(a1 + 3696) = v35 - 1;
      v37 = v75;
      goto LABEL_107;
    }
    if ( v74 <= 1.0 )
    {
      v39 = *(_DWORD **)(a1 + 8308);
      goto LABEL_115;
    }
    **(_DWORD **)(a1 + 8308) |= 0x40000u;
  }
LABEL_125:
  sub_80227214(a1);
  v44 = 90.0;
  v45 = 0.0;
  v46 = -1;
  v47 = dword_803239A0;
  do
  {
    v48 = v47[24];
    if ( !v48 )
    {
      ++v30;
      goto LABEL_155;
    }
    if ( v48 == a1 )
    {
      ++v30;
      goto LABEL_155;
    }
    k = *(float *)(v48 + 4008) - *(float *)(a1 + 4008);
    v50 = *(float *)(MEMORY[0x80025C70] + 100);
    v51 = -v50;
    if ( v50 < k )
    {
      for ( k = k - v50; v50 < k; k = k - v50 )
        ;
      v52 = k < v51;
    }
    else
    {
      v52 = k < v51;
    }
    if ( v52 )
    {
      for ( k = k + v50; k < v51; k = k + v50 )
        ;
      v53 = k > 0.0;
    }
    else
    {
      v53 = k > 0.0;
    }
    if ( !v53 )
    {
      ++v30;
      goto LABEL_155;
    }
    if ( k >= v44 )
    {
      ++v30;
      goto LABEL_155;
    }
    v54 = *(float *)(v48 + 3880) - v16;
    v44 = k;
    if ( v54 >= 3.0 )
    {
      if ( v54 <= -3.0 )
      {
        ++v30;
        goto LABEL_155;
      }
      v46 = v30;
      v45 = (float)(1.0 - (float)(k * 0.011111111)) * 10.0;
      if ( v45 > 5.0 )
        v45 = 5.0;
    }
    else
    {
      v45 = (float)(1.0 - (float)(k * 0.011111111)) * -10.0;
      if ( v45 < -5.0 )
        v45 = -5.0;
      v46 = v30;
    }
    ++v30;
LABEL_155:
    v47 += 30;
  }
  while ( v30 < 1 );
  if ( v46 != -1 )
  {
    v16 = v16 + v45;
    if ( v16 < 0.0 )
      *(float *)(a1 + 3864) = -v16;
    else
      *(float *)(a1 + 3864) = v16;
  }
  if ( v74 > 3.0 )
  {
    if ( *(float *)(a1 + 3864) < (float)(v63 + 1.0) )
    {
      v55 = (float)(v74 - 3.0) * 0.015625;
      if ( v55 < 0.0 )
        v55 = (float)((float)(v74 - 3.0) * 0.015625) * -0.25;
      if ( v55 > 0.40000001 )
        v55 = 0.40000001;
      v60 = sub_80224404((float *)(a1 + 460), v58);
      sub_80224404((float *)(a1 + 460), (float *)(a1 + 3840));
      v61 = sub_80224404((float *)(a1 + 460), v57);
      sub_802244FC((float *)(a1 + 460), v58, v60);
      sub_80224990((float *)(a1 + 460), (float *)(a1 + 3840), -(float)(v16 * v55));
      sub_80224990((float *)(a1 + 460), v57, v61);
    }
    sub_80224528(
      (float *)(a1 + 460),
      *(float *)(32 * MEMORY[0xC74C1D3C]
               + 8 * MEMORY[0xC74C1D3D]
               + 4 * *(_DWORD *)(*(_DWORD *)(a1 + 3792) + 116)
               - 2144814608));
  }
LABEL_168:
  sub_8022D7E0(0, 0, 130, 0, 255);
  v56 = sub_80224B08((float *)(a1 + 488));
  if ( v56 > 1.0 && *(_DWORD *)(a1 + 1284) )
    sub_80224528((float *)(a1 + 488), 1.0 / v56);
  sub_8021F998(a1);
  sub_80226248(a1);
}
// 80227A34: write access to const memory at 8028B80C has been detected
// 80227A3C: write access to const memory at 8028B808 has been detected
// 80227B10: write access to const memory at 8028B80C has been detected
// 80227B14: write access to const memory at 8028B808 has been detected
// 80227B58: write access to const memory at 8028B80C has been detected
// 80227B5C: write access to const memory at 8028B808 has been detected
// 80227BA8: write access to const memory at 8028B80C has been detected
// 80227BAC: write access to const memory at 8028B808 has been detected
// 80227BF0: write access to const memory at 8028B80C has been detected
// 80227BF4: write access to const memory at 8028B808 has been detected
// 80227D68: write access to const memory at 8028B808 has been detected
// 80227D70: write access to const memory at 8028B80C has been detected
// 80227D84: write access to const memory at 8028B808 has been detected
// 80227D88: write access to const memory at 8028B80C has been detected
// 80227DB8: write access to const memory at 8028B808 has been detected
// 80227DC0: write access to const memory at 8028B80C has been detected
// 80227DD4: write access to const memory at 8028B808 has been detected
// 80227DD8: write access to const memory at 8028B80C has been detected
// 80227E34: write access to const memory at 8028B808 has been detected
// 80227E3C: write access to const memory at 8028B80C has been detected
// 80227E48: write access to const memory at 8028B808 has been detected
// 80227E4C: write access to const memory at 8028B80C has been detected
// 8026FF18: using guessed type int dword_8026FF18;
// 8028AAD8: using guessed type float flt_8028AAD8;
// 8028B7F0: using guessed type int dword_8028B7F0;
// 8028B804: using guessed type int dword_8028B804;
// 8028B808: using guessed type int dword_8028B808;
// 8028B80C: using guessed type int dword_8028B80C;
// 8028C800: using guessed type int dword_8028C800;
// 8031B730: using guessed type float flt_8031B730;
// 8031B734: using guessed type float flt_8031B734;
// 8031B738: using guessed type float flt_8031B738;
// 8031B740: using guessed type float flt_8031B740;
// 803239A0: using guessed type int dword_803239A0[24];
