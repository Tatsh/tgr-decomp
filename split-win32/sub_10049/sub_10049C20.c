#include "../../types-win32.h"
//----- (10049C20) --------------------------------------------------------
int __cdecl sub_10049C20(int a1)
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
  int v12; // ebx
  LPCSTR v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // edi
  int v16; // ebx
  LPCSTR v17; // eax
  float v19; // [esp+88h] [ebp-34h]

  v1 = *(_WORD *)(a1 + 16);
  *(_WORD *)(a1 + 18) = 0;
  *(_DWORD *)(a1 + 4 * v1 + 108) = 1;
  v2 = (_DWORD *)malloc(0x348u);
  if ( v2 )
    v3 = meth_10048470(v2);
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
    v5 = meth_100476C0(v4);
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
    v7 = meth_100476C0(v6);
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
  v9 = getCaptionString(0xEu);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v8 + 52))(v7, v9, 1, 1, &unk_100AB508);
  ++*((_WORD *)v3 + 10);
  v10 = (_DWORD *)malloc(0x1E214u);
  if ( v10 )
    v11 = meth_100476C0(v10);
  else
    v11 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v11;
  if ( !v11 )
    sub_1003E260(4);
  v12 = *v11;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v11 + 56))(
    v11,
    a1,
    v3[206],
    v3[207],
    1056769,
    2,
    5,
    1,
    -1);
  v11[3] = sub_10047360;
  v11[2] = sub_10043710;
  *((_WORD *)v11 + 61702) = 3;
  v13 = getCaptionString(0xFu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v12 + 52))(v11, v13, 1, 1, &dword_100AB448);
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v14 = (_DWORD *)malloc(0x1E214u);
  if ( v14 )
    v15 = meth_100476C0(v14);
  else
    v15 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v15;
  if ( !v15 )
    sub_1003E260(4);
  v16 = *v15;
  v19 = *((float *)v3 + 207) - -114.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v15 + 56))(
    v15,
    a1,
    v3[206],
    LODWORD(v19),
    1056769,
    2,
    5,
    1,
    -1);
  v15[3] = sub_10047360;
  v15[2] = sub_100464A0;
  *((_WORD *)v15 + 61702) = 3;
  v17 = getCaptionString(0xCu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v16 + 52))(v15, v17, 1, 1, &dword_100AB448);
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  return 1;
}
// 10049C20: using guessed type int __cdecl sub_10049C20(int);
// 100AB448: using guessed type int dword_100AB448;
