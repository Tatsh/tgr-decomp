#include "types-win32.h"
//----- (1004D1F0) --------------------------------------------------------
int __cdecl s_unk000C8_1004D1F0(unk000C8 *a1) {
    WORD v1;           // ax
    unk00348 *v2;      // eax
    unk00348 *u348;    // esi
    unk1E214 *v4;      // eax
    unk1E214 *v5;      // edi
    unk1E214 *v6;      // eax
    unk1E214 *v7;      // edi
    unk1E214Vtbl *v8;  // ebx
    LPCSTR v9;         // eax
    unk1E214 *v10;     // eax
    unk1E214 *v11;     // edi
    unk1E214 *v12;     // eax
    unk1E214 *v13;     // edi
    unk1E214Vtbl *v14; // ebx
    LPCSTR v15;        // eax
    unk1E214 *v16;     // eax
    unk1E214 *v17;     // edi
    unk1E214Vtbl *v18; // ebx
    LPCSTR v19;        // eax
    unk1E214 *v20;     // eax
    unk1E214 *v21;     // edi
    unk1E214Vtbl *v22; // ebx
    LPCSTR v23;        // eax
    float v25;         // [esp+D8h] [ebp-34h]
    float v26;         // [esp+D8h] [ebp-34h]

    v1 = a1->field_10;
    *(&a1->field_10 + 1) = 0;
    *(&a1->field_6C + v1) = 1;
    v2 = (unk00348 *)malloc(0x348u);
    if (v2)
        u348 = meth_unk00348_10048470(v2);
    else
        u348 = 0;
    a1->field_14[a1->field_10] = u348;
    if (!u348)
        sub_1003E260(4);
    ++a1->field_10;
    u348->field_340 = a1;
    u348->field_10 = 0;
    u348->flags_338 = 1128464384;
    u348->field_33C = 130.0;
    v4 = (unk1E214 *)malloc(0x1E214u);
    if (v4)
        v5 = meth_unk1E214_init(v4);
    else
        v5 = 0;
    u348->field_18[u348->field_14] = v5;
    if (!v5)
        sub_1003E260(4);
    v5->lpVtbl->meth14(v5, a1, 0, 0.0, 9, 2, 5, 0, 0);
    ++u348->field_14;
    v6 = (unk1E214 *)malloc(0x1E214u);
    if (v6)
        v7 = meth_unk1E214_init(v6);
    else
        v7 = 0;
    u348->field_18[u348->field_14] = v7;
    if (!v7)
        sub_1003E260(4);
    v8 = v7->lpVtbl;
    v7->lpVtbl->meth14(v7, a1, u348->flags_338, 10.0, 1048585, 2, 5, 1, -1);
    v7->field_3838.field_1A99C[28] = 3;
    v9 = GetStringWithIndex(0x20u);
    v8->meth13(v7, v9, 1, 1, &unk_100AB508);
    ++u348->field_14;
    v10 = (unk1E214 *)malloc(0x1E214u);
    if (v10)
        v11 = meth_unk1E214_init(v10);
    else
        v11 = 0;
    u348->field_18[u348->field_14] = v11;
    if (!v11)
        sub_1003E260(4);
    v11->lpVtbl->meth14(v11, a1, 0x42A00000, 46.0, 9, 2, 5, 0, 9);
    ++u348->field_14;
    v12 = (unk1E214 *)malloc(0x1E214u);
    if (v12)
        v13 = meth_unk1E214_init(v12);
    else
        v13 = 0;
    u348->field_18[u348->field_14] = v13;
    if (!v13)
        sub_1003E260(4);
    v14 = v13->lpVtbl;
    v13->lpVtbl->meth14(v13, a1, u348->flags_338, u348->field_33C, 1056769, 2, 5, 1, -1);
    v13->field_C = sub_10047360;
    v13->field_8 = sub_10045460;
    v13->field_3838.field_1A99C[28] = 3;
    v15 = GetStringWithIndex(0x29u);
    v14->meth13(v13, v15, 1, 1, &dword_100AB448);
    ++u348->field_14;
    ++LOWORD(u348->last);
    v16 = (unk1E214 *)malloc(0x1E214u);
    if (v16)
        v17 = meth_unk1E214_init(v16);
    else
        v17 = 0;
    u348->field_18[u348->field_14] = v17;
    if (!v17)
        sub_1003E260(4);
    v18 = v17->lpVtbl;
    v25 = u348->field_33C - -19.0;
    v17->lpVtbl->meth14(v17, a1, u348->flags_338, v25, 1056769, 2, 5, 1, -1);
    v17->field_C = sub_10047360;
    v17->field_8 = sub_10045520;
    v17->field_3838.field_1A99C[28] = 3;
    v19 = GetStringWithIndex(0x2Au);
    v18->meth13(v17, v19, 1, 1, &dword_100AB448);
    ++u348->field_14;
    ++LOWORD(u348->last);
    v20 = (unk1E214 *)malloc(0x1E214u);
    if (v20)
        v21 = meth_unk1E214_init(v20);
    else
        v21 = 0;
    u348->field_18[u348->field_14] = v21;
    if (!v21)
        sub_1003E260(4);
    v22 = v21->lpVtbl;
    v26 = u348->field_33C - -114.0;
    v21->lpVtbl->meth14(v21, a1, u348->flags_338, v26, 1056769, 2, 5, 1, -1);
    v21->field_C = sub_10047360;
    v21->field_8 = (int(__cdecl *)())sub_100465E0;
    v21->field_3838.field_1A99C[28] = 3;
    v23 = GetStringWithIndex(0xCu);
    v22->meth13(v21, v23, 1, 1, &dword_100AB448);
    dword_10AA29C8 = (int)v21;
    ++u348->field_14;
    ++LOWORD(u348->last);
    return 1;
}
// 100AB448: using guessed type int dword_100AB448;
// 10AA29C8: using guessed type int dword_10AA29C8;
