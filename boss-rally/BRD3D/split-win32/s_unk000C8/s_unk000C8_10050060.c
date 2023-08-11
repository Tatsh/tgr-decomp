#include "types-win32.h"
//----- (10050060) --------------------------------------------------------
int __cdecl s_unk000C8_10050060(unk000C8 *a1) {
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
    LPCSTR v21;        // eax
    unk1E214 *v22;     // eax
    unk1E214 *v23;     // ebp
    unk1E214 *v24;     // eax
    unk1E214 *v25;     // ebp
    unk1E214Vtbl *v26; // ebx
    LPCSTR v27;        // eax
    unk1E214 *v28;     // eax
    unk1E214 *v29;     // ebp
    unk1E214Vtbl *v30; // ebx
    unk1E214 *v31;     // eax
    unk1E214 *v32;     // ebp
    unk1E214Vtbl *v33; // ebx
    LPCSTR v34;        // eax
    unk1E214 *v35;     // eax
    unk1E214 *v36;     // ebp
    unk1E214Vtbl *v37; // ebx
    unk1E214 *v38;     // eax
    unk1E214 *v39;     // ebp
    unk1E214Vtbl *v40; // ebx
    LPCSTR v41;        // eax
    unk1E214 *v42;     // eax
    unk1E214 *v43;     // ebp
    unk1E214Vtbl *v44; // ebx
    unk00348 *v45;     // eax
    unk00348 *v46;     // ebp
    unk1E214 *v47;     // eax
    unk1E214 *v48;     // esi
    unk1E214Vtbl *v49; // ebx
    LPCSTR v50;        // eax
    float v52;         // [esp+244h] [ebp-34h]
    float v53;         // [esp+244h] [ebp-34h]

    dword_10AA2848 = 1;
    gUnkC8Ptr6->field_C0->lpVtbl->meth1(gUnkC8Ptr6->field_C0, aRallyseasonBrf);
    dword_10AA2848 = 0;
    *(&a1->field_10 + 1) = 0;
    Value = -1;
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
    v8 = GetStringWithIndex(0x39u);
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
    v10->lpVtbl->meth14(v10, a1, v2->flags_338, v2->field_33C, 12289, 2, 5, 1, -1);
    v11 = v10->field_3838.lpVtbl;
    v12 = &v10->field_3838;
    v10->field_4 = sub_1003EB10;
    *(_DWORD *)&v10->field_3838.field_1A99C[16] = 1;
    v11->meth5(&v10->field_3838, 262145, dword_100AB4D8, 5, 0, -1);
    v10->field_3838.field_4[0] = (DWORD)sub_10042020;
    v10->field_3838.field_4[4] = (DWORD)sub_10041DF0;
    for (i = 0; i < 26000; i += 260) {
        if ((unk06594 *)((char *)gUnkC8Ptr6->field_C0 + i) != (unk06594 *)-4)
            v12->lpVtbl->meth4(
                v12, (char *)&gUnkC8Ptr6->field_C0->field_4 + i, 0, 1, dword_100AB4D8, 0);
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
    v52 = v2->field_33C - -95.0;
    v15->lpVtbl->meth14(v15, a1, v2->flags_338, v52, 1060881, 2, 5, 1, -1);
    v15->field_C = sub_10047360;
    v15->field_8 = (int(__cdecl *)())sub_100450F0;
    v15->field_4 = sub_100418D0;
    v15->field_3838.field_1A99C[28] = 2;
    v17 = GetStringWithIndex(0x1Eu);
    v16->meth13(v15, v17, 1, 0, &dword_100AB448);
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
    v53 = v2->field_33C - -114.0;
    v19->lpVtbl->meth14(v19, a1, v2->flags_338, v53, 1056769, 2, 5, 1, -1);
    v19->field_C = sub_10047360;
    v19->field_8 = (int(__cdecl *)())sub_10046EB0;
    v19->field_3838.field_1A99C[28] = 3;
    v21 = GetStringWithIndex(0xCu);
    v20->meth13(v19, v21, 1, 1, &dword_100AB448);
    dword_10AA29F4 = (int)v19;
    ++v2->field_14;
    ++LOWORD(v2->last);
    v22 = (unk1E214 *)malloc(0x1E214u);
    if (v22)
        v23 = meth_unk1E214_init(v22);
    else
        v23 = 0;
    v2->field_18[v2->field_14] = v23;
    if (!v23)
        sub_1003E260(4);
    v23->lpVtbl->meth14(v23, a1, 1117782016, 46.0, 9, 2, 5, 0, 6);
    ++v2->field_14;
    v24 = (unk1E214 *)malloc(0x1E214u);
    if (v24)
        v25 = meth_unk1E214_init(v24);
    else
        v25 = 0;
    v2->field_18[v2->field_14] = v25;
    if (!v25)
        sub_1003E260(4);
    v26 = v25->lpVtbl;
    v25->lpVtbl->meth14(v25, a1, 1134886912, 153.0, 1048585, 2, 5, 1, -1);
    v25->field_3838.field_1A99C[28] = 3;
    v27 = GetStringWithIndex(0x36u);
    v26->meth13(v25, v27, 1, 1, &unk_100AB468);
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
    v29->lpVtbl->meth14(v29, a1, 1134886912, 97.0, 20481, 2, 5, 1, -1);
    v29->field_4 = sub_10040A50;
    v29->field_3838.field_1A99C[28] = 5;
    v30->meth13(v29, String2, 1, 3, &unk_100AB468);
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
    v32->lpVtbl->meth14(v32, a1, 1138491392, 181.0, 1048585, 2, 5, 1, -1);
    v32->field_3838.field_1A99C[28] = 3;
    v34 = GetStringWithIndex(0x37u);
    v33->meth13(v32, v34, 1, 1, &unk_100AB488);
    ++v2->field_14;
    v35 = (unk1E214 *)malloc(0x1E214u);
    if (v35)
        v36 = meth_unk1E214_init(v35);
    else
        v36 = 0;
    v2->field_18[v2->field_14] = v36;
    if (!v36)
        sub_1003E260(4);
    v37 = v36->lpVtbl;
    v36->lpVtbl->meth14(v36, a1, 1138491392, 129.0, 20481, 2, 5, 1, -1);
    v36->field_4 = sub_10040AC0;
    v36->field_3838.field_1A99C[28] = 5;
    v37->meth13(v36, String2, 1, 3, &unk_100AB488);
    ++v2->field_14;
    v38 = (unk1E214 *)malloc(0x1E214u);
    if (v38)
        v39 = meth_unk1E214_init(v38);
    else
        v39 = 0;
    v2->field_18[v2->field_14] = v39;
    if (!v39)
        sub_1003E260(4);
    v40 = v39->lpVtbl;
    v39->lpVtbl->meth14(v39, a1, 1138491392, 243.0, 1048585, 2, 5, 1, -1);
    v39->field_3838.field_1A99C[28] = 3;
    v41 = GetStringWithIndex(0x38u);
    v40->meth13(v39, v41, 1, 1, &unk_100AB478);
    ++v2->field_14;
    v42 = (unk1E214 *)malloc(0x1E214u);
    if (v42)
        v43 = meth_unk1E214_init(v42);
    else
        v43 = 0;
    v2->field_18[v2->field_14] = v43;
    if (!v43)
        sub_1003E260(4);
    v44 = v43->lpVtbl;
    v43->lpVtbl->meth14(v43, a1, 1138491392, 224.0, 20481, 2, 5, 1, -1);
    v43->field_4 = sub_10041300;
    v43->field_3838.field_1A99C[28] = 52;
    v44->meth13(v43, String2, 1, 4, &unk_100AB478);
    ++v2->field_14;
    *(&a1->field_6C + a1->field_10) = 0;
    v45 = (unk00348 *)malloc(0x348u);
    if (v45)
        v46 = meth_unk00348_10048470(v45);
    else
        v46 = 0;
    a1->field_14[a1->field_10] = v46;
    if (!v46)
        sub_1003E260(4);
    ++a1->field_10;
    v46->field_340 = a1;
    v46->field_10 = 0;
    v46->flags_338 = 1128464384;
    v46->field_33C = 130.0;
    v47 = (unk1E214 *)malloc(0x1E214u);
    if (v47)
        v48 = meth_unk1E214_init(v47);
    else
        v48 = 0;
    v46->field_18[v46->field_14] = v48;
    if (!v48)
        sub_1003E260(4);
    v49 = v48->lpVtbl;
    v48->lpVtbl->meth14(v48, a1, 0, 232.0, 1048585, 2, 5, 1, -1);
    v48->field_C = sub_10047360;
    v48->field_4 = sub_10047210;
    v48->field_14 = (int)sub_1003E7A0;
    v48->field_3838.field_1A99C[28] = 3;
    v50 = GetStringWithIndex(0x3Au);
    v49->meth13(v48, v50, 1, 1, &unk_100AB438);
    dword_10AA29C0 = (int)v48;
    ++v46->field_14;
    return 1;
}
// 10041300: using guessed type int __cdecl sub_10041300(int);
// 100AB448: using guessed type int dword_100AB448;
// 10AA2848: using guessed type int dword_10AA2848;
// 10AA29C0: using guessed type int dword_10AA29C0;
// 10AA29F4: using guessed type int dword_10AA29F4;
