#include "types-win32.h"
//----- (1004D640) --------------------------------------------------------
int __cdecl sub_1004D640(unk000C8 *a1) {
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
    unk1E214 *v12;       // eax
    unk1E214 *v13;       // edi
    unk1E214 *v14;       // eax
    unk1E214 *v15;       // edi
    int v16;             // edx
    unk1E214 *v17;       // eax
    unk1E214 *v18;       // edi
    unk1E214Vtbl *v19;   // ebx
    LPCSTR v20;          // eax
    unk1E214 *v21;       // eax
    unk1E214 *v22;       // edi
    unk1E214Vtbl *v23;   // ebx
    LPCSTR v24;          // eax
    float v26;           // [esp+FCh] [ebp-34h]
    float v27;           // [esp+FCh] [ebp-34h]

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
    v3->mask_338 = 1128464384;
    v3->field_33C = 130.0;
    v4 = (unk1E214 *)malloc(0x1E214u);
    if (v4)
        v5 = meth_unk1E214_init(v4);
    else
        v5 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v5;
    if (!v5)
        sub_1003E260(4);
    v5->lpVtbl->field_38(v5, a1, 0, 0, 9, 2, 5, 0, 0);
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
    v7->lpVtbl->field_38(v7, a1, v3->mask_338, 1092616192, 1048585, 2, 5, 1, -1);
  LOWORD(v7->?) = 3;
  v9 = GetStringWithIndex(0x2Bu);
  v8->field_34(v7, v9, 1, 1, &unk_100AB508);
  ++LOWORD(v3->field_14);
  v10 = (unk1E214 *)malloc(0x1E214u);
  if (v10)
      v11 = meth_unk1E214_init(v10);
  else
      v11 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v11;
  if (!v11)
      sub_1003E260(4);
  v11->lpVtbl->field_38(v11, a1, 1117782016, 1110966272, 9, 2, 5, 0, 9);
  ++LOWORD(v3->field_14);
  v12 = (unk1E214 *)malloc(0x1E214u);
  if (v12)
      v13 = meth_unk1E214_init(v12);
  else
      v13 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v13;
  if (!v13)
      sub_1003E260(4);
  v13->lpVtbl->field_38(v13, a1, 1119879168, 1114898432, 9, 2, 5, 0, 142);
  ++LOWORD(v3->field_14);
  v14 = (unk1E214 *)malloc(0x1E214u);
  if (v14)
      v15 = meth_unk1E214_init(v14);
  else
      v15 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v15;
  if (!v15)
      sub_1003E260(4);
  v15->lpVtbl->field_38(v15, a1, v3->mask_338, LODWORD(v3->field_33C), 12289, 2, 5, 1, -1);
  v16 = v15->field_3838;
  v15->field_4 = sub_1003ED10;
  v15->? = 1;
  (*(void(__thiscall **)(int *, int, void *, int, _DWORD, int))(v16 + 20))(
      &v15->field_3838, 262145, &unk_100AB528, 7, 0, -1);
  dword_10AA29F0 = (int)v15;
  ++LOWORD(v3->field_14);
  ++LOWORD(v3->last);
  v17 = (unk1E214 *)malloc(0x1E214u);
  if (v17)
      v18 = meth_unk1E214_init(v17);
  else
      v18 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v18;
  if (!v18)
      sub_1003E260(4);
  v19 = v18->lpVtbl;
  v26 = v3->field_33C - -95.0;
  v18->lpVtbl->field_38(v18, a1, v3->mask_338, LODWORD(v26), 1056769, 2, 5, 1, -1);
  v18->field_C = sub_10047360;
  v18->field_8 = (int(__cdecl *)())sub_1003ECB0;
  LOWORD(v18->?) = 3;
  v20 = GetStringWithIndex(0x2Cu);
  v19->field_34(v18, v20, 1, 1, &dword_100AB448);
  dword_10AA29C8 = (int)v18;
  ++LOWORD(v3->field_14);
  ++LOWORD(v3->last);
  v21 = (unk1E214 *)malloc(0x1E214u);
  if (v21)
      v22 = meth_unk1E214_init(v21);
  else
      v22 = 0;
  v3->field_18[LOWORD(v3->field_14)] = v22;
  if (!v22)
      sub_1003E260(4);
  v23 = v22->lpVtbl;
  v27 = v3->field_33C - -114.0;
  v22->lpVtbl->field_38(v22, a1, v3->mask_338, LODWORD(v27), 1056769, 2, 5, 1, -1);
  v22->field_C = sub_10047360;
  v22->field_8 = (int(__cdecl *)())sub_10046620;
  LOWORD(v22->?) = 3;
  v24 = GetStringWithIndex(0xCu);
  v23->field_34(v22, v24, 1, 1, &dword_100AB448);
  dword_10AA29C8 = (int)v22;
  ++LOWORD(v3->field_14);
  ++LOWORD(v3->last);
  return 1;
}
// 100AB448: using guessed type int dword_100AB448;
// 10AA29C8: using guessed type int dword_10AA29C8;
// 10AA29F0: using guessed type int dword_10AA29F0;
