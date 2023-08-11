#include "types-win32.h"
//----- (100491B0) --------------------------------------------------------
int __cdecl sub_100491B0(unk000C8 *a1) {
  WORD v1;           // ax
  unk00348 *v2;      // eax
  unk00348 *v3;      // esi
  unk1E214 *v4;      // eax
  unk1E214 *v5;      // ebp
  unk1E214 *v6;      // eax
  unk1E214 *v7;      // ebp
  unk1E214 *v8;      // eax
  unk1E214 *v9;      // ebp
  unk1E214Vtbl *v10; // ebx
  LPCSTR v11;        // eax
  unk1E214 *v12;     // eax
  unk1E214 *v13;     // ebp
  unk1E214Vtbl *v14; // ebx
  LPCSTR v15;        // eax
  WORD v16;          // dx
  unk1E214 *v17;     // eax
  unk1E214 *v18;     // ebp
  unk1E214 *v19;     // eax
  unk1E214 *v20;     // ebp
  unk1E214Vtbl *v21; // ebx
  LPCSTR v22;        // eax
  WORD v23;          // dx
  unk1E214 *v24;     // eax
  unk1E214 *v25;     // ebp
  unk1E214 *v26;     // eax
  unk1E214 *v27;     // ebp
  unk1E214Vtbl *v28; // ebx
  LPCSTR v29;        // eax
  WORD v30;          // dx
  unk1E214 *v31;     // eax
  unk1E214 *v32;     // ebp
  unk1E214 *v33;     // eax
  unk1E214 *v34;     // ebp
  unk1E214Vtbl *v35; // ebx
  LPCSTR v36;        // eax
  WORD v37;          // dx
  unk1E214 *v38;     // eax
  unk1E214 *v39;     // ebp
  unk1E214 *v40;     // eax
  unk1E214 *v41;     // ebp
  unk1E214Vtbl *v42; // ebx
  LPCSTR v43;        // eax
  WORD v44;          // dx
  unk1E214 *v45;     // eax
  unk1E214 *v46;     // ebp
  unk1E214 *v47;     // eax
  unk1E214 *v48;     // ebp
  unk1E214Vtbl *v49; // ebx
  LPCSTR v50;        // eax
  WORD v51;          // dx
  unk1E214 *v52;     // eax
  unk1E214 *v53;     // ebp
  unk1E214Vtbl *v54; // ebx
  LPCSTR v55;        // eax
  unk1E214 *v56;     // eax
  unk1E214 *v57;     // ebp
  unk1E214Vtbl *v58; // ebx
  int result;        // eax
  float v60;         // [esp+268h] [ebp-34h]
  float v61;         // [esp+268h] [ebp-34h]
  float v62;         // [esp+268h] [ebp-34h]
  float v63;         // [esp+268h] [ebp-34h]
  float v64;         // [esp+268h] [ebp-34h]
  float v65;         // [esp+268h] [ebp-34h]

  v1 = a1->field_10;
  *(&a1->field_10 + 1) = 0;
  *(&a1->field_6C + v1) = 1;
  v2 = (unk00348 *)malloc(0x348u);
  if (v2)
      v3 = meth_10048470(v2);
  else
      v3 = 0;
  a1->field_14[a1->field_10] = v3;
  if (!v3)
      sub_1003E260(4);
  ++a1->field_10;
  v3->field_340 = a1;
  v3->field_10 = 0;
  v3->flags_338 = 1128464384;
  v3->field_33C = 125.0;
  v4 = (unk1E214 *)malloc(0x1E214u);
  if (v4)
      v5 = meth_unk1E214_init(v4);
  else
      v5 = 0;
  v3->field_18[v3->field_14] = v5;
  if (!v5)
      sub_1003E260(4);
  v5->lpVtbl->meth14(v5, a1, 0, 0.0, 9, 2, 5, 0, 0);
  ++v3->field_14;
  v6 = (unk1E214 *)malloc(0x1E214u);
  if (v6)
      v7 = meth_unk1E214_init(v6);
  else
      v7 = 0;
  *(_DWORD *)&v3->gap20[788] = v7;
  if (!v7)
      sub_1003E260(4);
  v7->lpVtbl->meth14(v7, a1, 0, 0.0, 9, 2, 5, 0, 1);
  v8 = (unk1E214 *)malloc(0x1E214u);
  if (v8)
      v9 = meth_unk1E214_init(v8);
  else
      v9 = 0;
  v3->field_18[v3->field_14] = v9;
  if (!v9)
      sub_1003E260(4);
  v10 = v9->lpVtbl;
  v9->lpVtbl->meth14(v9, a1, v3->flags_338, 10.0, 0x100009, 2, 5, 1, -1);
  v9->field_3838.field_1A99C[28] = 3;
  v11 = GetStringWithIndex(1u);
  v10->meth13(v9, v11, 1, 1, &unk_100AB508);
  ++v3->field_14;
  v12 = (unk1E214 *)malloc(0x1E214u);
  if (v12)
      v13 = meth_unk1E214_init(v12);
  else
      v13 = 0;
  v3->field_18[v3->field_14] = v13;
  if (!v13)
      sub_1003E260(4);
  v14 = v13->lpVtbl;
  v13->lpVtbl->meth14(v13, a1, v3->flags_338, v3->field_33C, 0x102001, 2, 5, 1, -1);
  v13->field_C = sub_10047360;
  v13->field_8 = (int(__cdecl *)())meth_10045900;
  v13->field_3838.field_1A99C[28] = 3;
  v15 = GetStringWithIndex(2u);
  v14->meth13(v13, v15, 1, 1, &dword_100AB448);
  v16 = v3->field_14;
  ++v13->field_2AB4[0];
  v13->field_2AB4[1] = v16 + 1;
  ++v3->field_14;
  ++LOWORD(v3->last);
  v17 = (unk1E214 *)malloc(0x1E214u);
  if (v17)
      v18 = meth_unk1E214_init(v17);
  else
      v18 = 0;
  v3->field_18[v3->field_14] = v18;
  if (!v18)
      sub_1003E260(4);
  v18->lpVtbl->meth14(v18, a1, 1117782016, 46.0, 2057, 2, 5, 0, 6);
  ++v3->field_14;
  v19 = (unk1E214 *)malloc(0x1E214u);
  if (v19)
      v20 = meth_unk1E214_init(v19);
  else
      v20 = 0;
  v3->field_18[v3->field_14] = v20;
  if (!v20)
      sub_1003E260(4);
  v21 = v20->lpVtbl;
  v60 = v3->field_33C - -19.0;
  v20->lpVtbl->meth14(v20, a1, v3->flags_338, v60, 1056769, 2, 5, 1, -1);
  v20->field_C = sub_100474B0;
  v20->field_8 = sub_10043BF0;
  v20->field_3838.field_1A99C[28] = 3;
  v22 = GetStringWithIndex(3u);
  v21->meth13(v20, v22, 1, 1, &dword_100AB448);
  v23 = v3->field_14;
  ++v20->field_2AB4[0];
  v20->field_2AB4[1] = v23 + 1;
  ++v3->field_14;
  ++LOWORD(v3->last);
  v24 = (unk1E214 *)malloc(0x1E214u);
  if (v24)
      v25 = meth_unk1E214_init(v24);
  else
      v25 = 0;
  v3->field_18[v3->field_14] = v25;
  if (!v25)
      sub_1003E260(4);
  v25->lpVtbl->meth14(v25, a1, 1117782016, 46.0, 2057, 2, 5, 0, 7);
  ++v3->field_14;
  v26 = (unk1E214 *)malloc(0x1E214u);
  if (v26)
      v27 = meth_unk1E214_init(v26);
  else
      v27 = 0;
  v3->field_18[v3->field_14] = v27;
  if (!v27)
      sub_1003E260(4);
  v28 = v27->lpVtbl;
  v61 = v3->field_33C - -38.0;
  v27->lpVtbl->meth14(v27, a1, v3->flags_338, v61, 1056769, 2, 5, 1, -1);
  v27->field_C = sub_100474B0;
  v27->field_8 = sub_10044B90;
  v27->field_3838.field_1A99C[28] = 3;
  v29 = GetStringWithIndex(4u);
  v28->meth13(v27, v29, 1, 1, &dword_100AB448);
  v30 = v3->field_14;
  ++v27->field_2AB4[0];
  v27->field_2AB4[1] = v30 + 1;
  ++v3->field_14;
  ++LOWORD(v3->last);
  v31 = (unk1E214 *)malloc(0x1E214u);
  if (v31)
      v32 = meth_unk1E214_init(v31);
  else
      v32 = 0;
  v3->field_18[v3->field_14] = v32;
  if (!v32)
      sub_1003E260(4);
  v32->lpVtbl->meth14(v32, a1, 1117782016, 46.0, 2057, 2, 5, 0, 8);
  ++v3->field_14;
  v33 = (unk1E214 *)malloc(0x1E214u);
  if (v33)
      v34 = meth_unk1E214_init(v33);
  else
      v34 = 0;
  v3->field_18[v3->field_14] = v34;
  if (!v34)
      sub_1003E260(4);
  v35 = v34->lpVtbl;
  v62 = v3->field_33C - -57.0;
  v34->lpVtbl->meth14(v34, a1, v3->flags_338, v62, 1056769, 2, 5, 1, -1);
  v34->field_C = sub_10047360;
  v34->field_8 = (int(__cdecl *)())meth_10044F50;
  v34->field_3838.field_1A99C[28] = 3;
  v36 = GetStringWithIndex(5u);
  v35->meth13(v34, v36, 1, 1, &dword_100AB448);
  v37 = v3->field_14;
  ++v34->field_2AB4[0];
  v34->field_2AB4[1] = v37 + 1;
  ++v3->field_14;
  ++LOWORD(v3->last);
  v38 = (unk1E214 *)malloc(0x1E214u);
  if (v38)
      v39 = meth_unk1E214_init(v38);
  else
      v39 = 0;
  v3->field_18[v3->field_14] = v39;
  if (!v39)
      sub_1003E260(4);
  v39->lpVtbl->meth14(v39, a1, 1117782016, 46.0, 2057, 2, 5, 0, 10);
  ++v3->field_14;
  v40 = (unk1E214 *)malloc(0x1E214u);
  if (v40)
      v41 = meth_unk1E214_init(v40);
  else
      v41 = 0;
  v3->field_18[v3->field_14] = v41;
  if (!v41)
      sub_1003E260(4);
  v42 = v41->lpVtbl;
  v63 = v3->field_33C - -76.0;
  v41->lpVtbl->meth14(v41, a1, v3->flags_338, v63, 1056769, 2, 5, 1, -1);
  v41->field_C = sub_100474B0;
  v41->field_8 = sub_100451E0;
  v41->field_3838.field_1A99C[28] = 3;
  v43 = GetStringWithIndex(6u);
  v42->meth13(v41, v43, 1, 1, &dword_100AB448);
  v44 = v3->field_14;
  ++v41->field_2AB4[0];
  v41->field_2AB4[1] = v44 + 1;
  ++v3->field_14;
  ++LOWORD(v3->last);
  v45 = (unk1E214 *)malloc(0x1E214u);
  if (v45)
      v46 = meth_unk1E214_init(v45);
  else
      v46 = 0;
  v3->field_18[v3->field_14] = v46;
  if (!v46)
      sub_1003E260(4);
  v46->lpVtbl->meth14(v46, a1, 1117782016, 46.0, 2057, 2, 5, 0, 9);
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
  v64 = v3->field_33C - -95.0;
  v48->lpVtbl->meth14(v48, a1, v3->flags_338, v64, 1056769, 2, 5, 1, -1);
  v48->field_C = sub_100475F0;
  v48->field_8 = (int(__cdecl *)())sub_10041970;
  v48->field_3838.field_1A99C[28] = 3;
  v50 = GetStringWithIndex(7u);
  v49->meth13(v48, v50, 1, 1, &dword_100AB448);
  v51 = v3->field_14;
  ++v48->field_2AB4[0];
  v48->field_2AB4[1] = v51 + 1;
  ++v3->field_14;
  ++LOWORD(v3->last);
  v52 = (unk1E214 *)malloc(0x1E214u);
  if (v52)
      v53 = meth_unk1E214_init(v52);
  else
      v53 = 0;
  v3->field_18[v3->field_14] = v53;
  if (!v53)
      sub_1003E260(4);
  v54 = v53->lpVtbl;
  v65 = v3->field_33C - -114.0;
  v53->lpVtbl->meth14(v53, a1, v3->flags_338, v65, 1056769, 2, 5, 1, -1);
  v53->field_C = sub_100474B0;
  v53->field_8 = (int(__cdecl *)())sub_10046170;
  v53->field_3838.field_1A99C[28] = 3;
  v55 = GetStringWithIndex(8u);
  v54->meth13(v53, v55, 1, 1, &dword_100AB448);
  ++v3->field_14;
  ++LOWORD(v3->last);
  v56 = (unk1E214 *)malloc(0x1E214u);
  if (v56)
      v57 = meth_unk1E214_init(v56);
  else
      v57 = 0;
  v3->field_18[v3->field_14] = v57;
  if (!v57)
      sub_1003E260(4);
  v58 = v57->lpVtbl;
  v57->lpVtbl->meth14(v57, a1, v3->flags_338, 29.0, 1048585, 2, 5, 1, -1);
  v57->field_3838.field_1A99C[28] = 3;
  v58->meth13(v57, asc_100AD300, 1, 1, &unk_100AB558);
  result = 1;
  dword_10A9DBD0 = v3->field_14++;
  return result;
}
// 100AB448: using guessed type int dword_100AB448;
// 10A9DBD0: using guessed type int dword_10A9DBD0;
