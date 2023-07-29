//----- (10056FF0) --------------------------------------------------------
int __cdecl sub_10056FF0(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  _WORD *v6; // edi
  int v7; // ebx
  LPCSTR v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // edi
  int v11; // edx
  _DWORD *v12; // eax
  _DWORD *v13; // edi
  int v14; // ebx
  LPCSTR v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // edi
  int v18; // eax
  int v19; // ebx
  BOOL v20; // eax
  LPCSTR v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // edi
  int v24; // ebx
  LPCSTR v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // edi
  int v28; // ebx
  LPCSTR v29; // eax
  _DWORD *v30; // eax
  _DWORD *v31; // edi
  float v33; // [esp+13Ch] [ebp-34h]
  float v34; // [esp+13Ch] [ebp-34h]
  float v35; // [esp+13Ch] [ebp-34h]
  float v36; // [esp+13Ch] [ebp-34h]
  BOOL v37; // [esp+14Ch] [ebp-24h]

  *(_WORD *)(a1 + 18) = 0;
  sub_100586A0();
  dword_10AA2898 = 1;
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
  v8 = getCaptionString(0x5Fu);
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
  v10[1] = sub_1003EB90;
  v10[30845] = 1;
  (*(void (__thiscall **)(_DWORD *, int, void *, int, _DWORD, int))(v11 + 20))(
    v10 + 3598,
    262145,
    &unk_100AB4E8,
    3,
    0,
    -1);
  dword_10AA29D4 = (int)v10;
  ++*((_WORD *)v2 + 10);
  ++*((_WORD *)v2 + 418);
  if ( dword_10AA287C == 2 )
  {
    v12 = (_DWORD *)operator new(0x1E214u);
    if ( v12 )
      v13 = sub_100476C0(v12);
    else
      v13 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v13;
    if ( !v13 )
      sub_1003E260(4);
    v14 = *v13;
    v33 = *((float *)v2 + 207) - -57.0;
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v13 + 56))(
      v13,
      a1,
      v2[206],
      LODWORD(v33),
      1056769,
      2,
      5,
      1,
      -1);
    v13[3] = sub_10047360;
    v13[2] = sub_10043DA0;
    *((_WORD *)v13 + 61702) = 3;
    v15 = getCaptionString(0x5Eu);
    (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v14 + 52))(v13, v15, 1, 1, &dword_100AB448);
    ++*((_WORD *)v2 + 10);
    ++*((_WORD *)v2 + 418);
  }
  v16 = (_DWORD *)operator new(0x1E214u);
  if ( v16 )
    v17 = sub_100476C0(v16);
  else
    v17 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v17;
  if ( !v17 )
    sub_1003E260(4);
  if ( dword_10AA287C == 2 || (v18 = 1056785, dword_10AA287C == 3) )
    v18 = 1056769;
  v19 = *v17;
  v34 = *((float *)v2 + 207) - -76.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v17 + 56))(
    v17,
    a1,
    v2[206],
    LODWORD(v34),
    v18,
    2,
    5,
    1,
    -1);
  v17[3] = sub_10047360;
  v17[2] = sub_10044280;
  *((_WORD *)v17 + 61702) = 2;
  v20 = dword_10AA287C == 2 || dword_10AA287C == 3;
  v37 = v20;
  v21 = getCaptionString(0x60u);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, BOOL, int *))(v19 + 52))(v17, v21, 1, v37, &dword_100AB448);
  dword_10AA29D8 = (int)v17;
  ++*((_WORD *)v2 + 10);
  ++*((_WORD *)v2 + 418);
  v22 = (_DWORD *)operator new(0x1E214u);
  if ( v22 )
    v23 = sub_100476C0(v22);
  else
    v23 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v23;
  if ( !v23 )
    sub_1003E260(4);
  v24 = *v23;
  v35 = *((float *)v2 + 207) - -95.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v23 + 56))(
    v23,
    a1,
    v2[206],
    LODWORD(v35),
    1056769,
    2,
    5,
    1,
    -1);
  v23[3] = sub_10047360;
  v23[2] = sub_100440D0;
  *((_WORD *)v23 + 61702) = 3;
  v25 = getCaptionString(0x61u);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v24 + 52))(v23, v25, 1, 1, &dword_100AB448);
  ++*((_WORD *)v2 + 10);
  ++*((_WORD *)v2 + 418);
  v26 = (_DWORD *)operator new(0x1E214u);
  if ( v26 )
    v27 = sub_100476C0(v26);
  else
    v27 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v27;
  if ( !v27 )
    sub_1003E260(4);
  v28 = *v27;
  v36 = *((float *)v2 + 207) - -114.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v27 + 56))(
    v27,
    a1,
    v2[206],
    LODWORD(v36),
    1056769,
    2,
    5,
    1,
    -1);
  v27[3] = sub_10047360;
  v27[2] = sub_10044AE0;
  *((_WORD *)v27 + 61702) = 3;
  v29 = getCaptionString(0xCu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v28 + 52))(v27, v29, 1, 1, &dword_100AB448);
  ++*((_WORD *)v2 + 10);
  ++*((_WORD *)v2 + 418);
  v30 = (_DWORD *)operator new(0x1E214u);
  if ( v30 )
    v31 = sub_100476C0(v30);
  else
    v31 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v31;
  if ( !v31 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v31 + 56))(
    v31,
    a1,
    1117782016,
    1110966272,
    9,
    2,
    5,
    0,
    7);
  ++*((_WORD *)v2 + 10);
  return 1;
}
// 10056FF0: using guessed type int __cdecl sub_10056FF0(int);
// 100AB448: using guessed type int dword_100AB448;
// 10AA287C: using guessed type int dword_10AA287C;
// 10AA2898: using guessed type int dword_10AA2898;
// 10AA29D4: using guessed type int dword_10AA29D4;
// 10AA29D8: using guessed type int dword_10AA29D8;
