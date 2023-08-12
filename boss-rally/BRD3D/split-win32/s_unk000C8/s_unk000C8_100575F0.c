#include "types-win32.h"
//----- (100575F0) --------------------------------------------------------
int __cdecl s_unk000C8_100575F0(unk000C8 *a1) {
    unk00348 *v1;      // eax
    unk00348 *v2;      // ebp
    unk1E214 *v3;      // eax
    unk1E214 *v4;      // edi
    unk1E214 *v5;      // eax
    unk1E214 *v6;      // edi
    unk1E214Vtbl *v7;  // ebx
    LPCSTR v8;         // eax
    unk1E214 *v9;      // eax
    unk1E214 *v10;     // edi
    unk1E214Vtbl *v11; // ebx
    LPCSTR v12;        // eax
    unk1E214 *v13;     // eax
    unk1E214 *v14;     // edi
    unk1E214 *v15;     // eax
    unk1E214 *v16;     // ebx
    unk1E214Vtbl *v17; // edi
    LPCSTR v18;        // eax
    char *v19;         // edx
    const char *v20;   // edi
    unsigned int v21;  // kr08_4
    const char *v22;   // esi
    char *v23;         // edi
    int v24;           // edx
    unk1E214 *v25;     // eax
    unk1E214 *v26;     // esi
    unk1E214Vtbl *v27; // edi
    LPCSTR v28;        // eax
    unk1E214 *v29;     // eax
    unk1E214 *v30;     // esi
    unk1E214Vtbl *v31; // edi
    LPCSTR v32;        // eax
    unk1E214 *v33;     // eax
    unk1E214 *v34;     // esi
    float v36;         // [esp+124h] [ebp-38h]
    float v37;         // [esp+124h] [ebp-38h]

    *(&a1->field_10 + 1) = 0;
    sub_100586A0();
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
    v8 = text_GetStringWithIndex(0x62u);
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
    v11 = v10->lpVtbl;
    v10->lpVtbl->meth14(v10, a1, v2->flags_338, v2->field_33C, 1048585, 2, 5, 1, -1);
    v10->field_3838.field_1A99C[28] = 52;
    v12 = text_GetStringWithIndex(0x63u);
    v11->meth13(v10, v12, 1, 4, &dword_100AB448);
    ++v2->field_14;
    ++LOWORD(v2->last);
    v13 = (unk1E214 *)malloc(0x1E214u);
    if (v13)
        v14 = meth_unk1E214_init(v13);
    else
        v14 = 0;
    v2->field_18[v2->field_14] = v14;
    if (!v14)
        sub_1003E260(4);
    v14->lpVtbl->meth14(v14, a1, 1125908480, 172.0, 9, 2, 5, 0, 57);
    ++v2->field_14;
    v15 = (unk1E214 *)malloc(0x1E214u);
    if (v15)
        v16 = meth_unk1E214_init(v15);
    else
        v16 = 0;
    v2->field_18[v2->field_14] = v16;
    if (!v16)
        sub_1003E260(4);
    v17 = v16->lpVtbl;
    v16->lpVtbl->meth14(v16, a1, v2->flags_338, 174.0, 2097153, 2, 5, 1, -1);
    v16->field_8 = (int(__cdecl *)())sub_10042B00;
    v16->field_4 = sub_1003F210;
    v16->field_10 = (int)sub_1003F280;
    v16->field_3838.field_1A99C[28] = 3;
    v17->meth13(v16, String2, 1, 1, &dword_100AB448);
    if (strlen(g_lpSessionDesc_dwUser3) > 1) {
        v19 = &v16->vectorUnk[9];
        v20 = g_lpSessionDesc_dwUser3;
    } else {
        v18 = text_GetStringWithIndex(0xC1u);
        v19 = &v16->vectorUnk[9];
        v20 = v18;
    }
    v21 = strlen(v20) + 1;
    v22 = v20;
    v23 = v19;
    v24 = *(_DWORD *)v16->vectorUnk;
    qmemcpy(v23, v22, v21);
    (*(void(__thiscall **)(char *))(v24 + 4))(v16->vectorUnk);
    v16->field_50 = 197;
    *(_DWORD *)&v16->vectorUnk[1060] = 197;
    v16->field_58 = 309;
    *(_DWORD *)&v16->vectorUnk[1068] = 309;
    *(_DWORD *)v16->gap54 = 172;
    *(_DWORD *)&v16->vectorUnk[1064] = 172;
    *(_DWORD *)v16->gap5C = 188;
    *(_DWORD *)&v16->vectorUnk[1072] = 188;
    *(_WORD *)&v16->vectorUnk[1052] =
        *(_WORD *)&v16->vectorUnk[1068] - *(_WORD *)&v16->vectorUnk[1060] - 16;
    ++v2->field_14;
    ++LOWORD(v2->last);
    v25 = (unk1E214 *)malloc(0x1E214u);
    if (v25)
        v26 = meth_unk1E214_init(v25);
    else
        v26 = 0;
    v2->field_18[v2->field_14] = v26;
    if (!v26)
        sub_1003E260(4);
    v27 = v26->lpVtbl;
    v36 = v2->field_33C - -95.0;
    v26->lpVtbl->meth14(v26, a1, v2->flags_338, v36, 1056769, 2, 5, 1, -1);
    v26->field_C = sub_10047360;
    v26->field_8 = (int(__cdecl *)())sub_100443E0;
    v26->field_3838.field_1A99C[28] = 3;
    v28 = text_GetStringWithIndex(0x1Eu);
    v27->meth13(v26, v28, 1, 1, &dword_100AB448);
    dword_10AA29BC = (int)v26;
    ++v2->field_14;
    ++LOWORD(v2->last);
    v29 = (unk1E214 *)malloc(0x1E214u);
    if (v29)
        v30 = meth_unk1E214_init(v29);
    else
        v30 = 0;
    v2->field_18[v2->field_14] = v30;
    if (!v30)
        sub_1003E260(4);
    v31 = v30->lpVtbl;
    v37 = v2->field_33C - -114.0;
    v30->lpVtbl->meth14(v30, a1, v2->flags_338, v37, 1056769, 2, 5, 1, -1);
    v30->field_C = sub_10047360;
    v30->field_8 = (int(__cdecl *)())sub_100444C0;
    v30->field_3838.field_1A99C[28] = 3;
    v32 = text_GetStringWithIndex(0xCu);
    v31->meth13(v30, v32, 1, 1, &dword_100AB448);
    ++v2->field_14;
    ++LOWORD(v2->last);
    v33 = (unk1E214 *)malloc(0x1E214u);
    if (v33)
        v34 = meth_unk1E214_init(v33);
    else
        v34 = 0;
    v2->field_18[v2->field_14] = v34;
    if (!v34)
        sub_1003E260(4);
    v34->lpVtbl->meth14(v34, a1, 1117782016, 46.0, 9, 2, 5, 0, 7);
    ++v2->field_14;
    return 1;
}
// 100AB448: using guessed type int dword_100AB448;
// 10AA29BC: using guessed type int dword_10AA29BC;
