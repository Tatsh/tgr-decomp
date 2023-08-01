//----- (1000C6E0) --------------------------------------------------------
int __cdecl sub_1000C6E0(int a1)
{
  int result; // eax
  float *v2; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  char *v8; // esi
  _DWORD *v9; // eax
  char *v10; // esi
  _DWORD *v11; // eax
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
  int v22; // edx
  _DWORD *v23; // eax
  unsigned int *v24; // [esp-50h] [ebp-58h]
  unsigned int *v25; // [esp-50h] [ebp-58h]
  int i; // [esp+4h] [ebp-4h]

  result = dword_106C3308;
  if ( *(_DWORD *)(dword_106C3308 + 32956) )
  {
    v2 = (float *)(a1 + 64);
    for ( i = 4; i; --i )
    {
      v3 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v3 = -419430400;
      v3[1] = 0;
      v4 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v4 = -1174399998;
      v4[1] = 0x100000;
      if ( *(_BYTE *)(a1 + 10671) == 2 )
      {
        v5 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v5 = -1191181539;
        v5[1] = dword_10277E5C | 0x104A50;
        v6 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v6 = -83886080;
        v6[1] = (unsigned __int8)dword_10277E14;
        v24 = (unsigned int *)dword_106C0680;
        dword_106C0680 += 8;
        sub_1002F900(v24, 1001, 0, 1004, 0, 0, 0, 0, 1001, 0, 0, 0, 1000, 1000, 0, 1005, 0);
      }
      else
      {
        v25 = (unsigned int *)dword_106C0680;
        dword_106C0680 += 8;
        sub_1002F900(v25, 1001, 0, 1004, 0, 0, 0, 0, 1001, 0, 0, 0, 1000, 0, 0, 0, 1000);
        v7 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v7 = -1191181539;
        v7[1] = dword_10277E5C | 0x112230;
      }
      sub_100310F0((int)&flt_106C08A0, 0.0039215689, 998277249, 998277249);
      sub_100306C0(&flt_106C08A0, v2, flt_10277D88);
      v8 = sub_10069490();
      sub_100307A0((int)flt_10277D88, v8);
      v9 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v9 = 17170496;
      v9[1] = v8;
      sub_100306C0(flt_10277D88, &flt_106C29A8, &flt_106C0860);
      v10 = sub_10069490();
      sub_100307A0((int)&flt_106C0860, v10);
      v11 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v11 = 60686352;
      v11[1] = v10;
      v12 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v12 = 60293136;
      v12[1] = v10 + 16;
      v13 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v13 = 60424208;
      v13[1] = v10 + 32;
      v14 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v14 = 60555280;
      v14[1] = v10 + 48;
      v15 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v15 = -1157627903;
      v15[1] = -1;
      v16 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v16 = -1241513984;
      v16[1] = 786432;
      v17 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v17 = -402653184;
      v17[1] = 0;
      v18 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v18 = -183500800;
      v18[1] = 117440512;
      v19 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v19 = -184548880;
      v19[1] = 100663296;
      v20 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v20 = -184549120;
      v20[1] = 83886080;
      if ( dword_106C6620 )
      {
        if ( *(_DWORD *)(dword_106C3308 + 32964) )
        {
          v21 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v21 = 100663296;
          v22 = *(_DWORD *)(dword_106C3308 + 32964);
LABEL_11:
          v21[1] = v22;
          goto LABEL_12;
        }
      }
      else if ( *(_DWORD *)(dword_106C3308 + 32956) )
      {
        v21 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v21 = 100663296;
        v22 = *(_DWORD *)(dword_106C3308 + 32956);
        goto LABEL_11;
      }
LABEL_12:
      v2 += 16;
      v23 = (_DWORD *)dword_106C0680;
      dword_106C0680 += 8;
      *v23 = -1124073472;
      v23[1] = 0;
      result = i - 1;
    }
  }
  return result;
}
// 10277E14: using guessed type int dword_10277E14;
// 10277E5C: using guessed type int dword_10277E5C;
// 106C0680: using guessed type int dword_106C0680;
// 106C0860: using guessed type float flt_106C0860;
// 106C08A0: using guessed type float flt_106C08A0;
// 106C29A8: using guessed type float flt_106C29A8;
// 106C3308: using guessed type int dword_106C3308;
// 106C6620: using guessed type int dword_106C6620;
