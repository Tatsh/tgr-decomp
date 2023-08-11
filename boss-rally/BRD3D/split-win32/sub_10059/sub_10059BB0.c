#include "types-win32.h"
//----- (10059BB0) --------------------------------------------------------
int __cdecl sub_10059BB0(int a1) {
  unk00348 *v1;      // eax
  unk00348 *v2;      // esi
  unk1E214 *v3;      // eax
  unk1E214 *v4;      // ebp
  unk1E214 *v5;      // eax
  unk1E214 *v6;      // ebp
  unk1E214Vtbl *v7;  // ebx
  LPCSTR v8;         // eax
  unk1E214 *v9;      // eax
  unk1E214 *v10;     // ebp
  int v11;           // eax
  int *v12;          // ebx
  int i;             // ebp
  unk1E214 *v14;     // eax
  unk1E214 *v15;     // ebp
  unk1E214Vtbl *v16; // ebx
  LPCSTR v17;        // eax
  unk1E214 *v18;     // eax
  unk1E214 *v19;     // ebp
  unk1E214Vtbl *v20; // ebx
  LPCSTR v21;        // eax
  unk1E214 *v22;     // eax
  unk1E214 *v23;     // ebp
  __int16 v24;       // cx
  unk1E214 *v25;     // eax
  unk1E214 *v26;     // ebp
  unk1E214Vtbl *v27; // ebx
  unk1E214 *v28;     // eax
  unk1E214 *v29;     // ebp
  __int16 v30;       // ax
  unk1E214 *v31;     // eax
  unk1E214 *v32;     // ebp
  unk1E214Vtbl *v33; // ebx
  unk1E214 *v34;     // eax
  unk1E214 *v35;     // ebp
  __int16 v36;       // ax
  unk1E214 *v37;     // eax
  unk1E214 *v38;     // ebp
  unk1E214Vtbl *v39; // ebx
  unk1E214 *v40;     // eax
  unk1E214 *v41;     // ebp
  unk1E214Vtbl *v42; // ebx
  unk1E214 *v43;     // eax
  unk1E214 *v44;     // ebp
  unk1E214Vtbl *v45; // ebx
  LPCSTR v46;        // eax
  unk1E214 *v47;     // eax
  unk1E214 *v48;     // ebp
  unk1E214Vtbl *v49; // ebx
  unk1E214 *v50;     // eax
  unk1E214 *v51;     // ebp
  unk1E214Vtbl *v52; // ebx
  LPCSTR v53;        // eax
  unk1E214 *v54;     // eax
  unk1E214 *v55;     // ebp
  unk1E214Vtbl *v56; // ebx
  unk1E214 *v57;     // eax
  unk1E214 *v58;     // ebp
  unk1E214Vtbl *v59; // ebx
  LPCSTR v60;        // eax
  float v62;         // [esp+2E4h] [ebp-34h]
  float v63;         // [esp+2E4h] [ebp-34h]

  gUnkC8Ptr6->last->lpVtbl->meth1(gUnkC8Ptr6->last, aTimeattackGrf);
  *(_WORD *)(a1 + 18) = 0;
  dword_10AA28E8 = 0;
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 108) = 1;
  v1 = (unk00348 *)malloc(0x348u);
  if (v1)
    v2 = meth_10048470(v1);
  else
    v2 = 0;
  *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v2;
  if (!v2)
    sub_1003E260(4);
  ++*(_WORD *)(a1 + 16);
  v2->field_340 = (unk000C8 *)a1;
  v2->field_10 = 0;
  v2->flags_338 = 1128464384;
  v2->field_33C = 111.0;
  v3 = (unk1E214 *)malloc(0x1E214u);
  if (v3)
    v4 = meth_unk1E214_init(v3);
  else
    v4 = 0;
  v2->field_18[LOWORD(v2->field_14)] = v4;
  if (!v4)
    sub_1003E260(4);
  v4->lpVtbl->meth14(v4, (unk000C8 *)a1, 0, 0, 9, 2, 5, 0, 0);
  ++LOWORD(v2->field_14);
  v5 = (unk1E214 *)malloc(0x1E214u);
  if (v5)
    v6 = meth_unk1E214_init(v5);
  else
    v6 = 0;
  v2->field_18[LOWORD(v2->field_14)] = v6;
  if (!v6)
    sub_1003E260(4);
  v7 = v6->lpVtbl;
  v6->lpVtbl->meth14(v6, (unk000C8 *)a1, v2->flags_338, 1092616192, 1048585, 2, 5, 1, -1);
  LOWORD(v6->?) = 3;
  v8 = GetStringWithIndex(0x6Eu);
  v7->meth13(v6, v8, 1, 1, &unk_100AB508);
  ++LOWORD(v2->field_14);
  v9 = (unk1E214 *)malloc(0x1E214u);
  if (v9)
    v10 = meth_unk1E214_init(v9);
  else
    v10 = 0;
  v2->field_18[LOWORD(v2->field_14)] = v10;
  if (!v10)
    sub_1003E260(4);
  v10->lpVtbl->meth14(
      v10, (unk000C8 *)a1, v2->flags_338, LODWORD(v2->field_33C), 12289, 2, 5, 1, -1);
  v11 = v10->field_3838;
  v12 = &v10->field_3838;
  v10->field_4 = sub_1003EAE0;
  v10->? = 1;
  (*(void(__thiscall **)(int *, int, void *, int, _DWORD, int))(v11 + 20))(
      &v10->field_3838, 262145, &dword_100AB4D8, 5, 0, -1);
  *(_DWORD *)v10->? = sub_10042880;
  for (i = 0; i < 26000; i += 260) {
    if ((unk06594 *)((char *)gUnkC8Ptr6->last + i) != (unk06594 *)-4)
        (*(void(__thiscall **)(int *, char *, _DWORD, int, void *, int))(*v12 + 16))(
            v12, (char *)&gUnkC8Ptr6->last->field_4 + i, 0, 1, &dword_100AB4D8, 1);
  }
  ++LOWORD(v2->field_14);
  ++LOWORD(v2->last);
  v14 = (unk1E214 *)malloc(0x1E214u);
  if (v14)
    v15 = meth_unk1E214_init(v14);
  else
    v15 = 0;
  v2->field_18[LOWORD(v2->field_14)] = v15;
  if (!v15)
    sub_1003E260(4);
  v16 = v15->lpVtbl;
  v62 = v2->field_33C - -114.0;
  v15->lpVtbl->meth14(v15, (unk000C8 *)a1, v2->flags_338, LODWORD(v62), 1060881, 2, 5, 1, -1);
  v15->field_C = sub_10047360;
  v15->field_8 = sub_10046380;
  v15->field_4 = sub_100418F0;
  LOWORD(v15->?) = 2;
  v17 = GetStringWithIndex(0x1Eu);
  v16->meth13(v15, v17, 1, 0, &dword_100AB448);
  ++LOWORD(v2->field_14);
  ++LOWORD(v2->last);
  v18 = (unk1E214 *)malloc(0x1E214u);
  if (v18)
    v19 = meth_unk1E214_init(v18);
  else
    v19 = 0;
  v2->field_18[LOWORD(v2->field_14)] = v19;
  if (!v19)
    sub_1003E260(4);
  v20 = v19->lpVtbl;
  v63 = v2->field_33C - -133.0;
  v19->lpVtbl->meth14(v19, (unk000C8 *)a1, v2->flags_338, LODWORD(v63), 1056769, 2, 5, 1, -1);
  v19->field_C = sub_10047360;
  v19->field_8 = (int(__cdecl *)())sub_10044DE0;
  LOWORD(v19->?) = 3;
  v21 = GetStringWithIndex(0xCu);
  v20->meth13(v19, v21, 1, 1, &dword_100AB448);
  ++LOWORD(v2->field_14);
  ++LOWORD(v2->last);
  v22 = (unk1E214 *)malloc(0x1E214u);
  if (v22)
    v23 = meth_unk1E214_init(v22);
  else
    v23 = 0;
  v2->field_18[LOWORD(v2->field_14)] = v23;
  if (!v23)
    sub_1003E260(4);
  v23->lpVtbl->meth14(v23, (unk000C8 *)a1, 1138425856, 1123418112, 1, 2, 5, 1, 17);
  v23->field_4 = sub_100407A0;
  v24 = LOWORD(v2->field_14) + 1;
  ++*(_WORD *)&v23->gap5C[10840];
  *(_WORD *)&v23->gap5C[10842] = v24;
  ++LOWORD(v2->field_14);
  v25 = (unk1E214 *)malloc(0x1E214u);
  if (v25)
    v26 = meth_unk1E214_init(v25);
  else
    v26 = 0;
  v2->field_18[LOWORD(v2->field_14)] = v26;
  if (!v26)
    sub_1003E260(4);
  v27 = v26->lpVtbl;
  v26->lpVtbl->meth14(v26, (unk000C8 *)a1, v2->flags_338, 1127546880, 1052673, 2, 5, 1, -1);
  v26->field_4 = sub_1003FA00;
  LOWORD(v26->?) = 3;
  v27->meth13(v26, asc_100AD300, 1, 1, &unk_100AB488);
  ++LOWORD(v2->field_14);
  v28 = (unk1E214 *)malloc(0x1E214u);
  if (v28)
    v29 = meth_unk1E214_init(v28);
  else
    v29 = 0;
  v2->field_18[LOWORD(v2->field_14)] = v29;
  if (!v29)
    sub_1003E260(4);
  v29->lpVtbl->meth14(v29, (unk000C8 *)a1, 1135181824, 1116471296, 1, 2, 5, 1, 11);
  v29->field_4 = sub_1003F720;
  v30 = LOWORD(v2->field_14) + 1;
  ++*(_WORD *)&v29->gap5C[10840];
  *(_WORD *)&v29->gap5C[10842] = v30;
  ++LOWORD(v2->field_14);
  v31 = (unk1E214 *)malloc(0x1E214u);
  if (v31)
    v32 = meth_unk1E214_init(v31);
  else
    v32 = 0;
  v2->field_18[LOWORD(v2->field_14)] = v32;
  if (!v32)
    sub_1003E260(4);
  v33 = v32->lpVtbl;
  v32->lpVtbl->meth14(v32, (unk000C8 *)a1, v2->flags_338, 1124663296, 1052673, 2, 5, 1, -1);
  v32->field_4 = sub_1003F760;
  LOWORD(v32->?) = 3;
  v33->meth13(v32, asc_100AD300, 1, 1, &unk_100AB468);
  ++LOWORD(v2->field_14);
  v34 = (unk1E214 *)malloc(0x1E214u);
  if (v34)
    v35 = meth_unk1E214_init(v34);
  else
    v35 = 0;
  v2->field_18[LOWORD(v2->field_14)] = v35;
  if (!v35)
    sub_1003E260(4);
  v35->lpVtbl->meth14(v35, (unk000C8 *)a1, 1116864512, 1129578496, 1, 2, 5, 1, 22);
  v35->field_4 = sub_100407E0;
  v36 = LOWORD(v2->field_14) + 1;
  ++*(_WORD *)&v35->gap5C[10840];
  *(_WORD *)&v35->gap5C[10842] = v36;
  ++LOWORD(v2->field_14);
  v37 = (unk1E214 *)malloc(0x1E214u);
  if (v37)
    v38 = meth_unk1E214_init(v37);
  else
    v38 = 0;
  v2->field_18[LOWORD(v2->field_14)] = v38;
  if (!v38)
    sub_1003E260(4);
  v39 = v38->lpVtbl;
  v38->lpVtbl->meth14(v38, (unk000C8 *)a1, v2->flags_338, 1133084672, 1052673, 2, 5, 1, -1);
  v38->field_4 = sub_1003FE80;
  LOWORD(v38->?) = 3;
  v39->meth13(v38, asc_100AD300, 1, 1, &unk_100AB4B8);
  ++LOWORD(v2->field_14);
  v40 = (unk1E214 *)malloc(0x1E214u);
  if (v40)
    v41 = meth_unk1E214_init(v40);
  else
    v41 = 0;
  v2->field_18[LOWORD(v2->field_14)] = v41;
  if (!v41)
    sub_1003E260(4);
  v42 = v41->lpVtbl;
  v41->lpVtbl->meth14(v41, (unk000C8 *)a1, 1121189888, 1116209152, 20481, 2, 5, 1, -1);
  v41->field_4 = sub_100408D0;
  LOWORD(v41->?) = 5;
  v42->meth13(v41, ::a1, 1, 3, &unk_100AB458);
  ++LOWORD(v2->field_14);
  v43 = (unk1E214 *)malloc(0x1E214u);
  if (v43)
    v44 = meth_unk1E214_init(v43);
  else
    v44 = 0;
  v2->field_18[LOWORD(v2->field_14)] = v44;
  if (!v44)
    sub_1003E260(4);
  v45 = v44->lpVtbl;
  v44->lpVtbl->meth14(v44, (unk000C8 *)a1, 1121189888, 1122369536, 1048577, 2, 5, 1, -1);
  LOWORD(v44->?) = 3;
  v46 = GetStringWithIndex(0x1Du);
  v45->meth13(v44, v46, 1, 1, &unk_100AB458);
  ++LOWORD(v2->field_14);
  v47 = (unk1E214 *)malloc(0x1E214u);
  if (v47)
    v48 = meth_unk1E214_init(v47);
  else
    v48 = 0;
  v2->field_18[LOWORD(v2->field_14)] = v48;
  if (!v48)
    sub_1003E260(4);
  v49 = v48->lpVtbl;
  v48->lpVtbl->meth14(v48, (unk000C8 *)a1, 1138491392, 1129316352, 1052673, 2, 5, 1, -1);
  v48->field_4 = sub_10041040;
  LOWORD(v48->?) = 52;
  v49->meth13(v48, asc_100AD300, 1, 4, &unk_100AB478);
  ++LOWORD(v2->field_14);
  v50 = (unk1E214 *)malloc(0x1E214u);
  if (v50)
    v51 = meth_unk1E214_init(v50);
  else
    v51 = 0;
  v2->field_18[LOWORD(v2->field_14)] = v51;
  if (!v51)
    sub_1003E260(4);
  v52 = v51->lpVtbl;
  v51->lpVtbl->meth14(v51, (unk000C8 *)a1, 1138491392, 1130364928, 1048577, 2, 5, 1, -1);
  LOWORD(v51->?) = 3;
  v53 = GetStringWithIndex(0x6Fu);
  v52->meth13(v51, v53, 1, 1, &unk_100AB478);
  ++LOWORD(v2->field_14);
  v54 = (unk1E214 *)malloc(0x1E214u);
  if (v54)
    v55 = meth_unk1E214_init(v54);
  else
    v55 = 0;
  v2->field_18[LOWORD(v2->field_14)] = v55;
  if (!v55)
    sub_1003E260(4);
  v56 = v55->lpVtbl;
  v55->lpVtbl->meth14(v55, (unk000C8 *)a1, 1138491392, 1131413504, 1052673, 2, 5, 1, -1);
  v55->field_4 = sub_10041180;
  LOWORD(v55->?) = 52;
  v56->meth13(v55, asc_100AD300, 1, 4, &unk_100AB478);
  ++LOWORD(v2->field_14);
  v57 = (unk1E214 *)malloc(0x1E214u);
  if (v57)
    v58 = meth_unk1E214_init(v57);
  else
    v58 = 0;
  v2->field_18[LOWORD(v2->field_14)] = v58;
  if (!v58)
    sub_1003E260(4);
  v59 = v58->lpVtbl;
  v58->lpVtbl->meth14(v58, (unk000C8 *)a1, 1138491392, 1132462080, 1048577, 2, 5, 1, -1);
  LOWORD(v58->?) = 3;
  v60 = GetStringWithIndex(0x3Fu);
  v59->meth13(v58, v60, 1, 1, &unk_100AB478);
  ++LOWORD(v2->field_14);
  return 1;
}
// 1003F720: using guessed type int __cdecl sub_1003F720(int);
// 1003F760: using guessed type int __cdecl sub_1003F760(int);
// 1003FA00: using guessed type int __cdecl sub_1003FA00(int);
// 1003FE80: using guessed type int __cdecl sub_1003FE80(int);
// 100407E0: using guessed type int __cdecl sub_100407E0(int);
// 10059BB0: using guessed type int __cdecl sub_10059BB0(int);
// 100AB448: using guessed type int dword_100AB448;
// 10AA28E8: using guessed type int dword_10AA28E8;
