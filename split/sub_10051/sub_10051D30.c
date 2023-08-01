//----- (10051D30) --------------------------------------------------------
int __cdecl sub_10051D30(int a1)
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
  _WORD *v12; // ecx
  _DWORD *v13; // eax
  int v14; // edx
  _WORD *v15; // ecx
  _DWORD *v16; // eax
  int v17; // edx
  float v19; // [esp+50h] [ebp-38h]
  float v20; // [esp+54h] [ebp-34h]

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
  v9 = getCaptionString(0x43u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v8 + 52))(v7, v9, 1, 1, &unk_100AB438);
  ++*((_WORD *)v3 + 10);
  v10 = (_DWORD *)operator new(0x1E214u);
  if ( v10 )
    v11 = sub_100476C0(v10);
  else
    v11 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v11;
  if ( !v11 )
    sub_1003E260(4);
  v20 = *((float *)v3 + 207) - 12.0;
  v19 = *((float *)v3 + 206) - 8.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, _DWORD, int))(*v11 + 56))(
    v11,
    a1,
    LODWORD(v19),
    LODWORD(v20),
    139265,
    2,
    5,
    0,
    80);
  v11[30852] = &unk_10A9DA50;
  v11[2650] = 1;
  v11[2651] = 1;
  v12 = v11 + 2704;
  v13 = v11 + 2654;
  v14 = 15;
  do
  {
    *v13 = 60;
    *v12 = 80;
    ++v13;
    ++v12;
    --v14;
  }
  while ( v14 );
  v15 = (_WORD *)v11 + 5423;
  v16 = v11 + 2669;
  v17 = 9;
  do
  {
    *v16 = 60;
    *v15 = 81;
    ++v16;
    ++v15;
    --v17;
  }
  while ( v17 );
  v11[2] = sub_100471B0;
  *((_WORD *)v11 + 61702) = 80;
  v11[21] = (__int64)*((float *)v3 + 207);
  v11[20] = (__int64)*((float *)v3 + 206);
  v11[22] = (__int64)*((float *)v3 + 206) + 128;
  v11[23] = (__int64)*((float *)v3 + 207) + 128;
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  return 1;
}
// 100471B0: using guessed type int __cdecl sub_100471B0(int);
