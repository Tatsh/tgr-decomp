#include "types-win32.h"
//----- (10058750) --------------------------------------------------------
int __cdecl sub_10058750(unk000C8 *a1) {
  unk00348 *v1;         // eax
  unk00348 *v2;         // ebp
  unk1E214 *v3;         // eax
  unk1E214 *v4;         // esi
  unk1E214 *v5;         // eax
  unk1E214 *v6;         // esi
  unk1E214 *v7;         // eax
  unk1E214 *v8;         // esi
  unk1E214Vtbl *v9;     // ebx
  LPCSTR v10;           // eax
  unk1E214 *v11;        // eax
  unk1E214 *v12;        // esi
  unk1E214Vtbl *v13;    // ebx
  LPCSTR v14;           // eax
  unk1E214 *v15;        // eax
  unk1E214 *v16;        // esi
  unk1E214Vtbl *v17;    // ebx
  LPCSTR v18;           // eax
  unk1E214 *v19;        // eax
  unk1E214 *v20;        // esi
  unk1E214Vtbl *v21;    // ebx
  LPCSTR v22;           // eax
  unk1E214 *v23;        // eax
  unk1E214 *v24;        // esi
  unk1E214Vtbl *v25;    // ebx
  LPCSTR v26;           // eax
  unk1E214 *v27;        // eax
  unk1E214 *v28;        // esi
  unk1E214Vtbl *v29;    // ebx
  LPCSTR v30;           // eax
  unk1E214 *v31;        // eax
  unk1E214 *v32;        // esi
  unk1E214Vtbl *v33;    // ebx
  LPCSTR v34;           // eax
  unk1E214 *v35;        // eax
  unk1E214 *v36;        // esi
  unk1E214Vtbl *v37;    // ebx
  LPCSTR v38;           // eax
  unk1E214 *v39;        // eax
  unk1E214 *v40;        // esi
  unk1A5E0Vtbl *u1A5E0; // edx
  unk1E214 *v42;        // eax
  unk1E214 *v43;        // esi
  unk1E214Vtbl *v44;    // ebx
  __int16 v45;          // cx
  unk1E214 *v46;        // eax
  unk1E214 *v47;        // esi
  unk1A5E0 *v48;        // ecx
  unk1E214 *v49;        // eax
  unk1E214 *v50;        // esi
  unk1E214 *v51;        // eax
  unk1E214 *v52;        // esi
  unk1E214 *v53;        // eax
  unk1E214 *v54;        // esi
  WORD v55;             // ax
  unk1E214 *v56;        // eax
  unk1E214 *v57;        // esi
  unk1E214Vtbl *v58;    // ebx
  unk1E214 *v59;        // eax
  unk1E214 *v60;        // esi
  WORD v61;             // ax
  unk1E214 *v62;        // eax
  unk1E214 *v63;        // esi
  unk1E214Vtbl *v64;    // ebx
  unk1E214 *v65;        // eax
  unk1E214 *v66;        // esi
  WORD v67;             // ax
  unk1E214 *v68;        // eax
  unk1E214 *v69;        // esi
  unk1E214Vtbl *v70;    // ebx
  unk1E214 *v71;        // eax
  unk1E214 *v72;        // esi
  WORD v73;             // ax
  unk1E214 *v74;        // eax
  unk1E214 *v75;        // esi
  unk1E214Vtbl *v76;    // ebx
  unk1E214 *v77;        // eax
  unk1E214 *v78;        // ebx
  unk1E214Vtbl *v79;    // esi
  int v80;              // edx
  float v82;            // [esp+3E0h] [ebp-34h]
  float v83;            // [esp+3E0h] [ebp-34h]
  float v84;            // [esp+3E0h] [ebp-34h]
  float v85;            // [esp+3E0h] [ebp-34h]
  float v86;            // [esp+3E0h] [ebp-34h]
  float v87;            // [esp+3E0h] [ebp-34h]
  float v88;            // [esp+3E0h] [ebp-34h]

  *(&a1->field_10 + 1) = 0;
  gGameMode = GAME_MODE_6;
  sub_1003E310();
  sub_1003E510();
  *(&a1->field_6C + a1->field_10) = 1;
  v1 = (unk00348 *)malloc(0x348u);
  if (v1)
    v2 = meth_10048470(v1);
  else
    v2 = 0;
  a1->field_14[a1->field_10] = v2;
  if (!v2)
    sub_1003E260(4);
  ++a1->field_10;
  v2->field_340 = a1;
  v2->field_10 = 0;
  v2->flags_338 = 1128464384;
  v2->field_33C = 111.0;
  v3 = (unk1E214 *)malloc(0x1E214u);
  if (v3)
    v4 = meth_unk1E214_init(v3);
  else
    v4 = 0;
  v2->field_18[v2->field_14] = v4;
  if (!v4)
    sub_1003E260(4);
  v4->lpVtbl->meth14(v4, a1, 0, 0.0, 9, 2, 5, 0, 0);
  ++v2->field_14;
  v5 = (unk1E214 *)malloc(0x1E214u);
  if (v5)
    v6 = meth_unk1E214_init(v5);
  else
    v6 = 0;
  v2->field_18[v2->field_14] = v6;
  if (!v6)
    sub_1003E260(4);
  v6->lpVtbl->meth14(v6, a1, 0, 320.0, 9, 2, 5, 0, 95);
  ++v2->field_14;
  v7 = (unk1E214 *)malloc(0x1E214u);
  if (v7)
    v8 = meth_unk1E214_init(v7);
  else
    v8 = 0;
  v2->field_18[v2->field_14] = v8;
  if (!v8)
    sub_1003E260(4);
  v9 = v8->lpVtbl;
  v8->lpVtbl->meth14(v8, a1, v2->flags_338, v2->field_33C, 1056769, 2, 5, 1, -1);
  v8->field_C = sub_10047360;
  v8->field_8 = sub_10042B30;
  v8->field_3838.field_1A99C[28] = 3;
  v10 = GetStringWithIndex(0x14u);
  v9->meth13(v8, v10, 1, 1, &dword_100AB448);
  ++v2->field_14;
  ++LOWORD(v2->last);
  v11 = (unk1E214 *)malloc(0x1E214u);
  if (v11)
    v12 = meth_unk1E214_init(v11);
  else
    v12 = 0;
  v2->field_18[v2->field_14] = v12;
  if (!v12)
    sub_1003E260(4);
  v13 = v12->lpVtbl;
  v82 = v2->field_33C - -19.0;
  v12->lpVtbl->meth14(v12, a1, v2->flags_338, v82, 1056769, 2, 5, 1, -1);
  v12->field_C = sub_10047360;
  v12->field_8 = sub_10042DC0;
  v12->field_3838.field_1A99C[28] = 3;
  v14 = GetStringWithIndex(0x15u);
  v13->meth13(v12, v14, 1, 1, &dword_100AB448);
  ++v2->field_14;
  ++LOWORD(v2->last);
  v15 = (unk1E214 *)malloc(0x1E214u);
  if (v15)
    v16 = meth_unk1E214_init(v15);
  else
    v16 = 0;
  v2->field_18[v2->field_14] = v16;
  if (!v16)
    sub_1003E260(4);
  v17 = v16->lpVtbl;
  v83 = v2->field_33C - -38.0;
  v16->lpVtbl->meth14(v16, a1, v2->flags_338, v83, 1056769, 2, 5, 1, -1);
  v16->field_C = sub_10047360;
  v16->field_8 = sub_10042E20;
  v16->field_3838.field_1A99C[28] = 3;
  v18 = GetStringWithIndex(0x16u);
  v17->meth13(v16, v18, 1, 1, &dword_100AB448);
  ++v2->field_14;
  ++LOWORD(v2->last);
  v19 = (unk1E214 *)malloc(0x1E214u);
  if (v19)
    v20 = meth_unk1E214_init(v19);
  else
    v20 = 0;
  v2->field_18[v2->field_14] = v20;
  if (!v20)
    sub_1003E260(4);
  v21 = v20->lpVtbl;
  v84 = v2->field_33C - -57.0;
  v20->lpVtbl->meth14(v20, a1, v2->flags_338, v84, 1056769, 2, 5, 1, -1);
  v20->field_C = sub_10047360;
  v20->field_8 = sub_10042C80;
  v20->field_3838.field_1A99C[28] = 3;
  v22 = GetStringWithIndex(0x17u);
  v21->meth13(v20, v22, 1, 1, &dword_100AB448);
  ++v2->field_14;
  ++LOWORD(v2->last);
  v23 = (unk1E214 *)malloc(0x1E214u);
  if (v23)
    v24 = meth_unk1E214_init(v23);
  else
    v24 = 0;
  v2->field_18[v2->field_14] = v24;
  if (!v24)
    sub_1003E260(4);
  v25 = v24->lpVtbl;
  v85 = v2->field_33C - -76.0;
  v24->lpVtbl->meth14(v24, a1, v2->flags_338, v85, 1056769, 2, 5, 1, -1);
  v24->field_C = sub_10047360;
  v24->field_8 = sub_10042E80;
  v24->field_3838.field_1A99C[28] = 3;
  v26 = GetStringWithIndex(0x18u);
  v25->meth13(v24, v26, 1, 1, &dword_100AB448);
  ++v2->field_14;
  ++LOWORD(v2->last);
  if (gNetworkPlay == 2) {
    v27 = (unk1E214 *)malloc(0x1E214u);
    if (v27)
        v28 = meth_unk1E214_init(v27);
    else
        v28 = 0;
    v2->field_18[v2->field_14] = v28;
    if (!v28)
        sub_1003E260(4);
    v29 = v28->lpVtbl;
    v86 = v2->field_33C - -95.0;
    v28->lpVtbl->meth14(v28, a1, v2->flags_338, v86, 1056769, 2, 5, 1, -1);
    v28->field_C = sub_10047360;
    v28->field_8 = sub_100437B0;
    v28->field_3838.field_1A99C[28] = 3;
    v30 = GetStringWithIndex(0x68u);
    v29->meth13(v28, v30, 1, 1, &dword_100AB448);
    ++v2->field_14;
    ++LOWORD(v2->last);
  }
  v31 = (unk1E214 *)malloc(0x1E214u);
  if (v31)
    v32 = meth_unk1E214_init(v31);
  else
    v32 = 0;
  v2->field_18[v2->field_14] = v32;
  if (!v32)
    sub_1003E260(4);
  v33 = v32->lpVtbl;
  v87 = v2->field_33C - -114.0;
  v32->lpVtbl->meth14(v32, a1, v2->flags_338, v87, 1056769, 2, 5, 1, -1);
  v32->field_C = sub_10047360;
  v32->field_8 = sub_10043A00;
  v32->field_18 = (int)sub_10043810;
  v32->field_3838.field_1A99C[28] = 3;
  if (dword_10AA2884)
    v34 = GetStringWithIndex(0x19u);
  else
    v34 = GetStringWithIndex(0x69u);
  ((void(__thiscall *)(unk1E214 *, LPCSTR))v33->meth13)(v32, v34);
  ++v2->field_14;
  ++LOWORD(v2->last);
  v35 = (unk1E214 *)malloc(0x1E214u);
  if (v35)
    v36 = meth_unk1E214_init(v35);
  else
    v36 = 0;
  v2->field_18[v2->field_14] = v36;
  if (!v36)
    sub_1003E260(4);
  v37 = v36->lpVtbl;
  v88 = v2->field_33C - -133.0;
  v36->lpVtbl->meth14(v36, a1, v2->flags_338, v88, 1056769, 2, 5, 1, -1);
  v36->field_C = sub_10047360;
  v36->field_8 = (int(__cdecl *)())sub_10046400;
  v36->field_3838.field_1A99C[28] = 3;
  v38 = GetStringWithIndex(0xCu);
  v37->meth13(v36, v38, 1, 1, &dword_100AB448);
  ++v2->field_14;
  ++LOWORD(v2->last);
  v39 = (unk1E214 *)malloc(0x1E214u);
  if (v39)
    v40 = meth_unk1E214_init(v39);
  else
    v40 = 0;
  v2->field_18[v2->field_14] = v40;
  if (!v40)
    sub_1003E260(4);
  v40->lpVtbl->meth14(v40, a1, 1107296256, 330.0, 12289, 2, 5, 1, -1);
  u1A5E0 = v40->field_3838.lpVtbl;
  v40->field_4 = sub_1003EBC0;
  *(_DWORD *)&v40->field_3838.field_1A99C[16] = 1;
  u1A5E0->meth5(&v40->field_3838, 25427969, dword_100AB408, 5, 0, -1);
  gUnk1E214 = v40;
  ++v2->field_14;
  v42 = (unk1E214 *)malloc(0x1E214u);
  if (v42)
    v43 = meth_unk1E214_init(v42);
  else
    v43 = 0;
  v2->field_18[v2->field_14] = v43;
  if (!v43)
    sub_1003E260(4);
  v44 = v43->lpVtbl;
  v43->lpVtbl->meth14(v43, a1, 1107296256, 330.0, 2097153, 2, 5, 1, -1);
  v43->field_8 = (int(__cdecl *)())meth_unk1A5E0_3;
  v43->field_4 = sub_1003F110;
  v43->field_10 = (int)sub_1003F170;
  v43->field_3838.field_1A99C[28] = 3;
  v44->meth13(v43, String2, 0, 1, &dword_100AB448);
  v43->field_50 = 32;
  *(_DWORD *)&v43->vectorUnk[1060] = 32;
  v43->field_58 = 415;
  *(_DWORD *)&v43->vectorUnk[1068] = 415;
  v45 = *(_WORD *)&v43->vectorUnk[1068] - *(_WORD *)&v43->vectorUnk[1060];
  *(_DWORD *)v43->gap54 = 330;
  *(_DWORD *)&v43->vectorUnk[1064] = 330;
  *(_DWORD *)v43->gap5C = 346;
  *(_DWORD *)&v43->vectorUnk[1072] = 346;
  *(_WORD *)&v43->vectorUnk[1052] = v45 - 16;
  dword_10AA28D8 = 0;
  dword_10AA285C = 1;
  *(_DWORD *)&v43->vectorUnk[1056] = 1;
  ++v2->field_14;
  v46 = (unk1E214 *)malloc(0x1E214u);
  if (v46)
    v47 = meth_unk1E214_init(v46);
  else
    v47 = 0;
  v2->field_18[v2->field_14] = v47;
  if (!v47)
    sub_1003E260(4);
  v47->lpVtbl->meth14(v47, a1, 1139933184, 2.0, 4097, 2, 5, 1, -1);
  v47->field_4 = sub_1003EBE0;
  *(_DWORD *)&v47->field_3838.field_1A99C[16] = 1;
  v48 = &v47->field_3838;
  if (gNetworkPlay == 2)
    v48->lpVtbl->meth5(v48, 0x2040001, dword_100AB3F8, 4, 0, -1);
  else
    v48->lpVtbl->meth5(v48, 0x3040001, dword_100AB3F8, 4, 0, -1);
  dword_10AA29E4 = (int)v47;
  ++v2->field_14;
  v49 = (unk1E214 *)malloc(0x1E214u);
  if (v49)
    v50 = meth_unk1E214_init(v49);
  else
    v50 = 0;
  v2->field_18[v2->field_14] = v50;
  if (!v50)
    sub_1003E260(4);
  v50->lpVtbl->meth14(v50, a1, 1114898432, 244.0, 9, 2, 5, 1, 54);
  ++v2->field_14;
  v51 = (unk1E214 *)malloc(0x1E214u);
  if (v51)
    v52 = meth_unk1E214_init(v51);
  else
    v52 = 0;
  v2->field_18[v2->field_14] = v52;
  if (!v52)
    sub_1003E260(4);
  v52->lpVtbl->meth14(v52, a1, 1116864512, 214.0, 1, 2, 5, 1, 53);
  v52->field_4 = sub_1003E920;
  ++v2->field_14;
  v53 = (unk1E214 *)malloc(0x1E214u);
  if (v53)
    v54 = meth_unk1E214_init(v53);
  else
    v54 = 0;
  v2->field_18[v2->field_14] = v54;
  if (!v54)
    sub_1003E260(4);
  v54->lpVtbl->meth14(v54, a1, 1135181824, 70.0, 1, 2, 5, 1, 11);
  v54->field_4 = sub_1003F720;
  v55 = v2->field_14 + 1;
  ++v54->field_2AB4[0];
  v54->field_2AB4[1] = v55;
  ++v2->field_14;
  v56 = (unk1E214 *)malloc(0x1E214u);
  if (v56)
    v57 = meth_unk1E214_init(v56);
  else
    v57 = 0;
  v2->field_18[v2->field_14] = v57;
  if (!v57)
    sub_1003E260(4);
  v58 = v57->lpVtbl;
  v57->lpVtbl->meth14(v57, a1, v2->flags_338, 137.0, 0x101001, 2, 5, 1, -1);
  v57->field_4 = sub_1003F760;
  v57->field_3838.field_1A99C[28] = 3;
  v58->meth13(v57, asc_100AD300, 1, 1, &unk_100AB468);
  ++v2->field_14;
  v59 = (unk1E214 *)malloc(0x1E214u);
  if (v59)
    v60 = meth_unk1E214_init(v59);
  else
    v60 = 0;
  v2->field_18[v2->field_14] = v60;
  if (!v60)
    sub_1003E260(4);
  v60->lpVtbl->meth14(v60, a1, 1121452032, 66.0, 1, 2, 5, 1, 25);
  v60->field_4 = sub_10040890;
  v61 = v2->field_14 + 1;
  ++v60->field_2AB4[0];
  v60->field_2AB4[1] = v61;
  ++v2->field_14;
  v62 = (unk1E214 *)malloc(0x1E214u);
  if (v62)
    v63 = meth_unk1E214_init(v62);
  else
    v63 = 0;
  v2->field_18[v2->field_14] = v63;
  if (!v63)
    sub_1003E260(4);
  v64 = v63->lpVtbl;
  v63->lpVtbl->meth14(v63, a1, v2->flags_338, 123.0, 1052673, 2, 5, 1, -1);
  v63->field_4 = sub_1003F7F0;
  v63->field_3838.field_1A99C[28] = 3;
  v64->meth13(v63, asc_100AD300, 1, 1, &unk_100AB498);
  ++v2->field_14;
  v65 = (unk1E214 *)malloc(0x1E214u);
  if (v65)
    v66 = meth_unk1E214_init(v65);
  else
    v66 = 0;
  v2->field_18[v2->field_14] = v66;
  if (!v66)
    sub_1003E260(4);
  v66->lpVtbl->meth14(v66, a1, 1139671040, 129.0, 1, 2, 5, 1, 14);
  v66->field_4 = sub_100408B0;
  v67 = v2->field_14 + 1;
  ++v66->field_2AB4[0];
  v66->field_2AB4[1] = v67;
  ++v2->field_14;
  v68 = (unk1E214 *)malloc(0x1E214u);
  if (v68)
    v69 = meth_unk1E214_init(v68);
  else
    v69 = 0;
  v2->field_18[v2->field_14] = v69;
  if (!v69)
    sub_1003E260(4);
  v70 = v69->lpVtbl;
  v69->lpVtbl->meth14(v69, a1, v2->flags_338, 181.0, 1052673, 2, 5, 1, -1);
  v69->field_4 = sub_1003F990;
  v69->field_3838.field_1A99C[28] = 3;
  v70->meth13(v69, asc_100AD300, 1, 1, &unk_100AB488);
  ++v2->field_14;
  v71 = (unk1E214 *)malloc(0x1E214u);
  if (v71)
    v72 = meth_unk1E214_init(v71);
  else
    v72 = 0;
  v2->field_18[v2->field_14] = v72;
  if (!v72)
    sub_1003E260(4);
  v72->lpVtbl->meth14(v72, a1, 1140621312, 200.0, 1, 2, 5, 1, 12);
  v72->field_4 = sub_10040870;
  v73 = v2->field_14 + 1;
  ++v72->field_2AB4[0];
  v72->field_2AB4[1] = v73;
  ++v2->field_14;
  v74 = (unk1E214 *)malloc(0x1E214u);
  if (v74)
    v75 = meth_unk1E214_init(v74);
  else
    v75 = 0;
  v2->field_18[v2->field_14] = v75;
  if (!v75)
    sub_1003E260(4);
  v76 = v75->lpVtbl;
  v75->lpVtbl->meth14(v75, a1, v2->flags_338, 262.0, 1052673, 2, 5, 1, -1);
  v75->field_4 = sub_1003F860;
  v75->field_3838.field_1A99C[28] = 3;
  v76->meth13(v75, asc_100AD300, 1, 1, &unk_100AB478);
  ++v2->field_14;
  v77 = (unk1E214 *)malloc(0x1E214u);
  if (v77)
    v78 = meth_unk1E214_init(v77);
  else
    v78 = 0;
  v2->field_18[v2->field_14] = v78;
  if (!v78)
    sub_1003E260(4);
  v79 = v78->lpVtbl;
  v78->lpVtbl->meth14(v78, a1, 1134559232, 10.0, 1048577, 2, 5, 1, -1);
  v78->field_3838.field_1A99C[28] = 52;
  v79->meth13(v78, asc_100AD300, 1, 4, &unk_100AB438);
  v80 = *(_DWORD *)v78->vectorUnk;
  strcpy(&v78->vectorUnk[9], g_lpSessionDesc_dwUser3);
  (*(void(__thiscall **)(char *, int, int, int *))(v80 + 4))(v78->vectorUnk, 1, 1, &dword_100AB448);
  ++v2->field_14;
  return 1;
}
// 1003E920: using guessed type int __cdecl sub_1003E920(int);
// 1003EBC0: using guessed type int __cdecl sub_1003EBC0(int);
// 1003EBE0: using guessed type int __cdecl sub_1003EBE0(int);
// 1003F110: using guessed type int __cdecl sub_1003F110(int);
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
// 100437B0: using guessed type int sub_100437B0();
// 100AB448: using guessed type int dword_100AB448;
// 1022AF18: using guessed type int gNetworkPlay;
// 10AA285C: using guessed type int dword_10AA285C;
// 10AA2884: using guessed type int dword_10AA2884;
// 10AA28D8: using guessed type int dword_10AA28D8;
// 10AA29E4: using guessed type int dword_10AA29E4;
