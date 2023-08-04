#include "../../types-win32.h"
//----- (1004E830) --------------------------------------------------------
int __cdecl sub_1004E830(int a1)
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
  __int16 v46; // ax
  _DWORD *v47; // eax
  _DWORD *v48; // ebp
  int v49; // ebx
  _DWORD *v50; // eax
  _DWORD *v51; // ebp
  __int16 v52; // ax
  _DWORD *v53; // eax
  _DWORD *v54; // ebp
  int v55; // ebx
  float v57; // [esp+278h] [ebp-34h]
  float v58; // [esp+278h] [ebp-34h]
  float v59; // [esp+278h] [ebp-34h]
  float v60; // [esp+278h] [ebp-34h]
  int v61; // [esp+288h] [ebp-24h]

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
  v9 = getCaptionString(0x22u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v8 + 52))(v7, v9, 1, 1, &unk_100AB508);
  ++*((_WORD *)v3 + 10);
  sub_100795D0();
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
    MEMORY[0x118ABDBC] != 0 ? 1056769 : 1056785,
    2,
    5,
    1,
    -1);
  v11[3] = sub_10047360;
  v11[2] = sub_10043590;
  if ( MEMORY[0x118ABDBC] )
  {
    *((_WORD *)v11 + 61702) = 3;
    v61 = 1;
  }
  else
  {
    *((_WORD *)v11 + 61702) = 2;
    v61 = 0;
  }
  v13 = getCaptionString(0x30u);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v12 + 52))(v11, v13, 1, v61, &dword_100AB448);
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
  v57 = *((float *)v3 + 207) - -19.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v15 + 56))(
    v15,
    a1,
    v3[206],
    LODWORD(v57),
    1056769,
    2,
    5,
    1,
    -1);
  v15[3] = sub_10047360;
  v15[2] = sub_100435F0;
  *((_WORD *)v15 + 61702) = 3;
  v17 = getCaptionString(0x31u);
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
  v58 = *((float *)v3 + 207) - -38.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v19 + 56))(
    v19,
    a1,
    v3[206],
    LODWORD(v58),
    1056769,
    2,
    5,
    1,
    -1);
  v19[3] = sub_10047360;
  v19[2] = sub_100436B0;
  *((_WORD *)v19 + 61702) = 3;
  v21 = getCaptionString(0x32u);
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
  v59 = *((float *)v3 + 207) - -57.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v23 + 56))(
    v23,
    a1,
    v3[206],
    LODWORD(v59),
    1056769,
    2,
    5,
    1,
    -1);
  v23[3] = sub_10047360;
  v23[2] = sub_10043650;
  *((_WORD *)v23 + 61702) = 3;
  v25 = getCaptionString(0x33u);
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
  v60 = *((float *)v3 + 207) - -114.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v27 + 56))(
    v27,
    a1,
    v3[206],
    LODWORD(v60),
    1056769,
    2,
    5,
    1,
    -1);
  v27[3] = sub_10047360;
  v27[2] = sub_10046710;
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
    1135083520,
    1111490560,
    1,
    2,
    5,
    1,
    97);
  v33[1] = sub_10040950;
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
    1126563840,
    1052673,
    2,
    5,
    1,
    -1);
  v36[1] = sub_1003FCB0;
  *((_WORD *)v36 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v37 + 52))(v36, asc_100AD300, 1, 1, &unk_100AB4C8);
  ++*((_WORD *)v3 + 10);
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
    1116078080,
    1128726528,
    1,
    2,
    5,
    1,
    140);
  v39[1] = sub_10040990;
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
    1133215744,
    1052673,
    2,
    5,
    1,
    -1);
  v42[1] = sub_1003FD30;
  *((_WORD *)v42 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v43 + 52))(v42, asc_100AD300, 1, 1, &unk_100AB4B8);
  ++*((_WORD *)v3 + 10);
  v44 = (_DWORD *)malloc(0x1E214u);
  if ( v44 )
    v45 = sub_100476C0(v44);
  else
    v45 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v45;
  if ( !v45 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v45 + 56))(
    v45,
    a1,
    1138491392,
    1122238464,
    1,
    2,
    5,
    1,
    101);
  v45[1] = sub_100409D0;
  v46 = *((_WORD *)v3 + 10) + 1;
  ++*((_WORD *)v45 + 5466);
  *((_WORD *)v45 + 5467) = v46;
  ++*((_WORD *)v3 + 10);
  v47 = (_DWORD *)malloc(0x1E214u);
  if ( v47 )
    v48 = sub_100476C0(v47);
  else
    v48 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v48;
  if ( !v48 )
    sub_1003E260(4);
  v49 = *v48;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v48 + 56))(
    v48,
    a1,
    v3[206],
    1128529920,
    1052673,
    2,
    5,
    1,
    -1);
  v48[1] = sub_1003FE10;
  *((_WORD *)v48 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v49 + 52))(v48, asc_100AD300, 1, 1, &unk_100AB488);
  ++*((_WORD *)v3 + 10);
  v50 = (_DWORD *)malloc(0x1E214u);
  if ( v50 )
    v51 = sub_100476C0(v50);
  else
    v51 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v51;
  if ( !v51 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v51 + 56))(
    v51,
    a1,
    1139933184,
    1129709568,
    1,
    2,
    5,
    1,
    99);
  v51[1] = sub_100409B0;
  v52 = *((_WORD *)v3 + 10) + 1;
  ++*((_WORD *)v51 + 5466);
  *((_WORD *)v51 + 5467) = v52;
  ++*((_WORD *)v3 + 10);
  v53 = (_DWORD *)malloc(0x1E214u);
  if ( v53 )
    v54 = sub_100476C0(v53);
  else
    v54 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v54;
  if ( !v54 )
    sub_1003E260(4);
  v55 = *v54;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v54 + 56))(
    v54,
    a1,
    v3[206],
    1133019136,
    1052673,
    2,
    5,
    1,
    -1);
  v54[1] = sub_1003FDA0;
  *((_WORD *)v54 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v55 + 52))(v54, asc_100AD300, 1, 1, &unk_100AB478);
  ++*((_WORD *)v3 + 10);
  return 1;
}
// 1004E830: using guessed type int __cdecl sub_1004E830(int);
// 100AB448: using guessed type int dword_100AB448;
// 10AA29C8: using guessed type int dword_10AA29C8;
// 118ABDBC: using guessed type int dword_118ABDBC;
