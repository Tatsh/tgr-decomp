#include "types-win32.h"
//----- (1004A580) --------------------------------------------------------
int __cdecl sub_1004A580(int a1) {
  unsigned __int16 v2; // ax
  _DWORD *v3;          // eax
  _DWORD *v4;          // esi
  _DWORD *v5;          // eax
  _DWORD *v6;          // ebp
  _DWORD *v7;          // eax
  _WORD *v8;           // ebp
  int v9;              // ebx
  LPCSTR v10;          // eax
  _DWORD *v11;         // eax
  _DWORD *v12;         // ebp
  int v13;             // ebx
  LPCSTR v14;          // eax
  _DWORD *v15;         // eax
  _DWORD *v16;         // ebp
  int v17;             // ebx
  LPCSTR v18;          // eax
  _DWORD *v19;         // eax
  _DWORD *v20;         // ebp
  int v21;             // ebx
  LPCSTR v22;          // eax
  _DWORD *v23;         // eax
  _DWORD *v24;         // ebp
  int v25;             // ebx
  LPCSTR v26;          // eax
  _DWORD *v27;         // eax
  _DWORD *v28;         // ebp
  int v29;             // ebx
  LPCSTR v30;          // eax
  _DWORD *v31;         // eax
  _DWORD *v32;         // ebp
  int v33;             // ebx
  LPCSTR v34;          // eax
  _DWORD *v35;         // eax
  _DWORD *v36;         // ebp
  int v37;             // ebx
  LPCSTR v38;          // eax
  _DWORD *v39;         // eax
  _DWORD *v40;         // ebp
  int v41;             // ebx
  __int64 v42;         // rax
  _DWORD *v43;         // eax
  _DWORD *v44;         // ebp
  int v45;             // ebx
  _DWORD *v46;         // eax
  _DWORD *v47;         // ebp
  __int64 v48;         // rax
  _DWORD *v49;         // eax
  _DWORD *v50;         // ebp
  _DWORD *v51;         // eax
  _DWORD *v52;         // ebp
  _DWORD *v53;         // eax
  _DWORD *v54;         // ebp
  __int16 v55;         // ax
  _DWORD *v56;         // eax
  _DWORD *v57;         // ebp
  int v58;             // ebx
  _DWORD *v59;         // eax
  _DWORD *v60;         // ebp
  __int16 v61;         // ax
  _DWORD *v62;         // eax
  _DWORD *v63;         // ebp
  int v64;             // ebx
  _DWORD *v65;         // eax
  _DWORD *v66;         // ebp
  __int16 v67;         // ax
  _DWORD *v68;         // eax
  _DWORD *v69;         // ebp
  int v70;             // ebx
  _DWORD *v71;         // eax
  _DWORD *v72;         // ebp
  __int16 v73;         // ax
  _DWORD *v74;         // eax
  _DWORD *v75;         // ebp
  int v76;             // ebx
  float v78;           // [esp+34Ch] [ebp-40h]
  float v79;           // [esp+34Ch] [ebp-40h]
  float v80;           // [esp+34Ch] [ebp-40h]
  float v81;           // [esp+34Ch] [ebp-40h]
  float v82;           // [esp+34Ch] [ebp-40h]
  float v83;           // [esp+34Ch] [ebp-40h]
  float v84;           // [esp+374h] [ebp-18h]
  int v85;             // [esp+378h] [ebp-14h]
  float v86;           // [esp+390h] [ebp+4h]
  float v87;           // [esp+390h] [ebp+4h]

  v2 = *(_WORD *)(a1 + 16);
  *(_WORD *)(a1 + 18) = 0;
  *(_DWORD *)(a1 + 4 * v2 + 108) = 1;
  v3 = (_DWORD *)malloc(0x348u);
  if (v3)
      v4 = meth_10048470(v3);
  else
      v4 = 0;
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v4;
  if (!v4)
      sub_1003E260(4);
  ++*(_WORD *)(a1 + 16);
  v4[208] = a1;
  v4[4] = 0;
  v4[206] = 1128464384;
  v4[207] = 1121845248;
  v5 = (_DWORD *)malloc(0x1E214u);
  if (v5)
      v6 = meth_unk1E214_init(v5);
  else
      v6 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v6;
  if (!v6)
      sub_1003E260(4);
  (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))(*v6 + 56))(
      v6, a1, 0, 0, 9, 2, 5, 0, 0);
  ++*((_WORD *)v4 + 10);
  v7 = (_DWORD *)malloc(0x1E214u);
  if (v7)
      v8 = meth_unk1E214_init(v7);
  else
      v8 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v8;
  if (!v8)
      sub_1003E260(4);
  v9 = *(_DWORD *)v8;
  (*(void(__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v8 + 56))(
      v8, a1, v4[206], 1092616192, 1048585, 2, 5, 1, -1);
  v8[61702] = 3;
  v10 = GetStringWithIndex(0x13u);
  (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v9 + 52))(
      v8, v10, 1, 1, &unk_100AB508);
  ++*((_WORD *)v4 + 10);
  v11 = (_DWORD *)malloc(0x1E214u);
  if (v11)
      v12 = meth_unk1E214_init(v11);
  else
      v12 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v12;
  if (!v12)
      sub_1003E260(4);
  v13 = *v12;
  (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v12 + 56))(
      v12, a1, v4[206], v4[207], 1056769, 2, 5, 1, -1);
  v12[3] = sub_10047360;
  v12[2] = sub_10042B30;
  *((_WORD *)v12 + 61702) = 3;
  v14 = GetStringWithIndex(0x14u);
  (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v13 + 52))(
      v12, v14, 1, 1, &dword_100AB448);
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v15 = (_DWORD *)malloc(0x1E214u);
  if (v15)
      v16 = meth_unk1E214_init(v15);
  else
      v16 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v16;
  if (!v16)
      sub_1003E260(4);
  v17 = *v16;
  v78 = *((float *)v4 + 207) - -19.0;
  (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v16 + 56))(
      v16, a1, v4[206], LODWORD(v78), 1056769, 2, 5, 1, -1);
  v16[3] = sub_10047360;
  v16[2] = sub_10042DC0;
  *((_WORD *)v16 + 61702) = 3;
  v18 = GetStringWithIndex(0x15u);
  (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v17 + 52))(
      v16, v18, 1, 1, &dword_100AB448);
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v19 = (_DWORD *)malloc(0x1E214u);
  if (v19)
      v20 = meth_unk1E214_init(v19);
  else
      v20 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v20;
  if (!v20)
      sub_1003E260(4);
  v21 = *v20;
  v79 = *((float *)v4 + 207) - -38.0;
  (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v20 + 56))(
      v20, a1, v4[206], LODWORD(v79), 1056769, 2, 5, 1, -1);
  v20[3] = sub_10047360;
  v20[2] = sub_10042E20;
  *((_WORD *)v20 + 61702) = 3;
  v22 = GetStringWithIndex(0x16u);
  (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v21 + 52))(
      v20, v22, 1, 1, &dword_100AB448);
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v23 = (_DWORD *)malloc(0x1E214u);
  if (v23)
      v24 = meth_unk1E214_init(v23);
  else
      v24 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v24;
  if (!v24)
      sub_1003E260(4);
  v25 = *v24;
  v80 = *((float *)v4 + 207) - -57.0;
  (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v24 + 56))(
      v24, a1, v4[206], LODWORD(v80), 1056769, 2, 5, 1, -1);
  v24[3] = sub_10047360;
  v24[2] = sub_10042C80;
  *((_WORD *)v24 + 61702) = 3;
  v26 = GetStringWithIndex(0x17u);
  (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v25 + 52))(
      v24, v26, 1, 1, &dword_100AB448);
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v27 = (_DWORD *)malloc(0x1E214u);
  if (v27)
      v28 = meth_unk1E214_init(v27);
  else
      v28 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v28;
  if (!v28)
      sub_1003E260(4);
  v29 = *v28;
  v81 = *((float *)v4 + 207) - -76.0;
  (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v28 + 56))(
      v28, a1, v4[206], LODWORD(v81), 1056769, 2, 5, 1, -1);
  v28[3] = sub_10047360;
  v28[2] = sub_10042E80;
  *((_WORD *)v28 + 61702) = 3;
  v30 = GetStringWithIndex(0x18u);
  (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v29 + 52))(
      v28, v30, 1, 1, &dword_100AB448);
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v31 = (_DWORD *)malloc(0x1E214u);
  if (v31)
      v32 = meth_unk1E214_init(v31);
  else
      v32 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v32;
  if (!v32)
      sub_1003E260(4);
  v33 = *v32;
  v82 = *((float *)v4 + 207) - -114.0;
  (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v32 + 56))(
      v32, a1, v4[206], LODWORD(v82), 1056769, 2, 5, 1, -1);
  v32[3] = sub_10047360;
  v32[2] = sub_10043760;
  *((_WORD *)v32 + 61702) = 3;
  v34 = GetStringWithIndex(0x19u);
  (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v33 + 52))(
      v32, v34, 1, 1, &dword_100AB448);
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v35 = (_DWORD *)malloc(0x1E214u);
  if (v35)
      v36 = meth_unk1E214_init(v35);
  else
      v36 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v36;
  if (!v36)
      sub_1003E260(4);
  v37 = *v36;
  v83 = *((float *)v4 + 207) - -133.0;
  (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v36 + 56))(
      v36, a1, v4[206], LODWORD(v83), 1056769, 2, 5, 1, -1);
  v36[3] = sub_10047360;
  v36[2] = sub_100464E0;
  *((_WORD *)v36 + 61702) = 3;
  v38 = GetStringWithIndex(0xCu);
  (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v37 + 52))(
      v36, v38, 1, 1, &dword_100AB448);
  dword_10AA29B4 = (int)v36;
  ++*((_WORD *)v4 + 10);
  ++*((_WORD *)v4 + 418);
  v84 = (float)dword_100AB428;
  v86 = (float)dword_100AB42C;
  if (!gGameMode) {
      v39 = (_DWORD *)malloc(0x1E214u);
      if (v39)
          v40 = meth_unk1E214_init(v39);
      else
          v40 = 0;
      v4[*((unsigned __int16 *)v4 + 10) + 6] = v40;
      if (!v40)
          sub_1003E260(4);
      (*(void(__thiscall **)(_DWORD *, int, float, float, int, int, int, int, int))(*v40 + 56))(
          v40, a1, COERCE_FLOAT(LODWORD(v84)), COERCE_FLOAT(LODWORD(v86)), 4202497, 2, 5, 1, 120);
      v40[3] = sub_10047360;
      v40[2] = sub_100458E0;
      v41 = (__int64)v86;
      v40[21] = v41;
      v42 = (__int64)v84;
      v40[20] = v42;
      v40[22] = v42 + 127;
      v40[23] = v41 + 33;
      v40[2650] = 0;
      v86 = v86 - -33.0;
      *((_WORD *)v40 + 5409) = 121;
      ++*((_WORD *)v4 + 10);
  }
  v43 = (_DWORD *)malloc(0x1E214u);
  if (v43)
      v44 = meth_unk1E214_init(v43);
  else
      v44 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v44;
  if (!v44)
      sub_1003E260(4);
  (*(void(__thiscall **)(_DWORD *, int, float, float, int, int, int, int, int))(*v44 + 56))(
      v44, a1, COERCE_FLOAT(LODWORD(v84)), COERCE_FLOAT(LODWORD(v86)), 4202497, 2, 5, 1, 82);
  v44[3] = sub_10047360;
  v44[2] = sub_10043FA0;
  v85 = (__int64)v86;
  v44[21] = v85;
  v45 = (__int64)v84;
  v44[2650] = 0;
  v44[20] = v45;
  *((_WORD *)v44 + 5409) = 83;
  v87 = v86 - -33.0;
  v44[22] = v45 + 127;
  v44[23] = v85 + 33;
  ++*((_WORD *)v4 + 10);
  v46 = (_DWORD *)malloc(0x1E214u);
  if (v46)
      v47 = meth_unk1E214_init(v46);
  else
      v47 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v47;
  if (!v47)
      sub_1003E260(4);
  (*(void(__thiscall **)(_DWORD *, int, float, float, int, int, int, int, int))(*v47 + 56))(
      v47, a1, COERCE_FLOAT(LODWORD(v84)), COERCE_FLOAT(LODWORD(v87)), 4202497, 2, 5, 1, 84);
  v47[3] = sub_10047360;
  v47[2] = sub_100458C0;
  v48 = (__int64)v87;
  v47[21] = v48;
  v47[20] = v45;
  v47[22] = v45 + 127;
  v47[23] = v48 + 33;
  v47[2650] = 0;
  *((_WORD *)v47 + 5409) = 85;
  ++*((_WORD *)v4 + 10);
  v49 = (_DWORD *)malloc(0x1E214u);
  if (v49)
      v50 = meth_unk1E214_init(v49);
  else
      v50 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v50;
  if (!v50)
      sub_1003E260(4);
  (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v50 + 56))(
      v50, a1, 1114898432, 1131675648, 9, 2, 5, 1, 54);
  ++*((_WORD *)v4 + 10);
  v51 = (_DWORD *)malloc(0x1E214u);
  if (v51)
      v52 = meth_unk1E214_init(v51);
  else
      v52 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v52;
  if (!v52)
      sub_1003E260(4);
  (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v52 + 56))(
      v52, a1, 1116864512, 1129709568, 1, 2, 5, 1, 53);
  v52[1] = sub_1003E920;
  ++*((_WORD *)v4 + 10);
  v53 = (_DWORD *)malloc(0x1E214u);
  if (v53)
      v54 = meth_unk1E214_init(v53);
  else
      v54 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v54;
  if (!v54)
      sub_1003E260(4);
  (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v54 + 56))(
      v54, a1, 1135181824, 1116471296, 1, 2, 5, 1, 11);
  v54[1] = sub_1003F720;
  v55 = *((_WORD *)v4 + 10) + 1;
  ++*((_WORD *)v54 + 5466);
  *((_WORD *)v54 + 5467) = v55;
  ++*((_WORD *)v4 + 10);
  v56 = (_DWORD *)malloc(0x1E214u);
  if (v56)
      v57 = meth_unk1E214_init(v56);
  else
      v57 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v57;
  if (!v57)
      sub_1003E260(4);
  v58 = *v57;
  (*(void(__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v57 + 56))(
      v57, a1, v4[206], 1124663296, 1052673, 2, 5, 1, -1);
  v57[1] = sub_1003F760;
  *((_WORD *)v57 + 61702) = 3;
  (*(void(__thiscall **)(_DWORD *, char *, int, int, void *))(v58 + 52))(
      v57, asc_100AD300, 1, 1, &unk_100AB468);
  ++*((_WORD *)v4 + 10);
  v59 = (_DWORD *)malloc(0x1E214u);
  if (v59)
      v60 = meth_unk1E214_init(v59);
  else
      v60 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v60;
  if (!v60)
      sub_1003E260(4);
  (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v60 + 56))(
      v60, a1, 1121452032, 1115947008, 1, 2, 5, 1, 25);
  v60[1] = sub_10040890;
  v61 = *((_WORD *)v4 + 10) + 1;
  ++*((_WORD *)v60 + 5466);
  *((_WORD *)v60 + 5467) = v61;
  ++*((_WORD *)v4 + 10);
  v62 = (_DWORD *)malloc(0x1E214u);
  if (v62)
      v63 = meth_unk1E214_init(v62);
  else
      v63 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v63;
  if (!v63)
      sub_1003E260(4);
  v64 = *v63;
  (*(void(__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v63 + 56))(
      v63, a1, v4[206], 1123418112, 1052673, 2, 5, 1, -1);
  v63[1] = sub_1003F7F0;
  *((_WORD *)v63 + 61702) = 3;
  (*(void(__thiscall **)(_DWORD *, char *, int, int, void *))(v64 + 52))(
      v63, asc_100AD300, 1, 1, &unk_100AB498);
  ++*((_WORD *)v4 + 10);
  v65 = (_DWORD *)malloc(0x1E214u);
  if (v65)
      v66 = meth_unk1E214_init(v65);
  else
      v66 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v66;
  if (!v66)
      sub_1003E260(4);
  (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v66 + 56))(
      v66, a1, 1139671040, 1124139008, 1, 2, 5, 1, 14);
  v66[1] = sub_100408B0;
  v67 = *((_WORD *)v4 + 10) + 1;
  ++*((_WORD *)v66 + 5466);
  *((_WORD *)v66 + 5467) = v67;
  ++*((_WORD *)v4 + 10);
  v68 = (_DWORD *)malloc(0x1E214u);
  if (v68)
      v69 = meth_unk1E214_init(v68);
  else
      v69 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v69;
  if (!v69)
      sub_1003E260(4);
  v70 = *v69;
  (*(void(__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v69 + 56))(
      v69, a1, v4[206], 1127546880, 1052673, 2, 5, 1, -1);
  v69[1] = sub_1003F990;
  *((_WORD *)v69 + 61702) = 3;
  (*(void(__thiscall **)(_DWORD *, char *, int, int, void *))(v70 + 52))(
      v69, asc_100AD300, 1, 1, &unk_100AB488);
  ++*((_WORD *)v4 + 10);
  v71 = (_DWORD *)malloc(0x1E214u);
  if (v71)
      v72 = meth_unk1E214_init(v71);
  else
      v72 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v72;
  if (!v72)
      sub_1003E260(4);
  (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v72 + 56))(
      v72, a1, 1140621312, 1128792064, 1, 2, 5, 1, 12);
  v72[1] = sub_10040870;
  v73 = *((_WORD *)v4 + 10) + 1;
  ++*((_WORD *)v72 + 5466);
  *((_WORD *)v72 + 5467) = v73;
  ++*((_WORD *)v4 + 10);
  v74 = (_DWORD *)malloc(0x1E214u);
  if (v74)
      v75 = meth_unk1E214_init(v74);
  else
      v75 = 0;
  v4[*((unsigned __int16 *)v4 + 10) + 6] = v75;
  if (!v75)
      sub_1003E260(4);
  v76 = *v75;
  (*(void(__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v75 + 56))(
      v75, a1, v4[206], 1132658688, 1052673, 2, 5, 1, -1);
  v75[1] = sub_1003F860;
  *((_WORD *)v75 + 61702) = 3;
  (*(void(__thiscall **)(_DWORD *, char *, int, int, void *))(v76 + 52))(
      v75, asc_100AD300, 1, 1, &unk_100AB478);
  ++*((_WORD *)v4 + 10);
  return 1;
}
// 1003E920: using guessed type int __cdecl sub_1003E920(int);
// 1003F720: using guessed type int __cdecl sub_1003F720(int);
// 1003F760: using guessed type int __cdecl sub_1003F760(int);
// 1003F7F0: using guessed type int __cdecl sub_1003F7F0(int);
// 1003F860: using guessed type int __cdecl sub_1003F860(int);
// 1003F990: using guessed type int __cdecl sub_1003F990(int);
// 10040870: using guessed type int __cdecl sub_10040870(int);
// 10040890: using guessed type int __cdecl sub_10040890(int);
// 100408B0: using guessed type int __cdecl sub_100408B0(int);
// 10042B30: using guessed type int sub_10042B30();
// 10042C80: using guessed type int sub_10042C80();
// 10042DC0: using guessed type int sub_10042DC0();
// 10042E20: using guessed type int sub_10042E20();
// 10042E80: using guessed type int sub_10042E80();
// 10043760: using guessed type int __cdecl sub_10043760(int);
// 10043FA0: using guessed type int __cdecl sub_10043FA0(int);
// 100464E0: using guessed type int __cdecl sub_100464E0(int);
// 100AA010: using guessed type int g_GameMode;
// 100AB428: using guessed type int dword_100AB428;
// 100AB42C: using guessed type int dword_100AB42C;
// 100AB448: using guessed type int dword_100AB448;
// 10AA29B4: using guessed type int dword_10AA29B4;
