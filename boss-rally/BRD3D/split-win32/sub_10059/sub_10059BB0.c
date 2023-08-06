#include "../../types-win32.h"
//----- (10059BB0) --------------------------------------------------------
int __cdecl sub_10059BB0(int a1)
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
  LPCSTR v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // ebp
  __int16 v24; // cx
  _DWORD *v25; // eax
  _DWORD *v26; // ebp
  int v27; // ebx
  _DWORD *v28; // eax
  _DWORD *v29; // ebp
  __int16 v30; // ax
  _DWORD *v31; // eax
  _DWORD *v32; // ebp
  int v33; // ebx
  _DWORD *v34; // eax
  _DWORD *v35; // ebp
  __int16 v36; // ax
  _DWORD *v37; // eax
  _DWORD *v38; // ebp
  int v39; // ebx
  _DWORD *v40; // eax
  _DWORD *v41; // ebp
  int v42; // ebx
  _DWORD *v43; // eax
  _WORD *v44; // ebp
  int v45; // ebx
  LPCSTR v46; // eax
  _DWORD *v47; // eax
  _DWORD *v48; // ebp
  int v49; // ebx
  _DWORD *v50; // eax
  _WORD *v51; // ebp
  int v52; // ebx
  LPCSTR v53; // eax
  _DWORD *v54; // eax
  _DWORD *v55; // ebp
  int v56; // ebx
  _DWORD *v57; // eax
  _WORD *v58; // ebp
  int v59; // ebx
  LPCSTR v60; // eax
  float v62; // [esp+2E4h] [ebp-34h]
  float v63; // [esp+2E4h] [ebp-34h]

  (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(dword_10AA2908 + 196) + 4))(
    *(_DWORD *)(dword_10AA2908 + 196),
    aTimeattackGrf);
  *(_WORD *)(a1 + 18) = 0;
  dword_10AA28E8 = 0;
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 108) = 1;
  v1 = (_DWORD *)malloc(0x348u);
  if ( v1 )
    v2 = meth_10048470(v1);
  else
    v2 = 0;
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v2;
  if ( !v2 )
    sub_1003E260(4);
  ++*(_WORD *)(a1 + 16);
  v2[208] = a1;
  v2[4] = 0;
  v2[206] = 1128464384;
  v2[207] = 1121845248;
  v3 = (_DWORD *)malloc(0x1E214u);
  if ( v3 )
    v4 = meth_100476C0(v3);
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
  v5 = (_DWORD *)malloc(0x1E214u);
  if ( v5 )
    v6 = meth_100476C0(v5);
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
  v8 = getCaptionString(0x6Eu);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v7 + 52))(v6, v8, 1, 1, &unk_100AB508);
  ++*((_WORD *)v2 + 10);
  v9 = (_DWORD *)malloc(0x1E214u);
  if ( v9 )
    v10 = meth_100476C0(v9);
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
  v10[1] = sub_1003EAE0;
  v10[30845] = 1;
  (*(void (__thiscall **)(_DWORD *, int, void *, int, _DWORD, int))(v11 + 20))(
    v10 + 3598,
    262145,
    &unk_100AB4D8,
    5,
    0,
    -1);
  v10[3599] = sub_10042880;
  for ( i = 0; i < 26000; i += 260 )
  {
    if ( *(_DWORD *)(dword_10AA2908 + 196) + i != -4 )
      (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, void *, int))(*v12 + 16))(
        v12,
        *(_DWORD *)(dword_10AA2908 + 196) + i + 4,
        0,
        1,
        &unk_100AB4D8,
        1);
  }
  ++*((_WORD *)v2 + 10);
  ++*((_WORD *)v2 + 418);
  v14 = (_DWORD *)malloc(0x1E214u);
  if ( v14 )
    v15 = meth_100476C0(v14);
  else
    v15 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v15;
  if ( !v15 )
    sub_1003E260(4);
  v16 = *v15;
  v62 = *((float *)v2 + 207) - -114.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v15 + 56))(
    v15,
    a1,
    v2[206],
    LODWORD(v62),
    1060881,
    2,
    5,
    1,
    -1);
  v15[3] = sub_10047360;
  v15[2] = sub_10046380;
  v15[1] = sub_100418F0;
  *((_WORD *)v15 + 61702) = 2;
  v17 = getCaptionString(0x1Eu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, _DWORD, int *))(v16 + 52))(v15, v17, 1, 0, &dword_100AB448);
  ++*((_WORD *)v2 + 10);
  ++*((_WORD *)v2 + 418);
  v18 = (_DWORD *)malloc(0x1E214u);
  if ( v18 )
    v19 = meth_100476C0(v18);
  else
    v19 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v19;
  if ( !v19 )
    sub_1003E260(4);
  v20 = *v19;
  v63 = *((float *)v2 + 207) - -133.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v19 + 56))(
    v19,
    a1,
    v2[206],
    LODWORD(v63),
    1056769,
    2,
    5,
    1,
    -1);
  v19[3] = sub_10047360;
  v19[2] = sub_10044DE0;
  *((_WORD *)v19 + 61702) = 3;
  v21 = getCaptionString(0xCu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v20 + 52))(v19, v21, 1, 1, &dword_100AB448);
  ++*((_WORD *)v2 + 10);
  ++*((_WORD *)v2 + 418);
  v22 = (_DWORD *)malloc(0x1E214u);
  if ( v22 )
    v23 = meth_100476C0(v22);
  else
    v23 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v23;
  if ( !v23 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v23 + 56))(
    v23,
    a1,
    1138425856,
    1123418112,
    1,
    2,
    5,
    1,
    17);
  v23[1] = sub_100407A0;
  v24 = *((_WORD *)v2 + 10) + 1;
  ++*((_WORD *)v23 + 5466);
  *((_WORD *)v23 + 5467) = v24;
  ++*((_WORD *)v2 + 10);
  v25 = (_DWORD *)malloc(0x1E214u);
  if ( v25 )
    v26 = meth_100476C0(v25);
  else
    v26 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v26;
  if ( !v26 )
    sub_1003E260(4);
  v27 = *v26;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v26 + 56))(
    v26,
    a1,
    v2[206],
    1127546880,
    1052673,
    2,
    5,
    1,
    -1);
  v26[1] = sub_1003FA00;
  *((_WORD *)v26 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v27 + 52))(v26, asc_100AD300, 1, 1, &unk_100AB488);
  ++*((_WORD *)v2 + 10);
  v28 = (_DWORD *)malloc(0x1E214u);
  if ( v28 )
    v29 = meth_100476C0(v28);
  else
    v29 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v29;
  if ( !v29 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v29 + 56))(
    v29,
    a1,
    1135181824,
    1116471296,
    1,
    2,
    5,
    1,
    11);
  v29[1] = sub_1003F720;
  v30 = *((_WORD *)v2 + 10) + 1;
  ++*((_WORD *)v29 + 5466);
  *((_WORD *)v29 + 5467) = v30;
  ++*((_WORD *)v2 + 10);
  v31 = (_DWORD *)malloc(0x1E214u);
  if ( v31 )
    v32 = meth_100476C0(v31);
  else
    v32 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v32;
  if ( !v32 )
    sub_1003E260(4);
  v33 = *v32;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v32 + 56))(
    v32,
    a1,
    v2[206],
    1124663296,
    1052673,
    2,
    5,
    1,
    -1);
  v32[1] = sub_1003F760;
  *((_WORD *)v32 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v33 + 52))(v32, asc_100AD300, 1, 1, &unk_100AB468);
  ++*((_WORD *)v2 + 10);
  v34 = (_DWORD *)malloc(0x1E214u);
  if ( v34 )
    v35 = meth_100476C0(v34);
  else
    v35 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v35;
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
  v36 = *((_WORD *)v2 + 10) + 1;
  ++*((_WORD *)v35 + 5466);
  *((_WORD *)v35 + 5467) = v36;
  ++*((_WORD *)v2 + 10);
  v37 = (_DWORD *)malloc(0x1E214u);
  if ( v37 )
    v38 = meth_100476C0(v37);
  else
    v38 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v38;
  if ( !v38 )
    sub_1003E260(4);
  v39 = *v38;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v38 + 56))(
    v38,
    a1,
    v2[206],
    1133084672,
    1052673,
    2,
    5,
    1,
    -1);
  v38[1] = sub_1003FE80;
  *((_WORD *)v38 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v39 + 52))(v38, asc_100AD300, 1, 1, &unk_100AB4B8);
  ++*((_WORD *)v2 + 10);
  v40 = (_DWORD *)malloc(0x1E214u);
  if ( v40 )
    v41 = meth_100476C0(v40);
  else
    v41 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v41;
  if ( !v41 )
    sub_1003E260(4);
  v42 = *v41;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v41 + 56))(
    v41,
    a1,
    1121189888,
    1116209152,
    20481,
    2,
    5,
    1,
    -1);
  v41[1] = sub_100408D0;
  *((_WORD *)v41 + 61702) = 5;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v42 + 52))(v41, ::a1, 1, 3, &unk_100AB458);
  ++*((_WORD *)v2 + 10);
  v43 = (_DWORD *)malloc(0x1E214u);
  if ( v43 )
    v44 = meth_100476C0(v43);
  else
    v44 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v44;
  if ( !v44 )
    sub_1003E260(4);
  v45 = *(_DWORD *)v44;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v44 + 56))(
    v44,
    a1,
    1121189888,
    1122369536,
    1048577,
    2,
    5,
    1,
    -1);
  v44[61702] = 3;
  v46 = getCaptionString(0x1Du);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v45 + 52))(v44, v46, 1, 1, &unk_100AB458);
  ++*((_WORD *)v2 + 10);
  v47 = (_DWORD *)malloc(0x1E214u);
  if ( v47 )
    v48 = meth_100476C0(v47);
  else
    v48 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v48;
  if ( !v48 )
    sub_1003E260(4);
  v49 = *v48;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v48 + 56))(
    v48,
    a1,
    1138491392,
    1129316352,
    1052673,
    2,
    5,
    1,
    -1);
  v48[1] = sub_10041040;
  *((_WORD *)v48 + 61702) = 52;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v49 + 52))(v48, asc_100AD300, 1, 4, &unk_100AB478);
  ++*((_WORD *)v2 + 10);
  v50 = (_DWORD *)malloc(0x1E214u);
  if ( v50 )
    v51 = meth_100476C0(v50);
  else
    v51 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v51;
  if ( !v51 )
    sub_1003E260(4);
  v52 = *(_DWORD *)v51;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v51 + 56))(
    v51,
    a1,
    1138491392,
    1130364928,
    1048577,
    2,
    5,
    1,
    -1);
  v51[61702] = 3;
  v53 = getCaptionString(0x6Fu);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v52 + 52))(v51, v53, 1, 1, &unk_100AB478);
  ++*((_WORD *)v2 + 10);
  v54 = (_DWORD *)malloc(0x1E214u);
  if ( v54 )
    v55 = meth_100476C0(v54);
  else
    v55 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v55;
  if ( !v55 )
    sub_1003E260(4);
  v56 = *v55;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v55 + 56))(
    v55,
    a1,
    1138491392,
    1131413504,
    1052673,
    2,
    5,
    1,
    -1);
  v55[1] = sub_10041180;
  *((_WORD *)v55 + 61702) = 52;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v56 + 52))(v55, asc_100AD300, 1, 4, &unk_100AB478);
  ++*((_WORD *)v2 + 10);
  v57 = (_DWORD *)malloc(0x1E214u);
  if ( v57 )
    v58 = meth_100476C0(v57);
  else
    v58 = 0;
  v2[*((unsigned __int16 *)v2 + 10) + 6] = v58;
  if ( !v58 )
    sub_1003E260(4);
  v59 = *(_DWORD *)v58;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v58 + 56))(
    v58,
    a1,
    1138491392,
    1132462080,
    1048577,
    2,
    5,
    1,
    -1);
  v58[61702] = 3;
  v60 = getCaptionString(0x3Fu);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v59 + 52))(v58, v60, 1, 1, &unk_100AB478);
  ++*((_WORD *)v2 + 10);
  return 1;
}
// 1003F720: using guessed type int __cdecl sub_1003F720(int);
// 1003F760: using guessed type int __cdecl sub_1003F760(int);
// 1003FA00: using guessed type int __cdecl sub_1003FA00(int);
// 1003FE80: using guessed type int __cdecl sub_1003FE80(int);
// 100407E0: using guessed type int __cdecl sub_100407E0(int);
// 10059BB0: using guessed type int __cdecl sub_10059BB0(int);
// 100AB448: using guessed type int dword_100AB448;
// 10AA28E8: using guessed type int dword_10AA28E8;
// 10AA2908: using guessed type int dword_10AA2908;
