#include "types-win32.h"
//----- (10049C20) --------------------------------------------------------
int __cdecl s_unk000C8_10049C20(unk000C8 *a1) {
  WORD v1;           // ax
  unk00348 *v2;      // eax
  unk00348 *v3;      // esi
  unk1E214 *v4;      // eax
  unk1E214 *v5;      // edi
  unk1E214 *v6;      // eax
  unk1E214 *v7;      // edi
  unk1E214Vtbl *v8;  // ebx
  LPCSTR v9;         // eax
  unk1E214 *v10;     // eax
  unk1E214 *v11;     // edi
  unk1E214Vtbl *v12; // ebx
  LPCSTR v13;        // eax
  unk1E214 *v14;     // eax
  unk1E214 *v15;     // edi
  unk1E214Vtbl *v16; // ebx
  LPCSTR v17;        // eax
  float v19;         // [esp+88h] [ebp-34h]

  v1 = a1->field_10;
  *(&a1->field_10 + 1) = 0;
  *(&a1->field_6C + v1) = 1;
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
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))
       v5->lpVtbl->meth14)(v5, a1, 0, 0, 9, 2, 5, 0, 0);
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
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, int, int))
       v7->lpVtbl->meth14)(v7, a1, v3->flags_338, 1092616192, 1048585, 2, 5, 1, -1);
  v7->field_3838.field_1A99C[28] = 3;
  v9 = GetStringWithIndex(0xEu);
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
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, _DWORD, int, int, int, int, int))
       v11->lpVtbl->meth14)(v11, a1, v3->flags_338, LODWORD(v3->field_33C), 1056769, 2, 5, 1, -1);
  v11->field_C = sub_10047360;
  v11->field_8 = (int(__cdecl *)())sub_10043710;
  v11->field_3838.field_1A99C[28] = 3;
  v13 = GetStringWithIndex(0xFu);
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
  v19 = v3->field_33C - -114.0;
  ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, _DWORD, int, int, int, int, int))
       v15->lpVtbl->meth14)(v15, a1, v3->flags_338, LODWORD(v19), 1056769, 2, 5, 1, -1);
  v15->field_C = sub_10047360;
  v15->field_8 = (int(__cdecl *)())sub_100464A0;
  v15->field_3838.field_1A99C[28] = 3;
  v17 = GetStringWithIndex(0xCu);
  v16->meth13(v15, v17, 1, 1, &dword_100AB448);
  ++v3->field_14;
  ++LOWORD(v3->last);
  return 1;
}
// 100AB448: using guessed type int dword_100AB448;
