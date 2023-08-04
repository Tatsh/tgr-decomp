#include "../../types-win32.h"
//----- (1004DB00) --------------------------------------------------------
int __cdecl sub_1004DB00(int a1)
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
  _DWORD *v14; // eax
  _DWORD *v15; // edi
  int v16; // edx
  _DWORD *v17; // eax
  _DWORD *v18; // edi
  int v19; // ebx
  LPCSTR v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // edi
  int v23; // ebx
  LPCSTR v24; // eax
  float v26; // [esp+FCh] [ebp-34h]
  float v27; // [esp+FCh] [ebp-34h]

  v1 = *(_WORD *)(a1 + 16);
  *(_WORD *)(a1 + 18) = 0;
  *(_DWORD *)(a1 + 4 * v1 + 108) = 1;
  v2 = (_DWORD *)malloc(0x348u);
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
  v4 = (_DWORD *)malloc(0x1E214u);
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
  v6 = (_DWORD *)malloc(0x1E214u);
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
  v9 = getCaptionString(0x2Au);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v8 + 52))(v7, v9, 1, 1, &unk_100AB508);
  ++*((_WORD *)v3 + 10);
  v10 = (_DWORD *)malloc(0x1E214u);
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
  v12 = (_DWORD *)malloc(0x1E214u);
  if ( v12 )
    v13 = sub_100476C0(v12);
  else
    v13 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v13;
  if ( !v13 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v13 + 56))(
    v13,
    a1,
    1119879168,
    1114898432,
    9,
    2,
    5,
    0,
    142);
  ++*((_WORD *)v3 + 10);
  v14 = (_DWORD *)malloc(0x1E214u);
  if ( v14 )
    v15 = sub_100476C0(v14);
  else
    v15 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v15;
  if ( !v15 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v15 + 56))(
    v15,
    a1,
    v3[206],
    v3[207],
    12289,
    2,
    5,
    1,
    -1);
  v16 = v15[3598];
  v15[1] = sub_1003EDF0;
  v15[30845] = 1;
  (*(void (__thiscall **)(_DWORD *, int, void *, int, _DWORD, int))(v16 + 20))(
    v15 + 3598,
    262145,
    &unk_100AB528,
    7,
    0,
    -1);
  dword_10AA29EC = (int)v15;
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v17 = (_DWORD *)malloc(0x1E214u);
  if ( v17 )
    v18 = sub_100476C0(v17);
  else
    v18 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v18;
  if ( !v18 )
    sub_1003E260(4);
  v19 = *v18;
  v26 = *((float *)v3 + 207) - -95.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v18 + 56))(
    v18,
    a1,
    v3[206],
    LODWORD(v26),
    1056769,
    2,
    5,
    1,
    -1);
  v18[3] = sub_10047360;
  v18[2] = sub_1003ED40;
  *((_WORD *)v18 + 61702) = 3;
  v20 = getCaptionString(0x2Du);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v19 + 52))(v18, v20, 1, 1, &dword_100AB448);
  dword_10AA29C8 = (int)v18;
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v21 = (_DWORD *)malloc(0x1E214u);
  if ( v21 )
    v22 = sub_100476C0(v21);
  else
    v22 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v22;
  if ( !v22 )
    sub_1003E260(4);
  v23 = *v22;
  v27 = *((float *)v3 + 207) - -114.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v22 + 56))(
    v22,
    a1,
    v3[206],
    LODWORD(v27),
    1056769,
    2,
    5,
    1,
    -1);
  v22[3] = sub_10047360;
  v22[2] = sub_10046670;
  *((_WORD *)v22 + 61702) = 3;
  v24 = getCaptionString(0xCu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v23 + 52))(v22, v24, 1, 1, &dword_100AB448);
  dword_10AA29C8 = (int)v22;
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  return 1;
}
// 1004DB00: using guessed type int __cdecl sub_1004DB00(int);
// 100AB448: using guessed type int dword_100AB448;
// 10AA29C8: using guessed type int dword_10AA29C8;
// 10AA29EC: using guessed type int dword_10AA29EC;
