//----- (1000E950) --------------------------------------------------------
int __cdecl sub_1000E950(float a1)
{
  int result; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
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
  double v21; // st7
  double v22; // st7
  double v23; // st7
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // eax
  _DWORD *v30; // eax
  _DWORD *v31; // eax
  _DWORD *v32; // eax
  unsigned int *v33; // [esp-44h] [ebp-68h]
  unsigned int *v34; // [esp-44h] [ebp-68h]
  float v35; // [esp+8h] [ebp-1Ch]
  float v36; // [esp+8h] [ebp-1Ch]
  int v37[3]; // [esp+Ch] [ebp-18h] BYREF
  int v38[3]; // [esp+18h] [ebp-Ch] BYREF
  float v39; // [esp+28h] [ebp+4h]

  result = dword_106C661C;
  if ( dword_106C661C || dword_106C6624 )
  {
    result = *(_DWORD *)(LODWORD(a1) + 320);
    if ( dword_10277E60[result] )
    {
      result = dword_106C2CF8;
      if ( LODWORD(a1) != dword_106C2CF8
        || (result = dword_106C2CF8 + 10180, dword_106C6490 != (void *)(dword_106C2CF8 + 10180)) )
      {
        if ( *(_BYTE *)(LODWORD(a1) + 10671) != 2 )
        {
          dword_106C3308 = *(_DWORD *)(LODWORD(a1) + 10692);
          v3 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v3 = 17170496;
          v3[1] = dword_10277DC8[*(_DWORD *)(LODWORD(a1) + 320)];
          v4 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v4 = 16973888;
          v4[1] = dword_106C32D0;
          v5 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v5 = 60686352;
          v5[1] = dword_10277E18[*(_DWORD *)(LODWORD(a1) + 320)];
          v6 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v6 = 60293136;
          v6[1] = dword_10277E18[*(_DWORD *)(LODWORD(a1) + 320)] + 16;
          v7 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v7 = 60424208;
          v7[1] = dword_10277E18[*(_DWORD *)(LODWORD(a1) + 320)] + 32;
          v8 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v8 = 60555280;
          v8[1] = dword_10277E18[*(_DWORD *)(LODWORD(a1) + 320)] + 48;
          v9 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v9 = 100663296;
          v9[1] = &unk_100AA838;
          sub_10031481(5, *(_DWORD *)(dword_106C3308 + 32788));
          v10 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v10 = -419430400;
          v10[1] = 0;
          v11 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v11 = -1174399998;
          v11[1] = 0;
          v12 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v12 = -1140850678;
          v12[1] = 0;
          v13 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v13 = -1140849654;
          v13[1] = 0;
          v14 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v14 = -1140842486;
          v14[1] = -256;
          v15 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v15 = -1140841462;
          v15[1] = -256;
          v33 = (unsigned int *)dword_106C0680;
          dword_106C0680 += 8;
          sub_1002F900(v33, 0, 0, 0, 1, 0, 0, 0, 1001, 0, 0, 0, 1, 0, 0, 0, 1001);
          v16 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v16 = -1191181539;
          v16[1] = 4213208;
          v17 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v17 = -1174403582;
          v17[1] = 128;
          if ( *(_DWORD *)(dword_106C3308 + 32812) )
          {
            v18 = (_DWORD *)dword_106C0680;
            dword_106C0680 += 8;
            *v18 = 100663296;
            v18[1] = *(_DWORD *)(dword_106C3308 + 32812);
          }
          v19 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v19 = -419430400;
          v19[1] = 0;
          v20 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v20 = -1174403582;
          v20[1] = dword_106C0688;
          if ( LODWORD(a1) != dword_106C2CF8 )
          {
            sub_1003AF40((float *)v37, (float *)(LODWORD(a1) + 48), (float *)LODWORD(a1));
            sub_1003AEE0((float *)v37, (float *)dword_106C6490 + 12, (float *)v37);
            v21 = sub_1003B170((float *)v37);
            v39 = v21;
            if ( v21 != 0.0 )
            {
              sub_1003AD70((int)v37, v39);
              if ( sub_1003AC90((float *)v37, (float *)dword_106C6490) < 0.0 )
              {
                sub_1003ACE0((int)v38, SLODWORD(a1), 1.0);
                sub_1003B020((int)v38, LODWORD(a1) + 32, 0.0);
                v35 = sub_1003AC90((float *)v37, (float *)v38);
                v22 = -(sub_1003AC90((float *)v37, (float *)dword_106C6490) * v35);
                if ( v22 > 0.94999999 )
                {
                  v39 = v39 * v39;
                  flt_10575504 = (v22 - 0.94999999) * 750.0 / v39 + flt_10575504;
                }
              }
              if ( sub_1003AC90((float *)v37, (float *)dword_106C6490) > 0.94999999 )
              {
                sub_1003ACE0((int)v38, SLODWORD(a1), 1.0);
                sub_1003B020((int)v38, LODWORD(a1) + 32, 0.0);
                v36 = sub_1003AC90((float *)v37, (float *)v38);
                v23 = sub_1003AC90((float *)v37, (float *)dword_106C6490) * v36;
                if ( v23 > 0.94999999 )
                  flt_105754F8 = (v23 - 0.94999999) * 750.0 / (v39 * v39) + flt_105754F8;
              }
            }
          }
          v24 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v24 = -419430400;
          v24[1] = 0;
          v25 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v25 = -1174399998;
          v25[1] = 0;
          v26 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v26 = -1124073472;
          v26[1] = 0;
          v27 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v27 = -1241513984;
          v27[1] = 0x40000;
          v28 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v28 = -1140850686;
          v28[1] = -2147483584;
          v29 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v29 = 59113488;
          v29[1] = &unk_100AA868;
          v30 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v30 = 59244560;
          v30[1] = &unk_100AA860;
          v31 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v31 = -1174402046;
          v31[1] = dword_106C0258;
          v32 = (_DWORD *)dword_106C0680;
          dword_106C0680 += 8;
          *v32 = -1174401534;
          v32[1] = 0;
          v34 = (unsigned int *)dword_106C0680;
          dword_106C0680 += 8;
          result = sub_1002F900(v34, 1001, 0, 1004, 0, 1001, 0, 1004, 0, 1001, 0, 1004, 0, 1001, 0, 1004, 0);
        }
      }
    }
  }
  return result;
}
// 105754F8: using guessed type float flt_105754F8;
// 10575504: using guessed type float flt_10575504;
// 106C0258: using guessed type int dword_106C0258;
// 106C0680: using guessed type int dword_106C0680;
// 106C0688: using guessed type int dword_106C0688;
// 106C2CF8: using guessed type int dword_106C2CF8;
// 106C32D0: using guessed type int dword_106C32D0;
// 106C3308: using guessed type int dword_106C3308;
// 106C661C: using guessed type int dword_106C661C;
// 106C6624: using guessed type int dword_106C6624;
