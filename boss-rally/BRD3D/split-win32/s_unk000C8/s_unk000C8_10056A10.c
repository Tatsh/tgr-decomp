#include "types-win32.h"
//----- (10056A10) --------------------------------------------------------
int __cdecl s_unk000C8_10056A10(unk000C8 *a1) {
    WORD v1;           // ax
    unk00348 *v2;      // eax
    unk00348 *v3;      // ebp
    unk1E214 *v4;      // eax
    unk1E214 *v5;      // ebx
    unk1E214 *v6;      // eax
    unk1E214 *v7;      // ebx
    unk1E214Vtbl *v8;  // esi
    LPCSTR v9;         // eax
    unk1E214 *v10;     // eax
    unk1E214 *v11;     // ebx
    unk1E214Vtbl *v12; // esi
    LPCSTR v13;        // eax
    unk1E214 *v14;     // eax
    unk1E214 *v15;     // ebx
    unk1E214 *v16;     // eax
    unk1E214 *v17;     // ebx
    unk1E214Vtbl *v18; // esi
    int v19;           // edx
    unk1E214 *v20;     // eax
    unk1E214 *v21;     // esi
    unk1E214Vtbl *v22; // edi
    LPCSTR v23;        // eax
    unk1E214 *v24;     // eax
    unk1E214 *v25;     // esi
    unk1E214Vtbl *v26; // edi
    LPCSTR v27;        // eax
    unk1E214 *v28;     // eax
    unk1E214 *v29;     // esi
    float v31;         // [esp+124h] [ebp-38h]
    float v32;         // [esp+124h] [ebp-38h]

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
    v3->flags_338 = 1128136704;
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
    v9 = text_GetStringWithIndex(0x5Du);
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
    v11->lpVtbl->meth14(v11, a1, v3->flags_338, v3->field_33C, 1048585, 2, 5, 1, -1);
    v11->field_3838.field_1A99C[28] = 52;
    v13 = text_GetStringWithIndex(0x5Eu);
    v12->meth13(v11, v13, 1, 4, &dword_100AB448);
    ++v3->field_14;
    v14 = (unk1E214 *)malloc(0x1E214u);
    if (v14)
        v15 = meth_unk1E214_init(v14);
    else
        v15 = 0;
    v3->field_18[v3->field_14] = v15;
    if (!v15)
        sub_1003E260(4);
    v15->lpVtbl->meth14(v15, a1, 1125908480, 172.0, 9, 2, 5, 0, 57);
    ++v3->field_14;
    v16 = (unk1E214 *)malloc(0x1E214u);
    if (v16)
        v17 = meth_unk1E214_init(v16);
    else
        v17 = 0;
    v3->field_18[v3->field_14] = v17;
    if (!v17)
        sub_1003E260(4);
    v18 = v17->lpVtbl;
    v17->lpVtbl->meth14(v17, a1, v3->flags_338, 174.0, 2097153, 2, 5, 1, -1);
    v17->field_8 = (int(__cdecl *)())sub_10042AC0;
    v17->field_4 = sub_1003EF90;
    v17->field_10 = (int)sub_1003F020;
    v17->field_3838.field_1A99C[28] = 3;
    v18->meth13(v17, String2, 1, 1, &dword_100AB448);
    v19 = *(_DWORD *)v17->vectorUnk;
    strcpy(&v17->vectorUnk[9], String1);
    (*(void(__thiscall **)(char *))(v19 + 4))(v17->vectorUnk);
    v17->field_50 = 155;
    *(_DWORD *)&v17->vectorUnk[1060] = 155;
    v17->field_58 = 347;
    *(_DWORD *)&v17->vectorUnk[1068] = 347;
    *(_DWORD *)v17->gap54 = 172;
    *(_DWORD *)&v17->vectorUnk[1064] = 172;
    *(_DWORD *)v17->gap5C = 188;
    *(_DWORD *)&v17->vectorUnk[1072] = 188;
    *(_WORD *)&v17->vectorUnk[1052] =
        *(_WORD *)&v17->vectorUnk[1068] - *(_WORD *)&v17->vectorUnk[1060] - 16;
    ++v3->field_14;
    ++LOWORD(v3->last);
    v20 = (unk1E214 *)malloc(0x1E214u);
    if (v20)
        v21 = meth_unk1E214_init(v20);
    else
        v21 = 0;
    v3->field_18[v3->field_14] = v21;
    if (!v21)
        sub_1003E260(4);
    v22 = v21->lpVtbl;
    v31 = v3->field_33C - -95.0;
    v21->lpVtbl->meth14(v21, a1, v3->flags_338, v31, 1056785, 2, 5, 1, -1);
    v21->field_C = sub_10047360;
    v21->field_8 = (int(__cdecl *)())sub_10043F50;
    v21->field_3838.field_1A99C[28] = 2;
    v23 = text_GetStringWithIndex(0x1Eu);
    v22->meth13(v21, v23, 1, 0, &dword_100AB448);
    dword_10AA29E8 = (int)v21;
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
    v32 = v3->field_33C - -114.0;
    v25->lpVtbl->meth14(v25, a1, v3->flags_338, v32, 1056769, 2, 5, 1, -1);
    v25->field_C = sub_10047360;
    v25->field_8 = (int(__cdecl *)())sub_10044B40;
    v25->field_3838.field_1A99C[28] = 3;
    v27 = text_GetStringWithIndex(0xCu);
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
    v29->lpVtbl->meth14(v29, a1, 1117782016, 46.0, 9, 2, 5, 0, 7);
    ++v3->field_14;
    return 1;
}
// 100AB448: using guessed type int dword_100AB448;
// 10AA29E8: using guessed type int dword_10AA29E8;
