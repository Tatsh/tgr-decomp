#include "../../types-win32.h"
//----- (1004C4A0) --------------------------------------------------------
int __cdecl sub_1004C4A0(int a1)
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
  _DWORD *v18; // eax
  _DWORD *v19; // edi
  int v20; // ebx
  LPCSTR v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // edi
  int v24; // ebx
  LPCSTR v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // edi
  _DWORD *v28; // eax
  _DWORD *v29; // edi
  __int16 v30; // ax
  _DWORD *v31; // eax
  _DWORD *v32; // edi
  int v33; // ebx
  float v35; // [esp+158h] [ebp-34h]
  float v36; // [esp+158h] [ebp-34h]
  float v37; // [esp+158h] [ebp-34h]

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
  v9 = getCaptionString(0x1Fu);
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
  v11[2] = sub_10043400;
  *((_WORD *)v11 + 61702) = 3;
  v13 = getCaptionString(0x23u);
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
  v35 = *((float *)v3 + 207) - -19.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v15 + 56))(
    v15,
    a1,
    v3[206],
    LODWORD(v35),
    1056769,
    2,
    5,
    1,
    -1);
  v15[3] = sub_10047360;
  v15[2] = sub_100434C0;
  *((_WORD *)v15 + 61702) = 3;
  v17 = getCaptionString(0x24u);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v16 + 52))(v15, v17, 1, 1, &dword_100AB448);
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v18 = (_DWORD *)malloc(0x1E214u);
  if ( v18 )
    v19 = meth_100476C0(v18);
  else
    v19 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v19;
  if ( !v19 )
    sub_1003E260(4);
  v20 = *v19;
  v36 = *((float *)v3 + 207) - -38.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v19 + 56))(
    v19,
    a1,
    v3[206],
    LODWORD(v36),
    1056769,
    2,
    5,
    1,
    -1);
  v19[3] = sub_10047360;
  v19[2] = sub_100406C0;
  *((_WORD *)v19 + 61702) = 3;
  v21 = getCaptionString(0x25u);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v20 + 52))(v19, v21, 1, 1, &dword_100AB448);
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v22 = (_DWORD *)malloc(0x1E214u);
  if ( v22 )
    v23 = meth_100476C0(v22);
  else
    v23 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v23;
  if ( !v23 )
    sub_1003E260(4);
  v24 = *v23;
  v37 = *((float *)v3 + 207) - -114.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v23 + 56))(
    v23,
    a1,
    v3[206],
    LODWORD(v37),
    1056769,
    2,
    5,
    1,
    -1);
  v23[3] = sub_10047360;
  v23[2] = sub_100465A0;
  *((_WORD *)v23 + 61702) = 3;
  v25 = getCaptionString(0xCu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v24 + 52))(v23, v25, 1, 1, &dword_100AB448);
  dword_10AA29C8 = (int)v23;
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v26 = (_DWORD *)malloc(0x1E214u);
  if ( v26 )
    v27 = meth_100476C0(v26);
  else
    v27 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v27;
  if ( !v27 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v27 + 56))(
    v27,
    a1,
    1117782016,
    1110966272,
    9,
    2,
    5,
    0,
    9);
  ++*((_WORD *)v3 + 10);
  v28 = (_DWORD *)malloc(0x1E214u);
  if ( v28 )
    v29 = meth_100476C0(v28);
  else
    v29 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v29;
  if ( !v29 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v29 + 56))(
    v29,
    a1,
    1134690304,
    1110966272,
    1,
    2,
    5,
    1,
    22);
  v29[1] = sub_10041870;
  v30 = *((_WORD *)v3 + 10) + 1;
  ++*((_WORD *)v29 + 5466);
  *((_WORD *)v29 + 5467) = v30;
  ++*((_WORD *)v3 + 10);
  v31 = (_DWORD *)malloc(0x1E214u);
  if ( v31 )
    v32 = meth_100476C0(v31);
  else
    v32 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v32;
  if ( !v32 )
    sub_1003E260(4);
  v33 = *v32;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v32 + 56))(
    v32,
    a1,
    v3[206],
    1125842944,
    1052673,
    2,
    5,
    1,
    -1);
  v32[1] = sub_1003FFD0;
  *((_WORD *)v32 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v33 + 52))(v32, asc_100AD300, 1, 1, &unk_100AB4C8);
  ++*((_WORD *)v3 + 10);
  return 1;
}
// 1004C4A0: using guessed type int __cdecl sub_1004C4A0(int);
// 100AB448: using guessed type int dword_100AB448;
// 10AA29C8: using guessed type int dword_10AA29C8;
