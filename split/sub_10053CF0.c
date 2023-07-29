//----- (10053CF0) --------------------------------------------------------
int __cdecl sub_10053CF0(int a1)
{
  _DWORD *v2; // eax
  _DWORD *v3; // ebp
  unsigned __int16 v4; // dx
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // eax
  _WORD *v8; // esi
  int v9; // edi
  LPCSTR v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  unsigned __int16 v13; // dx
  int v14; // edi
  char *v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // esi
  int v18; // edi
  LPCSTR v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // esi
  unsigned __int16 v22; // dx
  int v23; // edi
  LPCSTR v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // esi
  unsigned __int16 v27; // cx
  int v28; // edi
  _DWORD *v29; // eax
  _DWORD *v30; // esi
  __int64 v31; // rax
  _DWORD *v32; // eax
  _DWORD *v33; // esi
  __int64 v34; // rax
  _DWORD *v35; // eax
  _WORD *v36; // esi
  int v37; // edi
  LPCSTR v38; // eax
  _DWORD *v39; // eax
  _DWORD *v40; // esi
  unsigned __int16 v41; // cx
  int v42; // edi
  _DWORD *v43; // eax
  _WORD *v44; // esi
  unsigned __int16 v45; // dx
  int v46; // edi
  LPCSTR v47; // eax
  _DWORD *v48; // eax
  _DWORD *v49; // esi
  int v50; // edi
  _DWORD *v51; // eax
  _WORD *v52; // esi
  unsigned __int16 v53; // cx
  int v54; // edi
  LPCSTR v55; // eax
  _DWORD *v56; // eax
  _DWORD *v57; // esi
  unsigned __int16 v58; // dx
  int v59; // edi
  _DWORD *v60; // eax
  _DWORD *v61; // esi
  unsigned __int16 v62; // ax
  __int16 v63; // ax
  _DWORD *v64; // eax
  _DWORD *v65; // esi
  unsigned __int16 v66; // cx
  int v67; // edi
  _DWORD *v68; // eax
  _DWORD *v69; // esi
  unsigned __int16 v70; // ax
  __int16 v71; // ax
  _DWORD *v72; // eax
  _DWORD *v73; // esi
  unsigned __int16 v74; // cx
  int v75; // edi
  _DWORD *v76; // eax
  _WORD *v77; // esi
  int v78; // edi
  LPCSTR v79; // eax
  _DWORD *v80; // eax
  _DWORD *v81; // esi
  unsigned __int16 v82; // dx
  int v83; // edi
  float v85; // [esp+304h] [ebp-80h]
  float v86; // [esp+304h] [ebp-80h]
  void (__thiscall *v87)(_DWORD *, char *, int, int, int *, int); // [esp+32Ch] [ebp-58h]
  float v88; // [esp+32Ch] [ebp-58h]
  int v89; // [esp+330h] [ebp-54h]
  int v90; // [esp+334h] [ebp-50h]
  char v91[32]; // [esp+338h] [ebp-4Ch] BYREF
  char Buffer[32]; // [esp+358h] [ebp-2Ch] BYREF
  int v93; // [esp+380h] [ebp-4h]
  int v94; // [esp+388h] [ebp+4h]
  float v95; // [esp+388h] [ebp+4h]
  float v96; // [esp+388h] [ebp+4h]
  float v97; // [esp+388h] [ebp+4h]

  *(_WORD *)(a1 + 18) = 0;
  dword_10AA28AC = dword_10AA28A4;
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 108) = 1;
  v2 = (_DWORD *)operator new(0x348u);
  v93 = 0;
  if ( v2 )
    v3 = sub_10048470(v2);
  else
    v3 = 0;
  v4 = *(_WORD *)(a1 + 16);
  v93 = -1;
  *(_DWORD *)(a1 + 4 * v4 + 20) = v3;
  if ( !v3 )
    sub_1003E260(4);
  ++*(_WORD *)(a1 + 16);
  v3[208] = a1;
  v3[1] = sub_100409F0;
  v3[2] = sub_10040A20;
  v3[4] = 0;
  v3[206] = 1128464384;
  v3[207] = 1124204544;
  v5 = (_DWORD *)operator new(0x1E214u);
  v93 = 1;
  if ( v5 )
    v6 = sub_100476C0(v5);
  else
    v6 = 0;
  v93 = -1;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v6;
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
  ++*((_WORD *)v3 + 10);
  v7 = (_DWORD *)operator new(0x1E214u);
  v93 = 2;
  if ( v7 )
    v8 = sub_100476C0(v7);
  else
    v8 = 0;
  v93 = -1;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v8;
  if ( !v8 )
    sub_1003E260(4);
  v9 = *(_DWORD *)v8;
  (*(void (__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v8 + 56))(
    v8,
    a1,
    v3[206],
    1092616192,
    1048585,
    2,
    5,
    1,
    -1);
  v8[61702] = 3;
  v10 = getCaptionString(0x4Eu);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v9 + 52))(v8, v10, 1, 1, &unk_100AB508);
  ++*((_WORD *)v3 + 10);
  v11 = (_DWORD *)operator new(0x1E214u);
  v93 = 3;
  if ( v11 )
    v12 = sub_100476C0(v11);
  else
    v12 = 0;
  v13 = *((_WORD *)v3 + 10);
  v93 = -1;
  v3[v13 + 6] = v12;
  if ( !v12 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v12 + 56))(
    v12,
    a1,
    v3[206],
    v3[207],
    12289,
    2,
    5,
    1,
    -1);
  v14 = v12[3598];
  v12[1] = sub_1003EB60;
  v12[30845] = 1;
  (*(void (__stdcall **)(int, void *, int, _DWORD, int))(v14 + 20))(0x200000, &unk_100AB4D8, 5, 0, -1);
  v12[5] = sub_1003E8B0;
  v12[6] = sub_1003E8C0;
  v94 = 0;
  if ( dword_100B3814[6 * (char)dword_10AA28B8] > 0 )
  {
    v87 = *(void (__thiscall **)(_DWORD *, char *, int, int, int *, int))(v14 + 16);
    do
    {
      strcpy(v91, getCaptionString(0x37u));
      strcat(v91, asc_100AD300);
      v15 = _itoa(++v94, Buffer, 10);
      strcat(v91, _strupr(v15));
      v87(v12 + 3598, v91, 1, 1, &dword_100AB448, 1);
    }
    while ( v94 < dword_100B3814[6 * (char)dword_10AA28B8] );
  }
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v16 = (_DWORD *)operator new(0x1E214u);
  v93 = 4;
  if ( v16 )
    v17 = sub_100476C0(v16);
  else
    v17 = 0;
  v93 = -1;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v17;
  if ( !v17 )
    sub_1003E260(4);
  v18 = *v17;
  v85 = *((float *)v3 + 207) - -95.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v17 + 56))(
    v17,
    a1,
    v3[206],
    LODWORD(v85),
    1056769,
    2,
    5,
    1,
    -1);
  v17[3] = sub_10047360;
  v17[2] = sub_100460A0;
  *((_WORD *)v17 + 61702) = 3;
  v19 = getCaptionString(0x1Eu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v18 + 52))(v17, v19, 1, 1, &dword_100AB448);
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v20 = (_DWORD *)operator new(0x1E214u);
  v93 = 5;
  if ( v20 )
    v21 = sub_100476C0(v20);
  else
    v21 = 0;
  v22 = *((_WORD *)v3 + 10);
  v93 = -1;
  v3[v22 + 6] = v21;
  if ( !v21 )
    sub_1003E260(4);
  v23 = *v21;
  v86 = *((float *)v3 + 207) - -114.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v21 + 56))(
    v21,
    a1,
    v3[206],
    LODWORD(v86),
    1056769,
    2,
    5,
    1,
    -1);
  v21[3] = sub_10047360;
  v21[2] = sub_100470A0;
  *((_WORD *)v21 + 61702) = 3;
  v24 = getCaptionString(0xCu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v23 + 52))(v21, v24, 1, 1, &dword_100AB448);
  ++*((_WORD *)v3 + 10);
  ++*((_WORD *)v3 + 418);
  v88 = (float)dword_100AB428;
  v95 = (float)dword_100AB42C;
  v25 = (_DWORD *)operator new(0x1E214u);
  v93 = 6;
  if ( v25 )
    v26 = sub_100476C0(v25);
  else
    v26 = 0;
  v27 = *((_WORD *)v3 + 10);
  v93 = -1;
  v3[v27 + 6] = v26;
  if ( !v26 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, float, float, int, int, int, int, int))(*v26 + 56))(
    v26,
    a1,
    COERCE_FLOAT(LODWORD(v88)),
    COERCE_FLOAT(LODWORD(v95)),
    4202497,
    2,
    5,
    1,
    120);
  v26[3] = sub_10047360;
  v26[2] = sub_10045860;
  v90 = (__int64)v95;
  v26[21] = v90;
  v28 = (__int64)v88;
  v26[20] = v28;
  v26[22] = v28 + 127;
  v26[23] = v90 + 33;
  v26[2650] = 0;
  v96 = v95 - -33.0;
  *((_WORD *)v26 + 5409) = 121;
  ++*((_WORD *)v3 + 10);
  v89 = v28 + 127;
  v29 = (_DWORD *)operator new(0x1E214u);
  v93 = 7;
  if ( v29 )
    v30 = sub_100476C0(v29);
  else
    v30 = 0;
  v93 = -1;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v30;
  if ( !v30 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, float, float, int, int, int, int, int))(*v30 + 56))(
    v30,
    a1,
    COERCE_FLOAT(LODWORD(v88)),
    COERCE_FLOAT(LODWORD(v96)),
    4202497,
    2,
    5,
    1,
    82);
  v30[3] = sub_10047360;
  v30[2] = sub_10043FA0;
  v31 = (__int64)v96;
  v30[21] = v31;
  v30[20] = v28;
  v30[22] = v89;
  v30[23] = v31 + 33;
  v97 = v96 - -33.0;
  v30[2650] = 0;
  *((_WORD *)v30 + 5409) = 83;
  ++*((_WORD *)v3 + 10);
  v32 = (_DWORD *)operator new(0x1E214u);
  v93 = 8;
  if ( v32 )
    v33 = sub_100476C0(v32);
  else
    v33 = 0;
  v93 = -1;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v33;
  if ( !v33 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, float, float, int, int, int, int, int))(*v33 + 56))(
    v33,
    a1,
    COERCE_FLOAT(LODWORD(v88)),
    COERCE_FLOAT(LODWORD(v97)),
    4202497,
    2,
    5,
    1,
    84);
  v33[3] = sub_10047360;
  v33[2] = sub_10045840;
  v34 = (__int64)v97;
  v33[21] = v34;
  v33[20] = v28;
  v33[22] = v89;
  v33[23] = v34 + 33;
  v33[2650] = 0;
  *((_WORD *)v33 + 5409) = 85;
  ++*((_WORD *)v3 + 10);
  v35 = (_DWORD *)operator new(0x1E214u);
  v93 = 9;
  if ( v35 )
    v36 = sub_100476C0(v35);
  else
    v36 = 0;
  v93 = -1;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v36;
  if ( !v36 )
    sub_1003E260(4);
  v37 = *(_DWORD *)v36;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v36 + 56))(
    v36,
    a1,
    1121189888,
    1118437376,
    1048577,
    2,
    5,
    1,
    -1);
  v36[61702] = 3;
  v38 = getCaptionString(0x38u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v37 + 52))(v36, v38, 1, 1, &unk_100AB458);
  ++*((_WORD *)v3 + 10);
  v39 = (_DWORD *)operator new(0x1E214u);
  v93 = 10;
  if ( v39 )
    v40 = sub_100476C0(v39);
  else
    v40 = 0;
  v41 = *((_WORD *)v3 + 10);
  v93 = -1;
  v3[v41 + 6] = v40;
  if ( !v40 )
    sub_1003E260(4);
  v42 = *v40;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v40 + 56))(
    v40,
    a1,
    1138491392,
    1115947008,
    20481,
    2,
    5,
    1,
    -1);
  v40[1] = sub_10041300;
  *((_WORD *)v40 + 61702) = 52;
  (*(void (__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v42 + 52))(v40, String2, 1, 4, &unk_100AB458);
  ++*((_WORD *)v3 + 10);
  v43 = (_DWORD *)operator new(0x1E214u);
  v93 = 11;
  if ( v43 )
    v44 = sub_100476C0(v43);
  else
    v44 = 0;
  v45 = *((_WORD *)v3 + 10);
  v93 = -1;
  v3[v45 + 6] = v44;
  if ( !v44 )
    sub_1003E260(4);
  v46 = *(_DWORD *)v44;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v44 + 56))(
    v44,
    a1,
    1121189888,
    1123418112,
    1048577,
    2,
    5,
    1,
    -1);
  v44[61702] = 3;
  v47 = getCaptionString(0x36u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v46 + 52))(v44, v47, 1, 1, &unk_100AB458);
  ++*((_WORD *)v3 + 10);
  v48 = (_DWORD *)operator new(0x1E214u);
  v93 = 12;
  if ( v48 )
    v49 = sub_100476C0(v48);
  else
    v49 = 0;
  v93 = -1;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v49;
  if ( !v49 )
    sub_1003E260(4);
  v50 = *v49;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v49 + 56))(
    v49,
    a1,
    1138491392,
    1120927744,
    20481,
    2,
    5,
    1,
    -1);
  v49[1] = sub_100413B0;
  *((_WORD *)v49 + 61702) = 52;
  (*(void (__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v50 + 52))(v49, String2, 1, 4, &unk_100AB458);
  ++*((_WORD *)v3 + 10);
  v51 = (_DWORD *)operator new(0x1E214u);
  v93 = 13;
  if ( v51 )
    v52 = sub_100476C0(v51);
  else
    v52 = 0;
  v53 = *((_WORD *)v3 + 10);
  v93 = -1;
  v3[v53 + 6] = v52;
  if ( !v52 )
    sub_1003E260(4);
  v54 = *(_DWORD *)v52;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v52 + 56))(
    v52,
    a1,
    1121189888,
    1127809024,
    1048577,
    2,
    5,
    1,
    -1);
  v52[61702] = 3;
  v55 = getCaptionString(0x4Cu);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v54 + 52))(v52, v55, 1, 1, &unk_100AB4F8);
  ++*((_WORD *)v3 + 10);
  v56 = (_DWORD *)operator new(0x1E214u);
  v93 = 14;
  if ( v56 )
    v57 = sub_100476C0(v56);
  else
    v57 = 0;
  v58 = *((_WORD *)v3 + 10);
  v93 = -1;
  v3[v58 + 6] = v57;
  if ( !v57 )
    sub_1003E260(4);
  v59 = *v57;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v57 + 56))(
    v57,
    a1,
    1138491392,
    1124925440,
    20481,
    2,
    5,
    1,
    -1);
  v57[1] = sub_1003E8D0;
  *((_WORD *)v57 + 61702) = 5;
  (*(void (__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v59 + 52))(v57, String2, 1, 3, &unk_100AB4F8);
  ++*((_WORD *)v3 + 10);
  v60 = (_DWORD *)operator new(0x1E214u);
  v93 = 15;
  if ( v60 )
    v61 = sub_100476C0(v60);
  else
    v61 = 0;
  v62 = *((_WORD *)v3 + 10);
  v93 = -1;
  v3[v62 + 6] = v61;
  if ( !v61 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v61 + 56))(
    v61,
    a1,
    1116864512,
    1129578496,
    1,
    2,
    5,
    1,
    22);
  v61[1] = sub_100407E0;
  v63 = *((_WORD *)v3 + 10) + 1;
  ++*((_WORD *)v61 + 5466);
  *((_WORD *)v61 + 5467) = v63;
  ++*((_WORD *)v3 + 10);
  v64 = (_DWORD *)operator new(0x1E214u);
  v93 = 16;
  if ( v64 )
    v65 = sub_100476C0(v64);
  else
    v65 = 0;
  v66 = *((_WORD *)v3 + 10);
  v93 = -1;
  v3[v66 + 6] = v65;
  if ( !v65 )
    sub_1003E260(4);
  v67 = *v65;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v65 + 56))(
    v65,
    a1,
    v3[206],
    1133084672,
    1052673,
    2,
    5,
    1,
    -1);
  v65[1] = sub_1003FE80;
  *((_WORD *)v65 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v67 + 52))(v65, asc_100AD300, 1, 1, &unk_100AB4B8);
  ++*((_WORD *)v3 + 10);
  v68 = (_DWORD *)operator new(0x1E214u);
  v93 = 17;
  if ( v68 )
    v69 = sub_100476C0(v68);
  else
    v69 = 0;
  v70 = *((_WORD *)v3 + 10);
  v93 = -1;
  v3[v70 + 6] = v69;
  if ( !v69 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v69 + 56))(
    v69,
    a1,
    1134723072,
    1116733440,
    1,
    2,
    5,
    1,
    17);
  v69[1] = sub_10040730;
  v71 = *((_WORD *)v3 + 10) + 1;
  ++*((_WORD *)v69 + 5466);
  *((_WORD *)v69 + 5467) = v71;
  ++*((_WORD *)v3 + 10);
  v72 = (_DWORD *)operator new(0x1E214u);
  v93 = 18;
  if ( v72 )
    v73 = sub_100476C0(v72);
  else
    v73 = 0;
  v74 = *((_WORD *)v3 + 10);
  v93 = -1;
  v3[v74 + 6] = v73;
  if ( !v73 )
    sub_1003E260(4);
  v75 = *v73;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v73 + 56))(
    v73,
    a1,
    v3[206],
    1125646336,
    1052673,
    2,
    5,
    1,
    -1);
  v73[1] = sub_1003FA00;
  *((_WORD *)v73 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v75 + 52))(v73, asc_100AD300, 1, 1, &unk_100AB4A8);
  ++*((_WORD *)v3 + 10);
  v76 = (_DWORD *)operator new(0x1E214u);
  v93 = 19;
  if ( v76 )
    v77 = sub_100476C0(v76);
  else
    v77 = 0;
  v93 = -1;
  v3[*((unsigned __int16 *)v3 + 10) + 6] = v77;
  if ( !v77 )
    sub_1003E260(4);
  v78 = *(_DWORD *)v77;
  (*(void (__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v77 + 56))(
    v77,
    a1,
    v3[206],
    1132527616,
    1048585,
    2,
    5,
    1,
    -1);
  v77[61702] = 3;
  v79 = getCaptionString(0x40u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v78 + 52))(v77, v79, 1, 1, &unk_100AB478);
  ++*((_WORD *)v3 + 10);
  v80 = (_DWORD *)operator new(0x1E214u);
  v93 = 20;
  if ( v80 )
    v81 = sub_100476C0(v80);
  else
    v81 = 0;
  v82 = *((_WORD *)v3 + 10);
  v93 = -1;
  v3[v82 + 6] = v81;
  if ( !v81 )
    sub_1003E260(4);
  v83 = *v81;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v81 + 56))(
    v81,
    a1,
    1138819072,
    1129512960,
    20481,
    2,
    5,
    1,
    -1);
  v81[1] = sub_1003EA90;
  *((_WORD *)v81 + 61702) = 5;
  (*(void (__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v83 + 52))(v81, String2, 1, 3, &unk_100AB478);
  ++*((_WORD *)v3 + 10);
  return 1;
}
// 1003E8B0: using guessed type int sub_1003E8B0();
// 1003E8C0: using guessed type int sub_1003E8C0();
// 1003E8D0: using guessed type int __cdecl sub_1003E8D0(int);
// 1003EA90: using guessed type int __cdecl sub_1003EA90(int);
// 1003EB60: using guessed type int __cdecl sub_1003EB60(int);
// 1003FA00: using guessed type int __cdecl sub_1003FA00(int);
// 1003FE80: using guessed type int __cdecl sub_1003FE80(int);
// 10040730: using guessed type int __cdecl sub_10040730(int);
// 100407E0: using guessed type int __cdecl sub_100407E0(int);
// 100409F0: using guessed type int sub_100409F0();
// 10040A20: using guessed type int sub_10040A20();
// 10041300: using guessed type int __cdecl sub_10041300(int);
// 100413B0: using guessed type int __cdecl sub_100413B0(int);
// 10043FA0: using guessed type int __cdecl sub_10043FA0(int);
// 100460A0: using guessed type int sub_100460A0();
// 100470A0: using guessed type int __cdecl sub_100470A0(int);
// 100AB428: using guessed type int dword_100AB428;
// 100AB42C: using guessed type int dword_100AB42C;
// 100AB448: using guessed type int dword_100AB448;
// 100B3814: using guessed type int dword_100B3814[];
// 10AA28A4: using guessed type int dword_10AA28A4;
// 10AA28AC: using guessed type int dword_10AA28AC;
// 10AA28B8: using guessed type int dword_10AA28B8;
