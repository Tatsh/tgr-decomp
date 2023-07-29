//----- (10029470) --------------------------------------------------------
int sub_10029470()
{
  int result; // eax
  int v1; // esi
  int v2; // edi
  int v3; // ecx
  int v4; // ebp
  int v5; // ebx
  int v6; // ecx
  int *v7; // edx
  int v8; // edx
  int v9; // ebp
  int v10; // edi
  int v11; // esi
  bool v12; // zf
  int v13; // ebp
  int v14; // ecx
  int v15; // ecx
  int v16; // esi
  BOOL v17; // ebp
  int v18; // eax
  int v19; // edi
  int v20; // esi
  unsigned int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned __int8 *v27; // eax
  int v28; // esi
  int v29; // eax
  __int16 v30; // bp
  __int16 v31; // bx
  unsigned __int8 *v32; // edi
  unsigned int v33; // eax
  unsigned __int8 *v34; // edi
  unsigned int v35; // eax
  unsigned int v36; // eax
  int v37; // [esp+4h] [ebp-2B8h] BYREF
  int v38; // [esp+8h] [ebp-2B4h] BYREF
  unsigned int v39; // [esp+Ch] [ebp-2B0h]
  struct_a1 v40; // [esp+10h] [ebp-2ACh] BYREF

  v40.dword268 = dword_10575448;
  v40.punsigned___int84C = (unsigned __int8 *)dword_104C51A4;
  v40.dword50 = dword_10575434;
  v40.byte296 = byte_104D51A8;
  v40.byte294 = byte_104D51B0;
  v40.byte295 = byte_105551D4;
  v40.byte299 = byte_10575410;
  v40.byte297 = byte_104C51A0;
  v40.byte298 = byte_10555400;
  v40.dword26C = 0;
  v40.byte29A = byte_105553D8;
  v40.byte29B = byte_105551D0;
  result = sub_10028630((int)&v40);
  if ( result != -1 )
    return result;
  v1 = dword_10575430;
  v40.dword5C = dword_1057544C;
  if ( dword_10575430 < dword_1057544C )
  {
    v1 = dword_1057544C;
    dword_10575430 = dword_1057544C;
  }
  *(_DWORD *)v40.gap0 = 0;
  v2 = dword_105551F8[16 * dword_1057544C];
  v40.gap0[4] = 3;
  v3 = dword_105551FC[16 * dword_1057544C];
  v4 = 1 << v3;
  v40.dword8 = 1 << v2;
  *(_DWORD *)v40.gap44 = 1 << v2;
  v40.dwordC = 1 << v3;
  *(_DWORD *)&v40.gap44[4] = 1 << v3;
  if ( v1 > dword_1057544C )
  {
    v5 = v3;
    v6 = dword_1057544C + 1;
    if ( dword_1057544C + 1 <= v1 )
    {
      v7 = &dword_105551FC[16 * v6];
      while ( *(v7 - 1) == --v2 )
      {
        if ( *v7 != --v5 )
          break;
        ++v6;
        v7 += 16;
        if ( v6 > v1 )
          goto LABEL_12;
      }
      dword_10575430 = v6 - 1;
    }
  }
LABEL_12:
  v8 = dword_105551F0[16 * dword_1057544C];
  v39 = dword_105551E8[16 * dword_1057544C];
  v37 = v8;
  if ( v39 )
    v40.dword8 *= 2;
  if ( v8 )
    v40.dwordC = 2 * v4;
  v40.dword10 = sub_10027B90(dword_105551DC[16 * dword_1057544C], dword_105551D8[16 * dword_1057544C], dword_10575448);
  v40.dword18 = 8;
  v40.dword1C = 8;
  *(_DWORD *)v40.gap14 = 2;
  v9 = dword_105551F4[16 * v40.dword5C];
  v10 = dword_10555208[16 * v40.dword5C];
  v11 = dword_10555214[16 * v40.dword5C];
  v12 = dword_105551EC[16 * v40.dword5C] == 0;
  *(_DWORD *)v40.gap20 = 3;
  *(_DWORD *)&v40.gap20[4] = !v12;
  v12 = v9 == 0;
  v13 = dword_1055520C[16 * v40.dword5C];
  v14 = dword_10555210[16 * v40.dword5C] - v10;
  *(_DWORD *)&v40.gap20[8] = !v12;
  v15 = (v14 + 4) >> 2;
  v16 = (v11 - v13 + 4) >> 2;
  if ( v15 != *(_DWORD *)v40.gap44 )
  {
    if ( v15 == v40.dword8 )
    {
      *(_DWORD *)v40.gap44 = v15;
    }
    else if ( v15 > v40.dword8 && v40.dword8 * (v15 / v40.dword8) == v15 )
    {
      *(_DWORD *)&v40.gap20[4] = 0;
    }
  }
  if ( v16 != *(_DWORD *)&v40.gap44[4] )
  {
    if ( v16 == v40.dwordC )
    {
      *(_DWORD *)&v40.gap44[4] = v16;
    }
    else if ( v16 > v40.dwordC && v40.dwordC * (v16 / v40.dwordC) == v16 )
    {
      *(_DWORD *)&v40.gap20[8] = 0;
    }
  }
  pow2ExponentToAdd(&v40.dword1C, v40.dword8, v40.dwordC);
  v17 = sub_10028200(v40.gap20, v40.dword8, v40.dwordC) == 0;
  pow2ExponentToAdd(
    &v40.dword18,
    (int)v40.dword8 >> (dword_10575430 - dword_1057544C),
    (int)v40.dwordC >> (dword_10575430 - dword_1057544C));
  if ( dword_100B8C90 > 1 )
  {
    v40.dword18 = v40.dword1C;
    dword_10575430 = dword_1057544C;
  }
  *(_DWORD *)&v40.gap20[12] = 1;
  *(_DWORD *)&v40.gap20[16] = 1;
  *(_DWORD *)&v40.gap20[20] = -1073741824;
  *(_DWORD *)&v40.gap20[24] = 0;
  v18 = sub_10029E10(v40.dword18, v40.dword1C, *(int *)v40.gap20);
  if ( v18 > 0x80000 )
    v18 = 0x80000;
  v40.dword40 = v18;
  qmemcpy(v40.gap64, dword_105551D8, sizeof(v40.gap64));
  v19 = v40.dword8;
  v20 = v40.dwordC;
  v40.dword60 = dword_10575430 + 1;
  v40.dword54 = v39;
  v40.dword58 = v37;
  v40.dword29C = 1;
  v40.dword2A4 = v40.dword8;
  v40.dword2A8 = v40.dwordC;
  *(_DWORD *)v40.gap44 = v40.dword8;
  *(_DWORD *)&v40.gap44[4] = v40.dwordC;
  if ( (dword_118AA088 & 2) == 0 || dword_100AC300 )
  {
    dword_100A7DF4 = dword_100A7E04;
    dword_100A7DF8 = dword_100A7E08;
  }
  else
  {
    dword_100A7DF4 = dword_100A7DFC;
    dword_100A7DF8 = dword_100A7E00;
  }
  v21 = g_HWCaps.dwMaxTextureWidth;
  if ( v17
    || v39
    || v37
    || g_D3dalwayssquar
    || (g_HWCaps.dpcTriCaps.dwTextureCaps & 0x20) != 0
    || (g_HELCaps.dpcTriCaps.dwTextureCaps & 0x20) != 0
    || g_HWCaps.dwMaxTextureWidth && v40.dword8 > g_HWCaps.dwMaxTextureWidth
    || g_HWCaps.dwMaxTextureHeight && v40.dwordC > g_HWCaps.dwMaxTextureHeight
    || v40.dword8 > dword_100A7DF4
    || v40.dwordC > dword_100A7DF8 )
  {
    v22 = v40.dword8;
    v23 = v40.dwordC;
    v38 = v40.dword8;
    v37 = v40.dwordC;
    if ( v39 && dword_100B8C90 > 1 )
    {
      v38 = v40.dword8 / 2;
      pow2ExponentToAdd(&v40.dword1C, v40.dword8 / 2, v40.dwordC);
      v24 = sub_10028200(v40.gap20, v38, v37);
      v20 = v40.dwordC;
      v19 = v40.dword8;
      v21 = g_HWCaps.dwMaxTextureWidth;
      v17 = v24 == 0;
      v22 = v38;
      v40.dword18 = dword_10575430 + v40.dword1C - dword_1057544C;
      v23 = v37;
    }
    if ( v40.dword58 && dword_100B8C90 > 1 )
    {
      v37 = v23 / 2;
      pow2ExponentToAdd(&v40.dword1C, v22, v23 / 2);
      v25 = sub_10028200(v40.gap20, v38, v37);
      v20 = v40.dwordC;
      v19 = v40.dword8;
      v22 = v38;
      v17 = v25 == 0;
      v23 = v37;
      v40.dword18 = dword_10575430 + v40.dword1C - dword_1057544C;
      v21 = g_HWCaps.dwMaxTextureWidth;
    }
    if ( !v17 )
      goto LABEL_62;
    if ( v19 < v20 )
    {
      if ( v20 > 1 )
      {
        v20 /= 2;
        goto LABEL_60;
      }
    }
    else if ( v19 > 1 )
    {
      v19 /= 2;
LABEL_60:
      pow2ExponentToAdd(&v40.dword1C, v19, v20);
      sub_10028200(v40.gap20, v19, v20);
      v40.dword18 = dword_10575430 + v40.dword1C - dword_1057544C;
      goto LABEL_61;
    }
LABEL_61:
    sub_10028720(&v38, &v37, v40.dword1C, *(int *)v40.gap20);
    v21 = g_HWCaps.dwMaxTextureWidth;
    v22 = v38;
    v23 = v37;
LABEL_62:
    if ( v21 && v22 > v21 )
    {
      v38 = v21;
      pow2ExponentToAdd(&v40.dword1C, v21, v23);
      sub_10028200(v40.gap20, v38, v37);
      v22 = v38;
      v23 = v37;
      v40.dword18 = dword_10575430 + v40.dword1C - dword_1057544C;
    }
    if ( g_HWCaps.dwMaxTextureHeight && v23 > g_HWCaps.dwMaxTextureHeight )
    {
      v37 = g_HWCaps.dwMaxTextureHeight;
      pow2ExponentToAdd(&v40.dword1C, v22, g_HWCaps.dwMaxTextureHeight);
      sub_10028200(v40.gap20, v38, v37);
      v23 = v37;
      v40.dword18 = dword_10575430 + v40.dword1C - dword_1057544C;
      v22 = v38;
    }
    if ( v22 > dword_100A7DF4 )
    {
      v38 = dword_100A7DF4;
      pow2ExponentToAdd(&v40.dword1C, dword_100A7DF4, v23);
      sub_10028200(v40.gap20, v38, v37);
      v22 = v38;
      v40.dword18 = dword_10575430 + v40.dword1C - dword_1057544C;
      v23 = v37;
    }
    if ( v23 > dword_100A7DF8 )
    {
      v37 = dword_100A7DF8;
      pow2ExponentToAdd(&v40.dword1C, v22, dword_100A7DF8);
      sub_10028200(v40.gap20, v38, v37);
      v22 = v38;
      v23 = v37;
      v40.dword18 = dword_10575430 + v40.dword1C - dword_1057544C;
    }
    if ( (g_D3dalwayssquar
       || (g_HWCaps.dpcTriCaps.dwTextureCaps & 0x20) != 0
       || (g_HELCaps.dpcTriCaps.dwTextureCaps & 0x20) != 0)
      && v22 != v23 )
    {
      if ( v22 < v23 )
      {
        v22 = dword_100A7DF8;
        if ( v23 < dword_100A7DF8 )
        {
          v22 = v23;
        }
        else
        {
          v23 = dword_100A7DF8;
          v37 = dword_100A7DF8;
        }
        v38 = v22;
      }
      else
      {
        v23 = dword_100A7DF4;
        if ( v22 < dword_100A7DF4 )
        {
          v23 = v22;
          v37 = v22;
        }
        else
        {
          v22 = dword_100A7DF4;
          v37 = dword_100A7DF4;
          v38 = dword_100A7DF4;
        }
      }
      pow2ExponentToAdd(&v40.dword1C, v22, v23);
      sub_10028200(v40.gap20, v38, v37);
      v23 = v37;
      v40.dword18 = dword_10575430 + v40.dword1C - dword_1057544C;
      v22 = v38;
    }
    v40.dword8 = v22;
    v40.dwordC = v23;
  }
  if ( !dword_10575414 || (v40.dword3C = 1, g_D3dalphacompar) )
    v40.dword3C = 0;
  if ( dword_100B8C90 > 1 && sub_10037930((int)v40.punsigned___int84C, &v40.dword8, &v40.dwordC) )
  {
    pow2ExponentToAdd(&v40.dword1C, v40.dword8, v40.dwordC);
    sub_10028200(v40.gap20, v40.dword8, v40.dwordC);
    v40.dword18 = dword_10575430 + v40.dword1C - dword_1057544C;
  }
  v40.dword264 = dword_118AA088;
  v40.dword2A0 = v40.dword40;
  if ( (dword_118AA088 & 2) != 0 && v40.dword60 == 2 )
  {
    v26 = v40.dword264;
    LOBYTE(v26) = LOBYTE(v40.dword264) | 0x80;
    v40.dword264 = v26;
  }
  v27 = sub_10028860(&v40);
  v28 = TIDFromTexture(&v40, (int)v27);
  if ( *((_DWORD *)dword_1057543C + 174 * v28 + 156) )
  {
    v29 = sub_10061000();
    if ( v29 >= 0 && v29 < 8 )
      dword_11829850[v29] = v28;
  }
  if ( (v40.dword264 & 2) != 0 )
  {
    if ( v40.dword26C )
    {
      if ( *(_DWORD *)v40.gap27C )
      {
        sub_10037030(v28);
        return v28;
      }
    }
    else if ( sub_10037070(v40.dword50) )
    {
      v30 = *(_WORD *)v40.dword50;
      v31 = *(_WORD *)(v40.dword50 + 2);
      *(_WORD *)v40.dword50 = -1;
      *(_WORD *)(v40.dword50 + 2) = -1;
      v32 = sub_10028860(&v40);
      dword_118AA0B8(v28, v32);
      v33 = CalculateChecksum(0, 0, 0);
      v39 = CalculateChecksum(v33, v32, v40.dword40);
      *(_WORD *)v40.dword50 = v30;
      *(_WORD *)(v40.dword50 + 2) = v31;
      v34 = sub_10028860(&v40);
      dword_118AA0B8(v28, v34);
      v35 = CalculateChecksum(0, 0, 0);
      v36 = CalculateChecksum(v35, v34, v40.dword40);
      if ( v36 != v39 )
        sub_10037030(v28);
    }
  }
  return v28;
}
// 100A7DF4: using guessed type int dword_100A7DF4;
// 100A7DF8: using guessed type int dword_100A7DF8;
// 100A7DFC: using guessed type int dword_100A7DFC;
// 100A7E00: using guessed type int dword_100A7E00;
// 100A7E04: using guessed type int dword_100A7E04;
// 100A7E08: using guessed type int dword_100A7E08;
// 100AA720: using guessed type int g_D3dalphacompar;
// 100AC300: using guessed type int dword_100AC300;
// 100B8C90: using guessed type int dword_100B8C90;
// 104C51A0: using guessed type char byte_104C51A0;
// 104C51A4: using guessed type int dword_104C51A4;
// 104D51A8: using guessed type char byte_104D51A8;
// 104D51B0: using guessed type char byte_104D51B0;
// 105551D0: using guessed type char byte_105551D0;
// 105551D4: using guessed type char byte_105551D4;
// 105551D8: using guessed type int dword_105551D8[];
// 105551DC: using guessed type int dword_105551DC[];
// 105551E8: using guessed type int dword_105551E8[];
// 105551EC: using guessed type int dword_105551EC[];
// 105551F0: using guessed type int dword_105551F0[];
// 105551F4: using guessed type int dword_105551F4[];
// 105551F8: using guessed type int dword_105551F8[];
// 105551FC: using guessed type int dword_105551FC[];
// 10555208: using guessed type int dword_10555208[];
// 1055520C: using guessed type int dword_1055520C[];
// 10555210: using guessed type int dword_10555210[];
// 105553D8: using guessed type char byte_105553D8;
// 10555400: using guessed type char byte_10555400;
// 10575410: using guessed type char byte_10575410;
// 10575414: using guessed type int dword_10575414;
// 10575420: using guessed type int g_D3dalwayssquar;
// 10575430: using guessed type int dword_10575430;
// 10575434: using guessed type int dword_10575434;
// 10575448: using guessed type int dword_10575448;
// 1057544C: using guessed type int dword_1057544C;
// 118AA088: using guessed type int dword_118AA088;
// 118AA0B8: using guessed type int (__cdecl *dword_118AA0B8)(_DWORD, _DWORD);
