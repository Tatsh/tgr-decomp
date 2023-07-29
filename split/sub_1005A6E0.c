//----- (1005A6E0) --------------------------------------------------------
int __cdecl sub_1005A6E0(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // ebp
  _DWORD *v5; // eax
  _WORD *v6; // ebp
  int v7; // ebx
  LPCSTR v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // ebp
  int v11; // eax
  _DWORD *v12; // ebx
  int i; // ebp
  _DWORD *v14; // eax
  _DWORD *v15; // ebp
  int v16; // ebx
  LPCSTR v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // ebp
  int v20; // ebx
  _DWORD *v21; // eax
  _WORD *v22; // ebp
  int v23; // ebx
  LPCSTR v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // ebp
  int v27; // ebx
  _DWORD *v28; // eax
  _WORD *v29; // ebp
  int v30; // ebx
  LPCSTR v31; // eax
  _DWORD *v32; // eax
  _DWORD *v33; // ebp
  _DWORD *v34; // eax
  _DWORD *v35; // ebp
  _DWORD *v36; // eax
  _DWORD *v37; // esi
  int v38; // ebx
  LPCSTR v39; // eax
  float v41; // [esp+1B4h] [ebp-34h]

  (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(dword_10AA2908 + 196) + 4))(
    *(_DWORD *)(dword_10AA2908 + 196),
    aTimeattackGrf);
  *(_WORD *)(a1 + 18) = 0;
  Value = -1;
  dword_10AA28E8 = 0;
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 108) = 1;
  v1 = (_DWORD *)operator new(0x348u);
  if ( v1 )
    v2 = sub_10048470(v1);
  else
    v2 = 0;
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v2;
  if ( !v2 )
    sub_1003E260(4);
  ++*(_WORD *)(a1 + 16);
  v2[208] = a1;
  v2[4] = 0;
  v2[206] = 1128464384;
  v2[207] = 1124204544;
  v3 = (_DWORD *)operator new(0x1E214u);
  if ( v3 )
    v4 = sub_100476C0(v3);
  else
    v4 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v4;
  if ( !v4 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))(*v4 + 56))(
    v4,
    a1,
    0,
    0,
    9,
    2,
    5,
    0,
    0);
  ++*((_WORD *)v2 + 10);
  v5 = (_DWORD *)operator new(0x1E214u);
  if ( v5 )
    v6 = sub_100476C0(v5);
  else
    v6 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v6;
  if ( !v6 )
    sub_1003E260(4);
  v7 = *(_DWORD *)v6;
  (*(void (__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v6 + 56))(
    v6,
    a1,
    v2[206],
    1092616192,
    1048585,
    2,
    5,
    1,
    -1);
  v6[61702] = 3;
  v8 = getCaptionString(0xC2u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v7 + 52))(v6, v8, 1, 1, &unk_100AB508);
  ++*((_WORD *)v2 + 10);
  v9 = (_DWORD *)operator new(0x1E214u);
  if ( v9 )
    v10 = sub_100476C0(v9);
  else
    v10 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v10;
  if ( !v10 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v10 + 56))(
    v10,
    a1,
    v2[206],
    v2[207],
    12289,
    2,
    5,
    1,
    -1);
  v11 = v10[3598];
  v12 = v10 + 3598;
  v10[1] = sub_1003EC30;
  v10[30845] = 1;
  (*(void (__thiscall **)(_DWORD *, int, void *, int, _DWORD, int))(v11 + 20))(
    v10 + 3598,
    262145,
    &unk_100AB4D8,
    5,
    0,
    -1);
  v10[3599] = sub_10042740;
  v10[3603] = sub_10042560;
  for ( i = 0; i < 26000; i += 260 )
  {
    if ( *(_DWORD *)(dword_10AA2908 + 196) + i != -4 )
      (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, void *, _DWORD))(*v12 + 16))(
        v12,
        *(_DWORD *)(dword_10AA2908 + 196) + i + 4,
        0,
        1,
        &unk_100AB4D8,
        0);
  }
  ++*((_WORD *)v2 + 10);
  ++*((_WORD *)v2 + 418);
  v14 = (_DWORD *)operator new(0x1E214u);
  if ( v14 )
    v15 = sub_100476C0(v14);
  else
    v15 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v15;
  if ( !v15 )
    sub_1003E260(4);
  v16 = *v15;
  v41 = *((float *)v2 + 207) - -95.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v15 + 56))(
    v15,
    a1,
    v2[206],
    LODWORD(v41),
    1056769,
    2,
    5,
    1,
    -1);
  v15[3] = sub_10047360;
  v15[2] = sub_10044F00;
  *((_WORD *)v15 + 61702) = 3;
  v17 = getCaptionString(0x1Eu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v16 + 52))(v15, v17, 1, 1, &dword_100AB448);
  ++*((_WORD *)v2 + 10);
  ++*((_WORD *)v2 + 418);
  v18 = (_DWORD *)operator new(0x1E214u);
  if ( v18 )
    v19 = sub_100476C0(v18);
  else
    v19 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v19;
  if ( !v19 )
    sub_1003E260(4);
  v20 = *v19;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v19 + 56))(
    v19,
    a1,
    1138491392,
    1129316352,
    1052673,
    2,
    5,
    1,
    -1);
  v19[1] = sub_10041040;
  *((_WORD *)v19 + 61702) = 52;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v20 + 52))(v19, asc_100AD300, 1, 4, &unk_100AB478);
  ++*((_WORD *)v2 + 10);
  v21 = (_DWORD *)operator new(0x1E214u);
  if ( v21 )
    v22 = sub_100476C0(v21);
  else
    v22 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v22;
  if ( !v22 )
    sub_1003E260(4);
  v23 = *(_DWORD *)v22;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v22 + 56))(
    v22,
    a1,
    1138491392,
    1130364928,
    1048577,
    2,
    5,
    1,
    -1);
  v22[61702] = 3;
  v24 = getCaptionString(0x6Fu);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v23 + 52))(v22, v24, 1, 1, &unk_100AB478);
  ++*((_WORD *)v2 + 10);
  v25 = (_DWORD *)operator new(0x1E214u);
  if ( v25 )
    v26 = sub_100476C0(v25);
  else
    v26 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v26;
  if ( !v26 )
    sub_1003E260(4);
  v27 = *v26;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v26 + 56))(
    v26,
    a1,
    1138491392,
    1131413504,
    1052673,
    2,
    5,
    1,
    -1);
  v26[1] = sub_10041180;
  *((_WORD *)v26 + 61702) = 52;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v27 + 52))(v26, asc_100AD300, 1, 4, &unk_100AB478);
  ++*((_WORD *)v2 + 10);
  v28 = (_DWORD *)operator new(0x1E214u);
  if ( v28 )
    v29 = sub_100476C0(v28);
  else
    v29 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v29;
  if ( !v29 )
    sub_1003E260(4);
  v30 = *(_DWORD *)v29;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v29 + 56))(
    v29,
    a1,
    1138491392,
    1132462080,
    1048577,
    2,
    5,
    1,
    -1);
  v29[61702] = 3;
  v31 = getCaptionString(0x3Fu);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v30 + 52))(v29, v31, 1, 1, &unk_100AB478);
  ++*((_WORD *)v2 + 10);
  v32 = (_DWORD *)operator new(0x1E214u);
  if ( v32 )
    v33 = sub_100476C0(v32);
  else
    v33 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v33;
  if ( !v33 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v33 + 56))(
    v33,
    a1,
    1117782016,
    1110966272,
    9,
    2,
    5,
    0,
    6);
  ++*((_WORD *)v2 + 10);
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 108) = 0;
  v34 = (_DWORD *)operator new(0x348u);
  if ( v34 )
    v35 = sub_10048470(v34);
  else
    v35 = 0;
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v35;
  if ( !v35 )
    sub_1003E260(4);
  ++*(_WORD *)(a1 + 16);
  v35[208] = a1;
  v35[4] = 0;
  v35[206] = 1128464384;
  v35[207] = 1124204544;
  v36 = (_DWORD *)operator new(0x1E214u);
  if ( v36 )
    v37 = sub_100476C0(v36);
  else
    v37 = 0;
  v35[*((unsigned __int16 *)v35 + 10) + 6] = v37;
  if ( !v37 )
    sub_1003E260(4);
  v38 = *v37;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v37 + 56))(
    v37,
    a1,
    0,
    1130889216,
    1048585,
    2,
    5,
    1,
    -1);
  v37[3] = sub_10047360;
  v37[1] = sub_10047250;
  v37[5] = sub_1003E7A0;
  *((_WORD *)v37 + 61702) = 3;
  v39 = getCaptionString(0x70u);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, void *))(v38 + 52))(v37, v39, 1, 1, &unk_100AB438);
  dword_10AA29C4 = (int)v37;
  ++*((_WORD *)v35 + 10);
  return 1;
}
// 1005A6E0: using guessed type int __cdecl sub_1005A6E0(int);
// 100AB448: using guessed type int dword_100AB448;
// 10AA28E8: using guessed type int dword_10AA28E8;
// 10AA2908: using guessed type int dword_10AA2908;
// 10AA29C4: using guessed type int dword_10AA29C4;
