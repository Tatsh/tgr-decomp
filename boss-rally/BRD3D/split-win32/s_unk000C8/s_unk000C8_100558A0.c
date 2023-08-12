#include "types-win32.h"
//----- (100558A0) --------------------------------------------------------
int __cdecl s_unk000C8_100558A0(unk000C8 *a1) {
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
    unk1E214Vtbl *v11; // ebx
    LPCSTR v12;        // eax
    unk1E214 *v13;     // eax
    unk1E214 *v14;     // edi
    unk1E214Vtbl *v15; // ebx
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
    LPCSTR v30;        // eax
    unk1E214 *v31;     // eax
    unk1E214 *v32;     // edi
    unk1E214Vtbl *v33; // ebx
    LPCSTR v34;        // eax
    unk1E214 *v35;     // eax
    unk1E214 *v36;     // edi
    unk1E214 *v37;     // eax
    unk1E214 *v38;     // edi
    unk1E214Vtbl *v39; // ebx
    unk1E214 *v40;     // eax
    unk1E214 *v41;     // edi
    unk1E214Vtbl *v42; // ebx
    LPCSTR v43;        // eax
    unk1E214 *v44;     // eax
    unk1E214 *v45;     // edi
    unk1E214 *v46;     // eax
    unk1E214 *v47;     // edi
    unk1E214Vtbl *v48; // ebx
    unk1E214 *v49;     // eax
    unk1E214 *v50;     // edi
    unk1E214 *v51;     // eax
    unk1E214 *v52;     // edi
    WORD v53;          // ax
    unk1E214 *v54;     // eax
    unk1E214 *v55;     // edi
    unk1E214Vtbl *v56; // ebx
    float v58;         // [esp+2A8h] [ebp-34h]
    float v59;         // [esp+2A8h] [ebp-34h]
    float v60;         // [esp+2A8h] [ebp-34h]

    *(&a1->field_10 + 1) = 0;
    gGameMode = GAME_MODE_6;
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
    v8 = text_GetStringWithIndex(0x54u);
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
    v10->lpVtbl->meth14(v10, a1, v2->flags_338, v2->field_33C, 1056769, 2, 5, 1, -1);
    v10->field_C = sub_10044030;
    v10->field_8 = sub_10044010;
    v10->field_3838.field_1A99C[28] = 3;
    v12 = text_GetStringWithIndex(0x55u);
    v11->meth13(v10, v12, 1, 1, &dword_100AB448);
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
    v15 = v14->lpVtbl;
    v58 = v2->field_33C - -19.0;
    v14->lpVtbl->meth14(v14, a1, v2->flags_338, v58, 1056769, 2, 5, 1, -1);
    v14->field_C = sub_10044070;
    v14->field_8 = sub_10044050;
    v14->field_3838.field_1A99C[28] = 3;
    v16 = text_GetStringWithIndex(0x56u);
    v15->meth13(v14, v16, 1, 1, &dword_100AB448);
    ++v2->field_14;
    ++LOWORD(v2->last);
    v17 = (unk1E214 *)malloc(0x1E214u);
    if (v17)
        v18 = meth_unk1E214_init(v17);
    else
        v18 = 0;
    v2->field_18[v2->field_14] = v18;
    if (!v18)
        sub_1003E260(4);
    v19 = v18->lpVtbl;
    v59 = v2->field_33C - -38.0;
    v18->lpVtbl->meth14(v18, a1, v2->flags_338, v59, 1056769, 2, 5, 1, -1);
    v18->field_C = sub_100440B0;
    v18->field_8 = sub_10044090;
    v18->field_3838.field_1A99C[28] = 3;
    v20 = text_GetStringWithIndex(0x57u);
    v19->meth13(v18, v20, 1, 1, &dword_100AB448);
    ++v2->field_14;
    ++LOWORD(v2->last);
    v21 = (unk1E214 *)malloc(0x1E214u);
    if (v21)
        v22 = meth_unk1E214_init(v21);
    else
        v22 = 0;
    v2->field_18[v2->field_14] = v22;
    if (!v22)
        sub_1003E260(4);
    v23 = v22->lpVtbl;
    v60 = v2->field_33C - -114.0;
    v22->lpVtbl->meth14(v22, a1, v2->flags_338, v60, 1056769, 2, 5, 1, -1);
    v22->field_C = sub_10047360;
    v22->field_8 = (int(__cdecl *)())sub_100463C0;
    v22->field_3838.field_1A99C[28] = 3;
    v24 = text_GetStringWithIndex(0xCu);
    v23->meth13(v22, v24, 1, 1, &dword_100AB448);
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
    v26->lpVtbl->meth14(v26, a1, 1119748096, 317.0, 9, 2, 5, 0, 103);
    ++v2->field_14;
    v27 = (unk1E214 *)malloc(0x1E214u);
    if (v27)
        v28 = meth_unk1E214_init(v27);
    else
        v28 = 0;
    v2->field_18[v2->field_14] = v28;
    if (!v28)
        sub_1003E260(4);
    v29 = v28->lpVtbl;
    v28->lpVtbl->meth14(v28, a1, 1124204544, 336.0, 1048585, 2, 5, 1, -1);
    v28->field_3838.field_1A99C[28] = 52;
    v30 = text_GetStringWithIndex(0x59u);
    v29->meth13(v28, v30, 1, 4, &dword_100AB448);
    ++v2->field_14;
    v31 = (unk1E214 *)malloc(0x1E214u);
    if (v31)
        v32 = meth_unk1E214_init(v31);
    else
        v32 = 0;
    v2->field_18[v2->field_14] = v32;
    if (!v32)
        sub_1003E260(4);
    v33 = v32->lpVtbl;
    v32->lpVtbl->meth14(v32, a1, 1124204544, 374.0, 1048585, 2, 5, 1, -1);
    v32->field_3838.field_1A99C[28] = 3;
    v34 = text_GetStringWithIndex(0x5Au);
    v33->meth13(v32, v34, 1, 1, &dword_100AB448);
    ++v2->field_14;
    v35 = (unk1E214 *)malloc(0x1E214u);
    if (v35)
        v36 = meth_unk1E214_init(v35);
    else
        v36 = 0;
    v2->field_18[v2->field_14] = v36;
    if (!v36)
        sub_1003E260(4);
    v36->lpVtbl->meth14(v36, a1, 1125842944, 393.0, 9, 2, 5, 0, 57);
    ++v2->field_14;
    v37 = (unk1E214 *)malloc(0x1E214u);
    if (v37)
        v38 = meth_unk1E214_init(v37);
    else
        v38 = 0;
    v2->field_18[v2->field_14] = v38;
    if (!v38)
        sub_1003E260(4);
    v39 = v38->lpVtbl;
    v38->lpVtbl->meth14(v38, a1, 1125842944, 393.0, 2097153, 2, 5, 1, -1);
    v38->field_8 = (int(__cdecl *)())sub_10042AC0;
    v38->field_4 = sub_1003F050;
    v38->field_10 = (int)meth_unk1A5E0_3;
    v38->field_3838.field_1A99C[28] = 3;
    v39->meth13(v38, String2, 1, 1, &dword_100AB448);
    (*(void(__thiscall **)(char *))(*(_DWORD *)v38->vectorUnk + 4))(v38->vectorUnk);
    v38->field_50 = 155;
    *(_DWORD *)&v38->vectorUnk[1060] = 155;
    v38->field_58 = 347;
    *(_DWORD *)&v38->vectorUnk[1068] = 347;
    *(_DWORD *)v38->gap54 = 393;
    *(_DWORD *)&v38->vectorUnk[1064] = 393;
    *(_DWORD *)v38->gap5C = 409;
    *(_DWORD *)&v38->vectorUnk[1072] = 409;
    *(_WORD *)&v38->vectorUnk[1052] =
        *(_WORD *)&v38->vectorUnk[1068] - *(_WORD *)&v38->vectorUnk[1060] - 16;
    ++v2->field_14;
    ++LOWORD(v2->last);
    v40 = (unk1E214 *)malloc(0x1E214u);
    if (v40)
        v41 = meth_unk1E214_init(v40);
    else
        v41 = 0;
    v2->field_18[v2->field_14] = v41;
    if (!v41)
        sub_1003E260(4);
    v42 = v41->lpVtbl;
    v41->lpVtbl->meth14(v41, a1, 1124204544, 412.0, 1048585, 2, 5, 1, -1);
    v41->field_3838.field_1A99C[28] = 3;
    v43 = text_GetStringWithIndex(0x5Bu);
    v42->meth13(v41, v43, 1, 1, &dword_100AB448);
    ++v2->field_14;
    v44 = (unk1E214 *)malloc(0x1E214u);
    if (v44)
        v45 = meth_unk1E214_init(v44);
    else
        v45 = 0;
    v2->field_18[v2->field_14] = v45;
    if (!v45)
        sub_1003E260(4);
    v45->lpVtbl->meth14(v45, a1, 1125842944, 431.0, 9, 2, 5, 0, 57);
    ++v2->field_14;
    v46 = (unk1E214 *)malloc(0x1E214u);
    if (v46)
        v47 = meth_unk1E214_init(v46);
    else
        v47 = 0;
    v2->field_18[v2->field_14] = v47;
    if (!v47)
        sub_1003E260(4);
    v48 = v47->lpVtbl;
    v47->lpVtbl->meth14(v47, a1, 1125842944, 431.0, 2097153, 2, 5, 1, -1);
    v47->field_8 = (int(__cdecl *)())sub_10042AC0;
    v47->field_4 = sub_1003F0B0;
    v47->field_10 = (int)meth_unk1A5E0_3;
    v47->field_3838.field_1A99C[28] = 3;
    v48->meth13(v47, String2, 1, 1, &dword_100AB448);
    (*(void(__thiscall **)(char *))(*(_DWORD *)v47->vectorUnk + 4))(v47->vectorUnk);
    v47->field_50 = 155;
    *(_DWORD *)&v47->vectorUnk[1060] = 155;
    v47->field_58 = 347;
    *(_DWORD *)&v47->vectorUnk[1068] = 347;
    *(_DWORD *)v47->gap54 = 431;
    *(_DWORD *)&v47->vectorUnk[1064] = 431;
    *(_DWORD *)v47->gap5C = 447;
    *(_DWORD *)&v47->vectorUnk[1072] = 447;
    *(_WORD *)&v47->vectorUnk[1052] =
        *(_WORD *)&v47->vectorUnk[1068] - *(_WORD *)&v47->vectorUnk[1060] - 16;
    ++v2->field_14;
    ++LOWORD(v2->last);
    v49 = (unk1E214 *)malloc(0x1E214u);
    if (v49)
        v50 = meth_unk1E214_init(v49);
    else
        v50 = 0;
    v2->field_18[v2->field_14] = v50;
    if (!v50)
        sub_1003E260(4);
    v50->lpVtbl->meth14(v50, a1, 1117782016, 46.0, 9, 2, 5, 0, 7);
    ++v2->field_14;
    v51 = (unk1E214 *)malloc(0x1E214u);
    if (v51)
        v52 = meth_unk1E214_init(v51);
    else
        v52 = 0;
    v2->field_18[v2->field_14] = v52;
    if (!v52)
        sub_1003E260(4);
    v52->lpVtbl->meth14(v52, a1, 1135181824, 61.0, 1, 2, 5, 1, 69);
    v52->field_4 = sub_10040930;
    v53 = v2->field_14 + 1;
    ++v52->field_2AB4[0];
    v52->field_2AB4[1] = v53;
    ++v2->field_14;
    v54 = (unk1E214 *)malloc(0x1E214u);
    if (v54)
        v55 = meth_unk1E214_init(v54);
    else
        v55 = 0;
    v2->field_18[v2->field_14] = v55;
    if (!v55)
        sub_1003E260(4);
    v56 = v55->lpVtbl;
    v55->lpVtbl->meth14(v55, a1, v2->flags_338, 160.0, 1052673, 2, 5, 1, -1);
    v55->field_4 = sub_1003FC40;
    v55->field_3838.field_1A99C[28] = 3;
    v56->meth13(v55, asc_100AD300, 1, 1, &unk_100AB4A8);
    ++v2->field_14;
    return 1;
}
// 100AB448: using guessed type int dword_100AB448;
