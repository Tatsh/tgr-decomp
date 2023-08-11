#include "types-win32.h"
//----- (1004B430) --------------------------------------------------------
int __cdecl s_unk000C8_1004B430(int a1) {
  unsigned __int16 v1; // ax
  unk00348 *v2;        // eax
  unk00348 *v3;        // esi
  unk1E214 *v4;        // eax
  unk1E214 *v5;        // ebp
  unk1E214 *v6;        // eax
  unk1E214 *v7;        // ebp
  unk1E214Vtbl *v8;    // ebx
  LPCSTR v9;           // eax
  unk1E214 *v10;       // eax
  unk1E214 *v11;       // ebp
  unk1E214Vtbl *v12;   // ebx
  LPCSTR v13;          // eax
  unk1E214 *v14;       // eax
  unk1E214 *v15;       // ebp
  unk1E214Vtbl *v16;   // ebx
  LPCSTR v17;          // eax
  unk1E214 *v18;       // eax
  unk1E214 *v19;       // ebp
  unk1E214Vtbl *v20;   // ebx
  LPCSTR v21;          // eax
  unk1E214 *v22;       // eax
  unk1E214 *v23;       // ebp
  unk1E214Vtbl *v24;   // ebx
  LPCSTR v25;          // eax
  unk1E214 *v26;       // eax
  unk1E214 *v27;       // ebp
  unk1E214 *v28;       // eax
  unk1E214 *v29;       // ebp
  unk1E214Vtbl *v30;   // ebx
  LPCSTR v31;          // eax
  unk1E214 *v32;       // eax
  unk1E214 *v33;       // ebp
  WORD v34;            // ax
  unk1E214 *v35;       // eax
  unk1E214 *v36;       // ebp
  unk1E214Vtbl *v37;   // ebx
  unk1E214 *v38;       // eax
  unk1E214 *v39;       // ebp
  WORD v40;            // ax
  unk1E214 *v41;       // eax
  unk1E214 *v42;       // ebp
  unk1E214Vtbl *v43;   // ebx
  unk1E214 *v44;       // eax
  unk1E214 *v45;       // ebp
  unk1E214Vtbl *v46;   // ebx
  unk1E214 *v47;       // eax
  unk1E214 *v48;       // ebp
  unk1E214Vtbl *v49;   // ebx
  LPCSTR v50;          // eax
  float v52;           // [esp+234h] [ebp-38h]
  float v53;           // [esp+234h] [ebp-38h]
  float v54;           // [esp+234h] [ebp-38h]
  float v55;           // [esp+234h] [ebp-38h]
  float v56;           // [esp+234h] [ebp-38h]
  float v57;           // [esp+25Ch] [ebp-10h]
  float v58;           // [esp+25Ch] [ebp-10h]
  float v59;           // [esp+25Ch] [ebp-10h]
  float v60;           // [esp+25Ch] [ebp-10h]

  v1 = *(_WORD *)(a1 + 16);
  *(_WORD *)(a1 + 18) = 0;
  v57 = 0.0;
  *(_DWORD *)(a1 + 4 * v1 + 108) = 1;
  v2 = (unk00348 *)malloc(0x348u);
  if (v2)
      v3 = meth_unk00348_10048470(v2);
  else
      v3 = 0;
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v3;
  if (!v3)
      sub_1003E260(4);
  ++*(_WORD *)(a1 + 16);
  v3->field_340 = (unk000C8 *)a1;
  v3->field_10 = 0;
  v3->flags_338 = 1128464384;
  v3->field_33C = 130.0;
  v4 = (unk1E214 *)malloc(0x1E214u);
  if (v4)
      v5 = meth_unk1E214_init(v4);
  else
      v5 = 0;
  v3->field_18[v3->field_14] = v5;
  if (!v5)
      sub_1003E260(4);
  ((void(__thiscall *)(unk1E214 *, int, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))
       v5->lpVtbl->meth14)(v5, a1, 0, 0, 9, 2, 5, 0, 0);
  ++v3->field_14;
  v6 = (unk1E214 *)malloc(0x1E214u);
  if (v6)
      v7 = meth_unk1E214_init(v6);
  else
      v7 = 0;
  v3->field_18[v3->field_14] = v7;
  if (!v7)
      sub_1003E260(4);
  v8 = v7->lpVtbl;
  ((void(__thiscall *)(unk1E214 *, int, int, int, int, int, int, int, int))v7->lpVtbl->meth14)(
      v7, a1, v3->flags_338, 1092616192, 1048585, 2, 5, 1, -1);
  v7->field_3838.field_1A99C[28] = 3;
  v9 = GetStringWithIndex(0x1Au);
  v8->meth13(v7, v9, 1, 1, &unk_100AB508);
  ++v3->field_14;
  if (dword_100AC304) {
      v10 = (unk1E214 *)malloc(0x1E214u);
      if (v10)
          v11 = meth_unk1E214_init(v10);
      else
          v11 = 0;
      v3->field_18[v3->field_14] = v11;
      if (!v11)
          sub_1003E260(4);
      v12 = v11->lpVtbl;
      ((void(__thiscall *)(
          unk1E214 *, int, int, _DWORD, int, int, int, int, int))v11->lpVtbl->meth14)(
          v11, a1, v3->flags_338, LODWORD(v3->field_33C), 1056769, 2, 5, 1, -1);
      v11->field_C = sub_100474B0;
      v11->field_8 = sub_10042EE0;
      v11->field_3838.field_1A99C[28] = 3;
      v13 = GetStringWithIndex(0x1Bu);
      v12->meth13(v11, v13, 1, 1, &dword_100AB448);
      ++v3->field_14;
      ++LOWORD(v3->last);
      v57 = 19.0;
  }
  v14 = (unk1E214 *)malloc(0x1E214u);
  if (v14)
      v15 = meth_unk1E214_init(v14);
  else
      v15 = 0;
  v3->field_18[v3->field_14] = v15;
  if (!v15)
      sub_1003E260(4);
  v16 = v15->lpVtbl;
  v52 = v57 + v3->field_33C;
  ((void(__thiscall *)(unk1E214 *, int, int, _DWORD, int, int, int, int, int))v15->lpVtbl->meth14)(
      v15, a1, v3->flags_338, LODWORD(v52), 1056769, 2, 5, 1, -1);
  v15->field_C = sub_10047360;
  v15->field_8 = sub_10043180;
  v15->field_3838.field_1A99C[28] = 3;
  v17 = GetStringWithIndex(0x1Cu);
  v16->meth13(v15, v17, 1, 1, &dword_100AB448);
  ++v3->field_14;
  ++LOWORD(v3->last);
  v58 = v57 - -19.0;
  v18 = (unk1E214 *)malloc(0x1E214u);
  if (v18)
      v19 = meth_unk1E214_init(v18);
  else
      v19 = 0;
  v3->field_18[v3->field_14] = v19;
  if (!v19)
      sub_1003E260(4);
  v20 = v19->lpVtbl;
  v53 = v58 + v3->field_33C;
  ((void(__thiscall *)(unk1E214 *, int, int, _DWORD, int, int, int, int, int))v19->lpVtbl->meth14)(
      v19, a1, v3->flags_338, LODWORD(v53), 1056769, 2, 5, 1, -1);
  v19->field_C = sub_10047360;
  v19->field_8 = sub_100430B0;
  v19->field_3838.field_1A99C[28] = 3;
  v21 = GetStringWithIndex(0x1Du);
  v20->meth13(v19, v21, 1, 1, &dword_100AB448);
  ++v3->field_14;
  ++LOWORD(v3->last);
  v59 = v58 - -57.0;
  v22 = (unk1E214 *)malloc(0x1E214u);
  if (v22)
      v23 = meth_unk1E214_init(v22);
  else
      v23 = 0;
  v3->field_18[v3->field_14] = v23;
  if (!v23)
      sub_1003E260(4);
  v24 = v23->lpVtbl;
  v54 = v59 + v3->field_33C;
  ((void(__thiscall *)(unk1E214 *, int, int, _DWORD, int, int, int, int, int))v23->lpVtbl->meth14)(
      v23, a1, v3->flags_338, LODWORD(v54), 1056769, 2, 5, 1, -1);
  v23->field_C = sub_100474B0;
  v23->field_8 = sub_10045110;
  v23->field_3838.field_1A99C[28] = 3;
  v25 = GetStringWithIndex(0x1Eu);
  v24->meth13(v23, v25, 1, 1, &dword_100AB448);
  ++v3->field_14;
  ++LOWORD(v3->last);
  v60 = v59 - -19.0;
  v26 = (unk1E214 *)malloc(0x1E214u);
  if (v26)
      v27 = meth_unk1E214_init(v26);
  else
      v27 = 0;
  v3->field_18[v3->field_14] = v27;
  if (!v27)
      sub_1003E260(4);
  v55 = v60 + v3->field_33C;
  ((void(__thiscall *)(unk1E214 *, int, int, _DWORD, int, int, int, int, int))v27->lpVtbl->meth14)(
      v27, a1, v3->flags_338, LODWORD(v55), 1056769, 2, 5, 1, -1);
  v28 = (unk1E214 *)malloc(0x1E214u);
  if (v28)
      v29 = meth_unk1E214_init(v28);
  else
      v29 = 0;
  v3->field_18[v3->field_14] = v29;
  if (!v29)
      sub_1003E260(4);
  v30 = v29->lpVtbl;
  v56 = v3->field_33C - -114.0;
  ((void(__thiscall *)(unk1E214 *, int, int, _DWORD, int, int, int, int, int))v29->lpVtbl->meth14)(
      v29, a1, v3->flags_338, LODWORD(v56), 1056769, 2, 5, 1, -1);
  v29->field_C = sub_10047360;
  v29->field_8 = (int(__cdecl *)())sub_10046450;
  v29->field_3838.field_1A99C[28] = 3;
  v31 = GetStringWithIndex(0xCu);
  v30->meth13(v29, v31, 1, 1, &dword_100AB448);
  dword_10AA29AC = (int)v29;
  ++v3->field_14;
  ++LOWORD(v3->last);
  v32 = (unk1E214 *)malloc(0x1E214u);
  if (v32)
      v33 = meth_unk1E214_init(v32);
  else
      v33 = 0;
  v3->field_18[v3->field_14] = v33;
  if (!v33)
      sub_1003E260(4);
  ((void(__thiscall *)(unk1E214 *, int, int, int, int, int, int, int, int))v33->lpVtbl->meth14)(
      v33, a1, 1116864512, 1129578496, 1, 2, 5, 1, 22);
  v33->field_4 = sub_100407E0;
  v34 = v3->field_14 + 1;
  ++v33->field_2AB4[0];
  v33->field_2AB4[1] = v34;
  ++v3->field_14;
  v35 = (unk1E214 *)malloc(0x1E214u);
  if (v35)
      v36 = meth_unk1E214_init(v35);
  else
      v36 = 0;
  v3->field_18[v3->field_14] = v36;
  if (!v36)
      sub_1003E260(4);
  v37 = v36->lpVtbl;
  ((void(__thiscall *)(unk1E214 *, int, int, int, int, int, int, int, int))v36->lpVtbl->meth14)(
      v36, a1, v3->flags_338, 1133084672, 1052673, 2, 5, 1, -1);
  v36->field_4 = sub_1003FE80;
  v36->field_3838.field_1A99C[28] = 3;
  v37->meth13(v36, asc_100AD300, 1, 1, &unk_100AB4B8);
  ++v3->field_14;
  if (dword_100AC304) {
      v38 = (unk1E214 *)malloc(0x1E214u);
      if (v38)
          v39 = meth_unk1E214_init(v38);
      else
          v39 = 0;
      v3->field_18[v3->field_14] = v39;
      if (!v39)
          sub_1003E260(4);
      ((void(__thiscall *)(unk1E214 *, int, int, int, int, int, int, int, int))v39->lpVtbl->meth14)(
          v39, a1, 1134723072, 1116733440, 1, 2, 5, 1, 17);
      v39->field_4 = sub_10040730;
      v40 = v3->field_14 + 1;
      ++v39->field_2AB4[0];
      v39->field_2AB4[1] = v40;
      ++v3->field_14;
      v41 = (unk1E214 *)malloc(0x1E214u);
      if (v41)
          v42 = meth_unk1E214_init(v41);
      else
          v42 = 0;
      v3->field_18[v3->field_14] = v42;
      if (!v42)
          sub_1003E260(4);
      v43 = v42->lpVtbl;
      ((void(__thiscall *)(unk1E214 *, int, int, int, int, int, int, int, int))v42->lpVtbl->meth14)(
          v42, a1, v3->flags_338, 1125646336, 1052673, 2, 5, 1, -1);
      v42->field_4 = sub_1003FA00;
      v42->field_3838.field_1A99C[28] = 3;
      v43->meth13(v42, asc_100AD300, 1, 1, &unk_100AB4A8);
      ++v3->field_14;
  }
  v44 = (unk1E214 *)malloc(0x1E214u);
  if (v44)
      v45 = meth_unk1E214_init(v44);
  else
      v45 = 0;
  v3->field_18[v3->field_14] = v45;
  if (!v45)
      sub_1003E260(4);
  v46 = v45->lpVtbl;
  ((void(__thiscall *)(unk1E214 *, int, int, int, int, int, int, int, int))v45->lpVtbl->meth14)(
      v45, a1, 1121189888, 1116209152, 20481, 2, 5, 1, -1);
  v45->field_4 = sub_100408D0;
  v45->field_3838.field_1A99C[28] = 5;
  v46->meth13(v45, ::a1, 1, 3, &unk_100AB458);
  ++v3->field_14;
  v47 = (unk1E214 *)malloc(0x1E214u);
  if (v47)
      v48 = meth_unk1E214_init(v47);
  else
      v48 = 0;
  v3->field_18[v3->field_14] = v48;
  if (!v48)
      sub_1003E260(4);
  v49 = v48->lpVtbl;
  ((void(__thiscall *)(unk1E214 *, int, int, int, int, int, int, int, int))v48->lpVtbl->meth14)(
      v48, a1, 1121189888, 1122369536, 1048577, 2, 5, 1, -1);
  v48->field_3838.field_1A99C[28] = 3;
  v50 = GetStringWithIndex(0x1Du);
  v49->meth13(v48, v50, 1, 1, &unk_100AB458);
  ++v3->field_14;
  return 1;
}
// 1003FA00: using guessed type int __cdecl sub_1003FA00(int);
// 1003FE80: using guessed type int __cdecl sub_1003FE80(int);
// 10040730: using guessed type int __cdecl sub_10040730(int);
// 100407E0: using guessed type int __cdecl sub_100407E0(int);
// 1004B430: using guessed type int __cdecl s_unk000C8_1004B430(int);
// 100AB448: using guessed type int dword_100AB448;
// 100AC304: using guessed type int dword_100AC304;
// 10AA29AC: using guessed type int dword_10AA29AC;
