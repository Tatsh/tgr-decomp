#include "types-win32.h"
//----- (10056FF0) --------------------------------------------------------
int __cdecl s_unk000C8_10056FF0(unk000C8 *a1) {
  unk00348 *v1;      // eax
  unk00348 *v2;      // esi
  unk1E214 *v3;      // eax
  unk1E214 *v4;      // edi
  unk1E214 *v5;      // eax
  unk1E214 *v6;      // edi
  unk1E214Vtbl *v7;  // ebx
  LPCSTR v8;         // eax
  unk1E214 *v9;      // eax
  unk1E214 *v10;     // edi
  unk1A5E0Vtbl *v11; // edx
  unk1E214 *v12;     // eax
  unk1E214 *v13;     // edi
  unk1E214Vtbl *v14; // ebx
  LPCSTR v15;        // eax
  unk1E214 *v16;     // eax
  unk1E214 *v17;     // edi
  int v18;           // eax
  unk1E214Vtbl *v19; // ebx
  BOOL v20;          // eax
  LPCSTR v21;        // eax
  unk1E214 *v22;     // eax
  unk1E214 *v23;     // edi
  unk1E214Vtbl *v24; // ebx
  LPCSTR v25;        // eax
  unk1E214 *v26;     // eax
  unk1E214 *v27;     // edi
  unk1E214Vtbl *v28; // ebx
  LPCSTR v29;        // eax
  unk1E214 *v30;     // eax
  unk1E214 *v31;     // edi
  float v33;         // [esp+13Ch] [ebp-34h]
  float v34;         // [esp+13Ch] [ebp-34h]
  float v35;         // [esp+13Ch] [ebp-34h]
  float v36;         // [esp+13Ch] [ebp-34h]
  BOOL v37;          // [esp+14Ch] [ebp-24h]

  *(&a1->field_10 + 1) = 0;
  sub_100586A0();
  dword_10AA2898 = 1;
  *(&a1->field_6C + a1->field_10) = 1;
  v1 = (unk00348 *)malloc(0x348u);
  if (v1)
    v2 = meth_unk00348_10048470(v1);
  else
    v2 = 0;
  a1->field_14[a1->field_10] = v2;
  if (!v2)
    sub_1003E260(4);
  ++a1->field_10;
  v2->field_340 = a1;
  v2->field_10 = 0;
  v2->flags_338 = 1128464384;
  v2->field_33C = 130.0;
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
  v7 = v6->lpVtbl;
  v6->lpVtbl->meth14(v6, a1, v2->flags_338, 10.0, 1048585, 2, 5, 1, -1);
  v6->field_3838.field_1A99C[28] = 3;
  v8 = GetStringWithIndex(0x5Fu);
  v7->meth13(v6, v8, 1, 1, &unk_100AB508);
  ++v2->field_14;
  v9 = (unk1E214 *)malloc(0x1E214u);
  if (v9)
    v10 = meth_unk1E214_init(v9);
  else
    v10 = 0;
  v2->field_18[v2->field_14] = v10;
  if (!v10)
    sub_1003E260(4);
  v10->lpVtbl->meth14(v10, a1, v2->flags_338, v2->field_33C, 12289, 2, 5, 1, -1);
  v11 = v10->field_3838.lpVtbl;
  v10->field_4 = sub_1003EB90;
  *(_DWORD *)&v10->field_3838.field_1A99C[16] = 1;
  v11->meth5(&v10->field_3838, 262145, dword_100AB4E8, 3, 0, -1);
  dword_10AA29D4 = (int)v10;
  ++v2->field_14;
  ++LOWORD(v2->last);
  if (dword_10AA287C == 2) {
    v12 = (unk1E214 *)malloc(0x1E214u);
    if (v12)
      v13 = meth_unk1E214_init(v12);
    else
      v13 = 0;
    v2->field_18[v2->field_14] = v13;
    if (!v13)
      sub_1003E260(4);
    v14 = v13->lpVtbl;
    v33 = v2->field_33C - -57.0;
    v13->lpVtbl->meth14(v13, a1, v2->flags_338, v33, 1056769, 2, 5, 1, -1);
    v13->field_C = sub_10047360;
    v13->field_8 = sub_10043DA0;
    v13->field_3838.field_1A99C[28] = 3;
    v15 = GetStringWithIndex(0x5Eu);
    v14->meth13(v13, v15, 1, 1, &dword_100AB448);
    ++v2->field_14;
    ++LOWORD(v2->last);
  }
  v16 = (unk1E214 *)malloc(0x1E214u);
  if (v16)
    v17 = meth_unk1E214_init(v16);
  else
    v17 = 0;
  v2->field_18[v2->field_14] = v17;
  if (!v17)
    sub_1003E260(4);
  if (dword_10AA287C == 2 || (v18 = 1056785, dword_10AA287C == 3))
    v18 = 1056769;
  v19 = v17->lpVtbl;
  v34 = v2->field_33C - -76.0;
  v17->lpVtbl->meth14(v17, a1, v2->flags_338, v34, v18, 2, 5, 1, -1);
  v17->field_C = sub_10047360;
  v17->field_8 = sub_10044280;
  v17->field_3838.field_1A99C[28] = 2;
  v20 = dword_10AA287C == 2 || dword_10AA287C == 3;
  v37 = v20;
  v21 = GetStringWithIndex(0x60u);
  v19->meth13(v17, v21, 1, v37, &dword_100AB448);
  dword_10AA29D8 = (int)v17;
  ++v2->field_14;
  ++LOWORD(v2->last);
  v22 = (unk1E214 *)malloc(0x1E214u);
  if (v22)
    v23 = meth_unk1E214_init(v22);
  else
    v23 = 0;
  v2->field_18[v2->field_14] = v23;
  if (!v23)
    sub_1003E260(4);
  v24 = v23->lpVtbl;
  v35 = v2->field_33C - -95.0;
  v23->lpVtbl->meth14(v23, a1, v2->flags_338, v35, 1056769, 2, 5, 1, -1);
  v23->field_C = sub_10047360;
  v23->field_8 = sub_100440D0;
  v23->field_3838.field_1A99C[28] = 3;
  v25 = GetStringWithIndex(0x61u);
  v24->meth13(v23, v25, 1, 1, &dword_100AB448);
  ++v2->field_14;
  ++LOWORD(v2->last);
  v26 = (unk1E214 *)malloc(0x1E214u);
  if (v26)
    v27 = meth_unk1E214_init(v26);
  else
    v27 = 0;
  v2->field_18[v2->field_14] = v27;
  if (!v27)
    sub_1003E260(4);
  v28 = v27->lpVtbl;
  v36 = v2->field_33C - -114.0;
  v27->lpVtbl->meth14(v27, a1, v2->flags_338, v36, 1056769, 2, 5, 1, -1);
  v27->field_C = sub_10047360;
  v27->field_8 = (int(__cdecl *)())sub_10044AE0;
  v27->field_3838.field_1A99C[28] = 3;
  v29 = GetStringWithIndex(0xCu);
  v28->meth13(v27, v29, 1, 1, &dword_100AB448);
  ++v2->field_14;
  ++LOWORD(v2->last);
  v30 = (unk1E214 *)malloc(0x1E214u);
  if (v30)
    v31 = meth_unk1E214_init(v30);
  else
    v31 = 0;
  v2->field_18[v2->field_14] = v31;
  if (!v31)
    sub_1003E260(4);
  v31->lpVtbl->meth14(v31, a1, 1117782016, 46.0, 9, 2, 5, 0, 7);
  ++v2->field_14;
  return 1;
}
// 100AB448: using guessed type int dword_100AB448;
// 10AA287C: using guessed type int dword_10AA287C;
// 10AA2898: using guessed type int dword_10AA2898;
// 10AA29D4: using guessed type int dword_10AA29D4;
// 10AA29D8: using guessed type int dword_10AA29D8;
