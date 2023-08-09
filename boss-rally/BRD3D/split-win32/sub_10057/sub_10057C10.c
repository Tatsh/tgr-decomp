#include "types-win32.h"
//----- (10057C10) --------------------------------------------------------
int __cdecl sub_10057C10(int a1) {
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
    unk1E214Vtbl *v28;   // ebx
    LPCSTR v29;          // eax
    unk1E214 *v30;       // eax
    unk1E214 *v31;       // ebp
    unk1E214Vtbl *v32;   // ebx
    LPCSTR v33;          // eax
    unk1E214 *v34;       // eax
    unk1E214 *v35;       // ebp
    __int16 v36;         // ax
    unk1E214 *v37;       // eax
    unk1E214 *v38;       // ebp
    unk1E214Vtbl *v39;   // ebx
    unk1E214 *v40;       // eax
    unk1E214 *v41;       // ebp
    __int16 v42;         // ax
    unk1E214 *v43;       // eax
    unk1E214 *v44;       // ebp
    unk1E214Vtbl *v45;   // ebx
    unk1E214 *v46;       // eax
    unk1E214 *v47;       // ebp
    unk1E214Vtbl *v48;   // ebx
    unk1E214 *v49;       // eax
    unk1E214 *v50;       // ebp
    unk1E214Vtbl *v51;   // ebx
    LPCSTR v52;          // eax
    unk1E214 *v53;       // eax
    unk1E214 *v54;       // ebx
    unk1E214 *v55;       // eax
    unk1E214 *v56;       // ebx
    float v58;           // [esp+288h] [ebp-34h]
    float v59;           // [esp+288h] [ebp-34h]
    float v60;           // [esp+288h] [ebp-34h]
    float v61;           // [esp+288h] [ebp-34h]
    float v62;           // [esp+288h] [ebp-34h]

    v1 = *(_WORD *)(a1 + 16);
    *(_WORD *)(a1 + 18) = 0;
    *(_DWORD *)(a1 + 4 * v1 + 108) = 1;
    v2 = (unk00348 *)malloc(0x348u);
    if (v2)
        v3 = meth_10048470(v2);
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
    v3->field_18[LOWORD(v3->field_14)] = v5;
    if (!v5)
        sub_1003E260(4);
    v5->lpVtbl->field_38(v5, (unk000C8 *)a1, 0, 0, 9, 2, 5, 0, 0);
    ++LOWORD(v3->field_14);
    v6 = (unk1E214 *)malloc(0x1E214u);
    if (v6)
        v7 = meth_unk1E214_init(v6);
    else
        v7 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v7;
    if (!v7)
        sub_1003E260(4);
    v8 = v7->lpVtbl;
    v7->lpVtbl->field_38(v7, (unk000C8 *)a1, v3->flags_338, 1092616192, 1048585, 2, 5, 1, -1);
  LOWORD(v7->?) = 3;
  v9 = GetStringWithIndex(0x64u);
  v8->field_34(v7, v9, 1, 1, &unk_100AB508);
  ++LOWORD(v3->field_14);
  if (gNetworkPlay == 2) {
      v10 = (unk1E214 *)malloc(0x1E214u);
      if (v10)
          v11 = meth_unk1E214_init(v10);
      else
          v11 = 0;
      v3->field_18[LOWORD(v3->field_14)] = v11;
      if (!v11)
          sub_1003E260(4);
      v12 = v11->lpVtbl;
      v11->lpVtbl->field_38(
          v11, (unk000C8 *)a1, v3->flags_338, LODWORD(v3->field_33C), 1056769, 2, 5, 1, -1);
      v11->field_C = sub_100474B0;
      v11->field_8 = sub_10042EE0;
    LOWORD(v11->?) = 3;
    v13 = GetStringWithIndex(0x1Bu);
    v12->field_34(v11, v13, 1, 1, &dword_100AB448);
    ++LOWORD(v3->field_14);
    ++LOWORD(v3->last);
    v14 = (unk1E214 *)malloc(0x1E214u);
    if (v14)
        v15 = meth_unk1E214_init(v14);
    else
        v15 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v15;
    if (!v15)
        sub_1003E260(4);
    v16 = v15->lpVtbl;
    v58 = v3->field_33C - -19.0;
    v15->lpVtbl->field_38(v15, (unk000C8 *)a1, v3->flags_338, LODWORD(v58), 1056769, 2, 5, 1, -1);
    v15->field_C = sub_10047360;
    v15->field_8 = sub_10043180;
    LOWORD(v15->?) = 3;
    v17 = GetStringWithIndex(0x1Cu);
    v16->field_34(v15, v17, 1, 1, &dword_100AB448);
    ++LOWORD(v3->field_14);
    ++LOWORD(v3->last);
    v18 = (unk1E214 *)malloc(0x1E214u);
    if (v18)
        v19 = meth_unk1E214_init(v18);
    else
        v19 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v19;
    if (!v19)
        sub_1003E260(4);
    v20 = v19->lpVtbl;
    v59 = v3->field_33C - -38.0;
    v19->lpVtbl->field_38(v19, (unk000C8 *)a1, v3->flags_338, LODWORD(v59), 1056769, 2, 5, 1, -1);
    v19->field_C = sub_10047360;
    v19->field_8 = sub_100430B0;
    LOWORD(v19->?) = 3;
    v21 = GetStringWithIndex(0x1Du);
    v20->field_34(v19, v21, 1, 1, &dword_100AB448);
    ++LOWORD(v3->field_14);
    ++LOWORD(v3->last);
    v22 = (unk1E214 *)malloc(0x1E214u);
    if (v22)
        v23 = meth_unk1E214_init(v22);
    else
        v23 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v23;
    if (!v23)
        sub_1003E260(4);
    v24 = v23->lpVtbl;
    v60 = v3->field_33C - -57.0;
    v23->lpVtbl->field_38(v23, (unk000C8 *)a1, v3->flags_338, LODWORD(v60), 1056769, 2, 5, 1, -1);
    v23->field_C = sub_10047360;
    v23->field_8 = sub_10044600;
    LOWORD(v23->?) = 3;
    v25 = GetStringWithIndex(0x65u);
    v24->field_34(v23, v25, 1, 1, &dword_100AB448);
    ++LOWORD(v3->field_14);
    ++LOWORD(v3->last);
  }
  v26 = (unk1E214 *)malloc(0x1E214u);
  if (v26)
    v27 = meth_unk1E214_init(v26);
  else
    v27 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v27;
  if (!v27)
    sub_1003E260(4);
  v28 = v27->lpVtbl;
  v61 = v3->field_33C - -95.0;
  v27->lpVtbl->field_38(v27, (unk000C8 *)a1, v3->flags_338, LODWORD(v61), 1056769, 2, 5, 1, -1);
  v27->field_C = sub_10047360;
  v27->field_8 = (int(__cdecl *)())meth_100446D0;
  *(_DWORD *)&v27->field_10[8] = sub_100437D0;
  LOWORD(v27->?) = 3;
  if (dword_10AA2884)
    v29 = GetStringWithIndex(0x66u);
  else
    v29 = GetStringWithIndex(0x1Eu);
  ((void(__thiscall *)(unk1E214 *, LPCSTR))v28->field_34)(v27, v29);
  ++LOWORD(v3->field_14);
  ++LOWORD(v3->last);
  v30 = (unk1E214 *)malloc(0x1E214u);
  if (v30)
    v31 = meth_unk1E214_init(v30);
  else
    v31 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v31;
  if (!v31)
    sub_1003E260(4);
  v32 = v31->lpVtbl;
  v62 = v3->field_33C - -114.0;
  ((void(__thiscall *)(unk1E214 *, int, int, _DWORD, int, int, int, int, int, int, int, int *))
       v31->lpVtbl->field_38)(
      v31, a1, v3->flags_338, LODWORD(v62), 1056769, 2, 5, 1, -1, 1, 1, &dword_100AB448);
  v31->field_C = sub_10047360;
  LOWORD(v31->?) = 3;
  if (dword_10A9D000)
    v33 = GetStringWithIndex(0x67u);
  else
    v33 = GetStringWithIndex(0xCu);
  ((void(__thiscall *)(unk1E214 *, LPCSTR))v32->field_34)(v31, v33);
  dword_10AA29B8 = (int)v31;
  ++LOWORD(v3->field_14);
  ++LOWORD(v3->last);
  v34 = (unk1E214 *)malloc(0x1E214u);
  if (v34)
    v35 = meth_unk1E214_init(v34);
  else
    v35 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v35;
  if (!v35)
    sub_1003E260(4);
  v35->lpVtbl->field_38(v35, (unk000C8 *)a1, 1116864512, 1129578496, 1, 2, 5, 1, 22);
  v35->field_4 = sub_100407E0;
  v36 = LOWORD(v3->field_14) + 1;
  ++*(_WORD *)&v35->gap5C[10840];
  *(_WORD *)&v35->gap5C[10842] = v36;
  ++LOWORD(v3->field_14);
  v37 = (unk1E214 *)malloc(0x1E214u);
  if (v37)
    v38 = meth_unk1E214_init(v37);
  else
    v38 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v38;
  if (!v38)
    sub_1003E260(4);
  v39 = v38->lpVtbl;
  v38->lpVtbl->field_38(v38, (unk000C8 *)a1, v3->flags_338, 1133084672, 1052673, 2, 5, 1, -1);
  v38->field_4 = sub_1003FE80;
  LOWORD(v38->?) = 3;
  v39->field_34(v38, asc_100AD300, 1, 1, &unk_100AB4B8);
  ++LOWORD(v3->field_14);
  v40 = (unk1E214 *)malloc(0x1E214u);
  if (v40)
    v41 = meth_unk1E214_init(v40);
  else
    v41 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v41;
  if (!v41)
    sub_1003E260(4);
  v41->lpVtbl->field_38(v41, (unk000C8 *)a1, 1134723072, 1116733440, 1, 2, 5, 1, 17);
  v41->field_4 = sub_10040730;
  v42 = LOWORD(v3->field_14) + 1;
  ++*(_WORD *)&v41->gap5C[10840];
  *(_WORD *)&v41->gap5C[10842] = v42;
  ++LOWORD(v3->field_14);
  v43 = (unk1E214 *)malloc(0x1E214u);
  if (v43)
    v44 = meth_unk1E214_init(v43);
  else
    v44 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v44;
  if (!v44)
    sub_1003E260(4);
  v45 = v44->lpVtbl;
  v44->lpVtbl->field_38(v44, (unk000C8 *)a1, v3->flags_338, 1125646336, 1052673, 2, 5, 1, -1);
  v44->field_4 = sub_1003FA00;
  LOWORD(v44->?) = 3;
  v45->field_34(v44, asc_100AD300, 1, 1, &unk_100AB4A8);
  ++LOWORD(v3->field_14);
  v46 = (unk1E214 *)malloc(0x1E214u);
  if (v46)
    v47 = meth_unk1E214_init(v46);
  else
    v47 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v47;
  if (!v47)
    sub_1003E260(4);
  v48 = v47->lpVtbl;
  v47->lpVtbl->field_38(v47, (unk000C8 *)a1, 1121189888, 1116209152, 20481, 2, 5, 1, -1);
  v47->field_4 = sub_100408D0;
  LOWORD(v47->?) = 5;
  v48->field_34(v47, ::a1, 1, 3, &unk_100AB458);
  ++LOWORD(v3->field_14);
  v49 = (unk1E214 *)malloc(0x1E214u);
  if (v49)
    v50 = meth_unk1E214_init(v49);
  else
    v50 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v50;
  if (!v50)
    sub_1003E260(4);
  v51 = v50->lpVtbl;
  v50->lpVtbl->field_38(v50, (unk000C8 *)a1, 1121189888, 1122369536, 1048577, 2, 5, 1, -1);
  LOWORD(v50->?) = 3;
  v52 = GetStringWithIndex(0x1Du);
  v51->field_34(v50, v52, 1, 1, &unk_100AB458);
  ++LOWORD(v3->field_14);
  v53 = (unk1E214 *)malloc(0x1E214u);
  if (v53)
    v54 = meth_unk1E214_init(v53);
  else
    v54 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v54;
  if (!v54)
    sub_1003E260(4);
  v54->lpVtbl->field_38(v54, (unk000C8 *)a1, 1138393088, 1124925440, 1, 2, 5, 1, 86);
  v54->field_4 = sub_1003F5E0;
  ++LOWORD(v3->field_14);
  v55 = (unk1E214 *)malloc(0x1E214u);
  if (v55)
    v56 = meth_unk1E214_init(v55);
  else
    v56 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v56;
  if (!v56)
    sub_1003E260(4);
  v56->lpVtbl->field_38(v56, (unk000C8 *)a1, 1139671040, 1130364928, 1, 2, 5, 1, -1);
  v56->field_4 = sub_1003F680;
  ++LOWORD(v3->field_14);
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
