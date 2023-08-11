#include "types-win32.h"
//----- (1004A580) --------------------------------------------------------
int __cdecl s_unk000C8_1004A580(int a1) {
  unsigned __int16 v2; // ax
  unk00348 *v3;        // eax
  unk00348 *v4;        // esi
  unk1E214 *v5;        // eax
  unk1E214 *v6;        // ebp
  unk1E214 *v7;        // eax
  unk1E214 *v8;        // ebp
  unk1E214Vtbl *v9;    // ebx
  LPCSTR v10;          // eax
  unk1E214 *v11;       // eax
  unk1E214 *v12;       // ebp
  unk1E214Vtbl *v13;   // ebx
  LPCSTR v14;          // eax
  unk1E214 *v15;       // eax
  unk1E214 *v16;       // ebp
  unk1E214Vtbl *v17;   // ebx
  LPCSTR v18;          // eax
  unk1E214 *v19;       // eax
  unk1E214 *v20;       // ebp
  unk1E214Vtbl *v21;   // ebx
  LPCSTR v22;          // eax
  unk1E214 *v23;       // eax
  unk1E214 *v24;       // ebp
  unk1E214Vtbl *v25;   // ebx
  LPCSTR v26;          // eax
  unk1E214 *v27;       // eax
  unk1E214 *v28;       // ebp
  unk1E214Vtbl *v29;   // ebx
  LPCSTR v30;          // eax
  unk1E214 *v31;       // eax
  unk1E214 *v32;       // ebp
  unk1E214Vtbl *v33;   // ebx
  LPCSTR v34;          // eax
  unk1E214 *v35;       // eax
  unk1E214 *v36;       // ebp
  unk1E214Vtbl *v37;   // ebx
  LPCSTR v38;          // eax
  unk1E214 *v39;       // eax
  unk1E214 *v40;       // ebp
  int v41;             // ebx
  __int64 v42;         // rax
  unk1E214 *v43;       // eax
  unk1E214 *v44;       // ebp
  int v45;             // ebx
  unk1E214 *v46;       // eax
  unk1E214 *v47;       // ebp
  __int64 v48;         // rax
  unk1E214 *v49;       // eax
  unk1E214 *v50;       // ebp
  unk1E214 *v51;       // eax
  unk1E214 *v52;       // ebp
  unk1E214 *v53;       // eax
  unk1E214 *v54;       // ebp
  WORD v55;            // ax
  unk1E214 *v56;       // eax
  unk1E214 *v57;       // ebp
  unk1E214Vtbl *v58;   // ebx
  unk1E214 *v59;       // eax
  unk1E214 *v60;       // ebp
  WORD v61;            // ax
  unk1E214 *v62;       // eax
  unk1E214 *v63;       // ebp
  unk1E214Vtbl *v64;   // ebx
  unk1E214 *v65;       // eax
  unk1E214 *v66;       // ebp
  WORD v67;            // ax
  unk1E214 *v68;       // eax
  unk1E214 *v69;       // ebp
  unk1E214Vtbl *v70;   // ebx
  unk1E214 *v71;       // eax
  unk1E214 *v72;       // ebp
  WORD v73;            // ax
  unk1E214 *v74;       // eax
  unk1E214 *v75;       // ebp
  unk1E214Vtbl *v76;   // ebx
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
  v3 = (unk00348 *)malloc(0x348u);
  if (v3)
      v4 = meth_unk00348_10048470(v3);
  else
      v4 = 0;
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v4;
  if (!v4)
      sub_1003E260(4);
  ++*(_WORD *)(a1 + 16);
  v4->field_340 = (unk000C8 *)a1;
  v4->field_10 = 0;
  v4->flags_338 = 1128464384;
  v4->field_33C = 111.0;
  v5 = (unk1E214 *)malloc(0x1E214u);
  if (v5)
      v6 = meth_unk1E214_init(v5);
  else
      v6 = 0;
  v4->field_18[v4->field_14] = v6;
  if (!v6)
      sub_1003E260(4);
  ((void(__thiscall *)(unk1E214 *, int, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))
       v6->lpVtbl->meth14)(v6, a1, 0, 0, 9, 2, 5, 0, 0);
  ++v4->field_14;
  v7 = (unk1E214 *)malloc(0x1E214u);
  if (v7)
      v8 = meth_unk1E214_init(v7);
  else
      v8 = 0;
  v4->field_18[v4->field_14] = v8;
  if (!v8)
      sub_1003E260(4);
  v9 = v8->lpVtbl;
  ((void(__thiscall *)(unk1E214 *, int, int, int, int, int, int, int, int))v8->lpVtbl->meth14)(
      v8, a1, v4->flags_338, 1092616192, 1048585, 2, 5, 1, -1);
  v8->field_3838.field_1A99C[28] = 3;
  v10 = GetStringWithIndex(0x13u);
  v9->meth13(v8, v10, 1, 1, &unk_100AB508);
  ++v4->field_14;
  v11 = (unk1E214 *)malloc(0x1E214u);
  if (v11)
      v12 = meth_unk1E214_init(v11);
  else
      v12 = 0;
  v4->field_18[v4->field_14] = v12;
  if (!v12)
      sub_1003E260(4);
  v13 = v12->lpVtbl;
  ((void(__thiscall *)(unk1E214 *, int, int, _DWORD, int, int, int, int, int))v12->lpVtbl->meth14)(
      v12, a1, v4->flags_338, LODWORD(v4->field_33C), 1056769, 2, 5, 1, -1);
  v12->field_C = sub_10047360;
  v12->field_8 = sub_10042B30;
  v12->field_3838.field_1A99C[28] = 3;
  v14 = GetStringWithIndex(0x14u);
  v13->meth13(v12, v14, 1, 1, &dword_100AB448);
  ++v4->field_14;
  ++LOWORD(v4->last);
  v15 = (unk1E214 *)malloc(0x1E214u);
  if (v15)
      v16 = meth_unk1E214_init(v15);
  else
      v16 = 0;
  v4->field_18[v4->field_14] = v16;
  if (!v16)
      sub_1003E260(4);
  v17 = v16->lpVtbl;
  v78 = v4->field_33C - -19.0;
  ((void(__thiscall *)(unk1E214 *, int, int, _DWORD, int, int, int, int, int))v16->lpVtbl->meth14)(
      v16, a1, v4->flags_338, LODWORD(v78), 1056769, 2, 5, 1, -1);
  v16->field_C = sub_10047360;
  v16->field_8 = sub_10042DC0;
  v16->field_3838.field_1A99C[28] = 3;
  v18 = GetStringWithIndex(0x15u);
  v17->meth13(v16, v18, 1, 1, &dword_100AB448);
  ++v4->field_14;
  ++LOWORD(v4->last);
  v19 = (unk1E214 *)malloc(0x1E214u);
  if (v19)
      v20 = meth_unk1E214_init(v19);
  else
      v20 = 0;
  v4->field_18[v4->field_14] = v20;
  if (!v20)
      sub_1003E260(4);
  v21 = v20->lpVtbl;
  v79 = v4->field_33C - -38.0;
  ((void(__thiscall *)(unk1E214 *, int, int, _DWORD, int, int, int, int, int))v20->lpVtbl->meth14)(
      v20, a1, v4->flags_338, LODWORD(v79), 1056769, 2, 5, 1, -1);
  v20->field_C = sub_10047360;
  v20->field_8 = sub_10042E20;
  v20->field_3838.field_1A99C[28] = 3;
  v22 = GetStringWithIndex(0x16u);
  v21->meth13(v20, v22, 1, 1, &dword_100AB448);
  ++v4->field_14;
  ++LOWORD(v4->last);
  v23 = (unk1E214 *)malloc(0x1E214u);
  if (v23)
      v24 = meth_unk1E214_init(v23);
  else
      v24 = 0;
  v4->field_18[v4->field_14] = v24;
  if (!v24)
      sub_1003E260(4);
  v25 = v24->lpVtbl;
  v80 = v4->field_33C - -57.0;
  ((void(__thiscall *)(unk1E214 *, int, int, _DWORD, int, int, int, int, int))v24->lpVtbl->meth14)(
      v24, a1, v4->flags_338, LODWORD(v80), 1056769, 2, 5, 1, -1);
  v24->field_C = sub_10047360;
  v24->field_8 = sub_10042C80;
  v24->field_3838.field_1A99C[28] = 3;
  v26 = GetStringWithIndex(0x17u);
  v25->meth13(v24, v26, 1, 1, &dword_100AB448);
  ++v4->field_14;
  ++LOWORD(v4->last);
  v27 = (unk1E214 *)malloc(0x1E214u);
  if (v27)
      v28 = meth_unk1E214_init(v27);
  else
      v28 = 0;
  v4->field_18[v4->field_14] = v28;
  if (!v28)
      sub_1003E260(4);
  v29 = v28->lpVtbl;
  v81 = v4->field_33C - -76.0;
  ((void(__thiscall *)(unk1E214 *, int, int, _DWORD, int, int, int, int, int))v28->lpVtbl->meth14)(
      v28, a1, v4->flags_338, LODWORD(v81), 1056769, 2, 5, 1, -1);
  v28->field_C = sub_10047360;
  v28->field_8 = sub_10042E80;
  v28->field_3838.field_1A99C[28] = 3;
  v30 = GetStringWithIndex(0x18u);
  v29->meth13(v28, v30, 1, 1, &dword_100AB448);
  ++v4->field_14;
  ++LOWORD(v4->last);
  v31 = (unk1E214 *)malloc(0x1E214u);
  if (v31)
      v32 = meth_unk1E214_init(v31);
  else
      v32 = 0;
  v4->field_18[v4->field_14] = v32;
  if (!v32)
      sub_1003E260(4);
  v33 = v32->lpVtbl;
  v82 = v4->field_33C - -114.0;
  ((void(__thiscall *)(unk1E214 *, int, int, _DWORD, int, int, int, int, int))v32->lpVtbl->meth14)(
      v32, a1, v4->flags_338, LODWORD(v82), 1056769, 2, 5, 1, -1);
  v32->field_C = sub_10047360;
  v32->field_8 = (int(__cdecl *)())sub_10043760;
  v32->field_3838.field_1A99C[28] = 3;
  v34 = GetStringWithIndex(0x19u);
  v33->meth13(v32, v34, 1, 1, &dword_100AB448);
  ++v4->field_14;
  ++LOWORD(v4->last);
  v35 = (unk1E214 *)malloc(0x1E214u);
  if (v35)
      v36 = meth_unk1E214_init(v35);
  else
      v36 = 0;
  v4->field_18[v4->field_14] = v36;
  if (!v36)
      sub_1003E260(4);
  v37 = v36->lpVtbl;
  v83 = v4->field_33C - -133.0;
  ((void(__thiscall *)(unk1E214 *, int, int, _DWORD, int, int, int, int, int))v36->lpVtbl->meth14)(
      v36, a1, v4->flags_338, LODWORD(v83), 1056769, 2, 5, 1, -1);
  v36->field_C = sub_10047360;
  v36->field_8 = (int(__cdecl *)())sub_100464E0;
  v36->field_3838.field_1A99C[28] = 3;
  v38 = GetStringWithIndex(0xCu);
  v37->meth13(v36, v38, 1, 1, &dword_100AB448);
  dword_10AA29B4 = (int)v36;
  ++v4->field_14;
  ++LOWORD(v4->last);
  v84 = (float)dword_100AB428;
  v86 = (float)dword_100AB42C;
  if (gGameMode == GAME_MODE_0) {
      v39 = (unk1E214 *)malloc(0x1E214u);
      if (v39)
          v40 = meth_unk1E214_init(v39);
      else
          v40 = 0;
      v4->field_18[v4->field_14] = v40;
      if (!v40)
          sub_1003E260(4);
      ((void(__thiscall *)(
          unk1E214 *, int, float, float, int, int, int, int, int))v40->lpVtbl->meth14)(
          v40, a1, COERCE_FLOAT(LODWORD(v84)), COERCE_FLOAT(LODWORD(v86)), 4202497, 2, 5, 1, 120);
      v40->field_C = sub_10047360;
      v40->field_8 = sub_100458E0;
      v41 = (__int64)v86;
      *(_DWORD *)v40->gap54 = v41;
      v42 = (__int64)v84;
      v40->field_50 = v42;
      v40->field_58 = v42 + 127;
      *(_DWORD *)v40->gap5C = v41 + 33;
      v40->field_2968 = 0;
      v86 = v86 - -33.0;
      *(_WORD *)&v40->field_2A40[2] = 121;
      ++v4->field_14;
  }
  v43 = (unk1E214 *)malloc(0x1E214u);
  if (v43)
      v44 = meth_unk1E214_init(v43);
  else
      v44 = 0;
  v4->field_18[v4->field_14] = v44;
  if (!v44)
      sub_1003E260(4);
  ((void(__thiscall *)(unk1E214 *, int, float, float, int, int, int, int, int))v44->lpVtbl->meth14)(
      v44, a1, COERCE_FLOAT(LODWORD(v84)), COERCE_FLOAT(LODWORD(v86)), 4202497, 2, 5, 1, 82);
  v44->field_C = sub_10047360;
  v44->field_8 = (int(__cdecl *)())sub_10043FA0;
  v85 = (__int64)v86;
  *(_DWORD *)v44->gap54 = v85;
  v45 = (__int64)v84;
  v44->field_2968 = 0;
  v44->field_50 = v45;
  *(_WORD *)&v44->field_2A40[2] = 83;
  v87 = v86 - -33.0;
  v44->field_58 = v45 + 127;
  *(_DWORD *)v44->gap5C = v85 + 33;
  ++v4->field_14;
  v46 = (unk1E214 *)malloc(0x1E214u);
  if (v46)
      v47 = meth_unk1E214_init(v46);
  else
      v47 = 0;
  v4->field_18[v4->field_14] = v47;
  if (!v47)
      sub_1003E260(4);
  ((void(__thiscall *)(unk1E214 *, int, float, float, int, int, int, int, int))v47->lpVtbl->meth14)(
      v47, a1, COERCE_FLOAT(LODWORD(v84)), COERCE_FLOAT(LODWORD(v87)), 4202497, 2, 5, 1, 84);
  v47->field_C = sub_10047360;
  v47->field_8 = sub_100458C0;
  v48 = (__int64)v87;
  *(_DWORD *)v47->gap54 = v48;
  v47->field_50 = v45;
  v47->field_58 = v45 + 127;
  *(_DWORD *)v47->gap5C = v48 + 33;
  v47->field_2968 = 0;
  *(_WORD *)&v47->field_2A40[2] = 85;
  ++v4->field_14;
  v49 = (unk1E214 *)malloc(0x1E214u);
  if (v49)
      v50 = meth_unk1E214_init(v49);
  else
      v50 = 0;
  v4->field_18[v4->field_14] = v50;
  if (!v50)
      sub_1003E260(4);
  ((void(__thiscall *)(unk1E214 *, int, int, int, int, int, int, int, int))v50->lpVtbl->meth14)(
      v50, a1, 1114898432, 1131675648, 9, 2, 5, 1, 54);
  ++v4->field_14;
  v51 = (unk1E214 *)malloc(0x1E214u);
  if (v51)
      v52 = meth_unk1E214_init(v51);
  else
      v52 = 0;
  v4->field_18[v4->field_14] = v52;
  if (!v52)
      sub_1003E260(4);
  ((void(__thiscall *)(unk1E214 *, int, int, int, int, int, int, int, int))v52->lpVtbl->meth14)(
      v52, a1, 1116864512, 1129709568, 1, 2, 5, 1, 53);
  v52->field_4 = sub_1003E920;
  ++v4->field_14;
  v53 = (unk1E214 *)malloc(0x1E214u);
  if (v53)
      v54 = meth_unk1E214_init(v53);
  else
      v54 = 0;
  v4->field_18[v4->field_14] = v54;
  if (!v54)
      sub_1003E260(4);
  ((void(__thiscall *)(unk1E214 *, int, int, int, int, int, int, int, int))v54->lpVtbl->meth14)(
      v54, a1, 1135181824, 1116471296, 1, 2, 5, 1, 11);
  v54->field_4 = sub_1003F720;
  v55 = v4->field_14 + 1;
  ++v54->field_2AB4[0];
  v54->field_2AB4[1] = v55;
  ++v4->field_14;
  v56 = (unk1E214 *)malloc(0x1E214u);
  if (v56)
      v57 = meth_unk1E214_init(v56);
  else
      v57 = 0;
  v4->field_18[v4->field_14] = v57;
  if (!v57)
      sub_1003E260(4);
  v58 = v57->lpVtbl;
  ((void(__thiscall *)(unk1E214 *, int, int, int, int, int, int, int, int))v57->lpVtbl->meth14)(
      v57, a1, v4->flags_338, 1124663296, 1052673, 2, 5, 1, -1);
  v57->field_4 = sub_1003F760;
  v57->field_3838.field_1A99C[28] = 3;
  v58->meth13(v57, asc_100AD300, 1, 1, &unk_100AB468);
  ++v4->field_14;
  v59 = (unk1E214 *)malloc(0x1E214u);
  if (v59)
      v60 = meth_unk1E214_init(v59);
  else
      v60 = 0;
  v4->field_18[v4->field_14] = v60;
  if (!v60)
      sub_1003E260(4);
  ((void(__thiscall *)(unk1E214 *, int, int, int, int, int, int, int, int))v60->lpVtbl->meth14)(
      v60, a1, 1121452032, 1115947008, 1, 2, 5, 1, 25);
  v60->field_4 = sub_10040890;
  v61 = v4->field_14 + 1;
  ++v60->field_2AB4[0];
  v60->field_2AB4[1] = v61;
  ++v4->field_14;
  v62 = (unk1E214 *)malloc(0x1E214u);
  if (v62)
      v63 = meth_unk1E214_init(v62);
  else
      v63 = 0;
  v4->field_18[v4->field_14] = v63;
  if (!v63)
      sub_1003E260(4);
  v64 = v63->lpVtbl;
  ((void(__thiscall *)(unk1E214 *, int, int, int, int, int, int, int, int))v63->lpVtbl->meth14)(
      v63, a1, v4->flags_338, 1123418112, 1052673, 2, 5, 1, -1);
  v63->field_4 = sub_1003F7F0;
  v63->field_3838.field_1A99C[28] = 3;
  v64->meth13(v63, asc_100AD300, 1, 1, &unk_100AB498);
  ++v4->field_14;
  v65 = (unk1E214 *)malloc(0x1E214u);
  if (v65)
      v66 = meth_unk1E214_init(v65);
  else
      v66 = 0;
  v4->field_18[v4->field_14] = v66;
  if (!v66)
      sub_1003E260(4);
  ((void(__thiscall *)(unk1E214 *, int, int, int, int, int, int, int, int))v66->lpVtbl->meth14)(
      v66, a1, 1139671040, 1124139008, 1, 2, 5, 1, 14);
  v66->field_4 = sub_100408B0;
  v67 = v4->field_14 + 1;
  ++v66->field_2AB4[0];
  v66->field_2AB4[1] = v67;
  ++v4->field_14;
  v68 = (unk1E214 *)malloc(0x1E214u);
  if (v68)
      v69 = meth_unk1E214_init(v68);
  else
      v69 = 0;
  v4->field_18[v4->field_14] = v69;
  if (!v69)
      sub_1003E260(4);
  v70 = v69->lpVtbl;
  ((void(__thiscall *)(unk1E214 *, int, int, int, int, int, int, int, int))v69->lpVtbl->meth14)(
      v69, a1, v4->flags_338, 1127546880, 1052673, 2, 5, 1, -1);
  v69->field_4 = sub_1003F990;
  v69->field_3838.field_1A99C[28] = 3;
  v70->meth13(v69, asc_100AD300, 1, 1, &unk_100AB488);
  ++v4->field_14;
  v71 = (unk1E214 *)malloc(0x1E214u);
  if (v71)
      v72 = meth_unk1E214_init(v71);
  else
      v72 = 0;
  v4->field_18[v4->field_14] = v72;
  if (!v72)
      sub_1003E260(4);
  ((void(__thiscall *)(unk1E214 *, int, int, int, int, int, int, int, int))v72->lpVtbl->meth14)(
      v72, a1, 1140621312, 1128792064, 1, 2, 5, 1, 12);
  v72->field_4 = sub_10040870;
  v73 = v4->field_14 + 1;
  ++v72->field_2AB4[0];
  v72->field_2AB4[1] = v73;
  ++v4->field_14;
  v74 = (unk1E214 *)malloc(0x1E214u);
  if (v74)
      v75 = meth_unk1E214_init(v74);
  else
      v75 = 0;
  v4->field_18[v4->field_14] = v75;
  if (!v75)
      sub_1003E260(4);
  v76 = v75->lpVtbl;
  ((void(__thiscall *)(unk1E214 *, int, int, int, int, int, int, int, int))v75->lpVtbl->meth14)(
      v75, a1, v4->flags_338, 1132658688, 1052673, 2, 5, 1, -1);
  v75->field_4 = sub_1003F860;
  v75->field_3838.field_1A99C[28] = 3;
  v76->meth13(v75, asc_100AD300, 1, 1, &unk_100AB478);
  ++v4->field_14;
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
// 100AB428: using guessed type int dword_100AB428;
// 100AB42C: using guessed type int dword_100AB42C;
// 100AB448: using guessed type int dword_100AB448;
// 10AA29B4: using guessed type int dword_10AA29B4;
