//----- (10052030) --------------------------------------------------------
int __cdecl sub_10052030(int a1)
{
  unsigned __int16 v2; // ax
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // ebp
  _DWORD *v7; // eax
  _WORD *v8; // ebp
  int v9; // ebx
  LPCSTR v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // ebp
  int v13; // ebx
  LPCSTR v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // ebp
  int v17; // ebx
  LPCSTR v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // ebp
  int v21; // ebx
  LPCSTR v22; // eax
  _DWORD *v23; // eax
  _DWORD *v24; // ebp
  int v25; // ebx
  _DWORD *v26; // eax
  _DWORD *v27; // ebp
  __int64 v28; // rax
  _DWORD *v29; // eax
  _DWORD *v30; // ebp
  __int64 v31; // rax
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
  _WORD *v45; // ebp
  int v46; // ebx
  LPCSTR v47; // eax
  _DWORD *v48; // eax
  _WORD *v49; // ebp
  int v50; // ebx
  LPCSTR v51; // eax
  _DWORD *v52; // eax
  _DWORD *v53; // ebp
  int v54; // ebx
  _DWORD *v55; // eax
  _WORD *v56; // ebp
  int v57; // ebx
  LPCSTR v58; // eax
  _DWORD *v59; // eax
  _WORD *v60; // ebp
  int v61; // ebx
  LPCSTR v62; // eax
  _DWORD *v63; // eax
  _DWORD *v64; // ebp
  int v65; // ebx
  _DWORD *v66; // eax
  _WORD *v67; // ebp
  int v68; // ebx
  LPCSTR v69; // eax
  _DWORD *v70; // eax
  _DWORD *v71; // ebp
  int v72; // ebx
  _DWORD *v73; // eax
  _WORD *v74; // ebp
  int v75; // ebx
  LPCSTR v76; // eax
  _DWORD *v77; // eax
  _DWORD *v78; // ebp
  int v79; // ebx
  _DWORD *v80; // eax
  _DWORD *v81; // ebp
  int v82; // ebx
  float v84; // [esp+3C0h] [ebp-40h]
  float v85; // [esp+3C0h] [ebp-40h]
  float v86; // [esp+3C0h] [ebp-40h]
  float v87; // [esp+3C0h] [ebp-40h]
  float v88; // [esp+3E8h] [ebp-18h]
  int v89; // [esp+3ECh] [ebp-14h]
  int v90; // [esp+3F0h] [ebp-10h]
  float v91; // [esp+404h] [ebp+4h]
  float v92; // [esp+404h] [ebp+4h]
  float v93; // [esp+404h] [ebp+4h]

  v2 = *(_WORD *)(a1 + 16);
  *(_WORD *)(a1 + 18) = 0;
  *(_DWORD *)(a1 + 4 * v2 + 108) = 1;
  v3 = (_DWORD *)operator new(0x348u);
  if ( v3 )
    v4 = sub_10048470(v3);
  else
    v4 = 0;
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v4;
  if ( !v4 )
    sub_1003E260(4);
  ++*(_WORD *)(a1 + 16);
  v4[208] = a1;
  v4[4] = 0;
  v4[206] = 1128464384;
  v4[207] = 1124204544;
  v5 = (_DWORD *)operator new(0x1E214u);
  if ( v5 )
    v6 = sub_100476C0(v5);
  else
    v6 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v6;
  if ( !v6 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))(*v6 + 56))(
    v6,
    a1,
    0,
    0,
    9,
    2,
    5,
    0,
    0);
  ++*((_WORD *)v4 + 10);
  v7 = (_DWORD *)operator new(0x1E214u);
  if ( v7 )
    v8 = sub_100476C0(v7);
  else
    v8 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v8;
  if ( !v8 )
    sub_1003E260(4);
  v9 = *(_DWORD *)v8;
  (*(void (__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v8 + 56))(
    v8,
    a1,
    v4[206],
    1092616192,
    1048585,
    2,
    5,
    1,
    -1);
  v8[61702] = 3;
  v10 = getCaptionString(0x44u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v9 + 52))(v8, v10, 1, 1, &unk_100AB508);
  ++*((_WORD *)v4 + 10);
  v11 = (_DWORD *)operator new(0x1E214u);
  if ( v11 )
    v12 = sub_100476C0(v11);
  else
    v12 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v12;
  if ( !v12 )
    sub_1003E260(4);
  v13 = *v12;
  v84 = *((float *)v4 + 207) - -19.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v12 + 56))(
    v12,
    a1,
    v4[206],
    LODWORD(v84),
    1056769,
    2,
    5,
    1,
    -1);
  v12[3] = sub_10047360;
  v12[2] = sub_10047340;
  *((_WORD *)v12 + 61702) = 3;
  v14 = getCaptionString(0x45u);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v13 + 52))(v12, v14, 1, 1, &dword_100AB448);
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v15 = (_DWORD *)operator new(0x1E214u);
  if ( v15 )
    v16 = sub_100476C0(v15);
  else
    v16 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v16;
  if ( !v16 )
    sub_1003E260(4);
  v17 = *v16;
  v85 = *((float *)v4 + 207) - -95.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v16 + 56))(
    v16,
    a1,
    v4[206],
    LODWORD(v85),
    1056769,
    2,
    5,
    1,
    -1);
  v16[3] = sub_10047360;
  v16[2] = sub_10045050;
  *((_WORD *)v16 + 61702) = 2;
  v18 = getCaptionString(0x1Eu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, _DWORD, int *))(v17 + 52))(v16, v18, 1, 0, &dword_100AB448);
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v19 = (_DWORD *)operator new(0x1E214u);
  if ( v19 )
    v20 = sub_100476C0(v19);
  else
    v20 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v20;
  if ( !v20 )
    sub_1003E260(4);
  v21 = *v20;
  v86 = *((float *)v4 + 207) - -114.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v20 + 56))(
    v20,
    a1,
    v4[206],
    LODWORD(v86),
    1056769,
    2,
    5,
    1,
    -1);
  v20[3] = sub_10047360;
  v20[2] = sub_10047060;
  *((_WORD *)v20 + 61702) = 3;
  v22 = getCaptionString(0xCu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v21 + 52))(v20, v22, 1, 1, &dword_100AB448);
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v88 = (float)dword_100AB428;
  v91 = (float)dword_100AB42C;
  v23 = (_DWORD *)operator new(0x1E214u);
  if ( v23 )
    v24 = sub_100476C0(v23);
  else
    v24 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v24;
  if ( !v24 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, float, float, int, int, int, int, int))(*v24 + 56))(
    v24,
    a1,
    COERCE_FLOAT(LODWORD(v88)),
    COERCE_FLOAT(LODWORD(v91)),
    4202497,
    2,
    5,
    1,
    120);
  v24[3] = sub_10047360;
  v24[2] = sub_100457E0;
  v90 = (__int64)v91;
  v24[21] = v90;
  v25 = (__int64)v88;
  v24[20] = v25;
  v24[22] = v25 + 127;
  v24[23] = v90 + 33;
  v24[2650] = 0;
  v92 = v91 - -33.0;
  *((_WORD *)v24 + 5409) = 121;
  ++*((_WORD *)v4 + 10);
  v89 = v25 + 127;
  v26 = (_DWORD *)operator new(0x1E214u);
  if ( v26 )
    v27 = sub_100476C0(v26);
  else
    v27 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v27;
  if ( !v27 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, float, float, int, int, int, int, int))(*v27 + 56))(
    v27,
    a1,
    COERCE_FLOAT(LODWORD(v88)),
    COERCE_FLOAT(LODWORD(v92)),
    4202497,
    2,
    5,
    1,
    82);
  v27[3] = sub_10047360;
  v27[2] = sub_10043FA0;
  v28 = (__int64)v92;
  v27[21] = v28;
  v27[20] = v25;
  v27[22] = v89;
  v27[23] = v28 + 33;
  v93 = v92 - -33.0;
  v27[2650] = 0;
  *((_WORD *)v27 + 5409) = 83;
  ++*((_WORD *)v4 + 10);
  v29 = (_DWORD *)operator new(0x1E214u);
  if ( v29 )
    v30 = sub_100476C0(v29);
  else
    v30 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v30;
  if ( !v30 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, float, float, int, int, int, int, int))(*v30 + 56))(
    v30,
    a1,
    COERCE_FLOAT(LODWORD(v88)),
    COERCE_FLOAT(LODWORD(v93)),
    4202497,
    2,
    5,
    1,
    84);
  v30[3] = sub_10047360;
  v30[2] = sub_100457C0;
  v31 = (__int64)v93;
  v30[21] = v31;
  v30[20] = v25;
  v30[22] = v89;
  v30[23] = v31 + 33;
  v30[2650] = 0;
  *((_WORD *)v30 + 5409) = 85;
  ++*((_WORD *)v4 + 10);
  v32 = (_DWORD *)operator new(0x1E214u);
  if ( v32 )
    v33 = sub_100476C0(v32);
  else
    v33 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v33;
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
  v34 = *((_WORD *)v4 + 10) + 1;
  ++*((_WORD *)v33 + 5466);
  *((_WORD *)v33 + 5467) = v34;
  ++*((_WORD *)v4 + 10);
  v35 = (_DWORD *)operator new(0x1E214u);
  if ( v35 )
    v36 = sub_100476C0(v35);
  else
    v36 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v36;
  if ( !v36 )
    sub_1003E260(4);
  v37 = *v36;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v36 + 56))(
    v36,
    a1,
    v4[206],
    1133084672,
    1052673,
    2,
    5,
    1,
    -1);
  v36[1] = sub_1003FE80;
  *((_WORD *)v36 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v37 + 52))(v36, asc_100AD300, 1, 1, &unk_100AB4B8);
  ++*((_WORD *)v4 + 10);
  v38 = (_DWORD *)operator new(0x1E214u);
  if ( v38 )
    v39 = sub_100476C0(v38);
  else
    v39 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v39;
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
  v40 = *((_WORD *)v4 + 10) + 1;
  ++*((_WORD *)v39 + 5466);
  *((_WORD *)v39 + 5467) = v40;
  ++*((_WORD *)v4 + 10);
  v41 = (_DWORD *)operator new(0x1E214u);
  if ( v41 )
    v42 = sub_100476C0(v41);
  else
    v42 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v42;
  if ( !v42 )
    sub_1003E260(4);
  v43 = *v42;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v42 + 56))(
    v42,
    a1,
    v4[206],
    1125646336,
    1052673,
    2,
    5,
    1,
    -1);
  v42[1] = sub_1003FA00;
  *((_WORD *)v42 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v43 + 52))(v42, asc_100AD300, 1, 1, &unk_100AB4A8);
  ++*((_WORD *)v4 + 10);
  v44 = (_DWORD *)operator new(0x1E214u);
  if ( v44 )
    v45 = sub_100476C0(v44);
  else
    v45 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v45;
  if ( !v45 )
    sub_1003E260(4);
  v46 = *(_DWORD *)v45;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v45 + 56))(
    v45,
    a1,
    1138819072,
    1123680256,
    1048585,
    2,
    5,
    1,
    -1);
  v45[61702] = 3;
  v47 = getCaptionString(0x40u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v46 + 52))(v45, v47, 1, 1, &unk_100AB4F8);
  ++*((_WORD *)v4 + 10);
  v48 = (_DWORD *)operator new(0x1E214u);
  if ( v48 )
    v49 = sub_100476C0(v48);
  else
    v49 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v49;
  if ( !v49 )
    sub_1003E260(4);
  v50 = *(_DWORD *)v49;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v49 + 56))(
    v49,
    a1,
    1138819072,
    1127809024,
    1048585,
    2,
    5,
    1,
    -1);
  v49[61702] = 3;
  v51 = getCaptionString(0x46u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v50 + 52))(v49, v51, 1, 1, &unk_100AB4F8);
  ++*((_WORD *)v4 + 10);
  v52 = (_DWORD *)operator new(0x1E214u);
  if ( v52 )
    v53 = sub_100476C0(v52);
  else
    v53 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v53;
  if ( !v53 )
    sub_1003E260(4);
  v54 = *v53;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v53 + 56))(
    v53,
    a1,
    1138819072,
    1124925440,
    20481,
    2,
    5,
    1,
    -1);
  v53[1] = sub_100415A0;
  *((_WORD *)v53 + 61702) = 5;
  (*(void (__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v54 + 52))(v53, String2, 1, 3, &unk_100AB4F8);
  ++*((_WORD *)v4 + 10);
  v55 = (_DWORD *)operator new(0x1E214u);
  if ( v55 )
    v56 = sub_100476C0(v55);
  else
    v56 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v56;
  if ( !v56 )
    sub_1003E260(4);
  v57 = *(_DWORD *)v56;
  (*(void (__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v56 + 56))(
    v56,
    a1,
    v4[206],
    1128988672,
    1048585,
    2,
    5,
    1,
    -1);
  v56[61702] = 3;
  v58 = getCaptionString(0x40u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v57 + 52))(v56, v58, 1, 1, &unk_100AB478);
  ++*((_WORD *)v4 + 10);
  v59 = (_DWORD *)operator new(0x1E214u);
  if ( v59 )
    v60 = sub_100476C0(v59);
  else
    v60 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v60;
  if ( !v60 )
    sub_1003E260(4);
  v61 = *(_DWORD *)v60;
  (*(void (__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v60 + 56))(
    v60,
    a1,
    v4[206],
    1132756992,
    1048585,
    2,
    5,
    1,
    -1);
  v60[61702] = 3;
  v62 = getCaptionString(0x41u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v61 + 52))(v60, v62, 1, 1, &unk_100AB478);
  ++*((_WORD *)v4 + 10);
  v63 = (_DWORD *)operator new(0x1E214u);
  if ( v63 )
    v64 = sub_100476C0(v63);
  else
    v64 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v64;
  if ( !v64 )
    sub_1003E260(4);
  v65 = *v64;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v64 + 56))(
    v64,
    a1,
    1138819072,
    1129906176,
    20481,
    2,
    5,
    1,
    -1);
  v64[1] = sub_100414B0;
  *((_WORD *)v64 + 61702) = 5;
  (*(void (__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v65 + 52))(v64, String2, 1, 3, &unk_100AB478);
  ++*((_WORD *)v4 + 10);
  v66 = (_DWORD *)operator new(0x1E214u);
  if ( v66 )
    v67 = sub_100476C0(v66);
  else
    v67 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v67;
  if ( !v67 )
    sub_1003E260(4);
  v68 = *(_DWORD *)v67;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v67 + 56))(
    v67,
    a1,
    1121189888,
    1118437376,
    1048577,
    2,
    5,
    1,
    -1);
  v67[61702] = 3;
  v69 = getCaptionString(0x38u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v68 + 52))(v67, v69, 1, 1, &unk_100AB458);
  ++*((_WORD *)v4 + 10);
  v70 = (_DWORD *)operator new(0x1E214u);
  if ( v70 )
    v71 = sub_100476C0(v70);
  else
    v71 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v71;
  if ( !v71 )
    sub_1003E260(4);
  v72 = *v71;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v71 + 56))(
    v71,
    a1,
    1138491392,
    1115947008,
    20481,
    2,
    5,
    1,
    -1);
  v71[1] = sub_10041300;
  *((_WORD *)v71 + 61702) = 52;
  (*(void (__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v72 + 52))(v71, String2, 1, 4, &unk_100AB458);
  ++*((_WORD *)v4 + 10);
  v73 = (_DWORD *)operator new(0x1E214u);
  if ( v73 )
    v74 = sub_100476C0(v73);
  else
    v74 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v74;
  if ( !v74 )
    sub_1003E260(4);
  v75 = *(_DWORD *)v74;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v74 + 56))(
    v74,
    a1,
    1121189888,
    1123418112,
    1048577,
    2,
    5,
    1,
    -1);
  v74[61702] = 3;
  v76 = getCaptionString(0x36u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v75 + 52))(v74, v76, 1, 1, &unk_100AB458);
  ++*((_WORD *)v4 + 10);
  v77 = (_DWORD *)operator new(0x1E214u);
  if ( v77 )
    v78 = sub_100476C0(v77);
  else
    v78 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v78;
  if ( !v78 )
    sub_1003E260(4);
  v79 = *v78;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v78 + 56))(
    v78,
    a1,
    1138491392,
    1120927744,
    20481,
    2,
    5,
    1,
    -1);
  v78[1] = sub_100413B0;
  *((_WORD *)v78 + 61702) = 52;
  (*(void (__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v79 + 52))(v78, String2, 1, 4, &unk_100AB458);
  ++*((_WORD *)v4 + 10);
  v80 = (_DWORD *)operator new(0x1E214u);
  if ( v80 )
    v81 = sub_100476C0(v80);
  else
    v81 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v81;
  if ( !v81 )
    sub_1003E260(4);
  v82 = *v81;
  v87 = *((float *)v4 + 207) - 19.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v81 + 56))(
    v81,
    a1,
    v4[206],
    LODWORD(v87),
    20481,
    2,
    5,
    1,
    -1);
  v81[1] = sub_10040B30;
  *((_WORD *)v81 + 61702) = 52;
  (*(void (__thiscall **)(_DWORD *, CHAR *, int, int, int *))(v82 + 52))(v81, String2, 1, 4, &dword_100AB448);
  ++*((_WORD *)v4 + 10);
  return 1;
}
// 1003FA00: using guessed type int __cdecl sub_1003FA00(int);
// 1003FE80: using guessed type int __cdecl sub_1003FE80(int);
// 10040730: using guessed type int __cdecl sub_10040730(int);
// 100407E0: using guessed type int __cdecl sub_100407E0(int);
// 10041300: using guessed type int __cdecl sub_10041300(int);
// 100413B0: using guessed type int __cdecl sub_100413B0(int);
// 10043FA0: using guessed type int __cdecl sub_10043FA0(int);
// 10052030: using guessed type int __cdecl sub_10052030(int);
// 100AB428: using guessed type int dword_100AB428;
// 100AB42C: using guessed type int dword_100AB42C;
// 100AB448: using guessed type int dword_100AB448;
