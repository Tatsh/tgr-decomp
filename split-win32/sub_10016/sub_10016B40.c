#include "../../types-win32.h"
//----- (10016B40) --------------------------------------------------------
char __cdecl sub_10016B40(int a1)
{
  _DWORD *v1; // eax
  char *v2; // edi
  int v3; // ecx
  int v4; // esi
  int v5; // ebp
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  char v11; // al
  __int64 v12; // rax
  unsigned int *v13; // eax
  char v14; // al
  char *v15; // esi
  double v16; // st7
  int v17; // ebp
  double v18; // st6
  long double v19; // st6
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // eax
  unsigned int *v29; // [esp-3Ch] [ebp-60h]
  unsigned int *v30; // [esp-3Ch] [ebp-60h]
  float v31; // [esp+0h] [ebp-24h]
  float v32; // [esp+4h] [ebp-20h]
  int v33; // [esp+18h] [ebp-Ch]
  int v34; // [esp+18h] [ebp-Ch]
  float v35; // [esp+18h] [ebp-Ch]
  int v36; // [esp+1Ch] [ebp-8h]
  float v37; // [esp+1Ch] [ebp-8h]
  int v38; // [esp+20h] [ebp-4h]
  float v39; // [esp+20h] [ebp-4h]
  int v40; // [esp+28h] [ebp+4h]
  float v41; // [esp+28h] [ebp+4h]

  LOBYTE(v1) = dword_100BD3F4;
  if ( dword_100BD3F4 && !dword_1022AF1C )
  {
    v32 = (float)g_Height1;
    v31 = (float)g_Width1;
    v2 = (char *)&unk_100C12A0 + 89992 * *(_DWORD *)(a1 + 88 * dword_106C5708 + 16);
    sub_1003407D(v31, v32);
    v3 = dword_106C5708;
    v4 = g_Width - v2[228] - 16;
    v33 = v4;
    v5 = *(_DWORD *)(a1 + 88 * dword_106C5708 + 4) + *(_DWORD *)(a1 + 88 * dword_106C5708 + 12) - v2[229] - 4;
    if ( *(float *)(dword_106C2CF8 + 3688) < 0.0 )
      v38 = 0;
    else
      v38 = *(_DWORD *)(dword_106C2CF8 + 3696) + 1;
    if ( dword_100AA8B4 == 1 )
    {
      v29 = (unsigned int *)dword_106C0680;
      dword_106C0680 += 8;
      sub_1002F900(v29, 0, 0, 0, 1003, 0, 0, 0, 1003, 0, 0, 0, 1003, 0, 0, 0, 1003);
      v6 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v6 = -1191181539;
      v6[1] = 202916416;
      v7 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v7 = -1191181539;
      v7[1] = 202977400;
      v8 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v8 = -1241513984;
      v8[1] = 1;
      v9 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v9 = -570425344;
      v9[1] = 1065353216;
      v10 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v10 = -553648128;
      v10[1] = -1082130432;
      v11 = v2[219];
      if ( v11 == 1 || v11 == 2 )
      {
        if ( dword_106909B4 )
          v36 = 64;
        else
          v36 = sub_1003BD50() & 0x7F;
        v12 = (__int64)(((double)v36 + *(float *)(dword_106C2CF8 + 3620) - 1000.0)
                      * 0.00014285714
                      * (double)(v2[234] + 1)
                      - 0.5);
        if ( (int)v12 >= 0 )
        {
          if ( (int)v12 > 15 )
            LODWORD(v12) = 15;
        }
        else
        {
          LODWORD(v12) = 0;
        }
        sub_10016A60(*(_DWORD *)(a1 + 4 * (20 - v12)), v4, v5, v2[228], v2[229]);
      }
      else
      {
        sub_10016A60(*(_DWORD *)(a1 + 20), v4, v5, v2[228], v2[229]);
      }
      if ( v38 != dword_100A73A8[dword_106C5708] )
      {
        v13 = (unsigned int *)dword_106C0680;
        dword_106C0680 += 8;
        *v13 = *(_DWORD *)(a1 + 84) & 0xFFFFFF | 0xDD000000;
        v13[1] = (unsigned int)&v2[v38 * *((_DWORD *)v2 + 63) + 1280];
        dword_100A73A8[dword_106C5708] = v38;
      }
      sub_10016A60(*(_DWORD *)(a1 + 84), v4 + v2[230], v5 + v2[231], v2[232], v2[233]);
      v3 = dword_106C5708;
    }
    if ( dword_106909B4 )
    {
      v40 = 64;
    }
    else
    {
      v14 = sub_1003BD50();
      v3 = dword_106C5708;
      v40 = v14 & 0x7F;
    }
    LOBYTE(v1) = v2[219];
    v39 = (double)v40 + *(float *)(dword_106C2CF8 + 3620);
    if ( !(_BYTE)v1 )
    {
      v15 = (char *)&unk_104AFD20 + 128 * (v3 + 2 * dword_106C65EC);
      if ( dword_100AA8B4 == 2 )
      {
        v16 = 5.0;
        v41 = 15.0;
        v34 = 3 * v2[234] / 4 + v33;
        v17 = 3 * v2[235] / 4 + v5;
      }
      else
      {
        v16 = 7.0;
        v41 = 20.0;
        v34 = v2[234] + v33;
        v17 = v2[235] + v5;
      }
      v18 = *((float *)v2 + 60);
      if ( v39 > 0.0 )
        v18 = v18 - (*((float *)v2 + 60) - *((float *)v2 + 59)) * v39 * 0.00012500001;
      v35 = (float)v34;
      v37 = (float)(g_Height - v17);
      *(float *)v15 = (float)(__int16)(__int64)(cos(v18 - 0.050000001) * v41 + v35);
      *((_DWORD *)v15 + 2) = 0;
      *((float *)v15 + 1) = (float)(__int16)(__int64)(sin(v18 - 0.050000001) * v41 + v37);
      *((float *)v15 + 8) = (float)(__int16)(__int64)(cos(v18 - -0.050000001) * v41 + v35);
      *((_DWORD *)v15 + 10) = 0;
      *((float *)v15 + 9) = (float)(__int16)(__int64)(sin(v18 - -0.050000001) * v41 + v37);
      *((float *)v15 + 16) = (float)(__int16)(__int64)(cos(v18 - -0.30000001) * v16 + v35);
      *((float *)v15 + 17) = (float)(__int16)(__int64)(sin(v18 - -0.30000001) * v16 + v37);
      *((_DWORD *)v15 + 18) = 0;
      v19 = v18 - 0.30000001;
      *((float *)v15 + 24) = (float)(__int16)(__int64)(cos(v19) * v16 + v35);
      *((_DWORD *)v15 + 26) = 0;
      *((_DWORD *)v15 + 5) = 0;
      *((_DWORD *)v15 + 6) = 1132396544;
      *((_DWORD *)v15 + 7) = 0;
      *((float *)v15 + 25) = (float)(__int16)(__int64)(sin(v19) * v16 + v37);
      *((_DWORD *)v15 + 13) = 0;
      *((_DWORD *)v15 + 14) = 1132396544;
      *((_DWORD *)v15 + 15) = 0;
      *((_DWORD *)v15 + 21) = 0;
      *((_DWORD *)v15 + 22) = 1132396544;
      *((_DWORD *)v15 + 23) = 0;
      *((_DWORD *)v15 + 29) = 0;
      *((_DWORD *)v15 + 30) = 1132396544;
      *((_DWORD *)v15 + 31) = 0;
      v20 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v20 = -419430400;
      v20[1] = 0;
      v21 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v21 = -1174399998;
      v21[1] = 0;
      v30 = (unsigned int *)dword_106C0680;
      dword_106C0680 += 8;
      sub_1002F900(v30, 0, 0, 0, 1004, 0, 0, 0, 1004, 0, 0, 0, 1004, 0, 0, 0, 1004);
      v22 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v22 = -1191181539;
      v22[1] = 5578824;
      v23 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v23 = -1241513984;
      v23[1] = 208896;
      v24 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v24 = -1224736768;
      v24[1] = 4;
      v25 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v25 = 67113087;
      v25[1] = v15;
      v26 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v26 = -1325399806;
      v26[1] = 515;
      v27 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v27 = -1224736768;
      v27[1] = 1;
      v1 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v1 = -419430400;
      v1[1] = 0;
    }
  }
  return (char)v1;
}
// 100A73A8: using guessed type int dword_100A73A8[];
// 100A81C0: using guessed type int g_Width;
// 100A81C4: using guessed type int g_Height;
// 100AA8B4: using guessed type int dword_100AA8B4;
// 100BD3F4: using guessed type int dword_100BD3F4;
// 1022AF1C: using guessed type int dword_1022AF1C;
// 106909B4: using guessed type int dword_106909B4;
// 106C0680: using guessed type int dword_106C0680;
// 106C0684: using guessed type int g_Width1;
// 106C299C: using guessed type int g_Height1;
// 106C2CF8: using guessed type int dword_106C2CF8;
// 106C5708: using guessed type int dword_106C5708;
// 106C65EC: using guessed type int dword_106C65EC;
