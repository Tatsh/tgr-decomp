#include "../../types-win32.h"
//----- (10057C10) --------------------------------------------------------
int __cdecl sub_10057C10(int a1)
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
  int v28; // ebx
  LPCSTR v29; // eax
  _DWORD *v30; // eax
  _DWORD *v31; // ebp
  int v32; // ebx
  LPCSTR v33; // eax
  _DWORD *v34; // eax
  _DWORD *v35; // ebp
  __int16 v36; // ax
  _DWORD *v37; // eax
  _DWORD *v38; // ebp
  int v39; // ebx
  _DWORD *v40; // eax
  _DWORD *v41; // ebp
  __int16 v42; // ax
  _DWORD *v43; // eax
  _DWORD *v44; // ebp
  int v45; // ebx
  _DWORD *v46; // eax
  _DWORD *v47; // ebp
  int v48; // ebx
  _DWORD *v49; // eax
  _WORD *v50; // ebp
  int v51; // ebx
  LPCSTR v52; // eax
  _DWORD *v53; // eax
  _DWORD *v54; // ebx
  _DWORD *v55; // eax
  _DWORD *v56; // ebx
  float v58; // [esp+288h] [ebp-34h]
  float v59; // [esp+288h] [ebp-34h]
  float v60; // [esp+288h] [ebp-34h]
  float v61; // [esp+288h] [ebp-34h]
  float v62; // [esp+288h] [ebp-34h]

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
  v9 = getCaptionString(0x64u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v8 + 52))(v7, v9, 1, 1, &unk_100AB508);
  ++*((_WORD *)v3 + 10);
  if ( g_NetworkPlay == 2 )
  {
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
    v11[3] = sub_100474B0;
    v11[2] = sub_10042EE0;
    *((_WORD *)v11 + 61702) = 3;
    v13 = getCaptionString(0x1Bu);
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
    v58 = *((float *)v3 + 207) - -19.0;
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v15 + 56))(
      v15,
      a1,
      v3[206],
      LODWORD(v58),
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
    v18 = (_DWORD *)malloc(0x1E214u);
    if ( v18 )
      v19 = meth_100476C0(v18);
    else
      v19 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v19;
    if ( !v19 )
      sub_1003E260(4);
    v20 = *v19;
    v59 = *((float *)v3 + 207) - -38.0;
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v19 + 56))(
      v19,
      a1,
      v3[206],
      LODWORD(v59),
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
    v22 = (_DWORD *)malloc(0x1E214u);
    if ( v22 )
      v23 = meth_100476C0(v22);
    else
      v23 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v23;
    if ( !v23 )
      sub_1003E260(4);
    v24 = *v23;
    v60 = *((float *)v3 + 207) - -57.0;
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v23 + 56))(
      v23,
      a1,
      v3[206],
      LODWORD(v60),
      1056769,
      2,
      5,
      1,
      -1);
    v23[3] = sub_10047360;
    v23[2] = sub_10044600;
    *((_WORD *)v23 + 61702) = 3;
    v25 = getCaptionString(0x65u);
    (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v24 + 52))(v23, v25, 1, 1, &dword_100AB448);
    ++*((_WORD *)v3 + 10);
    ++*((_WORD *)v3 + 418);
  }
  v26 = (_DWORD *)malloc(0x1E214u);
  if ( v26 )
    v27 = meth_100476C0(v26);
  else
    v27 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v27;
  if ( !v27 )
    sub_1003E260(4);
  v28 = *v27;
  v61 = *((float *)v3 + 207) - -95.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v27 + 56))(
    v27,
    a1,
    v3[206],
    LODWORD(v61),
    1056769,
    2,
    5,
    1,
    -1);
  v27[3] = sub_10047360;
  v27[2] = meth_100446D0;
  v27[6] = sub_100437D0;
  *((_WORD *)v27 + 61702) = 3;
  if ( dword_10AA2884 )
    v29 = getCaptionString(0x66u);
  else
    v29 = getCaptionString(0x1Eu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR))(v28 + 52))(v27, v29);
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v30 = (_DWORD *)malloc(0x1E214u);
  if ( v30 )
    v31 = meth_100476C0(v30);
  else
    v31 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v31;
  if ( !v31 )
    sub_1003E260(4);
  v32 = *v31;
  v62 = *((float *)v3 + 207) - -114.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int, int, int, int *))(*v31 + 56))(
    v31,
    a1,
    v3[206],
    LODWORD(v62),
    1056769,
    2,
    5,
    1,
    -1,
    1,
    1,
    &dword_100AB448);
  v31[3] = sub_10047360;
  *((_WORD *)v31 + 61702) = 3;
  if ( dword_10A9D000 )
    v33 = getCaptionString(0x67u);
  else
    v33 = getCaptionString(0xCu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR))(v32 + 52))(v31, v33);
  dword_10AA29B8 = (int)v31;
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v34 = (_DWORD *)malloc(0x1E214u);
  if ( v34 )
    v35 = meth_100476C0(v34);
  else
    v35 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v35;
  if ( !v35 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v35 + 56))(
    v35,
    a1,
    1116864512,
    1129578496,
    1,
    2,
    5,
    1,
    22);
  v35[1] = sub_100407E0;
  v36 = *((_WORD *)v3 + 10) + 1;
  ++*((_WORD *)v35 + 5466);
  *((_WORD *)v35 + 5467) = v36;
  ++*((_WORD *)v3 + 10);
  v37 = (_DWORD *)malloc(0x1E214u);
  if ( v37 )
    v38 = meth_100476C0(v37);
  else
    v38 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v38;
  if ( !v38 )
    sub_1003E260(4);
  v39 = *v38;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v38 + 56))(
    v38,
    a1,
    v3[206],
    1133084672,
    1052673,
    2,
    5,
    1,
    -1);
  v38[1] = sub_1003FE80;
  *((_WORD *)v38 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v39 + 52))(v38, asc_100AD300, 1, 1, &unk_100AB4B8);
  ++*((_WORD *)v3 + 10);
  v40 = (_DWORD *)malloc(0x1E214u);
  if ( v40 )
    v41 = meth_100476C0(v40);
  else
    v41 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v41;
  if ( !v41 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v41 + 56))(
    v41,
    a1,
    1134723072,
    1116733440,
    1,
    2,
    5,
    1,
    17);
  v41[1] = sub_10040730;
  v42 = *((_WORD *)v3 + 10) + 1;
  ++*((_WORD *)v41 + 5466);
  *((_WORD *)v41 + 5467) = v42;
  ++*((_WORD *)v3 + 10);
  v43 = (_DWORD *)malloc(0x1E214u);
  if ( v43 )
    v44 = meth_100476C0(v43);
  else
    v44 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v44;
  if ( !v44 )
    sub_1003E260(4);
  v45 = *v44;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v44 + 56))(
    v44,
    a1,
    v3[206],
    1125646336,
    1052673,
    2,
    5,
    1,
    -1);
  v44[1] = sub_1003FA00;
  *((_WORD *)v44 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v45 + 52))(v44, asc_100AD300, 1, 1, &unk_100AB4A8);
  ++*((_WORD *)v3 + 10);
  v46 = (_DWORD *)malloc(0x1E214u);
  if ( v46 )
    v47 = meth_100476C0(v46);
  else
    v47 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v47;
  if ( !v47 )
    sub_1003E260(4);
  v48 = *v47;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v47 + 56))(
    v47,
    a1,
    1121189888,
    1116209152,
    20481,
    2,
    5,
    1,
    -1);
  v47[1] = sub_100408D0;
  *((_WORD *)v47 + 61702) = 5;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v48 + 52))(v47, ::a1, 1, 3, &unk_100AB458);
  ++*((_WORD *)v3 + 10);
  v49 = (_DWORD *)malloc(0x1E214u);
  if ( v49 )
    v50 = meth_100476C0(v49);
  else
    v50 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v50;
  if ( !v50 )
    sub_1003E260(4);
  v51 = *(_DWORD *)v50;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v50 + 56))(
    v50,
    a1,
    1121189888,
    1122369536,
    1048577,
    2,
    5,
    1,
    -1);
  v50[61702] = 3;
  v52 = getCaptionString(0x1Du);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v51 + 52))(v50, v52, 1, 1, &unk_100AB458);
  ++*((_WORD *)v3 + 10);
  v53 = (_DWORD *)malloc(0x1E214u);
  if ( v53 )
    v54 = meth_100476C0(v53);
  else
    v54 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v54;
  if ( !v54 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v54 + 56))(
    v54,
    a1,
    1138393088,
    1124925440,
    1,
    2,
    5,
    1,
    86);
  v54[1] = sub_1003F5E0;
  ++*((_WORD *)v3 + 10);
  v55 = (_DWORD *)malloc(0x1E214u);
  if ( v55 )
    v56 = meth_100476C0(v55);
  else
    v56 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v56;
  if ( !v56 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v56 + 56))(
    v56,
    a1,
    1139671040,
    1130364928,
    1,
    2,
    5,
    1,
    -1);
  v56[1] = sub_1003F680;
  ++*((_WORD *)v3 + 10);
  return 1;
}
// 1003FA00: using guessed type int __cdecl sub_1003FA00(int);
// 1003FE80: using guessed type int __cdecl sub_1003FE80(int);
// 10040730: using guessed type int __cdecl sub_10040730(int);
// 100407E0: using guessed type int __cdecl sub_100407E0(int);
// 10057C10: using guessed type int __cdecl sub_10057C10(int);
// 100AB448: using guessed type int dword_100AB448;
// 1022AF18: using guessed type int g_NetworkPlay;
// 10A9D000: using guessed type int dword_10A9D000;
// 10AA2884: using guessed type int dword_10AA2884;
// 10AA29B8: using guessed type int dword_10AA29B8;
