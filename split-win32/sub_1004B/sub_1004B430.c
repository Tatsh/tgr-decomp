#include "../../types-win32.h"
//----- (1004B430) --------------------------------------------------------
int __cdecl sub_1004B430(int a1)
{
  unsigned __int16 v1; // ax
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // ebp
  _DWORD *v6; // eax
  _WORD *v7; // ebp
  int v8; // ebx
  LPCSTR v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // ebp
  int v12; // ebx
  LPCSTR v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // ebp
  int v16; // ebx
  LPCSTR v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // ebp
  int v20; // ebx
  LPCSTR v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // ebp
  int v24; // ebx
  LPCSTR v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // ebp
  _DWORD *v28; // eax
  _DWORD *v29; // ebp
  int v30; // ebx
  LPCSTR v31; // eax
  _DWORD *v32; // eax
  _DWORD *v33; // ebp
  __int16 v34; // ax
  _DWORD *v35; // eax
  _DWORD *v36; // ebp
  int v37; // ebx
  _DWORD *v38; // eax
  _DWORD *v39; // ebp
  __int16 v40; // ax
  _DWORD *v41; // eax
  _DWORD *v42; // ebp
  int v43; // ebx
  _DWORD *v44; // eax
  _DWORD *v45; // ebp
  int v46; // ebx
  _DWORD *v47; // eax
  _WORD *v48; // ebp
  int v49; // ebx
  LPCSTR v50; // eax
  float v52; // [esp+234h] [ebp-38h]
  float v53; // [esp+234h] [ebp-38h]
  float v54; // [esp+234h] [ebp-38h]
  float v55; // [esp+234h] [ebp-38h]
  float v56; // [esp+234h] [ebp-38h]
  float v57; // [esp+25Ch] [ebp-10h]
  float v58; // [esp+25Ch] [ebp-10h]
  float v59; // [esp+25Ch] [ebp-10h]
  float v60; // [esp+25Ch] [ebp-10h]

  v1 = *(_WORD *)(a1 + 16);
  *(_WORD *)(a1 + 18) = 0;
  v57 = 0.0;
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
  v9 = getCaptionString(0x1Au);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v8 + 52))(v7, v9, 1, 1, &unk_100AB508);
  ++*((_WORD *)v3 + 10);
  if ( dword_100AC304 )
  {
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
    v11[3] = sub_100474B0;
    v11[2] = sub_10042EE0;
    *((_WORD *)v11 + 61702) = 3;
    v13 = getCaptionString(0x1Bu);
    (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v12 + 52))(v11, v13, 1, 1, &dword_100AB448);
    ++*((_WORD *)v3 + 10);
    ++*((_WORD *)v3 + 418);
    v57 = 19.0;
  }
  v14 = (_DWORD *)malloc(0x1E214u);
  if ( v14 )
    v15 = sub_100476C0(v14);
  else
    v15 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v15;
  if ( !v15 )
    sub_1003E260(4);
  v16 = *v15;
  v52 = v57 + *((float *)v3 + 207);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v15 + 56))(
    v15,
    a1,
    v3[206],
    LODWORD(v52),
    1056769,
    2,
    5,
    1,
    -1);
  v15[3] = sub_10047360;
  v15[2] = sub_10043180;
  *((_WORD *)v15 + 61702) = 3;
  v17 = getCaptionString(0x1Cu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v16 + 52))(v15, v17, 1, 1, &dword_100AB448);
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v58 = v57 - -19.0;
  v18 = (_DWORD *)malloc(0x1E214u);
  if ( v18 )
    v19 = sub_100476C0(v18);
  else
    v19 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v19;
  if ( !v19 )
    sub_1003E260(4);
  v20 = *v19;
  v53 = v58 + *((float *)v3 + 207);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v19 + 56))(
    v19,
    a1,
    v3[206],
    LODWORD(v53),
    1056769,
    2,
    5,
    1,
    -1);
  v19[3] = sub_10047360;
  v19[2] = sub_100430B0;
  *((_WORD *)v19 + 61702) = 3;
  v21 = getCaptionString(0x1Du);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v20 + 52))(v19, v21, 1, 1, &dword_100AB448);
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v59 = v58 - -57.0;
  v22 = (_DWORD *)malloc(0x1E214u);
  if ( v22 )
    v23 = sub_100476C0(v22);
  else
    v23 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v23;
  if ( !v23 )
    sub_1003E260(4);
  v24 = *v23;
  v54 = v59 + *((float *)v3 + 207);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v23 + 56))(
    v23,
    a1,
    v3[206],
    LODWORD(v54),
    1056769,
    2,
    5,
    1,
    -1);
  v23[3] = sub_100474B0;
  v23[2] = sub_10045110;
  *((_WORD *)v23 + 61702) = 3;
  v25 = getCaptionString(0x1Eu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v24 + 52))(v23, v25, 1, 1, &dword_100AB448);
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v60 = v59 - -19.0;
  v26 = (_DWORD *)malloc(0x1E214u);
  if ( v26 )
    v27 = sub_100476C0(v26);
  else
    v27 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v27;
  if ( !v27 )
    sub_1003E260(4);
  v55 = v60 + *((float *)v3 + 207);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v27 + 56))(
    v27,
    a1,
    v3[206],
    LODWORD(v55),
    1056769,
    2,
    5,
    1,
    -1);
  v28 = (_DWORD *)malloc(0x1E214u);
  if ( v28 )
    v29 = sub_100476C0(v28);
  else
    v29 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v29;
  if ( !v29 )
    sub_1003E260(4);
  v30 = *v29;
  v56 = *((float *)v3 + 207) - -114.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v29 + 56))(
    v29,
    a1,
    v3[206],
    LODWORD(v56),
    1056769,
    2,
    5,
    1,
    -1);
  v29[3] = sub_10047360;
  v29[2] = sub_10046450;
  *((_WORD *)v29 + 61702) = 3;
  v31 = getCaptionString(0xCu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v30 + 52))(v29, v31, 1, 1, &dword_100AB448);
  dword_10AA29AC = (int)v29;
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
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
    1116864512,
    1129578496,
    1,
    2,
    5,
    1,
    22);
  v33[1] = sub_100407E0;
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
    1133084672,
    1052673,
    2,
    5,
    1,
    -1);
  v36[1] = sub_1003FE80;
  *((_WORD *)v36 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v37 + 52))(v36, asc_100AD300, 1, 1, &unk_100AB4B8);
  ++*((_WORD *)v3 + 10);
  if ( dword_100AC304 )
  {
    v38 = (_DWORD *)malloc(0x1E214u);
    if ( v38 )
      v39 = sub_100476C0(v38);
    else
      v39 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v39;
    if ( !v39 )
      sub_1003E260(4);
    (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v39 + 56))(
      v39,
      a1,
      1134723072,
      1116733440,
      1,
      2,
      5,
      1,
      17);
    v39[1] = sub_10040730;
    v40 = *((_WORD *)v3 + 10) + 1;
    ++*((_WORD *)v39 + 5466);
    *((_WORD *)v39 + 5467) = v40;
    ++*((_WORD *)v3 + 10);
    v41 = (_DWORD *)malloc(0x1E214u);
    if ( v41 )
      v42 = sub_100476C0(v41);
    else
      v42 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v42;
    if ( !v42 )
      sub_1003E260(4);
    v43 = *v42;
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v42 + 56))(
      v42,
      a1,
      v3[206],
      1125646336,
      1052673,
      2,
      5,
      1,
      -1);
    v42[1] = sub_1003FA00;
    *((_WORD *)v42 + 61702) = 3;
    (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v43 + 52))(v42, asc_100AD300, 1, 1, &unk_100AB4A8);
    ++*((_WORD *)v3 + 10);
  }
  v44 = (_DWORD *)malloc(0x1E214u);
  if ( v44 )
    v45 = sub_100476C0(v44);
  else
    v45 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v45;
  if ( !v45 )
    sub_1003E260(4);
  v46 = *v45;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v45 + 56))(
    v45,
    a1,
    1121189888,
    1116209152,
    20481,
    2,
    5,
    1,
    -1);
  v45[1] = sub_100408D0;
  *((_WORD *)v45 + 61702) = 5;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v46 + 52))(v45, ::a1, 1, 3, &unk_100AB458);
  ++*((_WORD *)v3 + 10);
  v47 = (_DWORD *)malloc(0x1E214u);
  if ( v47 )
    v48 = sub_100476C0(v47);
  else
    v48 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v48;
  if ( !v48 )
    sub_1003E260(4);
  v49 = *(_DWORD *)v48;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v48 + 56))(
    v48,
    a1,
    1121189888,
    1122369536,
    1048577,
    2,
    5,
    1,
    -1);
  v48[61702] = 3;
  v50 = getCaptionString(0x1Du);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v49 + 52))(v48, v50, 1, 1, &unk_100AB458);
  ++*((_WORD *)v3 + 10);
  return 1;
}
// 1003FA00: using guessed type int __cdecl sub_1003FA00(int);
// 1003FE80: using guessed type int __cdecl sub_1003FE80(int);
// 10040730: using guessed type int __cdecl sub_10040730(int);
// 100407E0: using guessed type int __cdecl sub_100407E0(int);
// 1004B430: using guessed type int __cdecl sub_1004B430(int);
// 100AB448: using guessed type int dword_100AB448;
// 100AC304: using guessed type int dword_100AC304;
// 10AA29AC: using guessed type int dword_10AA29AC;
