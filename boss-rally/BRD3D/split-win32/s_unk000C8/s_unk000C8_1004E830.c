#include "types-win32.h"
//----- (1004E830) --------------------------------------------------------
int __cdecl s_unk000C8_1004E830(unk000C8 *a1) {
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
  unk1E214 *v32;       // eax
  unk1E214 *v33;       // ebp
  __int16 v34;         // ax
  unk1E214 *v35;       // eax
  unk1E214 *v36;       // ebp
  unk1E214Vtbl *v37;   // ebx
  unk1E214 *v38;       // eax
  unk1E214 *v39;       // ebp
  __int16 v40;         // ax
  unk1E214 *v41;       // eax
  unk1E214 *v42;       // ebp
  unk1E214Vtbl *v43;   // ebx
  unk1E214 *v44;       // eax
  unk1E214 *v45;       // ebp
  __int16 v46;         // ax
  unk1E214 *v47;       // eax
  unk1E214 *v48;       // ebp
  unk1E214Vtbl *v49;   // ebx
  unk1E214 *v50;       // eax
  unk1E214 *v51;       // ebp
  __int16 v52;         // ax
  unk1E214 *v53;       // eax
  unk1E214 *v54;       // ebp
  unk1E214Vtbl *v55;   // ebx
  float v57;           // [esp+278h] [ebp-34h]
  float v58;           // [esp+278h] [ebp-34h]
  float v59;           // [esp+278h] [ebp-34h]
  float v60;           // [esp+278h] [ebp-34h]
  int v61;             // [esp+288h] [ebp-24h]

  v1 = a1->field_10;
  HIWORD(a1->field_10) = 0;
  *(&a1->field_6C + v1) = 1;
  v2 = (unk00348 *)malloc(0x348u);
  if (v2)
    v3 = meth_unk00348_10048470(v2);
  else
    v3 = 0;
  a1->field_14[LOWORD(a1->field_10)] = v3;
  if (!v3)
    sub_1003E260(4);
  ++LOWORD(a1->field_10);
  v3->field_340 = a1;
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
  v5->lpVtbl->meth14(v5, a1, 0, 0, 9, 2, 5, 0, 0);
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
  v7->lpVtbl->meth14(v7, a1, v3->flags_338, 1092616192, 1048585, 2, 5, 1, -1);
  LOWORD(v7->?) = 3;
  v9 = GetStringWithIndex(0x22u);
  v8->meth13(v7, v9, 1, 1, &unk_100AB508);
  ++LOWORD(v3->field_14);
  input_100795D0();
  v10 = (unk1E214 *)malloc(0x1E214u);
  if (v10)
    v11 = meth_unk1E214_init(v10);
  else
    v11 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v11;
  if (!v11)
    sub_1003E260(4);
  v12 = v11->lpVtbl;
  v11->lpVtbl->meth14(v11,
                      a1,
                      v3->flags_338,
                      LODWORD(v3->field_33C),
                      gDIEffectSquare.dwStartDelay != 0 ? 1056769 : 1056785,
                      2,
                      5,
                      1,
                      -1);
  v11->field_C = sub_10047360;
  v11->field_8 = sub_10043590;
  if (gDIEffectSquare.dwStartDelay) {
    LOWORD(v11->?) = 3;
    v61 = 1;
  } else {
    LOWORD(v11->?) = 2;
    v61 = 0;
  }
  v13 = GetStringWithIndex(0x30u);
  v12->meth13(v11, v13, 1, v61, &dword_100AB448);
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
  v57 = v3->field_33C - -19.0;
  v15->lpVtbl->meth14(v15, a1, v3->flags_338, LODWORD(v57), 1056769, 2, 5, 1, -1);
  v15->field_C = sub_10047360;
  v15->field_8 = sub_100435F0;
  LOWORD(v15->?) = 3;
  v17 = GetStringWithIndex(0x31u);
  v16->meth13(v15, v17, 1, 1, &dword_100AB448);
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
  v58 = v3->field_33C - -38.0;
  v19->lpVtbl->meth14(v19, a1, v3->flags_338, LODWORD(v58), 1056769, 2, 5, 1, -1);
  v19->field_C = sub_10047360;
  v19->field_8 = sub_100436B0;
  LOWORD(v19->?) = 3;
  v21 = GetStringWithIndex(0x32u);
  v20->meth13(v19, v21, 1, 1, &dword_100AB448);
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
  v59 = v3->field_33C - -57.0;
  v23->lpVtbl->meth14(v23, a1, v3->flags_338, LODWORD(v59), 1056769, 2, 5, 1, -1);
  v23->field_C = sub_10047360;
  v23->field_8 = sub_10043650;
  LOWORD(v23->?) = 3;
  v25 = GetStringWithIndex(0x33u);
  v24->meth13(v23, v25, 1, 1, &dword_100AB448);
  ++LOWORD(v3->field_14);
  ++LOWORD(v3->last);
  v26 = (unk1E214 *)malloc(0x1E214u);
  if (v26)
    v27 = meth_unk1E214_init(v26);
  else
    v27 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v27;
  if (!v27)
    sub_1003E260(4);
  v28 = v27->lpVtbl;
  v60 = v3->field_33C - -114.0;
  v27->lpVtbl->meth14(v27, a1, v3->flags_338, LODWORD(v60), 1056769, 2, 5, 1, -1);
  v27->field_C = sub_10047360;
  v27->field_8 = (int(__cdecl *)())sub_10046710;
  LOWORD(v27->?) = 3;
  v29 = GetStringWithIndex(0xCu);
  v28->meth13(v27, v29, 1, 1, &dword_100AB448);
  dword_10AA29C8 = (int)v27;
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
  v31->lpVtbl->meth14(v31, a1, 1117782016, 1110966272, 9, 2, 5, 0, 9);
  ++LOWORD(v3->field_14);
  v32 = (unk1E214 *)malloc(0x1E214u);
  if (v32)
    v33 = meth_unk1E214_init(v32);
  else
    v33 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v33;
  if (!v33)
    sub_1003E260(4);
  v33->lpVtbl->meth14(v33, a1, 1135083520, 1111490560, 1, 2, 5, 1, 97);
  v33->field_4 = sub_10040950;
  v34 = LOWORD(v3->field_14) + 1;
  ++*(_WORD *)&v33->gap5C[10840];
  *(_WORD *)&v33->gap5C[10842] = v34;
  ++LOWORD(v3->field_14);
  v35 = (unk1E214 *)malloc(0x1E214u);
  if (v35)
    v36 = meth_unk1E214_init(v35);
  else
    v36 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v36;
  if (!v36)
    sub_1003E260(4);
  v37 = v36->lpVtbl;
  v36->lpVtbl->meth14(v36, a1, v3->flags_338, 1126563840, 1052673, 2, 5, 1, -1);
  v36->field_4 = sub_1003FCB0;
  LOWORD(v36->?) = 3;
  v37->meth13(v36, asc_100AD300, 1, 1, &unk_100AB4C8);
  ++LOWORD(v3->field_14);
  v38 = (unk1E214 *)malloc(0x1E214u);
  if (v38)
    v39 = meth_unk1E214_init(v38);
  else
    v39 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v39;
  if (!v39)
    sub_1003E260(4);
  v39->lpVtbl->meth14(v39, a1, 1116078080, 1128726528, 1, 2, 5, 1, 140);
  v39->field_4 = sub_10040990;
  v40 = LOWORD(v3->field_14) + 1;
  ++*(_WORD *)&v39->gap5C[10840];
  *(_WORD *)&v39->gap5C[10842] = v40;
  ++LOWORD(v3->field_14);
  v41 = (unk1E214 *)malloc(0x1E214u);
  if (v41)
    v42 = meth_unk1E214_init(v41);
  else
    v42 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v42;
  if (!v42)
    sub_1003E260(4);
  v43 = v42->lpVtbl;
  v42->lpVtbl->meth14(v42, a1, v3->flags_338, 1133215744, 1052673, 2, 5, 1, -1);
  v42->field_4 = sub_1003FD30;
  LOWORD(v42->?) = 3;
  v43->meth13(v42, asc_100AD300, 1, 1, &unk_100AB4B8);
  ++LOWORD(v3->field_14);
  v44 = (unk1E214 *)malloc(0x1E214u);
  if (v44)
    v45 = meth_unk1E214_init(v44);
  else
    v45 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v45;
  if (!v45)
    sub_1003E260(4);
  v45->lpVtbl->meth14(v45, a1, 1138491392, 1122238464, 1, 2, 5, 1, 101);
  v45->field_4 = sub_100409D0;
  v46 = LOWORD(v3->field_14) + 1;
  ++*(_WORD *)&v45->gap5C[10840];
  *(_WORD *)&v45->gap5C[10842] = v46;
  ++LOWORD(v3->field_14);
  v47 = (unk1E214 *)malloc(0x1E214u);
  if (v47)
    v48 = meth_unk1E214_init(v47);
  else
    v48 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v48;
  if (!v48)
    sub_1003E260(4);
  v49 = v48->lpVtbl;
  v48->lpVtbl->meth14(v48, a1, v3->flags_338, 1128529920, 1052673, 2, 5, 1, -1);
  v48->field_4 = sub_1003FE10;
  LOWORD(v48->?) = 3;
  v49->meth13(v48, asc_100AD300, 1, 1, &unk_100AB488);
  ++LOWORD(v3->field_14);
  v50 = (unk1E214 *)malloc(0x1E214u);
  if (v50)
    v51 = meth_unk1E214_init(v50);
  else
    v51 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v51;
  if (!v51)
    sub_1003E260(4);
  v51->lpVtbl->meth14(v51, a1, 1139933184, 1129709568, 1, 2, 5, 1, 99);
  v51->field_4 = sub_100409B0;
  v52 = LOWORD(v3->field_14) + 1;
  ++*(_WORD *)&v51->gap5C[10840];
  *(_WORD *)&v51->gap5C[10842] = v52;
  ++LOWORD(v3->field_14);
  v53 = (unk1E214 *)malloc(0x1E214u);
  if (v53)
    v54 = meth_unk1E214_init(v53);
  else
    v54 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v54;
  if (!v54)
    sub_1003E260(4);
  v55 = v54->lpVtbl;
  v54->lpVtbl->meth14(v54, a1, v3->flags_338, 1133019136, 1052673, 2, 5, 1, -1);
  v54->field_4 = sub_1003FDA0;
  LOWORD(v54->?) = 3;
  v55->meth13(v54, asc_100AD300, 1, 1, &unk_100AB478);
  ++LOWORD(v3->field_14);
  return 1;
}
// 100AB448: using guessed type int dword_100AB448;
// 10AA29C8: using guessed type int dword_10AA29C8;
