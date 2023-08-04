#include "../../types-win32.h"
//----- (100509F0) --------------------------------------------------------
int __cdecl sub_100509F0(int a1)
{
  unsigned __int16 v2; // ax
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  unsigned __int16 v5; // cx
  _DWORD *v6; // eax
  _DWORD *v7; // ebp
  unsigned __int16 v8; // dx
  _DWORD *v9; // eax
  _WORD *v10; // ebp
  unsigned __int16 v11; // cx
  int v12; // ebx
  LPCSTR v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // ebp
  int v16; // eax
  _DWORD *v17; // ebx
  int v18; // eax
  int v19; // ebp
  char *v20; // eax
  const char *v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // ebp
  int v24; // ebx
  LPCSTR v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // ebp
  unsigned __int16 v28; // dx
  int v29; // ebx
  LPCSTR v30; // eax
  _DWORD *v31; // eax
  _DWORD *v32; // ebp
  unsigned __int16 v33; // cx
  int v34; // ebx
  _DWORD *v35; // eax
  _DWORD *v36; // ebp
  __int64 v37; // rax
  _DWORD *v38; // eax
  _DWORD *v39; // ebp
  __int64 v40; // rax
  _DWORD *v41; // eax
  _DWORD *v42; // ebp
  unsigned __int16 v43; // ax
  __int16 v44; // ax
  _DWORD *v45; // eax
  _DWORD *v46; // ebp
  unsigned __int16 v47; // cx
  int v48; // ebx
  _DWORD *v49; // eax
  _DWORD *v50; // ebp
  unsigned __int16 v51; // ax
  __int16 v52; // ax
  _DWORD *v53; // eax
  _DWORD *v54; // ebp
  unsigned __int16 v55; // cx
  int v56; // ebx
  _DWORD *v57; // eax
  _WORD *v58; // ebp
  int v59; // ebx
  LPCSTR v60; // eax
  _DWORD *v61; // eax
  _DWORD *v62; // ebp
  unsigned __int16 v63; // cx
  int v64; // ebx
  _DWORD *v65; // eax
  _WORD *v66; // ebp
  unsigned __int16 v67; // dx
  int v68; // ebx
  LPCSTR v69; // eax
  _DWORD *v70; // eax
  _DWORD *v71; // ebp
  int v72; // ebx
  _DWORD *v73; // eax
  _WORD *v74; // ebp
  unsigned __int16 v75; // cx
  int v76; // ebx
  LPCSTR v77; // eax
  _DWORD *v78; // eax
  _WORD *v79; // ebp
  int v80; // ebx
  LPCSTR v81; // eax
  _DWORD *v82; // eax
  _DWORD *v83; // ebp
  unsigned __int16 v84; // dx
  int v85; // ebx
  _DWORD *v86; // eax
  _WORD *v87; // ebp
  int v88; // ebx
  LPCSTR v89; // eax
  _DWORD *v90; // eax
  _DWORD *v91; // ebp
  unsigned __int16 v92; // cx
  int v93; // ebx
  _DWORD *v94; // eax
  _WORD *v95; // ebp
  unsigned __int16 v96; // dx
  int v97; // ebx
  LPCSTR v98; // eax
  _DWORD *v99; // eax
  _DWORD *v100; // ebp
  int v101; // ebx
  float v103; // [esp+394h] [ebp-80h]
  float v104; // [esp+394h] [ebp-80h]
  char *v105; // [esp+3A8h] [ebp-6Ch]
  float v106; // [esp+3BCh] [ebp-58h]
  int v107; // [esp+3C0h] [ebp-54h]
  int v108; // [esp+3C4h] [ebp-50h]
  char v109[4]; // [esp+3C8h] [ebp-4Ch] BYREF
  char Buffer[32]; // [esp+3E8h] [ebp-2Ch] BYREF
  int v111; // [esp+410h] [ebp-4h]
  void (__thiscall *v112)(_DWORD *, char *, int, int, int *, int); // [esp+418h] [ebp+4h]
  float v113; // [esp+418h] [ebp+4h]
  float v114; // [esp+418h] [ebp+4h]
  float v115; // [esp+418h] [ebp+4h]

  v2 = *(_WORD *)(a1 + 16);
  *(_WORD *)(a1 + 18) = 0;
  *(_DWORD *)(a1 + 4 * v2 + 108) = 1;
  v3 = (_DWORD *)malloc(0x348u);
  v111 = 0;
  if ( v3 )
    v4 = sub_10048470(v3);
  else
    v4 = 0;
  v5 = *(_WORD *)(a1 + 16);
  v111 = -1;
  *(_DWORD *)(a1 + 4 * v5 + 20) = v4;
  if ( !v4 )
    sub_1003E260(4);
  ++*(_WORD *)(a1 + 16);
  v4[208] = a1;
  v4[4] = 0;
  v4[206] = 1128464384;
  v4[207] = 1124204544;
  v6 = (_DWORD *)malloc(0x1E214u);
  v111 = 1;
  if ( v6 )
    v7 = sub_100476C0(v6);
  else
    v7 = 0;
  v8 = *((_WORD *)v4 + 10);
  v111 = -1;
  v4[v8 + 6] = v7;
  if ( !v7 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))(*v7 + 56))(
    v7,
    a1,
    0,
    0,
    9,
    2,
    5,
    0,
    0);
  ++*((_WORD *)v4 + 10);
  v9 = (_DWORD *)malloc(0x1E214u);
  v111 = 2;
  if ( v9 )
    v10 = sub_100476C0(v9);
  else
    v10 = 0;
  v11 = *((_WORD *)v4 + 10);
  v111 = -1;
  v4[v11 + 6] = v10;
  if ( !v10 )
    sub_1003E260(4);
  v12 = *(_DWORD *)v10;
  (*(void (__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v10 + 56))(
    v10,
    a1,
    v4[206],
    1092616192,
    1048585,
    2,
    5,
    1,
    -1);
  v10[61702] = 3;
  v13 = getCaptionString(0x3Du);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v12 + 52))(v10, v13, 1, 1, &unk_100AB508);
  ++*((_WORD *)v4 + 10);
  v14 = (_DWORD *)malloc(0x1E214u);
  v111 = 3;
  if ( v14 )
    v15 = sub_100476C0(v14);
  else
    v15 = 0;
  v111 = -1;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v15;
  if ( !v15 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v15 + 56))(
    v15,
    a1,
    v4[206],
    v4[207],
    12289,
    2,
    5,
    1,
    -1);
  v16 = v15[3598];
  v17 = v15 + 3598;
  v15[1] = sub_1003EB60;
  v15[30845] = 1;
  (*(void (__thiscall **)(_DWORD *, int, void *, int, _DWORD, int))(v16 + 20))(
    v15 + 3598,
    2359296,
    &unk_100AB4D8,
    5,
    0,
    -1);
  v15[5] = sub_1003E8B0;
  v15[6] = sub_1003E8C0;
  v18 = 0;
  if ( dword_100B3814[6 * (char)dword_10AA28B8] > 0 )
  {
    v112 = *(void (__thiscall **)(_DWORD *, char *, int, int, int *, int))(*v17 + 16);
    do
    {
      v19 = v18 + 1;
      v20 = _itoa(v18 + 1, Buffer, 10);
      v105 = _strupr(v20);
      v21 = getCaptionString(0xBFu);
      sprintf(v109, v21, v105);
      v112(v17, v109, 1, 1, &dword_100AB448, 1);
      v18 = v19;
    }
    while ( v19 < dword_100B3814[6 * (char)dword_10AA28B8] );
  }
  ++*((_WORD *)v4 + 10);
  v22 = (_DWORD *)malloc(0x1E214u);
  v111 = 4;
  if ( v22 )
    v23 = sub_100476C0(v22);
  else
    v23 = 0;
  v111 = -1;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v23;
  if ( !v23 )
    sub_1003E260(4);
  v24 = *v23;
  v103 = *((float *)v4 + 207) - -95.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v23 + 56))(
    v23,
    a1,
    v4[206],
    LODWORD(v103),
    1056769,
    2,
    5,
    1,
    -1);
  v23[3] = sub_10047360;
  v23[2] = sub_10045DC0;
  *((_WORD *)v23 + 61702) = 2;
  v25 = getCaptionString(0x1Eu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, _DWORD, int *))(v24 + 52))(v23, v25, 1, 0, &dword_100AB448);
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v26 = (_DWORD *)malloc(0x1E214u);
  v111 = 5;
  if ( v26 )
    v27 = sub_100476C0(v26);
  else
    v27 = 0;
  v28 = *((_WORD *)v4 + 10);
  v111 = -1;
  v4[v28 + 6] = v27;
  if ( !v27 )
    sub_1003E260(4);
  v29 = *v27;
  v104 = *((float *)v4 + 207) - -114.0;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v27 + 56))(
    v27,
    a1,
    v4[206],
    LODWORD(v104),
    1056769,
    2,
    5,
    1,
    -1);
  v27[3] = sub_10047360;
  v27[2] = sub_10046F50;
  v27[5] = sub_1003E840;
  *((_WORD *)v27 + 61702) = 3;
  v30 = getCaptionString(0xCu);
  (*(void (__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v29 + 52))(v27, v30, 1, 1, &dword_100AB448);
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v106 = (float)dword_100AB428;
  v113 = (float)dword_100AB42C;
  v31 = (_DWORD *)malloc(0x1E214u);
  v111 = 6;
  if ( v31 )
    v32 = sub_100476C0(v31);
  else
    v32 = 0;
  v33 = *((_WORD *)v4 + 10);
  v111 = -1;
  v4[v33 + 6] = v32;
  if ( !v32 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, float, float, int, int, int, int, int))(*v32 + 56))(
    v32,
    a1,
    COERCE_FLOAT(LODWORD(v106)),
    COERCE_FLOAT(LODWORD(v113)),
    4202497,
    2,
    5,
    1,
    120);
  v32[3] = sub_10047360;
  v32[2] = sub_100457A0;
  v108 = (__int64)v113;
  v32[21] = v108;
  v34 = (__int64)v106;
  v32[20] = v34;
  v32[22] = v34 + 127;
  v32[23] = v108 + 33;
  v32[2650] = 0;
  v114 = v113 - -33.0;
  *((_WORD *)v32 + 5409) = 121;
  ++*((_WORD *)v4 + 10);
  v107 = v34 + 127;
  v35 = (_DWORD *)malloc(0x1E214u);
  v111 = 7;
  if ( v35 )
    v36 = sub_100476C0(v35);
  else
    v36 = 0;
  v111 = -1;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v36;
  if ( !v36 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, float, float, int, int, int, int, int))(*v36 + 56))(
    v36,
    a1,
    COERCE_FLOAT(LODWORD(v106)),
    COERCE_FLOAT(LODWORD(v114)),
    4202497,
    2,
    5,
    1,
    82);
  v36[3] = sub_10047360;
  v36[2] = sub_10043FA0;
  v37 = (__int64)v114;
  v36[21] = v37;
  v36[20] = v34;
  v36[22] = v107;
  v36[23] = v37 + 33;
  v115 = v114 - -33.0;
  v36[2650] = 0;
  *((_WORD *)v36 + 5409) = 83;
  ++*((_WORD *)v4 + 10);
  v38 = (_DWORD *)malloc(0x1E214u);
  v111 = 8;
  if ( v38 )
    v39 = sub_100476C0(v38);
  else
    v39 = 0;
  v111 = -1;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v39;
  if ( !v39 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, float, float, int, int, int, int, int))(*v39 + 56))(
    v39,
    a1,
    COERCE_FLOAT(LODWORD(v106)),
    COERCE_FLOAT(LODWORD(v115)),
    4202497,
    2,
    5,
    1,
    84);
  v39[3] = sub_10047360;
  v39[2] = sub_10045780;
  v40 = (__int64)v115;
  v39[21] = v40;
  v39[20] = v34;
  v39[22] = v107;
  v39[23] = v40 + 33;
  v39[2650] = 0;
  *((_WORD *)v39 + 5409) = 85;
  ++*((_WORD *)v4 + 10);
  v41 = (_DWORD *)malloc(0x1E214u);
  v111 = 9;
  if ( v41 )
    v42 = sub_100476C0(v41);
  else
    v42 = 0;
  v43 = *((_WORD *)v4 + 10);
  v111 = -1;
  v4[v43 + 6] = v42;
  if ( !v42 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v42 + 56))(
    v42,
    a1,
    1116864512,
    1129578496,
    1,
    2,
    5,
    1,
    22);
  v42[1] = sub_100407E0;
  v44 = *((_WORD *)v4 + 10) + 1;
  ++*((_WORD *)v42 + 5466);
  *((_WORD *)v42 + 5467) = v44;
  ++*((_WORD *)v4 + 10);
  v45 = (_DWORD *)malloc(0x1E214u);
  v111 = 10;
  if ( v45 )
    v46 = sub_100476C0(v45);
  else
    v46 = 0;
  v47 = *((_WORD *)v4 + 10);
  v111 = -1;
  v4[v47 + 6] = v46;
  if ( !v46 )
    sub_1003E260(4);
  v48 = *v46;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v46 + 56))(
    v46,
    a1,
    v4[206],
    1133084672,
    1052673,
    2,
    5,
    1,
    -1);
  v46[1] = sub_1003FE80;
  *((_WORD *)v46 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v48 + 52))(v46, asc_100AD300, 1, 1, &unk_100AB4B8);
  ++*((_WORD *)v4 + 10);
  v49 = (_DWORD *)malloc(0x1E214u);
  v111 = 11;
  if ( v49 )
    v50 = sub_100476C0(v49);
  else
    v50 = 0;
  v51 = *((_WORD *)v4 + 10);
  v111 = -1;
  v4[v51 + 6] = v50;
  if ( !v50 )
    sub_1003E260(4);
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v50 + 56))(
    v50,
    a1,
    1134723072,
    1116733440,
    1,
    2,
    5,
    1,
    17);
  v50[1] = sub_10040730;
  v52 = *((_WORD *)v4 + 10) + 1;
  ++*((_WORD *)v50 + 5466);
  *((_WORD *)v50 + 5467) = v52;
  ++*((_WORD *)v4 + 10);
  v53 = (_DWORD *)malloc(0x1E214u);
  v111 = 12;
  if ( v53 )
    v54 = sub_100476C0(v53);
  else
    v54 = 0;
  v55 = *((_WORD *)v4 + 10);
  v111 = -1;
  v4[v55 + 6] = v54;
  if ( !v54 )
    sub_1003E260(4);
  v56 = *v54;
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v54 + 56))(
    v54,
    a1,
    v4[206],
    1125646336,
    1052673,
    2,
    5,
    1,
    -1);
  v54[1] = sub_1003FA00;
  *((_WORD *)v54 + 61702) = 3;
  (*(void (__thiscall **)(_DWORD *, char *, int, int, void *))(v56 + 52))(v54, asc_100AD300, 1, 1, &unk_100AB4A8);
  ++*((_WORD *)v4 + 10);
  v57 = (_DWORD *)malloc(0x1E214u);
  v111 = 13;
  if ( v57 )
    v58 = sub_100476C0(v57);
  else
    v58 = 0;
  v111 = -1;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v58;
  if ( !v58 )
    sub_1003E260(4);
  v59 = *(_DWORD *)v58;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v58 + 56))(
    v58,
    a1,
    1138819072,
    1125318656,
    1048585,
    2,
    5,
    1,
    -1);
  v58[61702] = 3;
  v60 = getCaptionString(0x3Eu);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v59 + 52))(v58, v60, 1, 1, &unk_100AB4F8);
  ++*((_WORD *)v4 + 10);
  v61 = (_DWORD *)malloc(0x1E214u);
  v111 = 14;
  if ( v61 )
    v62 = sub_100476C0(v61);
  else
    v62 = 0;
  v63 = *((_WORD *)v4 + 10);
  v111 = -1;
  v4[v63 + 6] = v62;
  if ( !v62 )
    sub_1003E260(4);
  v64 = *v62;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v62 + 56))(
    v62,
    a1,
    1138819072,
    1124073472,
    20481,
    2,
    5,
    1,
    -1);
  v62[1] = sub_10040C00;
  *((_WORD *)v62 + 61702) = 52;
  (*(void (__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v64 + 52))(v62, String2, 1, 4, &unk_100AB4F8);
  ++*((_WORD *)v4 + 10);
  v65 = (_DWORD *)malloc(0x1E214u);
  v111 = 15;
  if ( v65 )
    v66 = sub_100476C0(v65);
  else
    v66 = 0;
  v67 = *((_WORD *)v4 + 10);
  v111 = -1;
  v4[v67 + 6] = v66;
  if ( !v66 )
    sub_1003E260(4);
  v68 = *(_DWORD *)v66;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v66 + 56))(
    v66,
    a1,
    1138819072,
    1127809024,
    1048585,
    2,
    5,
    1,
    -1);
  v66[61702] = 3;
  v69 = getCaptionString(0x3Fu);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v68 + 52))(v66, v69, 1, 1, &unk_100AB4F8);
  ++*((_WORD *)v4 + 10);
  v70 = (_DWORD *)malloc(0x1E214u);
  v111 = 16;
  if ( v70 )
    v71 = sub_100476C0(v70);
  else
    v71 = 0;
  v111 = -1;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v71;
  if ( !v71 )
    sub_1003E260(4);
  v72 = *v71;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v71 + 56))(
    v71,
    a1,
    1138819072,
    1126563840,
    20481,
    2,
    5,
    1,
    -1);
  v71[1] = sub_10040D70;
  *((_WORD *)v71 + 61702) = 52;
  (*(void (__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v72 + 52))(v71, String2, 1, 4, &unk_100AB4F8);
  ++*((_WORD *)v4 + 10);
  v73 = (_DWORD *)malloc(0x1E214u);
  v111 = 17;
  if ( v73 )
    v74 = sub_100476C0(v73);
  else
    v74 = 0;
  v75 = *((_WORD *)v4 + 10);
  v111 = -1;
  v4[v75 + 6] = v74;
  if ( !v74 )
    sub_1003E260(4);
  v76 = *(_DWORD *)v74;
  (*(void (__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v74 + 56))(
    v74,
    a1,
    v4[206],
    1128988672,
    1048585,
    2,
    5,
    1,
    -1);
  v74[61702] = 3;
  v77 = getCaptionString(0x40u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v76 + 52))(v74, v77, 1, 1, &unk_100AB478);
  ++*((_WORD *)v4 + 10);
  v78 = (_DWORD *)malloc(0x1E214u);
  v111 = 18;
  if ( v78 )
    v79 = sub_100476C0(v78);
  else
    v79 = 0;
  v111 = -1;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v79;
  if ( !v79 )
    sub_1003E260(4);
  v80 = *(_DWORD *)v79;
  (*(void (__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v79 + 56))(
    v79,
    a1,
    v4[206],
    1132756992,
    1048585,
    2,
    5,
    1,
    -1);
  v79[61702] = 3;
  v81 = getCaptionString(0x41u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v80 + 52))(v79, v81, 1, 1, &unk_100AB478);
  ++*((_WORD *)v4 + 10);
  v82 = (_DWORD *)malloc(0x1E214u);
  v111 = 19;
  if ( v82 )
    v83 = sub_100476C0(v82);
  else
    v83 = 0;
  v84 = *((_WORD *)v4 + 10);
  v111 = -1;
  v4[v84 + 6] = v83;
  if ( !v83 )
    sub_1003E260(4);
  v85 = *v83;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v83 + 56))(
    v83,
    a1,
    1138819072,
    1129906176,
    20481,
    2,
    5,
    1,
    -1);
  v83[1] = sub_100414B0;
  *((_WORD *)v83 + 61702) = 5;
  (*(void (__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v85 + 52))(v83, String2, 1, 3, &unk_100AB478);
  ++*((_WORD *)v4 + 10);
  v86 = (_DWORD *)malloc(0x1E214u);
  v111 = 20;
  if ( v86 )
    v87 = sub_100476C0(v86);
  else
    v87 = 0;
  v111 = -1;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v87;
  if ( !v87 )
    sub_1003E260(4);
  v88 = *(_DWORD *)v87;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v87 + 56))(
    v87,
    a1,
    1121189888,
    1118437376,
    1048577,
    2,
    5,
    1,
    -1);
  v87[61702] = 3;
  v89 = getCaptionString(0x38u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v88 + 52))(v87, v89, 1, 1, &unk_100AB458);
  ++*((_WORD *)v4 + 10);
  v90 = (_DWORD *)malloc(0x1E214u);
  v111 = 21;
  if ( v90 )
    v91 = sub_100476C0(v90);
  else
    v91 = 0;
  v92 = *((_WORD *)v4 + 10);
  v111 = -1;
  v4[v92 + 6] = v91;
  if ( !v91 )
    sub_1003E260(4);
  v93 = *v91;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v91 + 56))(
    v91,
    a1,
    1138491392,
    1115947008,
    20481,
    2,
    5,
    1,
    -1);
  v91[1] = sub_10041300;
  *((_WORD *)v91 + 61702) = 52;
  (*(void (__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v93 + 52))(v91, String2, 1, 4, &unk_100AB458);
  ++*((_WORD *)v4 + 10);
  v94 = (_DWORD *)malloc(0x1E214u);
  v111 = 22;
  if ( v94 )
    v95 = sub_100476C0(v94);
  else
    v95 = 0;
  v96 = *((_WORD *)v4 + 10);
  v111 = -1;
  v4[v96 + 6] = v95;
  if ( !v95 )
    sub_1003E260(4);
  v97 = *(_DWORD *)v95;
  (*(void (__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v95 + 56))(
    v95,
    a1,
    1121189888,
    1123418112,
    1048577,
    2,
    5,
    1,
    -1);
  v95[61702] = 3;
  v98 = getCaptionString(0x36u);
  (*(void (__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v97 + 52))(v95, v98, 1, 1, &unk_100AB458);
  ++*((_WORD *)v4 + 10);
  v99 = (_DWORD *)malloc(0x1E214u);
  v111 = 23;
  if ( v99 )
    v100 = sub_100476C0(v99);
  else
    v100 = 0;
  v111 = -1;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v100;
  if ( !v100 )
    sub_1003E260(4);
  v101 = *v100;
  (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v100 + 56))(
    v100,
    a1,
    1138491392,
    1120927744,
    20481,
    2,
    5,
    1,
    -1);
  v100[1] = sub_100413B0;
  *((_WORD *)v100 + 61702) = 52;
  (*(void (__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v101 + 52))(v100, String2, 1, 4, &unk_100AB458);
  ++*((_WORD *)v4 + 10);
  return 1;
}
// 1003E8B0: using guessed type int sub_1003E8B0();
// 1003E8C0: using guessed type int sub_1003E8C0();
// 1003EB60: using guessed type int __cdecl sub_1003EB60(int);
// 1003FA00: using guessed type int __cdecl sub_1003FA00(int);
// 1003FE80: using guessed type int __cdecl sub_1003FE80(int);
// 10040730: using guessed type int __cdecl sub_10040730(int);
// 100407E0: using guessed type int __cdecl sub_100407E0(int);
// 10041300: using guessed type int __cdecl sub_10041300(int);
// 100413B0: using guessed type int __cdecl sub_100413B0(int);
// 10043FA0: using guessed type int __cdecl sub_10043FA0(int);
// 100509F0: using guessed type int __cdecl sub_100509F0(int);
// 100AB428: using guessed type int dword_100AB428;
// 100AB42C: using guessed type int dword_100AB42C;
// 100AB448: using guessed type int dword_100AB448;
// 100B3814: using guessed type int dword_100B3814[];
// 10AA28B8: using guessed type int dword_10AA28B8;
