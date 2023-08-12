#include "types-win32.h"
//----- (1004DFC0) --------------------------------------------------------
int __cdecl s_unk000C8_1004DFC0(unk000C8 *a1) {
  WORD v2;           // ax
  unk00348 *v3;      // eax
  unk00348 *v4;      // esi
  unk1E214 *v5;      // eax
  unk1E214 *v6;      // ebx
  unk1E214 *v7;      // eax
  unk1E214 *v8;      // ebx
  unk1E214Vtbl *v9;  // edi
  LPCSTR v10;        // eax
  unk1E214 *v11;     // eax
  unk1E214 *v12;     // ebx
  unk1E214 *v13;     // eax
  unk1E214 *v14;     // ebx
  int v15;           // eax
  unk1A5E0Vtbl *v16; // edi
  unk000C8 *v17;     // edx
  char **v18;        // edi
  __int64 v19;       // rax
  unk1E214 *v20;     // eax
  unk1E214 *v21;     // edi
  unk1E214Vtbl *v22; // ebx
  LPCSTR v23;        // eax
  unk1E214 *v24;     // eax
  unk1E214 *v25;     // edi
  unk1E214Vtbl *v26; // ebx
  LPCSTR v27;        // eax
  unk1E214 *v28;     // eax
  unk1E214 *v29;     // edi
  unk1E214Vtbl *v30; // ebx
  LPCSTR v31;        // eax
  unk1E214 *v32;     // eax
  unk1E214 *v33;     // edi
  unk1E214 *v34;     // eax
  unk1E214 *v35;     // edi
  unk1E214 *v36;     // eax
  unk1E214 *v37;     // edi
  unk1E214 *v38;     // eax
  unk1E214 *v39;     // edi
  unk1E214Vtbl *v40; // ebx
  LPCSTR v41;        // eax
  unk1E214 *v42;     // eax
  unk1E214 *v43;     // edi
  unk1E214Vtbl *v44; // ebx
  LPCSTR v45;        // eax
  float v47;         // [esp+1E0h] [ebp-34h]
  float v48;         // [esp+1E0h] [ebp-34h]
  float v49;         // [esp+1E0h] [ebp-34h]
  unk000C8 *v50;     // [esp+218h] [ebp+4h]

  v2 = a1->field_10;
  *(&a1->field_10 + 1) = 0;
  *(&a1->field_6C + v2) = 1;
  v3 = (unk00348 *)malloc(0x348u);
  if (v3)
    v4 = meth_unk00348_10048470(v3);
  else
    v4 = 0;
  a1->field_14[a1->field_10] = v4;
  if (!v4)
    sub_1003E260(4);
  ++a1->field_10;
  v4->field_340 = a1;
  v4->field_10 = 0;
  v4->flags_338 = 1128464384;
  v4->field_33C = 130.0;
  v5 = (unk1E214 *)malloc(0x1E214u);
  if (v5)
    v6 = meth_unk1E214_init(v5);
  else
    v6 = 0;
  v4->field_18[v4->field_14] = v6;
  if (!v6)
    sub_1003E260(4);
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))
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
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, int, int))
       v8->lpVtbl->meth14)(v8, a1, v4->flags_338, 1092616192, 1048585, 2, 5, 1, -1);
  v8->field_3838.field_1A99C[28] = 3;
  v10 = GetStringWithIndex(0x21u);
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
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, _DWORD, int))
       v12->lpVtbl->meth14)(v12, a1, 1117782016, 1110966272, 9, 2, 5, 0, 9);
  ++v4->field_14;
  v13 = (unk1E214 *)malloc(0x1E214u);
  if (v13)
    v14 = meth_unk1E214_init(v13);
  else
    v14 = 0;
  v4->field_18[v4->field_14] = v14;
  if (!v14)
    sub_1003E260(4);
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, _DWORD, int, int, int, int, int))
       v14->lpVtbl->meth14)(v14, a1, v4->flags_338, LODWORD(v4->field_33C), 12289, 2, 5, 1, -1);
  v14->field_4 = sub_1003EE20;
  *(_DWORD *)&v14->field_3838.field_1A99C[16] = 1;
  v15 = dword_10AA2A34;
  if (dword_10AA2A34 < 0) {
    v15 = 0;
  } else if (dword_10AA2A34 > 11) {
    v15 = 11;
  }
  v16 = v14->field_3838.lpVtbl;
  v16->meth5(&v14->field_3838, 262145, dword_100AB548, 4, v15, -1);
  v17 = (unk000C8 *)v16->meth4;
  v14->field_3838.field_4[0] = (DWORD)pm_sub_1004E810;
  v50 = v17;
  v18 = off_100B89C8;
  do
    ((void(__thiscall *)(unk1A5E0 *, _DWORD, _DWORD, int, int *, int))v50)(
        &v14->field_3838, *v18++, 0, 1, dword_100AB4D8, 1);
  while ((int)v18 < (int)aFancyCar);
  if (dword_10AA2A34 >= 0) {
    if (dword_10AA2A34 <= 11)
      *(float *)&v14->field_3838.field_1A99C[10] = *(float *)&v14->field_3838.field_1A99C[22] -
                                                   (*(float *)&v14->field_3838.field_1A99C[24] -
                                                    *(float *)&v14->field_3838.field_1A99C[22]) *
                                                       (double)dword_10AA2A34 * -0.090909094;
    else
      *(_DWORD *)&v14->field_3838.field_1A99C[10] = *(_DWORD *)&v14->field_3838.field_1A99C[24];
  } else {
    *(_DWORD *)&v14->field_3838.field_1A99C[10] = *(_DWORD *)&v14->field_3838.field_1A99C[22];
  }
  v19 = (__int64)*(float *)&v14->field_3838.field_1A99C[10];
  *(_DWORD *)&v14->field_3838.gap1A93A[86] = v19;
  *(_DWORD *)&v14->field_3838.gap1A93A[94] = v19 + 16;
  ++v4->field_14;
  ++LOWORD(v4->last);
  v20 = (unk1E214 *)malloc(0x1E214u);
  if (v20)
    v21 = meth_unk1E214_init(v20);
  else
    v21 = 0;
  v4->field_18[v4->field_14] = v21;
  if (!v21)
    sub_1003E260(4);
  v22 = v21->lpVtbl;
  v47 = v4->field_33C - -76.0;
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, _DWORD, int, int, int, int, int))
       v21->lpVtbl->meth14)(v21, a1, v4->flags_338, LODWORD(v47), 1056769, 2, 5, 1, -1);
  v21->field_C = sub_10047360;
  v21->field_8 = sub_10042CF0;
  v21->field_3838.field_1A99C[28] = 3;
  v23 = GetStringWithIndex(0x2Eu);
  v22->meth13(v21, v23, 1, 1, &dword_100AB448);
  ++v4->field_14;
  ++LOWORD(v4->last);
  v24 = (unk1E214 *)malloc(0x1E214u);
  if (v24)
    v25 = meth_unk1E214_init(v24);
  else
    v25 = 0;
  v4->field_18[v4->field_14] = v25;
  if (!v25)
    sub_1003E260(4);
  v26 = v25->lpVtbl;
  v48 = v4->field_33C - -95.0;
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, _DWORD, int, int, int, int, int))
       v25->lpVtbl->meth14)(v25, a1, v4->flags_338, LODWORD(v48), 1056769, 2, 5, 1, -1);
  v25->field_C = sub_10047360;
  v25->field_8 = sub_10042D60;
  v25->field_3838.field_1A99C[28] = 3;
  v27 = GetStringWithIndex(0x2Fu);
  v26->meth13(v25, v27, 1, 1, &dword_100AB448);
  ++v4->field_14;
  ++LOWORD(v4->last);
  v28 = (unk1E214 *)malloc(0x1E214u);
  if (v28)
    v29 = meth_unk1E214_init(v28);
  else
    v29 = 0;
  v4->field_18[v4->field_14] = v29;
  if (!v29)
    sub_1003E260(4);
  v30 = v29->lpVtbl;
  v49 = v4->field_33C - -114.0;
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, _DWORD, int, int, int, int, int))
       v29->lpVtbl->meth14)(v29, a1, v4->flags_338, LODWORD(v49), 1056769, 2, 5, 1, -1);
  v29->field_C = sub_10047360;
  v29->field_8 = (int(__cdecl *)())sub_100466C0;
  v29->field_3838.field_1A99C[28] = 3;
  v31 = GetStringWithIndex(0xCu);
  v30->meth13(v29, v31, 1, 1, &dword_100AB448);
  dword_10AA29C8 = (int)v29;
  ++v4->field_14;
  ++LOWORD(v4->last);
  v32 = (unk1E214 *)malloc(0x1E214u);
  if (v32)
    v33 = meth_unk1E214_init(v32);
  else
    v33 = 0;
  v4->field_18[v4->field_14] = v33;
  if (!v33)
    sub_1003E260(4);
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, int, int))
       v33->lpVtbl->meth14)(v33, a1, 1117257728, 1129512960, 1, 2, 5, 1, 104);
  v33->field_4 = sub_1003E950;
  ++v4->field_14;
  v34 = (unk1E214 *)malloc(0x1E214u);
  if (v34)
    v35 = meth_unk1E214_init(v34);
  else
    v35 = 0;
  v4->field_18[v4->field_14] = v35;
  if (!v35)
    sub_1003E260(4);
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, int, int))
       v35->lpVtbl->meth14)(v35, a1, 1117126656, 1132822528, 9, 2, 5, 1, 106);
  ++v4->field_14;
  v36 = (unk1E214 *)malloc(0x1E214u);
  if (v36)
    v37 = meth_unk1E214_init(v36);
  else
    v37 = 0;
  v4->field_18[v4->field_14] = v37;
  if (!v37)
    sub_1003E260(4);
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, int, int))
       v37->lpVtbl->meth14)(v37, a1, 1117650944, 1132462080, 1, 2, 5, 1, 107);
  v37->field_4 = sub_1003EA40;
  ++v4->field_14;
  v38 = (unk1E214 *)malloc(0x1E214u);
  if (v38)
    v39 = meth_unk1E214_init(v38);
  else
    v39 = 0;
  v4->field_18[v4->field_14] = v39;
  if (!v39)
    sub_1003E260(4);
  v40 = v39->lpVtbl;
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, int, int))
       v39->lpVtbl->meth14)(v39, a1, 1135181824, 1119092736, 1056769, 2, 5, 1, -1);
  v39->field_4 = (int(__cdecl *)(int))sub_1003E980;
  v39->field_3838.field_1A99C[28] = 3;
  v41 = GetStringWithIndex(0x2Eu);
  v40->meth13(v39, v41, 1, 1, &unk_100AB468);
  ++v4->field_14;
  v42 = (unk1E214 *)malloc(0x1E214u);
  if (v42)
    v43 = meth_unk1E214_init(v42);
  else
    v43 = 0;
  v4->field_18[v4->field_14] = v43;
  if (!v43)
    sub_1003E260(4);
  v44 = v43->lpVtbl;
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, int, int))
       v43->lpVtbl->meth14)(v43, a1, 1135181824, 1124073472, 1056769, 2, 5, 1, -1);
  v43->field_4 = (int(__cdecl *)(int))sub_1003E9E0;
  v43->field_3838.field_1A99C[28] = 3;
  v45 = GetStringWithIndex(0x2Fu);
  v44->meth13(v43, v45, 1, 1, &unk_100AB468);
  ++v4->field_14;
  return 1;
}
// 100AB448: using guessed type int dword_100AB448;
// 100B89C8: using guessed type char *off_100B89C8[12];
// 10AA29C8: using guessed type int dword_10AA29C8;
// 10AA2A34: using guessed type int dword_10AA2A34;
