#include "types-win32.h"
//----- (1004CAC0) --------------------------------------------------------
int __cdecl sub_1004CAC0(unk000C8 *a1) {
    WORD v2;           // ax
    unk00348 *v3;      // eax
    unk00348 *v4;      // esi
    unk1E214 *v5;      // eax
    unk1E214 *v6;      // edi
    unk1E214 *v7;      // eax
    unk1E214 *v8;      // edi
    unk1E214Vtbl *v9;  // ebx
    LPCSTR v10;        // eax
    unk1E214 *v11;     // eax
    unk1E214 *v12;     // edi
    unk1A5E0Vtbl *v13; // eax
    char *v14;         // edi
    int v15;           // ebx
    LPCSTR v16;        // eax
    unk1E214 *v17;     // eax
    unk1E214 *v18;     // edi
    unk1E214Vtbl *v19; // ebx
    LPCSTR v20;        // eax
    unk1E214 *v21;     // eax
    unk1E214 *v22;     // edi
    unk1E214Vtbl *v23; // ebx
    LPCSTR v24;        // eax
    unk1E214 *v25;     // eax
    unk1E214 *v26;     // edi
    unk1E214 *v27;     // eax
    unk1E214 *v28;     // edi
    unk1E214Vtbl *v29; // ebx
    unk1E214 *v30;     // eax
    unk1E214 *v31;     // edi
    WORD v32;          // cx
    unk1E214 *v33;     // eax
    unk1E214 *v34;     // edi
    unk1E214Vtbl *v35; // ebx
    LPCSTR v36;        // eax
    unk1E214 *v37;     // eax
    unk1E214 *v38;     // edi
    unk1E214Vtbl *v39; // ebx
    float v41;         // [esp+19Ch] [ebp-38h]
    float v42;         // [esp+19Ch] [ebp-38h]
    unk1A5E0Vtbl *v43; // [esp+1C4h] [ebp-10h]
    unk000C8 *v44;     // [esp+1D8h] [ebp+4h]

    v2 = a1->field_10;
    *(&a1->field_10 + 1) = 0;
    *(&a1->field_6C + v2) = 1;
    v3 = (unk00348 *)malloc(0x348u);
    if (v3)
        v4 = meth_10048470(v3);
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
         v6->lpVtbl->field_38)(v6, a1, 0, 0, 9, 2, 5, 0, 0);
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
         v8->lpVtbl->field_38)(v8, a1, v4->flags_338, 1092616192, 1048585, 2, 5, 1, -1);
    v8->field_3838.field_1A99C[28] = 3;
    v10 = GetStringWithIndex(0x26u);
    v9->field_34(v8, v10, 1, 1, &unk_100AB508);
    ++v4->field_14;
    v11 = (unk1E214 *)malloc(0x1E214u);
    if (v11)
        v12 = meth_unk1E214_init(v11);
    else
        v12 = 0;
    v4->field_18[v4->field_14] = v12;
    if (!v12)
        sub_1003E260(4);
    ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, _DWORD, int, int, int, int, int))
         v12->lpVtbl->field_38)(v12, a1, v4->flags_338, LODWORD(v4->field_33C), 12289, 2, 5, 1, -1);
    v13 = v12->field_3838.lpVtbl;
    v12->field_4 = sub_1003EC80;
    *(_DWORD *)&v12->field_3838.field_1A99C[16] = 1;
    v44 = (unk000C8 *)&v12->field_3838;
    v43 = v13;
    ((void(__stdcall *)(int, int *, int, _DWORD, int))v13->field_14)(
        262145, dword_100AB4D8, 5, 0, -1);
    v14 = aE_0;
    do {
        v15 = 0;
        if (dword_10AA2A0C == 3 && (v14 == aE_0 || v14 == (char *)&unk_100AB338)) {
            v15 = 16;
            dword_10AA2840 = 2;
        }
        if (GetStringWithIndex(*(_DWORD *)v14)) {
            v16 = GetStringWithIndex(*(_DWORD *)v14);
            v43->field_10((unk1A5E0 *)v44, (char *)v16, v15, 1, (int)dword_100AB4D8, 0);
        }
        v14 += 8;
    } while ((int)v14 < (int)&dword_100AB3D8);
    ++v4->field_14;
    ++LOWORD(v4->last);
    v17 = (unk1E214 *)malloc(0x1E214u);
    if (v17)
        v18 = meth_unk1E214_init(v17);
    else
        v18 = 0;
    v4->field_18[v4->field_14] = v18;
    if (!v18)
        sub_1003E260(4);
    v19 = v18->lpVtbl;
    v41 = v4->field_33C - -95.0;
    ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, _DWORD, int, int, int, int, int))
         v18->lpVtbl->field_38)(v18, a1, v4->flags_338, LODWORD(v41), 1056769, 2, 5, 1, -1);
    v18->field_C = sub_10047360;
    v18->field_8 = sub_10040680;
    v18->field_18 = (int)sub_10040450;
    v18->field_3838.field_1A99C[28] = 3;
    v20 = GetStringWithIndex(0x27u);
    v19->field_34(v18, v20, 1, 1, &dword_100AB448);
    ++v4->field_14;
    ++LOWORD(v4->last);
    v21 = (unk1E214 *)malloc(0x1E214u);
    if (v21)
        v22 = meth_unk1E214_init(v21);
    else
        v22 = 0;
    v4->field_18[v4->field_14] = v22;
    if (!v22)
        sub_1003E260(4);
    v23 = v22->lpVtbl;
    v42 = v4->field_33C - -114.0;
    ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, _DWORD, int, int, int, int, int))
         v22->lpVtbl->field_38)(v22, a1, v4->flags_338, LODWORD(v42), 1056769, 2, 5, 1, -1);
    v22->field_C = sub_10047360;
    v22->field_8 = (int(__cdecl *)())sub_10046560;
    v22->field_3838.field_1A99C[28] = 3;
    v24 = GetStringWithIndex(0xCu);
    v23->field_34(v22, v24, 1, 1, &dword_100AB448);
    dword_10AA29C8 = (int)v22;
    ++v4->field_14;
    ++LOWORD(v4->last);
    v25 = (unk1E214 *)malloc(0x1E214u);
    if (v25)
        v26 = meth_unk1E214_init(v25);
    else
        v26 = 0;
    v4->field_18[v4->field_14] = v26;
    if (!v26)
        sub_1003E260(4);
    ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, _DWORD, int))
         v26->lpVtbl->field_38)(v26, a1, 1117782016, 1110966272, 9, 2, 5, 0, 9);
    ++v4->field_14;
    v27 = (unk1E214 *)malloc(0x1E214u);
    if (v27)
        v28 = meth_unk1E214_init(v27);
    else
        v28 = 0;
    v4->field_18[v4->field_14] = v28;
    if (!v28)
        sub_1003E260(4);
    v29 = v28->lpVtbl;
    ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, int, int))
         v28->lpVtbl->field_38)(v28, a1, v4->flags_338, 1124532224, 1052673, 2, 5, 1, -1);
    v28->field_4 = sub_1003F8D0;
    v28->field_3838.field_1A99C[28] = 3;
    v29->field_34(v28, asc_100AD300, 1, 1, &unk_100AB488);
    ++v4->field_14;
    v30 = (unk1E214 *)malloc(0x1E214u);
    if (v30)
        v31 = meth_unk1E214_init(v30);
    else
        v31 = 0;
    v4->field_18[v4->field_14] = v31;
    if (!v31)
        sub_1003E260(4);
    ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, int, int))
         v31->lpVtbl->field_38)(v31, a1, 1134690304, 1110966272, 1, 2, 5, 1, 22);
    v31->field_4 = sub_10041870;
    v32 = v4->field_14 + 1;
    ++v31->field_2AB4[0];
    v31->field_2AB4[1] = v32;
    ++v4->field_14;
    v33 = (unk1E214 *)malloc(0x1E214u);
    if (v33)
        v34 = meth_unk1E214_init(v33);
    else
        v34 = 0;
    v4->field_18[v4->field_14] = v34;
    if (!v34)
        sub_1003E260(4);
    v35 = v34->lpVtbl;
    ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, int, int))
         v34->lpVtbl->field_38)(v34, a1, v4->flags_338, 1125842944, 1048577, 2, 5, 1, -1);
    v34->field_3838.field_1A99C[28] = 3;
    v36 = GetStringWithIndex(0x28u);
    v35->field_34(v34, v36, 1, 1, &unk_100AB4C8);
    ++v4->field_14;
    v37 = (unk1E214 *)malloc(0x1E214u);
    if (v37)
        v38 = meth_unk1E214_init(v37);
    else
        v38 = 0;
    v4->field_18[v4->field_14] = v38;
    if (!v38)
        sub_1003E260(4);
    v39 = v38->lpVtbl;
    ((void(__thiscall *)(unk1E214 *, unk000C8 *, int, int, int, int, int, int, int))
         v38->lpVtbl->field_38)(v38, a1, v4->flags_338, 1120403456, 1052673, 2, 5, 1, -1);
    v38->field_4 = sub_100400E0;
    v38->field_3838.field_1A99C[28] = 3;
    v39->field_34(v38, asc_100AD300, 1, 1, &unk_100AB4C8);
    ++v4->field_14;
    dword_10AA2850 = sub_10040330(dword_100AC520[dword_10AA2A0C]);
    return 1;
}
// 100AB3D8: using guessed type int dword_100AB3D8;
// 100AB448: using guessed type int dword_100AB448;
// 10AA2840: using guessed type int dword_10AA2840;
// 10AA2850: using guessed type int dword_10AA2850;
// 10AA29C8: using guessed type int dword_10AA29C8;
// 10AA2A0C: using guessed type int dword_10AA2A0C;
