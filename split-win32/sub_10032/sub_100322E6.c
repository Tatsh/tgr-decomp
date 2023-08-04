#include "../../types-win32.h"
//----- (100322E6) --------------------------------------------------------
void __cdecl sub_100322E6(_DWORD *a1, void *a2)
{
  void *v3; // ecx
  void *v4; // ecx
  unsigned int *v5; // [esp-44h] [ebp-A4h]
  _DWORD *v6; // [esp+8h] [ebp-58h]
  _DWORD *v7; // [esp+Ch] [ebp-54h]
  _DWORD *v8; // [esp+10h] [ebp-50h]
  _DWORD *v9; // [esp+14h] [ebp-4Ch]
  _DWORD *v10; // [esp+18h] [ebp-48h]
  _DWORD *v11; // [esp+1Ch] [ebp-44h]
  _DWORD *v12; // [esp+20h] [ebp-40h]
  _DWORD *v13; // [esp+24h] [ebp-3Ch]
  _DWORD *v14; // [esp+28h] [ebp-38h]
  _DWORD *v15; // [esp+2Ch] [ebp-34h]
  _DWORD *v16; // [esp+30h] [ebp-30h]
  _DWORD *v17; // [esp+34h] [ebp-2Ch]
  _DWORD *v18; // [esp+38h] [ebp-28h]
  _DWORD *v19; // [esp+3Ch] [ebp-24h]
  _DWORD *v20; // [esp+40h] [ebp-20h]
  _DWORD *v21; // [esp+44h] [ebp-1Ch]
  _DWORD *v22; // [esp+48h] [ebp-18h]
  _DWORD *v23; // [esp+4Ch] [ebp-14h]
  _DWORD *v24; // [esp+50h] [ebp-10h]
  _DWORD *v25; // [esp+54h] [ebp-Ch]
  _DWORD *v26; // [esp+58h] [ebp-8h]
  _DWORD *v27; // [esp+5Ch] [ebp-4h]

  if ( dword_106C65E4 != (unsigned int)a2 )
  {
    dword_106C65E0 = 1;
    dword_106C65E4 = (int)a2;
  }
  debugPrint(a2);
  if ( dword_100AA8B4 == 1 )
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = g_Width;
    a1[3] = g_Height;
  }
  else if ( dword_100AA8B4 == 2 )
  {
    a1[22] = 8;
    a1[23] = (g_Height1 >> 1) + 1;
    a1[24] = g_Width1 - 96;
    a1[25] = (g_Height1 >> 1) - 8;
    *a1 = 8;
    a1[1] = 8;
    a1[2] = g_Width1 - 96;
    a1[3] = (g_Height1 >> 1) - 8;
  }
  sub_10031227();
  sub_10069580();
  dword_106C0258 = dword_100AA890 != 0 ? 0x2000 : 0;
  dword_106C0688 = 64;
  dword_106C0920 = 0;
  v27 = (_DWORD *)(dword_106C0944 + 96000 * dword_106C65EC + 512);
  dword_106C0680 = dword_106C0944 + 96000 * dword_106C65EC + 520;
  *v27 = -1140850682;
  v27[1] = 0;
  v26 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v26 = -419430400;
  v26[1] = 0;
  sub_1003289F(0, 0, g_Width1, g_Height1);
  v5 = (unsigned int *)dword_106C0680;
  dword_106C0680 += 8;
  sub_1002F900(v5, 0, 0, 0, 1003, 0, 0, 0, 1003, 0, 0, 0, 1000, 0, 0, 0, 1000);
  v25 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v25 = -1174401023;
  v25[1] = 0;
  v24 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v24 = -1174401534;
  v24[1] = 0;
  v23 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v23 = -1174400766;
  v23[1] = 0;
  v22 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v22 = -1174400255;
  v22[1] = 0x80000;
  v21 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v21 = -1174402046;
  v21[1] = dword_106C0258;
  v20 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v20 = -1174402813;
  v20[1] = 3072;
  v19 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v19 = -1174403071;
  v19[1] = 0;
  v18 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v18 = -1191182334;
  v18[1] = 1;
  v17 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v17 = -1191181539;
  v17[1] = 252329984;
  v16 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v16 = -1174403582;
  v16[1] = dword_106C0688;
  v15 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v15 = -1174403582;
  v15[1] = dword_106C0920;
  v14 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v14 = -1174399998;
  v14[1] = 0;
  v13 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v13 = -117440512;
  v13[1] = 0;
  v12 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v12 = 16908352;
  v12[1] = &unk_100AA730;
  v11 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v11 = -1241513984;
  v11[1] = 2044420;
  v10 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v10 = -1224736768;
  v10[1] = 0x2000;
  if ( dword_100AA884 )
  {
    v9 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v9 = -1224736768;
    v9[1] = 0x800000;
  }
  else
  {
    v8 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v8 = -1241513984;
    v8[1] = 0x800000;
  }
  v7 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v7 = 100663296;
  v7[1] = (char *)&unk_100AA770 + 40 * dword_106C65FC;
  v6 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v6 = -1157627904;
  v6[1] = 0;
  debugPrint(v6);
  debugPrint(v3);
  debugPrint(v4);
}
// 1003231C: variable 'a2' is possibly undefined
// 10032852: variable 'v3' is possibly undefined
// 10032867: variable 'v4' is possibly undefined
// 100A81C0: using guessed type int g_Width;
// 100A81C4: using guessed type int g_Height;
// 100AA884: using guessed type int dword_100AA884;
// 100AA890: using guessed type int dword_100AA890;
// 100AA8B4: using guessed type int dword_100AA8B4;
// 106C0258: using guessed type int dword_106C0258;
// 106C0680: using guessed type int dword_106C0680;
// 106C0684: using guessed type int g_Width1;
// 106C0688: using guessed type int dword_106C0688;
// 106C0920: using guessed type int dword_106C0920;
// 106C0944: using guessed type int dword_106C0944;
// 106C299C: using guessed type int g_Height1;
// 106C65E0: using guessed type int dword_106C65E0;
// 106C65E4: using guessed type int dword_106C65E4;
// 106C65EC: using guessed type int dword_106C65EC;
// 106C65FC: using guessed type int dword_106C65FC;
