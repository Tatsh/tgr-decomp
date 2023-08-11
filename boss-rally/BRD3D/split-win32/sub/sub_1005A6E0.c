#include "types-win32.h"
//----- (1005A6E0) --------------------------------------------------------
int __cdecl sub_1005A6E0(unk000C8 *a1) {
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
  unk1A5E0Vtbl *v11; // eax
  unk1A5E0 *v12;     // ebx
  int i;             // ebp
  unk1E214 *v14;     // eax
  unk1E214 *v15;     // ebp
  unk1E214Vtbl *v16; // ebx
  LPCSTR v17;        // eax
  unk1E214 *v18;     // eax
  unk1E214 *v19;     // ebp
  unk1E214Vtbl *v20; // ebx
  unk1E214 *v21;     // eax
  unk1E214 *v22;     // ebp
  unk1E214Vtbl *v23; // ebx
  LPCSTR v24;        // eax
  unk1E214 *v25;     // eax
  unk1E214 *v26;     // ebp
  unk1E214Vtbl *v27; // ebx
  unk1E214 *v28;     // eax
  unk1E214 *v29;     // ebp
  unk1E214Vtbl *v30; // ebx
  LPCSTR v31;        // eax
  unk1E214 *v32;     // eax
  unk1E214 *v33;     // ebp
  unk00348 *v34;     // eax
  unk00348 *v35;     // ebp
  unk1E214 *v36;     // eax
  unk1E214 *v37;     // esi
  unk1E214Vtbl *v38; // ebx
  LPCSTR v39;        // eax
  float v41;         // [esp+1B4h] [ebp-34h]

  gUnkC8Ptr6->last->lpVtbl->meth1(gUnkC8Ptr6->last, aTimeattackGrf);
  *(&a1->field_10 + 1) = 0;
  Value = -1;
  dword_10AA28E8 = 0;
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
  v2->flags_338 = 0x43430000;
  v2->field_33C = 130.0;
  v3 = (unk1E214 *)malloc(0x1E214u);
  if (v3)
    v4 = meth_unk1E214_init(v3);
  else
    v4 = 0;
  v2->field_18[v2->field_14] = v4;
  if (!v4)
    sub_1003E260(4);
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))
       v4->lpVtbl->meth14)(v4, a1, 0, 0, 9, 2, 5, 0, 0);
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
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, int, int))
       v6->lpVtbl->meth14)(v6, a1, v2->flags_338, 0x41200000, 0x100009, 2, 5, 1, -1);
  v6->field_3838.field_1A99C[28] = 3;
  v8 = GetStringWithIndex(0xC2u);
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
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, _DWORD, int, int, int, int, int))
       v10->lpVtbl->meth14)(v10, a1, v2->flags_338, LODWORD(v2->field_33C), 0x3001, 2, 5, 1, -1);
  v11 = v10->field_3838.lpVtbl;
  v12 = &v10->field_3838;
  v10->field_4 = sub_1003EC30;
  *(_DWORD *)&v10->field_3838.field_1A99C[16] = 1;
  v11->meth5(&v10->field_3838, 262145, dword_100AB4D8, 5, 0, -1);
  v10->field_3838.field_4[0] = (DWORD)sub_10042740;
  v10->field_3838.field_4[4] = (DWORD)sub_10042560;
  for (i = 0; i < 26000; i += 260) {
    if ((unk06594 *)((char *)gUnkC8Ptr6->last + i) != (unk06594 *)-4)
        v12->lpVtbl->meth4(v12, (char *)&gUnkC8Ptr6->last->field_4 + i, 0, 1, dword_100AB4D8, 0);
  }
  ++v2->field_14;
  ++LOWORD(v2->last);
  v14 = (unk1E214 *)malloc(0x1E214u);
  if (v14)
    v15 = meth_unk1E214_init(v14);
  else
    v15 = 0;
  v2->field_18[v2->field_14] = v15;
  if (!v15)
    sub_1003E260(4);
  v16 = v15->lpVtbl;
  v41 = v2->field_33C - -95.0;
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, _DWORD, int, int, int, int, int))
       v15->lpVtbl->meth14)(v15, a1, v2->flags_338, LODWORD(v41), 0x102001, 2, 5, 1, -1);
  v15->field_C = sub_10047360;
  v15->field_8 = (int(__cdecl *)())sub_10044F00;
  v15->field_3838.field_1A99C[28] = 3;
  v17 = GetStringWithIndex(0x1Eu);
  v16->meth13(v15, v17, 1, 1, &dword_100AB448);
  ++v2->field_14;
  ++LOWORD(v2->last);
  v18 = (unk1E214 *)malloc(0x1E214u);
  if (v18)
    v19 = meth_unk1E214_init(v18);
  else
    v19 = 0;
  v2->field_18[v2->field_14] = v19;
  if (!v19)
    sub_1003E260(4);
  v20 = v19->lpVtbl;
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, int, int))
       v19->lpVtbl->meth14)(v19, a1, 1138491392, 1129316352, 1052673, 2, 5, 1, -1);
  v19->field_4 = sub_10041040;
  v19->field_3838.field_1A99C[28] = 52;
  v20->meth13(v19, asc_100AD300, 1, 4, &unk_100AB478);
  ++v2->field_14;
  v21 = (unk1E214 *)malloc(0x1E214u);
  if (v21)
    v22 = meth_unk1E214_init(v21);
  else
    v22 = 0;
  v2->field_18[v2->field_14] = v22;
  if (!v22)
    sub_1003E260(4);
  v23 = v22->lpVtbl;
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, int, int))
       v22->lpVtbl->meth14)(v22, a1, 1138491392, 1130364928, 1048577, 2, 5, 1, -1);
  v22->field_3838.field_1A99C[28] = 3;
  v24 = GetStringWithIndex(0x6Fu);
  v23->meth13(v22, v24, 1, 1, &unk_100AB478);
  ++v2->field_14;
  v25 = (unk1E214 *)malloc(0x1E214u);
  if (v25)
    v26 = meth_unk1E214_init(v25);
  else
    v26 = 0;
  v2->field_18[v2->field_14] = v26;
  if (!v26)
    sub_1003E260(4);
  v27 = v26->lpVtbl;
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, int, int))
       v26->lpVtbl->meth14)(v26, a1, 1138491392, 1131413504, 1052673, 2, 5, 1, -1);
  v26->field_4 = sub_10041180;
  v26->field_3838.field_1A99C[28] = 52;
  v27->meth13(v26, asc_100AD300, 1, 4, &unk_100AB478);
  ++v2->field_14;
  v28 = (unk1E214 *)malloc(0x1E214u);
  if (v28)
    v29 = meth_unk1E214_init(v28);
  else
    v29 = 0;
  v2->field_18[v2->field_14] = v29;
  if (!v29)
    sub_1003E260(4);
  v30 = v29->lpVtbl;
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, int, int))
       v29->lpVtbl->meth14)(v29, a1, 1138491392, 1132462080, 1048577, 2, 5, 1, -1);
  v29->field_3838.field_1A99C[28] = 3;
  v31 = GetStringWithIndex(0x3Fu);
  v30->meth13(v29, v31, 1, 1, &unk_100AB478);
  ++v2->field_14;
  v32 = (unk1E214 *)malloc(0x1E214u);
  if (v32)
    v33 = meth_unk1E214_init(v32);
  else
    v33 = 0;
  v2->field_18[v2->field_14] = v33;
  if (!v33)
    sub_1003E260(4);
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, _DWORD, int))
       v33->lpVtbl->meth14)(v33, a1, 1117782016, 1110966272, 9, 2, 5, 0, 6);
  ++v2->field_14;
  *(&a1->field_6C + a1->field_10) = 0;
  v34 = (unk00348 *)malloc(0x348u);
  if (v34)
    v35 = meth_unk00348_10048470(v34);
  else
    v35 = 0;
  a1->field_14[a1->field_10] = v35;
  if (!v35)
    sub_1003E260(4);
  ++a1->field_10;
  v35->field_340 = a1;
  v35->field_10 = 0;
  v35->flags_338 = 1128464384;
  v35->field_33C = 130.0;
  v36 = (unk1E214 *)malloc(0x1E214u);
  if (v36)
    v37 = meth_unk1E214_init(v36);
  else
    v37 = 0;
  v35->field_18[v35->field_14] = v37;
  if (!v37)
    sub_1003E260(4);
  v38 = v37->lpVtbl;
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, _DWORD, int, int, int, int, int, int))
       v37->lpVtbl->meth14)(v37, a1, 0, 1130889216, 1048585, 2, 5, 1, -1);
  v37->field_C = sub_10047360;
  v37->field_4 = (int(__cdecl *)(int))sub_10047250;
  v37->field_14 = (int)sub_1003E7A0;
  v37->field_3838.field_1A99C[28] = 3;
  v39 = GetStringWithIndex(0x70u);
  v38->meth13(v37, v39, 1, 1, &unk_100AB438);
  dword_10AA29C4 = (int)v37;
  ++v35->field_14;
  return 1;
}
// 100AB448: using guessed type int dword_100AB448;
// 10AA28E8: using guessed type int dword_10AA28E8;
// 10AA29C4: using guessed type int dword_10AA29C4;
