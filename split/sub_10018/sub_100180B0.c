//----- (100180B0) --------------------------------------------------------
_DWORD *__cdecl sub_100180B0(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *result; // eax
  char *v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  unsigned __int16 v11; // dx
  _DWORD *v12; // eax
  _DWORD *v13; // eax
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
  unsigned int *v29; // [esp-40h] [ebp-4Ch]
  int v30; // [esp+0h] [ebp-Ch]

  v1 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v1 = -1140849660;
  v1[1] = 1;
  v2 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v2 = -1140847612;
  v2[1] = 1;
  v3 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v3 = -1140845564;
  v3[1] = 0xFFFF;
  result = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *result = -1140843516;
  result[1] = 0xFFFF;
  if ( !dword_106C6608 )
  {
    if ( sub_10018070() )
    {
      if ( dword_100A79CC > 0 && (dword_100A79CC & 1) != 0 )
        result = sub_10031688(
                   *(_DWORD *)(a1 + 88 * dword_106C5708),
                   *(_DWORD *)(a1 + 88 * dword_106C5708 + 4),
                   *(_DWORD *)(a1 + 88 * dword_106C5708 + 8),
                   *(_DWORD *)(a1 + 88 * dword_106C5708 + 12),
                   (3 * ((unsigned __int8)byte_106C0260 + 80)) >> 2,
                   (3 * (unsigned __int8)byte_106C1614 + 248) >> 2,
                   (3 * ((unsigned __int8)byte_106C0200 + 85)) >> 2);
      else
        result = sub_10031688(
                   *(_DWORD *)(a1 + 88 * dword_106C5708),
                   *(_DWORD *)(a1 + 88 * dword_106C5708 + 4),
                   *(_DWORD *)(a1 + 88 * dword_106C5708 + 8),
                   *(_DWORD *)(a1 + 88 * dword_106C5708 + 12),
                   (unsigned __int8)byte_106C0260,
                   (unsigned __int8)byte_106C1614,
                   (unsigned __int8)byte_106C0200);
    }
    else
    {
      *(float *)&v30 = *((float *)dword_106C6490 + 14) * 0.99000001;
      sub_10031140(&flt_106C0860, *((_DWORD *)dword_106C6490 + 12), *((_DWORD *)dword_106C6490 + 13), v30);
      v5 = sub_10069490();
      sub_100307A0((int)&flt_106C0860, v5);
      v6 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v6 = 16973888;
      v6[1] = dword_106C32D0;
      v7 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v7 = 17039424;
      v7[1] = v5;
      v8 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v8 = -419430400;
      v8[1] = 0;
      v9 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v9 = -1174399998;
      v9[1] = 0;
      v29 = (unsigned int *)dword_106C0680;
      dword_106C0680 += 8;
      if ( dword_106C6618 )
      {
        sub_1002F900(v29, 0, 0, 0, 1001, 0, 0, 0, 1004, 0, 0, 0, 1001, 0, 0, 0, 1004);
        v10 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v10 = -83886080;
        HIBYTE(v11) = byte_106C0260;
        LOBYTE(v11) = byte_106C1614;
        v10[1] = (unsigned __int8)byte_10690BE8 | (((unsigned __int8)byte_106C0200 | (v11 << 8)) << 8);
      }
      else
      {
        sub_1002F900(v29, 0, 0, 0, 1001, 0, 0, 0, 1004, 0, 0, 0, 1001, 0, 0, 0, 1004);
      }
      v12 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v12 = -1191181539;
      v12[1] = 252330496;
      v13 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v13 = -1174402046;
      v13[1] = dword_106C0258;
      v14 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v14 = -1241513984;
      v14[1] = 983557;
      if ( dword_106C6618 )
      {
        v15 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v15 = -1224736768;
        v15[1] = 0x10000;
      }
      v16 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v16 = -1224736768;
      v16[1] = dword_106C1174 != dword_106C3364 ? 4096 : 0x2000;
      v17 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v17 = -1241513984;
      v17[1] = dword_106C1174 != dword_106C3364 ? 0x2000 : 4096;
      v18 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v18 = -1174401023;
      v18[1] = 0;
      v19 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v19 = -1157627903;
      v19[1] = -1;
      v20 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v20 = -1241513984;
      v20[1] = 786432;
      v21 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v21 = -402653184;
      v21[1] = 0;
      v22 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v22 = -183500800;
      v22[1] = 117440512;
      v23 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v23 = -184548880;
      v23[1] = 100663296;
      v24 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v24 = -184549120;
      v24[1] = 83886080;
      v25 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v25 = 100663296;
      v25[1] = dword_106C7C98;
      v26 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v26 = -419430400;
      v26[1] = 0;
      v27 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v27 = -1174399998;
      v27[1] = 0;
      v28 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v28 = -1224736768;
      v28[1] = 131589;
      result = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *result = -1124073472;
      result[1] = 0;
    }
  }
  return result;
}
// 100A79CC: using guessed type int dword_100A79CC;
// 10690BE8: using guessed type char byte_10690BE8;
// 106C0200: using guessed type char byte_106C0200;
// 106C0258: using guessed type int dword_106C0258;
// 106C0260: using guessed type char byte_106C0260;
// 106C0680: using guessed type int dword_106C0680;
// 106C0860: using guessed type float flt_106C0860;
// 106C1174: using guessed type int dword_106C1174;
// 106C1614: using guessed type char byte_106C1614;
// 106C32D0: using guessed type int dword_106C32D0;
// 106C3364: using guessed type int dword_106C3364;
// 106C5708: using guessed type int dword_106C5708;
// 106C6608: using guessed type int dword_106C6608;
// 106C6618: using guessed type int dword_106C6618;
// 106C7C98: using guessed type int dword_106C7C98;
