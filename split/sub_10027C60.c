//----- (10027C60) --------------------------------------------------------
int __cdecl sub_10027C60(unsigned __int8 *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15)
{
  int v15; // ebp
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edi
  int v21; // esi
  unsigned __int8 *v22; // eax
  int v24; // [esp-Ch] [ebp-2C8h]
  int v25; // [esp-8h] [ebp-2C4h]
  struct_a1 v26; // [esp+10h] [ebp-2ACh] BYREF

  v15 = 1 << sub_10027C00(a3);
  v16 = 1 << sub_10027C00(a4);
  *(_DWORD *)v26.gap0 = 0;
  *(_DWORD *)v26.gap14 = 0;
  v26.gap0[4] = 3;
  v26.dword2A4 = a3;
  v26.dword2A8 = a4;
  v26.dword8 = a3;
  v26.dwordC = a4;
  *(_DWORD *)v26.gap44 = v15;
  *(_DWORD *)&v26.gap44[4] = v16;
  pow2ExponentToAdd(&v26.dword18, v15, v16);
  v26.dword1C = v26.dword18;
  v26.dword5C = 0;
  *(_DWORD *)&v26.gap64[12] = 0;
  v17 = sub_10027C00(a3);
  *(_DWORD *)&v26.gap64[64 * v26.dword5C + 32] = v17;
  v18 = sub_10027C00(a4);
  *(_DWORD *)&v26.gap64[64 * v26.dword5C + 36] = v18;
  *(_DWORD *)&v26.gap64[64 * v26.dword5C + 8] = a5;
  *(_DWORD *)&v26.gap64[64 * v26.dword5C + 4] = a6;
  *(_DWORD *)&v26.gap64[64 * v26.dword5C] = a7;
  *(_DWORD *)&v26.gap64[64 * v26.dword5C + 40] = a12;
  *(_DWORD *)&v26.gap64[64 * v26.dword5C + 44] = a13;
  *(_DWORD *)&v26.gap64[64 * v26.dword5C + 48] = 2;
  *(_DWORD *)&v26.gap64[64 * v26.dword5C + 52] = 2;
  *(_DWORD *)&v26.gap64[64 * v26.dword5C + 56] = 4 * a3 - 2;
  *(_DWORD *)&v26.gap64[64 * v26.dword5C + 60] = 4 * a4 - 2;
  v26.dword60 = 1;
  v26.dword29C = a15;
  v26.dword268 = 0;
  v26.dword26C = 0;
  v26.byte29B = 0;
  v26.byte29A = 0;
  v26.byte299 = 0;
  v26.byte298 = 0;
  v26.byte297 = 0;
  v26.byte296 = 0;
  v26.byte295 = 0;
  v26.byte294 = 0;
  v25 = *(_DWORD *)&v26.gap64[64 * v26.dword5C];
  v24 = *(_DWORD *)&v26.gap64[64 * v26.dword5C + 4];
  dword_10575444 = 0;
  dword_10575440 = 0;
  v26.dword10 = sub_10027B90(v24, v25, 0);
  v26.dword40 = v15 * v16 * _RTC_NumErrors();
  *(_DWORD *)&v26.gap20[4] = a10 != 0;
  v26.punsigned___int84C = a1;
  v26.dword50 = a2;
  v26.dword54 = a8;
  *(_DWORD *)&v26.gap20[8] = a11 != 0;
  v26.dword58 = a9;
  if ( (dword_118AA088 & 2) == 0 || dword_100AC300 )
  {
    dword_100A7DF4 = dword_100A7E04;
    v19 = dword_100A7E08;
  }
  else
  {
    dword_100A7DF4 = dword_100A7DFC;
    v19 = dword_100A7E00;
  }
  v20 = v26.dwordC;
  dword_100A7DF8 = v19;
  if ( a8
    || a9
    || g_D3dalwayssquar
    || (g_HWCaps.dpcTriCaps.dwTextureCaps & 0x20) != 0
    || (g_HELCaps.dpcTriCaps.dwTextureCaps & 0x20) != 0
    || g_HWCaps.dwMaxTextureWidth && v26.dword8 > g_HWCaps.dwMaxTextureWidth
    || g_HWCaps.dwMaxTextureHeight && v26.dwordC > g_HWCaps.dwMaxTextureHeight
    || a14 && (v26.dword8 > dword_100A7DF4 || v26.dwordC > dword_100A7DF8) )
  {
    v21 = v26.dword8;
    if ( a8 )
    {
      v21 = v26.dword8 / 2;
      pow2ExponentToAdd(&v26.dword1C, v26.dword8 / 2, v26.dwordC);
      sub_10028200(v26.gap20, v26.dword8 / 2, v26.dwordC);
      v26.dword18 = dword_10575430 + v26.dword1C;
    }
    if ( v26.dword58 )
    {
      v20 = v26.dwordC / 2;
      pow2ExponentToAdd(&v26.dword1C, v21, v26.dwordC / 2);
      sub_10028200(v26.gap20, v21, v26.dwordC / 2);
      v26.dword18 = dword_10575430 + v26.dword1C;
    }
    if ( g_HWCaps.dwMaxTextureWidth && v21 > g_HWCaps.dwMaxTextureWidth )
    {
      v21 = g_HWCaps.dwMaxTextureWidth;
      pow2ExponentToAdd(&v26.dword1C, g_HWCaps.dwMaxTextureWidth, v20);
      sub_10028200(v26.gap20, v21, v20);
      v26.dword18 = dword_10575430 + v26.dword1C;
    }
    if ( g_HWCaps.dwMaxTextureHeight && v20 > g_HWCaps.dwMaxTextureHeight )
    {
      v20 = g_HWCaps.dwMaxTextureHeight;
      pow2ExponentToAdd(&v26.dword1C, v21, g_HWCaps.dwMaxTextureHeight);
      sub_10028200(v26.gap20, v21, v20);
      v26.dword18 = dword_10575430 + v26.dword1C;
    }
    if ( a14 )
    {
      if ( v21 > dword_100A7DF4 )
      {
        v21 = dword_100A7DF4;
        pow2ExponentToAdd(&v26.dword1C, dword_100A7DF4, v20);
        sub_10028200(v26.gap20, v21, v20);
        v26.dword18 = dword_10575430 + v26.dword1C;
      }
      if ( v20 > dword_100A7DF8 )
      {
        v20 = dword_100A7DF8;
        pow2ExponentToAdd(&v26.dword1C, v21, dword_100A7DF8);
        sub_10028200(v26.gap20, v21, v20);
        v26.dword18 = dword_10575430 + v26.dword1C;
      }
    }
    if ( !g_D3dalwayssquar
      && (g_HWCaps.dpcTriCaps.dwTextureCaps & 0x20) == 0
      && (g_HELCaps.dpcTriCaps.dwTextureCaps & 0x20) == 0
      || v21 == v20 )
    {
      goto LABEL_47;
    }
    if ( v21 < v20 )
    {
      if ( a14 )
      {
        v21 = dword_100A7DF8;
        if ( v20 >= dword_100A7DF8 )
        {
          v20 = dword_100A7DF8;
          goto LABEL_46;
        }
      }
      v20 = 1 << sub_10027C00(v20);
    }
    else if ( !a14 || (v20 = dword_100A7DF4, v21 < dword_100A7DF4) )
    {
      v21 = 1 << sub_10027C00(v21);
      v20 = v21;
LABEL_46:
      pow2ExponentToAdd(&v26.dword1C, v21, v20);
      sub_10028200(v26.gap20, v21, v20);
      v26.dword18 = dword_10575430 + v26.dword1C;
LABEL_47:
      v26.dword8 = v21;
      v26.dwordC = v20;
      sub_10028200(v26.gap20, v21, v20);
      goto LABEL_48;
    }
    v21 = v20;
    goto LABEL_46;
  }
  sub_10028200(v26.gap20, v15, v16);
LABEL_48:
  v26.dword3C = 0;
  *(_DWORD *)&v26.gap20[12] = 1;
  *(_DWORD *)&v26.gap20[16] = 1;
  *(_DWORD *)&v26.gap20[20] = -1073741824;
  *(_DWORD *)&v26.gap20[24] = 0;
  v26.dword264 = dword_118AA088;
  v26.dword2A0 = v26.dword40;
  v22 = sub_10028860(&v26);
  return TIDFromTexture(&v26, (int)v22);
}
// 100280A2: conditional instruction was optimized away because of '%arg_34.4!=0'
// 10027C00: using guessed type _DWORD __cdecl sub_10027C00(_DWORD);
// 10028200: using guessed type _DWORD __cdecl sub_10028200(_DWORD, _DWORD, _DWORD);
// 100A7DF4: using guessed type int dword_100A7DF4;
// 100A7DF8: using guessed type int dword_100A7DF8;
// 100A7DFC: using guessed type int dword_100A7DFC;
// 100A7E00: using guessed type int dword_100A7E00;
// 100A7E04: using guessed type int dword_100A7E04;
// 100A7E08: using guessed type int dword_100A7E08;
// 100AC300: using guessed type int dword_100AC300;
// 10575420: using guessed type int g_D3dalwayssquar;
// 10575430: using guessed type int dword_10575430;
// 10575440: using guessed type int dword_10575440;
// 10575444: using guessed type int dword_10575444;
// 118AA088: using guessed type int dword_118AA088;
