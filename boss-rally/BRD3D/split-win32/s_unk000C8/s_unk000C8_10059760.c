#include "types-win32.h"
//----- (10059760) --------------------------------------------------------
int __cdecl s_unk000C8_10059760(unk000C8 *a1) {
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
    unk1E214 *v18;     // eax
    unk1E214 *v19;     // edi
    unk1E214Vtbl *v20; // ebx
    LPCSTR v21;        // eax
    unk1E214 *v22;     // eax
    unk1E214 *v23;     // edi
    float v25;         // [esp+D8h] [ebp-34h]
    float v26;         // [esp+D8h] [ebp-34h]

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
    v9 = text_GetStringWithIndex(0x6Au);
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
    v11->lpVtbl->meth14(v11, a1, v3->flags_338, v3->field_33C, 0x102001, 2, 5, 1, -1);
    v11->field_C = sub_10047360;
    v11->field_8 = sub_10046260;
    v11->field_3838.field_1A99C[28] = 3;
    v13 = text_GetStringWithIndex(0x6Bu);
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
    v25 = v3->field_33C - -19.0;
    v15->lpVtbl->meth14(v15, a1, v3->flags_338, v25, 0x102001, 2, 5, 1, -1);
    v15->field_C = sub_10047360;
    v15->field_8 = sub_10044D00;
    v15->field_3838.field_1A99C[28] = 3;
    v17 = text_GetStringWithIndex(0x6Cu);
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
    v26 = v3->field_33C - -114.0;
    v19->lpVtbl->meth14(v19, a1, v3->flags_338, v26, 0x102001, 2, 5, 1, -1);
    v19->field_C = sub_10047360;
    v19->field_8 = (int(__cdecl *)())sub_10044C70;
    v19->field_3838.field_1A99C[28] = 3;
    v21 = text_GetStringWithIndex(0xCu);
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
    v23->lpVtbl->meth14(v23, a1, 0x42A00000, 46.0, 9, 2, 5, 0, 8);
    ++v3->field_14;
    return 1;
}
// 100AB448: using guessed type int dword_100AB448;
