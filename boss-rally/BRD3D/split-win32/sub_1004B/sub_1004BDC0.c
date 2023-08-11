#include "types-win32.h"
//----- (1004BDC0) --------------------------------------------------------
int __cdecl sub_1004BDC0(unk000C8 *a1) {
  unsigned __int16 v1; // ax
  unk00348 *v2;        // eax
  unk00348 *v3;        // esi
  unk1E214 *v4;        // eax
  unk1E214 *v5;        // edi
  unk1E214 *v6;        // eax
  unk1E214 *v7;        // edi
  unk1E214Vtbl *v8;    // ebx
  LPCSTR v9;           // eax
  unk1E214 *v10;       // eax
  unk1E214 *v11;       // edi
  unk1E214Vtbl *v12;   // ebx
  LPCSTR v13;          // eax
  unk1E214 *v14;       // eax
  unk1E214 *v15;       // edi
  unk1E214Vtbl *v16;   // ebx
  LPCSTR v17;          // eax
  unk1E214 *v18;       // eax
  unk1E214 *v19;       // edi
  unk1E214Vtbl *v20;   // ebx
  LPCSTR v21;          // eax
  unk1E214 *v22;       // eax
  unk1E214 *v23;       // edi
  unk1E214Vtbl *v24;   // ebx
  LPCSTR v25;          // eax
  unk1E214 *v26;       // eax
  unk1E214 *v27;       // edi
  unk1E214Vtbl *v28;   // ebx
  LPCSTR v29;          // eax
  unk1E214 *v30;       // eax
  unk1E214 *v31;       // edi
  unk1E214 *v32;       // eax
  unk1E214 *v33;       // edi
  WORD v34;            // ax
  unk1E214 *v35;       // eax
  unk1E214 *v36;       // edi
  unk1E214Vtbl *v37;   // ebx
  float v39;           // [esp+188h] [ebp-34h]
  float v40;           // [esp+188h] [ebp-34h]
  float v41;           // [esp+188h] [ebp-34h]
  float v42;           // [esp+188h] [ebp-34h]

  v1 = a1->field_10;
  HIWORD(a1->field_10) = 0;
  *(&a1->field_6C + v1) = 1;
  v2 = (unk00348 *)malloc(0x348u);
  if (v2)
      v3 = meth_10048470(v2);
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
  v3->field_18[v3->field_14] = v7;
  if (!v7)
      sub_1003E260(4);
  v8 = v7->lpVtbl;
  v7->lpVtbl->meth14(v7, a1, v3->flags_338, 10.0, 1048585, 2, 5, 1, -1);
  v7->field_3838.field_1A99C[28] = 3;
  v9 = GetStringWithIndex(6u);
  v8->meth13(v7, v9, 1, 1, &unk_100AB508);
  ++v3->field_14;
  v10 = (unk1E214 *)malloc(0x1E214u);
  if (v10)
      v11 = meth_unk1E214_init(v10);
  else
      v11 = 0;
  v3->field_18[v3->field_14] = v11;
  if (!v11)
      sub_1003E260(4);
  v12 = v11->lpVtbl;
  v11->lpVtbl->meth14(v11, a1, v3->flags_338, v3->field_33C, 1056769, 2, 5, 1, -1);
  v11->field_C = sub_10047360;
  v11->field_8 = sub_100452C0;
  v11->field_3838.field_1A99C[28] = 3;
  v13 = GetStringWithIndex(0x1Fu);
  v12->meth13(v11, v13, 1, 1, &dword_100AB448);
  ++v3->field_14;
  ++LOWORD(v3->last);
  v14 = (unk1E214 *)malloc(0x1E214u);
  if (v14)
      v15 = meth_unk1E214_init(v14);
  else
      v15 = 0;
  v3->field_18[v3->field_14] = v15;
  if (!v15)
      sub_1003E260(4);
  v16 = v15->lpVtbl;
  v39 = v3->field_33C - -19.0;
  v15->lpVtbl->meth14(v15, a1, v3->flags_338, v39, 1056769, 2, 5, 1, -1);
  v15->field_C = sub_10047360;
  v15->field_8 = sub_10045390;
  v15->field_3838.field_1A99C[28] = 3;
  v17 = GetStringWithIndex(0x20u);
  v16->meth13(v15, v17, 1, 1, &dword_100AB448);
  ++v3->field_14;
  ++LOWORD(v3->last);
  v18 = (unk1E214 *)malloc(0x1E214u);
  if (v18)
      v19 = meth_unk1E214_init(v18);
  else
      v19 = 0;
  v3->field_18[v3->field_14] = v19;
  if (!v19)
      sub_1003E260(4);
  v20 = v19->lpVtbl;
  v40 = v3->field_33C - -38.0;
  v19->lpVtbl->meth14(v19, a1, v3->flags_338, v40, 1056769, 2, 5, 1, -1);
  v19->field_C = sub_10047360;
  v19->field_8 = sub_100455E0;
  v19->field_3838.field_1A99C[28] = 3;
  v21 = GetStringWithIndex(0x21u);
  v20->meth13(v19, v21, 1, 1, &dword_100AB448);
  ++v3->field_14;
  ++LOWORD(v3->last);
  v22 = (unk1E214 *)malloc(0x1E214u);
  if (v22)
      v23 = meth_unk1E214_init(v22);
  else
      v23 = 0;
  v3->field_18[v3->field_14] = v23;
  if (!v23)
      sub_1003E260(4);
  v24 = v23->lpVtbl;
  v41 = v3->field_33C - -57.0;
  v23->lpVtbl->meth14(v23, a1, v3->flags_338, v41, 1056769, 2, 5, 1, -1);
  v23->field_C = sub_10047360;
  v23->field_8 = sub_100456B0;
  v23->field_3838.field_1A99C[28] = 3;
  v25 = GetStringWithIndex(0x22u);
  v24->meth13(v23, v25, 1, 1, &dword_100AB448);
  ++v3->field_14;
  ++LOWORD(v3->last);
  v26 = (unk1E214 *)malloc(0x1E214u);
  if (v26)
      v27 = meth_unk1E214_init(v26);
  else
      v27 = 0;
  v3->field_18[v3->field_14] = v27;
  if (!v27)
      sub_1003E260(4);
  v28 = v27->lpVtbl;
  v42 = v3->field_33C - -114.0;
  v27->lpVtbl->meth14(v27, a1, v3->flags_338, v42, 1056769, 2, 5, 1, -1);
  v27->field_C = sub_10047360;
  v27->field_8 = (int(__cdecl *)())sub_10046520;
  v27->field_3838.field_1A99C[28] = 3;
  v29 = GetStringWithIndex(0xCu);
  v28->meth13(v27, v29, 1, 1, &dword_100AB448);
  dword_10AA29C8 = (int)v27;
  ++v3->field_14;
  ++LOWORD(v3->last);
  v30 = (unk1E214 *)malloc(0x1E214u);
  if (v30)
      v31 = meth_unk1E214_init(v30);
  else
      v31 = 0;
  v3->field_18[v3->field_14] = v31;
  if (!v31)
      sub_1003E260(4);
  v31->lpVtbl->meth14(v31, a1, 1117782016, 46.0, 9, 2, 5, 0, 9);
  ++v3->field_14;
  v32 = (unk1E214 *)malloc(0x1E214u);
  if (v32)
      v33 = meth_unk1E214_init(v32);
  else
      v33 = 0;
  v3->field_18[v3->field_14] = v33;
  if (!v33)
      sub_1003E260(4);
  v33->lpVtbl->meth14(v33, a1, 1134690304, 46.0, 1, 2, 5, 1, 22);
  v33->field_4 = sub_10041870;
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
  v36->lpVtbl->meth14(v36, a1, v3->flags_338, 155.0, 1052673, 2, 5, 1, -1);
  v36->field_4 = sub_1003FFD0;
  v36->field_3838.field_1A99C[28] = 3;
  v37->meth13(v36, asc_100AD300, 1, 1, &unk_100AB4C8);
  ++v3->field_14;
  return 1;
}
// 100AB448: using guessed type int dword_100AB448;
// 10AA29C8: using guessed type int dword_10AA29C8;
