//----- (1004D1F0) --------------------------------------------------------
int __cdecl sub_1004D1F0(int a1)
{
  unsigned __int16 v1; // ax
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  _WORD *v7; // edi
  int v8; // ebx
  LPCSTR v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // edi
  _DWORD *v12; // eax
  _DWORD *v13; // edi
  int v14; // ebx
  LPCSTR v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // edi
  int v18; // ebx
  LPCSTR v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // edi
  int v22; // ebx
  LPCSTR v23; // eax
  float v25; // [esp+D8h] [ebp-34h]
  float v26; // [esp+D8h] [ebp-34h]

  v1 = *(_WORD *)(a1 + 16);
  *(_WORD *)(a1 + 18) = 0;
  *(_DWORD *)(a1 + 4 * v1 + 108) = 1;
  v2 = (_DWORD *)operator new(0x348u);
  if ( v2 )
    v3 = sub_10048470(v2);
  else
    v3 = 0;
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v3;
  if ( !v3 )
    sub_1003E260(4);
  ++*(_WORD *)(a1 + 16);
  v3[208] = a1;
  v3[4] = 0;
  v3[206] = 1128464384;
  v3[207] = 1124204544;
  v4 = (_DWORD *)operator new(0x1E214u);
  if ( v4 )
    v5 = sub_100476C0(v4);
  else
    v5 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v5;
  if ( !v5 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))(*v5 + 56))(
    v5,
    a1,
    0,
    0,
    9,
    2,
    5,
    0,
    0);
  ++*((_WORD *)v3 + 10);
  v6 = (_DWORD *)operator new(0x1E214u);
  if ( v6 )
    v7 = sub_100476C0(v6);
  else
    v7 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v7;
  if ( !v7 )
    sub_1003E260(4);
  v8 = *(_DWORD *)v7;
  (*(void (__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v7 + 56))(
    v7,
    a1,
    v3[206],
    1092616192,
    1048585,
    2,
    5,
    1,
    -1);
  v7[61702] = 3;
  v9 = getCaptionString(0x20u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v8 + 52))(v7, v9, 1, 1, &unk_100AB508);
  ++*((_WORD *)v3 + 10);
  v10 = (_DWORD *)operator new(0x1E214u);
  if ( v10 )
    v11 = sub_100476C0(v10);
  else
    v11 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v11;
  if ( !v11 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v11 + 56))(
    v11,
    a1,
    1117782016,
    1110966272,
    9,
    2,
    5,
    0,
    9);
  ++*((_WORD *)v3 + 10);
  v12 = (_DWORD *)operator new(0x1E214u);
  if ( v12 )
    v13 = sub_100476C0(v12);
  else
    v13 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v13;
  if ( !v13 )
    sub_1003E260(4);
  v14 = *v13;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v13 + 56))(
    v13,
    a1,
    v3[206],
    v3[207],
    1056769,
    2,
    5,
    1,
    -1);
  v13[3] = sub_10047360;
  v13[2] = sub_10045460;
  *((_WORD *)v13 + 61702) = 3;
  v15 = getCaptionString(0x29u);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v14 + 52))(v13, v15, 1, 1, &dword_100AB448);
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v16 = (_DWORD *)operator new(0x1E214u);
  if ( v16 )
    v17 = sub_100476C0(v16);
  else
    v17 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v17;
  if ( !v17 )
    sub_1003E260(4);
  v18 = *v17;
  v25 = *((float *)v3 + 207) - -19.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v17 + 56))(
    v17,
    a1,
    v3[206],
    LODWORD(v25),
    1056769,
    2,
    5,
    1,
    -1);
  v17[3] = sub_10047360;
  v17[2] = sub_10045520;
  *((_WORD *)v17 + 61702) = 3;
  v19 = getCaptionString(0x2Au);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v18 + 52))(v17, v19, 1, 1, &dword_100AB448);
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v20 = (_DWORD *)operator new(0x1E214u);
  if ( v20 )
    v21 = sub_100476C0(v20);
  else
    v21 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v21;
  if ( !v21 )
    sub_1003E260(4);
  v22 = *v21;
  v26 = *((float *)v3 + 207) - -114.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v21 + 56))(
    v21,
    a1,
    v3[206],
    LODWORD(v26),
    1056769,
    2,
    5,
    1,
    -1);
  v21[3] = sub_10047360;
  v21[2] = sub_100465E0;
  *((_WORD *)v21 + 61702) = 3;
  v23 = getCaptionString(0xCu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v22 + 52))(v21, v23, 1, 1, &dword_100AB448);
  dword_10AA29C8 = (int)v21;
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  return 1;
}
// 1004D1F0: using guessed type int __cdecl sub_1004D1F0(int);
// 100AB448: using guessed type int dword_100AB448;
// 10AA29C8: using guessed type int dword_10AA29C8;
