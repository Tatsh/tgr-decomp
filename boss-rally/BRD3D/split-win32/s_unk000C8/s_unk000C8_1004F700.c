#include "types-win32.h"
//----- (1004F700) --------------------------------------------------------
int __cdecl s_unk000C8_1004F700(unk000C8 *a1) {
  unk00348 *v2;      // eax
  unk00348 *v3;      // esi
  unk1E214 *v4;      // eax
  unk1E214 *v5;      // ebp
  unk1E214 *v6;      // eax
  unk1E214 *v7;      // ebp
  unk1E214Vtbl *v8;  // ebx
  LPCSTR v9;         // eax
  unk1E214 *v10;     // eax
  unk1E214 *v11;     // ebp
  unk1A5E0Vtbl *v12; // eax
  unk1A5E0 *v13;     // ebx
  int i;             // ebp
  unk1E214 *v15;     // eax
  unk1E214 *v16;     // ebp
  unk1E214Vtbl *v17; // ebx
  LPCSTR v18;        // eax
  FILE *v19;         // eax
  unk1E214 *v20;     // eax
  unk1E214 *v21;     // ebp
  unk1E214Vtbl *v22; // ebx
  LPCSTR v23;        // eax
  unk1E214 *v24;     // eax
  unk1E214 *v25;     // ebp
  unk1E214Vtbl *v26; // ebx
  LPCSTR v27;        // eax
  unk1E214 *v28;     // eax
  unk1E214 *v29;     // ebp
  unk1E214 *v30;     // eax
  unk1E214 *v31;     // ebp
  unk1E214Vtbl *v32; // ebx
  LPCSTR v33;        // eax
  unk1E214 *v34;     // eax
  unk1E214 *v35;     // ebp
  unk1E214Vtbl *v36; // ebx
  unk1E214 *v37;     // eax
  unk1E214 *v38;     // ebp
  unk1E214Vtbl *v39; // ebx
  LPCSTR v40;        // eax
  unk1E214 *v41;     // eax
  unk1E214 *v42;     // ebp
  unk1E214Vtbl *v43; // ebx
  unk1E214 *v44;     // eax
  unk1E214 *v45;     // ebp
  unk1E214Vtbl *v46; // ebx
  LPCSTR v47;        // eax
  unk1E214 *v48;     // eax
  unk1E214 *v49;     // ebp
  unk1E214Vtbl *v50; // ebx
  float v52;         // [esp+240h] [ebp-38h]
  float v53;         // [esp+240h] [ebp-38h]
  float v54;         // [esp+240h] [ebp-38h]
  int v55;           // [esp+250h] [ebp-28h]
  int v56;           // [esp+27Ch] [ebp+4h]

  *(&a1->field_10 + 1) = 0;
  Value = -1;
  dword_10AA2848 = 1;
  gUnkC8Ptr6->field_C0->lpVtbl->meth1(gUnkC8Ptr6->field_C0, aRallyseasonBrf);
  dword_10AA2848 = 0;
  *(&a1->field_6C + a1->field_10) = 1;
  v2 = (unk00348 *)malloc(0x348u);
  if (v2)
    v3 = meth_unk00348_10048470(v2);
  else
    v3 = 0;
  a1->field_14[a1->field_10] = v3;
  if (!v3)
    sub_1003E260(4);
  ++a1->field_10;
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
  v7->lpVtbl->meth14(v7, a1, v3->flags_338, 10.0, 0x100009, 2, 5, 1, -1);
  v7->field_3838.field_1A99C[28] = 3;
  v9 = GetStringWithIndex(0x34u);
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
  v11->lpVtbl->meth14(v11, a1, v3->flags_338, v3->field_33C, 0x3001, 2, 5, 1, -1);
  v12 = v11->field_3838.lpVtbl;
  v13 = &v11->field_3838;
  v11->field_4 = sub_1003EAE0;
  *(_DWORD *)&v11->field_3838.field_1A99C[16] = 1;
  v12->meth5(&v11->field_3838, 262145, dword_100AB538, 4, 0, -1);
  v11->field_3838.field_4[0] = (DWORD)sub_10042170;
  for (i = 0; i < 0x6590; i += 0x104) {
    if ((unk06594 *)((char *)gUnkC8Ptr6->field_C0 + i) != (unk06594 *)-4)
      v13->lpVtbl->meth4(v13, (char *)&gUnkC8Ptr6->field_C0->field_4 + i, 0, 1, dword_100AB4D8, 1);
  }
  ++v3->field_14;
  ++LOWORD(v3->last);
  v15 = (unk1E214 *)malloc(0x1E214u);
  if (v15)
    v16 = meth_unk1E214_init(v15);
  else
    v16 = 0;
  v3->field_18[v3->field_14] = v16;
  if (!v16)
    sub_1003E260(4);
  v17 = v16->lpVtbl;
  v52 = v3->field_33C - -76.0;
  v16->lpVtbl->meth14(v16, a1, v3->flags_338, v52, 0x103011, 2, 5, 1, -1);
  v16->field_C = sub_10047360;
  v16->field_8 = sub_10045090;
  v16->field_4 = sub_10041890;
  v16->field_3838.field_1A99C[28] = 2;
  v18 = GetStringWithIndex(0x1Eu);
  v17->meth13(v16, v18, 1, 0, &dword_100AB448);
  ++v3->field_14;
  ++LOWORD(v3->last);
  v56 = 1;
  v19 = fopen(aAutosaveBrf, Mode);
  if (v19)
    fclose(v19);
  else
    v56 = 0;
  v20 = (unk1E214 *)malloc(0x1E214u);
  if (v20)
    v21 = meth_unk1E214_init(v20);
  else
    v21 = 0;
  v3->field_18[v3->field_14] = v21;
  if (!v21)
    sub_1003E260(4);
  v22 = v21->lpVtbl;
  v53 = v3->field_33C - -95.0;
  v21->lpVtbl->meth14(v21, a1, v3->flags_338, v53, v56 != 0 ? 1056769 : 1056785, 2, 5, 1, -1);
  v21->field_C = sub_10047360;
  v21->field_8 = sub_100450C0;
  if (v56) {
    v21->field_3838.field_1A99C[28] = 3;
    v55 = 1;
  } else {
    v21->field_3838.field_1A99C[28] = 2;
    v55 = 0;
  }
  v23 = GetStringWithIndex(0x35u);
  v22->meth13(v21, v23, 1, v55, &dword_100AB448);
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
  v26 = v25->lpVtbl;
  v54 = v3->field_33C - -114.0;
  v25->lpVtbl->meth14(v25, a1, v3->flags_338, v54, 0x102001, 2, 5, 1, -1);
  v25->field_C = sub_10047360;
  v25->field_8 = (int(__cdecl *)())sub_10046E10;
  v25->field_3838.field_1A99C[28] = 3;
  v27 = GetStringWithIndex(0xCu);
  v26->meth13(v25, v27, 1, 1, &dword_100AB448);
  ++v3->field_14;
  ++LOWORD(v3->last);
  v28 = (unk1E214 *)malloc(0x1E214u);
  if (v28)
    v29 = meth_unk1E214_init(v28);
  else
    v29 = 0;
  v3->field_18[v3->field_14] = v29;
  if (!v29)
    sub_1003E260(4);
  v29->lpVtbl->meth14(v29, a1, 0x42A00000, 46.0, 9, 2, 5, 0, 6);
  ++v3->field_14;
  v30 = (unk1E214 *)malloc(0x1E214u);
  if (v30)
    v31 = meth_unk1E214_init(v30);
  else
    v31 = 0;
  v3->field_18[v3->field_14] = v31;
  if (!v31)
    sub_1003E260(4);
  v32 = v31->lpVtbl;
  v31->lpVtbl->meth14(v31, a1, 0x43A50000, 153.0, 0x100009, 2, 5, 1, -1);
  v31->field_3838.field_1A99C[28] = 3;
  v33 = GetStringWithIndex(0x36u);
  v32->meth13(v31, v33, 1, 1, &unk_100AB468);
  ++v3->field_14;
  v34 = (unk1E214 *)malloc(0x1E214u);
  if (v34)
    v35 = meth_unk1E214_init(v34);
  else
    v35 = 0;
  v3->field_18[v3->field_14] = v35;
  if (!v35)
    sub_1003E260(4);
  v36 = v35->lpVtbl;
  v35->lpVtbl->meth14(v35, a1, 0x43A50000, 97.0, 0x5001, 2, 5, 1, -1);
  v35->field_4 = sub_10040A50;
  v35->field_3838.field_1A99C[28] = 5;
  v36->meth13(v35, String2, 1, 3, &unk_100AB468);
  ++v3->field_14;
  v37 = (unk1E214 *)malloc(0x1E214u);
  if (v37)
    v38 = meth_unk1E214_init(v37);
  else
    v38 = 0;
  v3->field_18[v3->field_14] = v38;
  if (!v38)
    sub_1003E260(4);
  v39 = v38->lpVtbl;
  v38->lpVtbl->meth14(v38, a1, 1138491392, 181.0, 1048585, 2, 5, 1, -1);
  v38->field_3838.field_1A99C[28] = 3;
  v40 = GetStringWithIndex(0x37u);
  v39->meth13(v38, v40, 1, 1, &unk_100AB488);
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
  v42->lpVtbl->meth14(v42, a1, 1138491392, 129.0, 20481, 2, 5, 1, -1);
  v42->field_4 = sub_10040AC0;
  v42->field_3838.field_1A99C[28] = 5;
  v43->meth13(v42, String2, 1, 3, &unk_100AB488);
  ++v3->field_14;
  v44 = (unk1E214 *)malloc(0x1E214u);
  if (v44)
    v45 = meth_unk1E214_init(v44);
  else
    v45 = 0;
  v3->field_18[v3->field_14] = v45;
  if (!v45)
    sub_1003E260(4);
  v46 = v45->lpVtbl;
  v45->lpVtbl->meth14(v45, a1, 1138491392, 243.0, 1048585, 2, 5, 1, -1);
  v45->field_3838.field_1A99C[28] = 3;
  v47 = GetStringWithIndex(0x38u);
  v46->meth13(v45, v47, 1, 1, &unk_100AB478);
  ++v3->field_14;
  v48 = (unk1E214 *)malloc(0x1E214u);
  if (v48)
    v49 = meth_unk1E214_init(v48);
  else
    v49 = 0;
  v3->field_18[v3->field_14] = v49;
  if (!v49)
    sub_1003E260(4);
  v50 = v49->lpVtbl;
  v49->lpVtbl->meth14(v49, a1, 1138491392, 224.0, 20481, 2, 5, 1, -1);
  v49->field_4 = sub_10041300;
  v49->field_3838.field_1A99C[28] = 0x34;
  v50->meth13(v49, String2, 1, 4, &unk_100AB478);
  ++v3->field_14;
  return 1;
}
// 10041300: using guessed type int __cdecl sub_10041300(int);
// 100AB448: using guessed type int dword_100AB448;
// 10AA2848: using guessed type int dword_10AA2848;
