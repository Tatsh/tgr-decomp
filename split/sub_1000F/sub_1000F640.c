//----- (1000F640) --------------------------------------------------------
int __cdecl sub_1000F640(int a1, int a2, int a3, int a4, int a5)
{
  float **v5; // ebx
  _DWORD *v6; // ebp
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  unsigned int *v12; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // eax
  _DWORD *v30; // eax
  _DWORD *v31; // eax
  int v32; // ecx
  int v33; // esi
  _DWORD *v34; // ebx
  unsigned __int8 v35; // al
  unsigned __int16 v36; // dx
  double v37; // st7
  double v38; // st7
  double v39; // st7
  int v40; // esi
  __int16 *v41; // edi
  double v42; // st7
  int v43; // esi
  int v44; // eax
  float *v45; // eax
  int *v46; // ebx
  int *v47; // ebx
  bool v48; // zf
  _DWORD *v49; // eax
  _DWORD *v50; // eax
  _DWORD *v51; // eax
  int result; // eax
  _DWORD *v53; // ebp
  _DWORD *v54; // ebx
  float *v55; // esi
  float **v56; // ebx
  int v57; // edi
  _DWORD *v58; // ebp
  int v59; // eax
  char *v60; // ecx
  int v61; // eax
  int v62; // edi
  int v63; // edi
  double v64; // st7
  double v65; // st6
  char v67; // c0
  char v68; // cl
  unsigned int *v69; // [esp-40h] [ebp-BCh]
  unsigned int *v70; // [esp-40h] [ebp-BCh]
  float v71; // [esp+0h] [ebp-7Ch]
  const void *v72; // [esp+14h] [ebp-68h]
  int v73; // [esp+18h] [ebp-64h]
  int v74; // [esp+1Ch] [ebp-60h]
  float **v75; // [esp+20h] [ebp-5Ch]
  int v76; // [esp+24h] [ebp-58h]
  float v77; // [esp+28h] [ebp-54h]
  float v78; // [esp+28h] [ebp-54h]
  float v79; // [esp+30h] [ebp-4Ch]
  int v80; // [esp+34h] [ebp-48h]
  char *v81; // [esp+34h] [ebp-48h]
  _DWORD *v82; // [esp+38h] [ebp-44h]
  float v83; // [esp+3Ch] [ebp-40h]
  float v84; // [esp+40h] [ebp-3Ch]
  float v85; // [esp+44h] [ebp-38h]
  float v86; // [esp+48h] [ebp-34h]
  float v87; // [esp+4Ch] [ebp-30h]
  float v88; // [esp+50h] [ebp-2Ch]
  float v89; // [esp+54h] [ebp-28h]
  float v90; // [esp+58h] [ebp-24h]
  char v91[32]; // [esp+5Ch] [ebp-20h] BYREF
  __int16 *v92; // [esp+80h] [ebp+4h]
  float *v93; // [esp+84h] [ebp+8h]
  float v94; // [esp+8Ch] [ebp+10h]
  float v95; // [esp+90h] [ebp+14h]
  float v96; // [esp+90h] [ebp+14h]
  char *v97; // [esp+90h] [ebp+14h]

  v73 = dword_10364304;
  v5 = (float **)dword_10363FF0;
  v6 = *(_DWORD **)(dword_106C7CA8 + 84 * a2 + 68);
  v7 = dword_106C7CA8 + 84 * a2;
  v72 = (const void *)v7;
  v82 = v6;
  if ( !a3 || dword_106C6490 == (void *)(dword_106C2CF8 + 10384) || (*(_BYTE *)(v7 + 77) & 2) != 0 || !dword_10B4E1D8 )
  {
    v49 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v49 = -1157623807;
    v49[1] = -1;
    v50 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v50 = -402653184;
    v50[1] = 0;
    v51 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v51 = 100663296;
    v51[1] = v6;
    dword_106C069C += *(unsigned __int16 *)(v7 + 80);
    dword_106C06A4 += *(unsigned __int16 *)(v7 + 78);
    dword_106C1610 += *(unsigned __int16 *)(v7 + 82);
  }
  else
  {
    debugPrint(dword_106C6490);
    v8 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v8 = -1157623807;
    v8[1] = -1;
    v9 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v9 = -402653184;
    v9[1] = 0;
    v10 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v10 = -100657408;
    v10[1] = -16776961;
    v11 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v11 = 100663296;
    v11[1] = v6;
    v12 = (unsigned int *)dword_106C0680;
    dword_106C0680 += 8;
    v13 = dword_11829110 & 0xFFFFFF;
    v12[1] = 1;
    *v12 = v13 | 0xDC000000;
    v14 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v14 = -1174401023;
    v14[1] = 0;
    v15 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v15 = -100657408;
    v15[1] = -16776961;
    if ( !a4 || dword_106C661C || dword_106C6624 )
    {
      v17 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v17 = -1191181539;
      v17[1] = 5263184;
    }
    else
    {
      v16 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v16 = -1191181539;
      v16[1] = 5262160;
    }
    v18 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v18 = -1191182334;
    v18[1] = 1;
    v19 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v19 = -117440512;
    v19[1] = 8;
    v69 = (unsigned int *)dword_106C0680;
    dword_106C0680 += 8;
    sub_1002F900(v69, 1005, 0, 1012, 0, 0, 0, 0, 1001, 1005, 0, 1012, 0, 0, 0, 0, 1001);
    v20 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v20 = -1241513984;
    v20[1] = 458756;
    v21 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v21 = -1174403582;
    v21[1] = 192;
    v22 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v22 = 100663296;
    v22[1] = v5;
    v23 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v23 = -419430400;
    v23[1] = 0;
    if ( !dword_106C660C )
      sub_1003289F(
        *(_DWORD *)(a1 + 88 * dword_106C5708),
        *(_DWORD *)(a1 + 88 * dword_106C5708 + 4),
        *(_DWORD *)(a1 + 88 * dword_106C5708 + 8),
        *(_DWORD *)(a1 + 88 * dword_106C5708 + 12));
    v24 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v24 = -1174403582;
    v24[1] = dword_106C0688;
    v25 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v25 = -117440512;
    v25[1] = 0;
    v26 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    if ( dword_106C6618 )
    {
      *v26 = -1224736768;
      v26[1] = 196612;
    }
    else
    {
      *v26 = -1224736768;
      v26[1] = 131076;
    }
    v27 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v27 = -1174401023;
    v27[1] = dword_100AA87C != 0 ? 0x10000 : 0;
    v28 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v28 = -100657408;
    v28[1] = -16776961;
    v29 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v29 = -1191181539;
    v29[1] = 0;
    v30 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v30 = -1174399998;
    v30[1] = 0x100000;
    v31 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v31 = -1191181539;
    v31[1] = dword_1036439C | dword_103643A0;
    v70 = (unsigned int *)dword_106C0680;
    dword_106C0680 += 8;
    sub_1002F900(v70, 1002, 1001, 1013, 1001, 1002, 1001, 1013, 1001, 1000, 0, 1004, 0, 0, 0, 0, 1000);
    dword_106C069C += *(unsigned __int16 *)(v7 + 80) + 2 * *(unsigned __int16 *)(v7 + 80);
    dword_106C06A4 += *(unsigned __int16 *)(v7 + 78) + 2 * *(unsigned __int16 *)(v7 + 78);
    dword_106C1610 += *(unsigned __int16 *)(v7 + 82) + 2 * *(unsigned __int16 *)(v7 + 82);
    v32 = v73;
    v93 = (float *)v73;
    v33 = a5 + 10032;
    v75 = 0;
    v76 = 0;
    v92 = (__int16 *)(a5 + 10032);
    while ( 1 )
    {
      if ( (a3 & 1) != 0 )
      {
        if ( dword_106C6490 != (void *)(dword_106C2CF8 + 10044) && dword_106C6490 != (void *)(dword_106C2CF8 + 10180)
          || (v32 = v76, *(_DWORD *)(dword_106C2CF8 + 320) != v76) )
        {
          if ( g_D3ddrawcarshadow )
            sub_1000F460();
          *v5 = (float *)-419430400;
          v5[1] = 0;
          v34 = v5 + 2;
          *v34 = -83886080;
          v80 = (int)(v34 + 2);
          v71 = *(float *)v33 * 255.0;
          v35 = sub_1002B920(v71);
          HIBYTE(v36) = byte_106C0260;
          LOBYTE(v36) = byte_106C1614;
          v34[1] = (((unsigned __int8)byte_106C0200 | (v36 << 8)) << 8) | v35;
          v74 = v33 - 10032;
          v5 = (float **)(v34 + 2);
          v37 = *(float *)(v33 - 10032);
          flt_10364390 = *(float *)(v33 - 10032);
          dword_10364394 = *(_DWORD *)(v33 - 10028);
          dword_10364398 = *(_DWORD *)(v33 - 10024);
          if ( v37 == 0.0 && *(float *)&dword_10364394 == 0.0 )
          {
            flt_10364390 = *(float *)(v33 - 10000);
            dword_10364394 = *(_DWORD *)(v33 - 9996);
          }
          dword_10364398 = 0;
          v38 = sub_1003B1C0(&flt_10364390);
          v95 = v38;
          if ( v38 < 0.5 )
            v95 = 0.5;
          v39 = sub_1003B1C0((float *)(v33 - 10016));
          if ( v39 < 0.5 )
            v39 = 0.5;
          v40 = *(_DWORD *)(v33 + 660);
          v96 = 235.52 / *(float *)(v40 + 32992) / v95;
          v77 = 161.28 / *(float *)(v40 + 32996) / v39;
          sub_1003AE50(&flt_10364390);
          qmemcpy(&flt_106C0860, v72, 0x40u);
          v41 = v92;
          flt_106C0890 = flt_106C0890 - *((float *)v92 - 2496);
          dword_106C08C0 = 0;
          dword_106C08D0 = 1140850688;
          flt_106C0894 = flt_106C0894 - *((float *)v92 - 2495);
          flt_106C08A0 = flt_10364390 * v96;
          flt_106C08B0 = --(*(float *)&dword_10364394 * v96);
          dword_106C08C4 = 0;
          dword_106C08D4 = 1140850688;
          flt_106C08A4 = -(*(float *)&dword_10364394 * v77);
          flt_106C08B4 = flt_10364390 * v77;
          dword_106C08A8 = 0;
          dword_106C08B8 = 0;
          dword_106C08C8 = 1065353216;
          dword_106C08D8 = 0;
          dword_106C08AC = 0;
          dword_106C08BC = 0;
          dword_106C08CC = 0;
          dword_106C08DC = 1065353216;
          sub_1003B470((char *)&flt_106C0860, &flt_106C0860, &flt_106C08A0);
          v42 = flt_106C086C + flt_106C087C + flt_106C088C + *(float *)&flt_106C089C;
          if ( v42 == 0.0 )
            v94 = 1.0;
          else
            v94 = 1.0 / v42;
          flt_106C0860 = v94 * flt_106C0860;
          flt_106C0870 = v94 * flt_106C0870;
          flt_106C0880 = v94 * flt_106C0880;
          flt_106C0890 = v94 * flt_106C0890;
          flt_106C0864 = v94 * flt_106C0864;
          flt_106C0874 = v94 * flt_106C0874;
          flt_106C0884 = v94 * flt_106C0884;
          flt_106C0894 = v94 * flt_106C0894;
          if ( !dword_106C660C )
          {
            v43 = dword_106C0680;
            dword_106C0680 = v80;
            sub_1003289F(v92[310], v92[313], v92[312] - v92[310], v92[311] - v92[313]);
            v5 = (float **)dword_106C0680;
            dword_106C0680 = v43;
          }
          v44 = (int)v5 - dword_102E5EC8;
          LOBYTE(v44) = ((_BYTE)v5 - dword_102E5EC8) & 0xFC;
          if ( v44 <= 79872 )
          {
            while ( 1 )
            {
              v45 = (float *)*v6;
              v32 = HIBYTE(*v6);
              switch ( v32 )
              {
                case 4:
                  v83 = flt_106C0860;
                  v84 = flt_106C0880;
                  v85 = flt_106C0870;
                  v86 = flt_106C0864;
                  v89 = flt_106C0890;
                  v87 = flt_106C0884;
                  v88 = flt_106C0874;
                  v90 = flt_106C0894;
                  if ( g_D3ddrawcarshadow || v5 != v75 )
                  {
                    v55 = (float *)v73;
                  }
                  else
                  {
                    v55 = v93;
                    v5 -= 2;
                    v73 = (int)v93;
                  }
                  *v5 = v45;
                  v32 = dword_103643BC;
                  v56 = v5 + 1;
                  v57 = (unsigned __int16)v45 >> 10;
                  v58 = v6 + 1;
                  v59 = (int)&v55[8 * v57] - dword_103643BC;
                  LOBYTE(v59) = v59 & 0xE0;
                  if ( v59 > 32000 )
                  {
                    v5 = v56 - 1;
                    goto LABEL_59;
                  }
                  if ( v57 > 32 )
                    sub_10035BBA((int)aBadVtxDl);
                  v60 = (char *)*v58;
                  *v56 = v55;
                  v6 = v58 + 1;
                  v5 = v56 + 1;
                  v61 = v57;
                  v62 = v57 - 1;
                  v97 = v60;
                  v75 = v5;
                  v93 = v55;
                  v81 = v91;
                  if ( v61 )
                  {
                    v63 = v62 + 1;
                    do
                    {
                      qmemcpy_32bytes(v55, v97);
                      v64 = v55[1];
                      v79 = v55[2];
                      v78 = v84 * v79 + v83 * *v55 + v85 * v64 + v89;
                      v65 = v86 * *v55 + v87 * v79 + v88 * v64;
                      v55[3] = v78;
                      v55[4] = v65 + v90;
                      if ( v67 )
                      {
                        v68 = 1;
                      }
                      else if ( v55[3] < 1024.0 )
                      {
                        v68 = 0;
                      }
                      else
                      {
                        v68 = 2;
                      }
                      if ( v55[4] >= 0.0 )
                      {
                        if ( v55[4] >= 1024.0 )
                          v68 |= 8u;
                      }
                      else
                      {
                        v68 |= 4u;
                      }
                      v55 += 8;
                      *v81 = v68;
                      --v63;
                      ++v81;
                      v97 += 32;
                    }
                    while ( v63 );
                    v73 = (int)v55;
                  }
LABEL_52:
                  v41 = v92;
LABEL_53:
                  v32 = ((unsigned int)v5 - dword_102E5EC8) & 0xFFFFFFFC;
                  if ( v32 > 79872 )
                    goto LABEL_56;
                  break;
                case 177:
                  if ( dword_106C660C )
                    goto LABEL_66;
                  if ( ((unsigned __int8)(v91[BYTE1(*v6) & 0x1F] & v91[*v6 & 0x1F]) & (unsigned __int8)v91[HIWORD(*v6) & 0x1F]) != 0 )
                  {
                    if ( ((unsigned __int8)(v91[BYTE1(v6[1]) & 0x1F] & v91[v6[1] & 0x1F]) & (unsigned __int8)v91[HIWORD(v6[1]) & 0x1F]) != 0 )
                    {
                      v6 += 2;
                    }
                    else
                    {
                      if ( g_D3ddrawcarshadow )
                      {
                        sub_100106A0(
                          (int)v72,
                          (int)(v41 + 352),
                          (int)(v41 + 342),
                          &v93[8 * (v6[1] & 0x1F)],
                          &v93[8 * (BYTE1(v6[1]) & 0x1F)],
                          &v93[8 * (HIWORD(v6[1]) & 0x1F)],
                          v74);
                      }
                      else
                      {
                        *v5 = (float *)-1090519040;
                        v46 = (int *)(v5 + 1);
                        *v46 = v6[1] & 0xFFFFFF;
                        v5 = (float **)(v46 + 1);
                      }
                      v6 += 2;
                    }
                    goto LABEL_53;
                  }
                  if ( ((unsigned __int8)(v91[BYTE1(v6[1]) & 0x1F] & v91[v6[1] & 0x1F]) & (unsigned __int8)v91[HIWORD(v6[1]) & 0x1F]) != 0 )
                  {
                    if ( g_D3ddrawcarshadow )
                    {
                      sub_100106A0(
                        (int)v72,
                        (int)(v41 + 352),
                        (int)(v41 + 342),
                        &v93[8 * (*v6 & 0x1F)],
                        &v93[8 * (BYTE1(v45) & 0x1F)],
                        &v93[8 * (((unsigned int)v45 >> 16) & 0x1F)],
                        v74);
                    }
                    else
                    {
                      *v5 = (float *)-1090519040;
                      v47 = (int *)(v5 + 1);
                      *v47 = *v6 & 0xFFFFFF;
                      v5 = (float **)(v47 + 1);
                    }
                    v6 += 2;
                    goto LABEL_53;
                  }
                  if ( !g_D3ddrawcarshadow )
                    goto LABEL_66;
                  sub_100106A0(
                    (int)v72,
                    (int)(v92 + 352),
                    (int)(v41 + 342),
                    &v93[8 * (*v6 & 0x1F)],
                    &v93[8 * (BYTE1(v45) & 0x1F)],
                    &v93[8 * (((unsigned int)v45 >> 16) & 0x1F)],
                    v74);
                  sub_100106A0(
                    (int)v72,
                    (int)(v92 + 352),
                    (int)(v41 + 342),
                    &v93[8 * (v6[1] & 0x1F)],
                    &v93[8 * (BYTE1(v6[1]) & 0x1F)],
                    &v93[8 * (HIWORD(v6[1]) & 0x1F)],
                    v74);
                  v6 += 2;
                  goto LABEL_52;
                case 184:
                  goto LABEL_56;
                case 191:
                  if ( dword_106C660C )
                    goto LABEL_66;
                  if ( ((unsigned __int8)(v91[BYTE1(v6[1]) & 0x1F] & v91[v6[1] & 0x1F]) & (unsigned __int8)v91[HIWORD(v6[1]) & 0x1F]) != 0 )
                  {
                    v6 += 2;
                  }
                  else if ( g_D3ddrawcarshadow )
                  {
                    sub_100106A0(
                      (int)v72,
                      (int)(v41 + 352),
                      (int)(v41 + 342),
                      &v93[8 * (v6[1] & 0x1F)],
                      &v93[8 * (BYTE1(v6[1]) & 0x1F)],
                      &v93[8 * (HIWORD(v6[1]) & 0x1F)],
                      v74);
                    v6 += 2;
                  }
                  else
                  {
LABEL_66:
                    v53 = v6 + 1;
                    *v5 = v45;
                    v54 = v5 + 1;
                    *v54 = *v53;
                    v5 = (float **)(v54 + 1);
                    v6 = v53 + 1;
                  }
                  goto LABEL_53;
                default:
                  v6 += 2;
                  goto LABEL_53;
              }
            }
          }
LABEL_56:
          if ( !g_D3ddrawcarshadow && v5 == v75 )
          {
            v5 -= 2;
            v73 = (int)v93;
          }
LABEL_59:
          v33 = (int)v92;
        }
      }
      v33 += 11112;
      v48 = a3 >> 1 == 0;
      ++v76;
      v92 = (__int16 *)v33;
      a3 >>= 1;
      if ( v48 )
        break;
      v6 = v82;
    }
    *v5 = (float *)-1207959552;
    v5[1] = 0;
    v5 += 2;
    debugPrint((void *)v32);
  }
  result = v73;
  dword_10363FF0 = (int)v5;
  dword_10364304 = v73;
  return result;
}
// 10010241: variable 'v32' is possibly undefined
// 10010548: variable 'v67' is possibly undefined
// 100AA87C: using guessed type int dword_100AA87C;
// 102E5EC8: using guessed type int dword_102E5EC8;
// 10363FF0: using guessed type int dword_10363FF0;
// 10364304: using guessed type int dword_10364304;
// 10364390: using guessed type float flt_10364390;
// 10364394: using guessed type int dword_10364394;
// 10364398: using guessed type int dword_10364398;
// 1036439C: using guessed type int dword_1036439C;
// 103643A0: using guessed type int dword_103643A0;
// 103643BC: using guessed type int dword_103643BC;
// 1039B6C8: using guessed type int g_D3ddrawcarshadow;
// 106C0200: using guessed type char byte_106C0200;
// 106C0260: using guessed type char byte_106C0260;
// 106C0680: using guessed type int dword_106C0680;
// 106C0688: using guessed type int dword_106C0688;
// 106C069C: using guessed type int dword_106C069C;
// 106C06A4: using guessed type int dword_106C06A4;
// 106C0860: using guessed type float flt_106C0860;
// 106C0864: using guessed type float flt_106C0864;
// 106C086C: using guessed type float flt_106C086C;
// 106C0870: using guessed type float flt_106C0870;
// 106C0874: using guessed type float flt_106C0874;
// 106C087C: using guessed type float flt_106C087C;
// 106C0880: using guessed type float flt_106C0880;
// 106C0884: using guessed type float flt_106C0884;
// 106C088C: using guessed type float flt_106C088C;
// 106C0890: using guessed type float flt_106C0890;
// 106C0894: using guessed type float flt_106C0894;
// 106C08A0: using guessed type float flt_106C08A0;
// 106C08A4: using guessed type float flt_106C08A4;
// 106C08A8: using guessed type int dword_106C08A8;
// 106C08AC: using guessed type int dword_106C08AC;
// 106C08B0: using guessed type float flt_106C08B0;
// 106C08B4: using guessed type float flt_106C08B4;
// 106C08B8: using guessed type int dword_106C08B8;
// 106C08BC: using guessed type int dword_106C08BC;
// 106C08C0: using guessed type int dword_106C08C0;
// 106C08C4: using guessed type int dword_106C08C4;
// 106C08C8: using guessed type int dword_106C08C8;
// 106C08CC: using guessed type int dword_106C08CC;
// 106C08D0: using guessed type int dword_106C08D0;
// 106C08D4: using guessed type int dword_106C08D4;
// 106C08D8: using guessed type int dword_106C08D8;
// 106C08DC: using guessed type int dword_106C08DC;
// 106C1610: using guessed type int dword_106C1610;
// 106C1614: using guessed type char byte_106C1614;
// 106C2CF8: using guessed type int dword_106C2CF8;
// 106C5708: using guessed type int dword_106C5708;
// 106C660C: using guessed type int dword_106C660C;
// 106C6618: using guessed type int dword_106C6618;
// 106C661C: using guessed type int dword_106C661C;
// 106C6624: using guessed type int dword_106C6624;
// 106C7CA8: using guessed type int dword_106C7CA8;
// 10B4E1D8: using guessed type int dword_10B4E1D8;
// 11829110: using guessed type int dword_11829110;
