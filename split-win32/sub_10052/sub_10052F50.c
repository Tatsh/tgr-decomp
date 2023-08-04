#include "../../types-win32.h"
//----- (10052F50) --------------------------------------------------------
int __cdecl sub_10052F50(int a1)
{
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
  _DWORD *v33; // eax
  _DWORD *v34; // ebp
  __int64 v35; // rax
  _DWORD *v36; // eax
  _DWORD *v37; // ebp
  __int64 v38; // rax
  _DWORD *v39; // eax
  _WORD *v40; // ebp
  int v41; // ebx
  LPCSTR v42; // eax
  _DWORD *v43; // eax
  _DWORD *v44; // ebp
  int v45; // ebx
  _DWORD *v46; // eax
  _DWORD *v47; // ebp
  __int16 v48; // cx
  _DWORD *v49; // eax
  _DWORD *v50; // ebp
  int v51; // ebx
  _DWORD *v52; // eax
  _DWORD *v53; // ebp
  __int16 v54; // ax
  _DWORD *v55; // eax
  _DWORD *v56; // ebp
  int v57; // ebx
  _DWORD *v58; // eax
  _WORD *v59; // ebp
  int v60; // ebx
  LPCSTR v61; // eax
  _DWORD *v62; // eax
  _DWORD *v63; // ebp
  int v64; // ebx
  _DWORD *v65; // eax
  _WORD *v66; // ebp
  int v67; // ebx
  LPCSTR v68; // eax
  _DWORD *v69; // eax
  _DWORD *v70; // ebp
  int v71; // ebx
  float v73; // [esp+32Ch] [ebp-40h]
  float v74; // [esp+32Ch] [ebp-40h]
  float v75; // [esp+32Ch] [ebp-40h]
  float v76; // [esp+32Ch] [ebp-40h]
  float v77; // [esp+354h] [ebp-18h]
  int v78; // [esp+358h] [ebp-14h]
  int v79; // [esp+35Ch] [ebp-10h]
  float v80; // [esp+370h] [ebp+4h]
  float v81; // [esp+370h] [ebp+4h]
  float v82; // [esp+370h] [ebp+4h]

  *(_WORD *)(a1 + 18) = 0;
  dword_10AA28AC = dword_10AA28A4;
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 108) = 1;
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
  v3[1] = sub_100409F0;
  v3[2] = sub_10040A20;
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
  v9 = getCaptionString(0x47u);
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
  v11[2] = sub_100412C0;
  *((_WORD *)v11 + 61702) = 3;
  v13 = getCaptionString(0x48u);
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
  v73 = *((float *)v3 + 207) - -19.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v15 + 56))(
    v15,
    a1,
    v3[206],
    LODWORD(v73),
    1056769,
    2,
    5,
    1,
    -1);
  v15[3] = sub_10047360;
  v15[2] = sub_100412D0;
  *((_WORD *)v15 + 61702) = 3;
  v17 = getCaptionString(0x49u);
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
  v74 = *((float *)v3 + 207) - -38.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v19 + 56))(
    v19,
    a1,
    v3[206],
    LODWORD(v74),
    1056769,
    2,
    5,
    1,
    -1);
  v19[3] = sub_10047360;
  v19[2] = sub_100412E0;
  *((_WORD *)v19 + 61702) = 3;
  v21 = getCaptionString(0x4Au);
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
  v75 = *((float *)v3 + 207) - -57.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v23 + 56))(
    v23,
    a1,
    v3[206],
    LODWORD(v75),
    1056769,
    2,
    5,
    1,
    -1);
  v23[3] = sub_10047360;
  v23[2] = sub_100412F0;
  *((_WORD *)v23 + 61702) = 3;
  v25 = getCaptionString(0x4Bu);
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
  v76 = *((float *)v3 + 207) - -95.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v27 + 56))(
    v27,
    a1,
    v3[206],
    LODWORD(v76),
    1056769,
    2,
    5,
    1,
    -1);
  v27[3] = sub_10047360;
  v27[2] = sub_10045F70;
  *((_WORD *)v27 + 61702) = 3;
  v29 = getCaptionString(0x1Eu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v28 + 52))(v27, v29, 1, 1, &dword_100AB448);
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v77 = (float)dword_100AB428;
  v80 = (float)dword_100AB42C;
  v30 = (_DWORD *)malloc(0x1E214u);
  if ( v30 )
    v31 = sub_100476C0(v30);
  else
    v31 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v31;
  if ( !v31 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, float, float, int, int, int, int, int))(*v31 + 56))(
    v31,
    a1,
    COERCE_FLOAT(LODWORD(v77)),
    COERCE_FLOAT(LODWORD(v80)),
    4202497,
    2,
    5,
    1,
    120);
  v31[3] = sub_10047360;
  v31[2] = sub_10045820;
  v79 = (__int64)v80;
  v31[21] = v79;
  v32 = (__int64)v77;
  v31[20] = v32;
  v31[22] = v32 + 127;
  v31[23] = v79 + 33;
  v31[2650] = 0;
  v81 = v80 - -33.0;
  *((_WORD *)v31 + 5409) = 121;
  ++*((_WORD *)v3 + 10);
  v78 = v32 + 127;
  v33 = (_DWORD *)malloc(0x1E214u);
  if ( v33 )
    v34 = sub_100476C0(v33);
  else
    v34 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v34;
  if ( !v34 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, float, float, int, int, int, int, int))(*v34 + 56))(
    v34,
    a1,
    COERCE_FLOAT(LODWORD(v77)),
    COERCE_FLOAT(LODWORD(v81)),
    4202497,
    2,
    5,
    1,
    82);
  v34[3] = sub_10047360;
  v34[2] = sub_10043FA0;
  v35 = (__int64)v81;
  v34[21] = v35;
  v34[20] = v32;
  v34[22] = v78;
  v34[23] = v35 + 33;
  v82 = v81 - -33.0;
  v34[2650] = 0;
  *((_WORD *)v34 + 5409) = 83;
  ++*((_WORD *)v3 + 10);
  v36 = (_DWORD *)malloc(0x1E214u);
  if ( v36 )
    v37 = sub_100476C0(v36);
  else
    v37 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v37;
  if ( !v37 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, float, float, int, int, int, int, int))(*v37 + 56))(
    v37,
    a1,
    COERCE_FLOAT(LODWORD(v77)),
    COERCE_FLOAT(LODWORD(v82)),
    4202497,
    2,
    5,
    1,
    84);
  v37[3] = sub_10047360;
  v37[2] = sub_10045800;
  v38 = (__int64)v82;
  v37[21] = v38;
  v37[20] = v32;
  v37[22] = v78;
  v37[23] = v38 + 33;
  v37[2650] = 0;
  *((_WORD *)v37 + 5409) = 85;
  ++*((_WORD *)v3 + 10);
  v39 = (_DWORD *)malloc(0x1E214u);
  if ( v39 )
    v40 = sub_100476C0(v39);
  else
    v40 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v40;
  if ( !v40 )
    sub_1003E260(4);
  v41 = *(_DWORD *)v40;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v40 + 56))(
    v40,
    a1,
    1121189888,
    1123418112,
    1048577,
    2,
    5,
    1,
    -1);
  v40[61702] = 3;
  v42 = getCaptionString(0x4Cu);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v41 + 52))(v40, v42, 1, 1, &unk_100AB458);
  ++*((_WORD *)v3 + 10);
  v43 = (_DWORD *)malloc(0x1E214u);
  if ( v43 )
    v44 = sub_100476C0(v43);
  else
    v44 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v44;
  if ( !v44 )
    sub_1003E260(4);
  v45 = *v44;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v44 + 56))(
    v44,
    a1,
    1138491392,
    1117650944,
    20481,
    2,
    5,
    1,
    -1);
  v44[1] = sub_1003E8D0;
  *((_WORD *)v44 + 61702) = 5;
  (*(void (__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v45 + 52))(v44, String2, 1, 3, &unk_100AB458);
  ++*((_WORD *)v3 + 10);
  v46 = (_DWORD *)malloc(0x1E214u);
  if ( v46 )
    v47 = sub_100476C0(v46);
  else
    v47 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v47;
  if ( !v47 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v47 + 56))(
    v47,
    a1,
    1116864512,
    1129578496,
    1,
    2,
    5,
    1,
    22);
  v47[1] = sub_100407E0;
  v48 = *((_WORD *)v3 + 10) + 1;
  ++*((_WORD *)v47 + 5466);
  *((_WORD *)v47 + 5467) = v48;
  ++*((_WORD *)v3 + 10);
  v49 = (_DWORD *)malloc(0x1E214u);
  if ( v49 )
    v50 = sub_100476C0(v49);
  else
    v50 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v50;
  if ( !v50 )
    sub_1003E260(4);
  v51 = *v50;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v50 + 56))(
    v50,
    a1,
    v3[206],
    1133084672,
    1052673,
    2,
    5,
    1,
    -1);
  v50[1] = sub_1003FE80;
  *((_WORD *)v50 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v51 + 52))(v50, asc_100AD300, 1, 1, &unk_100AB4B8);
  ++*((_WORD *)v3 + 10);
  v52 = (_DWORD *)malloc(0x1E214u);
  if ( v52 )
    v53 = sub_100476C0(v52);
  else
    v53 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v53;
  if ( !v53 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v53 + 56))(
    v53,
    a1,
    1134723072,
    1116733440,
    1,
    2,
    5,
    1,
    17);
  v53[1] = sub_10040730;
  v54 = *((_WORD *)v3 + 10) + 1;
  ++*((_WORD *)v53 + 5466);
  *((_WORD *)v53 + 5467) = v54;
  ++*((_WORD *)v3 + 10);
  v55 = (_DWORD *)malloc(0x1E214u);
  if ( v55 )
    v56 = sub_100476C0(v55);
  else
    v56 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v56;
  if ( !v56 )
    sub_1003E260(4);
  v57 = *v56;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v56 + 56))(
    v56,
    a1,
    v3[206],
    1125646336,
    1052673,
    2,
    5,
    1,
    -1);
  v56[1] = sub_1003FA00;
  *((_WORD *)v56 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v57 + 52))(v56, asc_100AD300, 1, 1, &unk_100AB4A8);
  ++*((_WORD *)v3 + 10);
  v58 = (_DWORD *)malloc(0x1E214u);
  if ( v58 )
    v59 = sub_100476C0(v58);
  else
    v59 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v59;
  if ( !v59 )
    sub_1003E260(4);
  v60 = *(_DWORD *)v59;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v59 + 56))(
    v59,
    a1,
    1138819072,
    1127809024,
    1048585,
    2,
    5,
    1,
    -1);
  v59[61702] = 3;
  v61 = getCaptionString(0x4Du);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v60 + 52))(v59, v61, 1, 1, &unk_100AB4F8);
  ++*((_WORD *)v3 + 10);
  v62 = (_DWORD *)malloc(0x1E214u);
  if ( v62 )
    v63 = sub_100476C0(v62);
  else
    v63 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v63;
  if ( !v63 )
    sub_1003E260(4);
  v64 = *v63;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v63 + 56))(
    v63,
    a1,
    1138819072,
    1126563840,
    20481,
    2,
    5,
    1,
    -1);
  v63[1] = sub_10040EE0;
  *((_WORD *)v63 + 61702) = 52;
  (*(void (__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v64 + 52))(v63, String2, 1, 4, &unk_100AB4F8);
  ++*((_WORD *)v3 + 10);
  v65 = (_DWORD *)malloc(0x1E214u);
  if ( v65 )
    v66 = sub_100476C0(v65);
  else
    v66 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v66;
  if ( !v66 )
    sub_1003E260(4);
  v67 = *(_DWORD *)v66;
  (*(void (__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v66 + 56))(
    v66,
    a1,
    v3[206],
    1132527616,
    1048585,
    2,
    5,
    1,
    -1);
  v66[61702] = 3;
  v68 = getCaptionString(0x40u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v67 + 52))(v66, v68, 1, 1, &unk_100AB478);
  ++*((_WORD *)v3 + 10);
  v69 = (_DWORD *)malloc(0x1E214u);
  if ( v69 )
    v70 = sub_100476C0(v69);
  else
    v70 = 0;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v70;
  if ( !v70 )
    sub_1003E260(4);
  v71 = *v70;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v70 + 56))(
    v70,
    a1,
    1138819072,
    1129512960,
    20481,
    2,
    5,
    1,
    -1);
  v70[1] = sub_1003EA90;
  *((_WORD *)v70 + 61702) = 5;
  (*(void (__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v71 + 52))(v70, String2, 1, 3, &unk_100AB478);
  ++*((_WORD *)v3 + 10);
  return 1;
}
// 1003E8D0: using guessed type int __cdecl sub_1003E8D0(int);
// 1003EA90: using guessed type int __cdecl sub_1003EA90(int);
// 1003FA00: using guessed type int __cdecl sub_1003FA00(int);
// 1003FE80: using guessed type int __cdecl sub_1003FE80(int);
// 10040730: using guessed type int __cdecl sub_10040730(int);
// 100407E0: using guessed type int __cdecl sub_100407E0(int);
// 100409F0: using guessed type int sub_100409F0();
// 10040A20: using guessed type int sub_10040A20();
// 10043FA0: using guessed type int __cdecl sub_10043FA0(int);
// 10052F50: using guessed type int __cdecl sub_10052F50(int);
// 100AB428: using guessed type int dword_100AB428;
// 100AB42C: using guessed type int dword_100AB42C;
// 100AB448: using guessed type int dword_100AB448;
// 10AA28A4: using guessed type int dword_10AA28A4;
// 10AA28AC: using guessed type int dword_10AA28AC;
