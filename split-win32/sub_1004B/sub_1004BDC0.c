#include "../../types-win32.h"
//----- (1004BDC0) --------------------------------------------------------
int __cdecl sub_1004BDC0(int a1)
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
  int v28; // ebx
  LPCSTR v29; // eax
  _DWORD *v30; // eax
  _DWORD *v31; // edi
  _DWORD *v32; // eax
  _DWORD *v33; // edi
  __int16 v34; // ax
  _DWORD *v35; // eax
  _DWORD *v36; // edi
  int v37; // ebx
  float v39; // [esp+188h] [ebp-34h]
  float v40; // [esp+188h] [ebp-34h]
  float v41; // [esp+188h] [ebp-34h]
  float v42; // [esp+188h] [ebp-34h]

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
  v9 = getCaptionString(6u);
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
  v11[2] = sub_100452C0;
  *((_WORD *)v11 + 61702) = 3;
  v13 = getCaptionString(0x1Fu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v12 + 52))(v11, v13, 1, 1, &dword_100AB448);
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v14 = (_DWORD *)malloc(0x1E214u);
  if ( v14 )
    v15 = sub_100476C0(v14);
  else
    v15 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v15;
  if ( !v15 )
    sub_1003E260(4);
  v16 = *v15;
  v39 = *((float *)v3 + 207) - -19.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v15 + 56))(
    v15,
    a1,
    v3[206],
    LODWORD(v39),
    1056769,
    2,
    5,
    1,
    -1);
  v15[3] = sub_10047360;
  v15[2] = sub_10045390;
  *((_WORD *)v15 + 61702) = 3;
  v17 = getCaptionString(0x20u);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v16 + 52))(v15, v17, 1, 1, &dword_100AB448);
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v18 = (_DWORD *)malloc(0x1E214u);
  if ( v18 )
    v19 = sub_100476C0(v18);
  else
    v19 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v19;
  if ( !v19 )
    sub_1003E260(4);
  v20 = *v19;
  v40 = *((float *)v3 + 207) - -38.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v19 + 56))(
    v19,
    a1,
    v3[206],
    LODWORD(v40),
    1056769,
    2,
    5,
    1,
    -1);
  v19[3] = sub_10047360;
  v19[2] = sub_100455E0;
  *((_WORD *)v19 + 61702) = 3;
  v21 = getCaptionString(0x21u);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v20 + 52))(v19, v21, 1, 1, &dword_100AB448);
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v22 = (_DWORD *)malloc(0x1E214u);
  if ( v22 )
    v23 = sub_100476C0(v22);
  else
    v23 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v23;
  if ( !v23 )
    sub_1003E260(4);
  v24 = *v23;
  v41 = *((float *)v3 + 207) - -57.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v23 + 56))(
    v23,
    a1,
    v3[206],
    LODWORD(v41),
    1056769,
    2,
    5,
    1,
    -1);
  v23[3] = sub_10047360;
  v23[2] = sub_100456B0;
  *((_WORD *)v23 + 61702) = 3;
  v25 = getCaptionString(0x22u);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v24 + 52))(v23, v25, 1, 1, &dword_100AB448);
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v26 = (_DWORD *)malloc(0x1E214u);
  if ( v26 )
    v27 = sub_100476C0(v26);
  else
    v27 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v27;
  if ( !v27 )
    sub_1003E260(4);
  v28 = *v27;
  v42 = *((float *)v3 + 207) - -114.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v27 + 56))(
    v27,
    a1,
    v3[206],
    LODWORD(v42),
    1056769,
    2,
    5,
    1,
    -1);
  v27[3] = sub_10047360;
  v27[2] = sub_10046520;
  *((_WORD *)v27 + 61702) = 3;
  v29 = getCaptionString(0xCu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v28 + 52))(v27, v29, 1, 1, &dword_100AB448);
  dword_10AA29C8 = (int)v27;
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v30 = (_DWORD *)malloc(0x1E214u);
  if ( v30 )
    v31 = sub_100476C0(v30);
  else
    v31 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v31;
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
    9);
  ++*((_WORD *)v3 + 10);
  v32 = (_DWORD *)malloc(0x1E214u);
  if ( v32 )
    v33 = sub_100476C0(v32);
  else
    v33 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v33;
  if ( !v33 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v33 + 56))(
    v33,
    a1,
    1134690304,
    1110966272,
    1,
    2,
    5,
    1,
    22);
  v33[1] = sub_10041870;
  v34 = *((_WORD *)v3 + 10) + 1;
  ++*((_WORD *)v33 + 5466);
  *((_WORD *)v33 + 5467) = v34;
  ++*((_WORD *)v3 + 10);
  v35 = (_DWORD *)malloc(0x1E214u);
  if ( v35 )
    v36 = sub_100476C0(v35);
  else
    v36 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v36;
  if ( !v36 )
    sub_1003E260(4);
  v37 = *v36;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v36 + 56))(
    v36,
    a1,
    v3[206],
    1125842944,
    1052673,
    2,
    5,
    1,
    -1);
  v36[1] = sub_1003FFD0;
  *((_WORD *)v36 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v37 + 52))(v36, asc_100AD300, 1, 1, &unk_100AB4C8);
  ++*((_WORD *)v3 + 10);
  return 1;
}
// 1004BDC0: using guessed type int __cdecl sub_1004BDC0(int);
// 100AB448: using guessed type int dword_100AB448;
// 10AA29C8: using guessed type int dword_10AA29C8;
