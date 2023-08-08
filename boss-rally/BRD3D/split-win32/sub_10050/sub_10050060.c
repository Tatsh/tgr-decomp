#include "../types-win32.h"
//----- (10050060) --------------------------------------------------------
int __cdecl sub_10050060(unkC8 *a1) {
    unk348 *v1;        // eax
    unk348 *v2;        // esi
    unk1E214 *v3;      // eax
    unk1E214 *v4;      // ebp
    unk1E214 *v5;      // eax
    unk1E214 *v6;      // ebp
    unk1E214Vtbl *v7;  // ebx
    LPCSTR v8;         // eax
    unk1E214 *v9;      // eax
    unk1E214 *v10;     // ebp
    int v11;           // eax
    int *v12;          // ebx
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
    unk348 *v45;       // eax
    unk348 *v46;       // ebp
    unk1E214 *v47;     // eax
    unk1E214 *v48;     // esi
    unk1E214Vtbl *v49; // ebx
    LPCSTR v50;        // eax
    float v52;         // [esp+244h] [ebp-34h]
    float v53;         // [esp+244h] [ebp-34h]

    dword_10AA2848 = 1;
    (*(void(__thiscall **)(char *, char *))(*(_DWORD *)g_unkC8Ptr2->field_C0 + 4))(
        g_unkC8Ptr2->field_C0, aRallyseasonBrf);
    dword_10AA2848 = 0;
    HIWORD(a1->field_10) = 0;
    Value = -1;
    *(&a1->field_6C + LOWORD(a1->field_10)) = 1;
    v1 = (unk348 *)malloc(0x348u);
    if (v1)
        v2 = meth_10048470(v1);
    else
        v2 = 0;
    a1->field_14[LOWORD(a1->field_10)] = v2;
    if (!v2)
        sub_1003E260(4);
    ++LOWORD(a1->field_10);
    v2->field_340 = a1;
    v2->field_10 = 0;
    v2->field_338 = 1128464384;
    v2->field_33C = 130.0;
    v3 = (unk1E214 *)malloc(0x1E214u);
    if (v3)
        v4 = meth_100476C0(v3);
    else
        v4 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v4;
    if (!v4)
        sub_1003E260(4);
    v4->field_0->field_38(v4, a1, 0, 0, 9, 2, 5, 0, 0);
    ++LOWORD(v2->field_14);
    v5 = (unk1E214 *)malloc(0x1E214u);
    if (v5)
        v6 = meth_100476C0(v5);
    else
        v6 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v6;
    if (!v6)
        sub_1003E260(4);
    v7 = v6->field_0;
    v6->field_0->field_38(v6, a1, v2->field_338, 1092616192, 1048585, 2, 5, 1, -1);
    LOWORD(v6->field_1E20C) = 3;
    v8 = getCaptionString(0x39u);
    v7->field_34(v6, v8, 1, 1, &unk_100AB508);
    ++LOWORD(v2->field_14);
    v9 = (unk1E214 *)malloc(0x1E214u);
    if (v9)
        v10 = meth_100476C0(v9);
    else
        v10 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v10;
    if (!v10)
        sub_1003E260(4);
    v10->field_0->field_38(v10, a1, v2->field_338, LODWORD(v2->field_33C), 12289, 2, 5, 1, -1);
    v11 = v10->field_3838;
    v12 = &v10->field_3838;
    v10->field_4 = sub_1003EB10;
    v10->field_1E1F4 = 1;
    (*(void(__thiscall **)(int *, int, void *, int, _DWORD, int))(v11 + 20))(
        &v10->field_3838, 262145, &unk_100AB4D8, 5, 0, -1);
    *(_DWORD *)v10->gap383C = sub_10042020;
    *(_DWORD *)&v10->gap383C[16] = sub_10041DF0;
    for (i = 0; i < 26000; i += 260) {
        if (&g_unkC8Ptr2->field_C0[i] != (char *)-4)
            (*(void(__thiscall **)(int *, char *, _DWORD, int, void *, _DWORD))(*v12 + 16))(
                v12, &g_unkC8Ptr2->field_C0[i + 4], 0, 1, &unk_100AB4D8, 0);
    }
    ++LOWORD(v2->field_14);
    ++LOWORD(v2->last);
    v14 = (unk1E214 *)malloc(0x1E214u);
    if (v14)
        v15 = meth_100476C0(v14);
    else
        v15 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v15;
    if (!v15)
        sub_1003E260(4);
    v16 = v15->field_0;
    v52 = v2->field_33C - -95.0;
    v15->field_0->field_38(v15, a1, v2->field_338, LODWORD(v52), 1060881, 2, 5, 1, -1);
    v15->field_C = sub_10047360;
    v15->field_8 = (int(__cdecl *)())sub_100450F0;
    v15->field_4 = sub_100418D0;
    LOWORD(v15->field_1E20C) = 2;
    v17 = getCaptionString(0x1Eu);
    v16->field_34(v15, v17, 1, 0, &dword_100AB448);
    ++LOWORD(v2->field_14);
    ++LOWORD(v2->last);
    v18 = (unk1E214 *)malloc(0x1E214u);
    if (v18)
        v19 = meth_100476C0(v18);
    else
        v19 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v19;
    if (!v19)
        sub_1003E260(4);
    v20 = v19->field_0;
    v53 = v2->field_33C - -114.0;
    v19->field_0->field_38(v19, a1, v2->field_338, LODWORD(v53), 1056769, 2, 5, 1, -1);
    v19->field_C = sub_10047360;
    v19->field_8 = (int(__cdecl *)())sub_10046EB0;
    LOWORD(v19->field_1E20C) = 3;
    v21 = getCaptionString(0xCu);
    v20->field_34(v19, v21, 1, 1, &dword_100AB448);
    dword_10AA29F4 = (int)v19;
    ++LOWORD(v2->field_14);
    ++LOWORD(v2->last);
    v22 = (unk1E214 *)malloc(0x1E214u);
    if (v22)
        v23 = meth_100476C0(v22);
    else
        v23 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v23;
    if (!v23)
        sub_1003E260(4);
    v23->field_0->field_38(v23, a1, 1117782016, 1110966272, 9, 2, 5, 0, 6);
    ++LOWORD(v2->field_14);
    v24 = (unk1E214 *)malloc(0x1E214u);
    if (v24)
        v25 = meth_100476C0(v24);
    else
        v25 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v25;
    if (!v25)
        sub_1003E260(4);
    v26 = v25->field_0;
    v25->field_0->field_38(v25, a1, 1134886912, 1125711872, 1048585, 2, 5, 1, -1);
    LOWORD(v25->field_1E20C) = 3;
    v27 = getCaptionString(0x36u);
    v26->field_34(v25, v27, 1, 1, &unk_100AB468);
    ++LOWORD(v2->field_14);
    v28 = (unk1E214 *)malloc(0x1E214u);
    if (v28)
        v29 = meth_100476C0(v28);
    else
        v29 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v29;
    if (!v29)
        sub_1003E260(4);
    v30 = v29->field_0;
    v29->field_0->field_38(v29, a1, 1134886912, 1120010240, 20481, 2, 5, 1, -1);
    v29->field_4 = sub_10040A50;
    LOWORD(v29->field_1E20C) = 5;
    v30->field_34(v29, String2, 1, 3, &unk_100AB468);
    ++LOWORD(v2->field_14);
    v31 = (unk1E214 *)malloc(0x1E214u);
    if (v31)
        v32 = meth_100476C0(v31);
    else
        v32 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v32;
    if (!v32)
        sub_1003E260(4);
    v33 = v32->field_0;
    v32->field_0->field_38(v32, a1, 1138491392, 1127546880, 1048585, 2, 5, 1, -1);
    LOWORD(v32->field_1E20C) = 3;
    v34 = getCaptionString(0x37u);
    v33->field_34(v32, v34, 1, 1, &unk_100AB488);
    ++LOWORD(v2->field_14);
    v35 = (unk1E214 *)malloc(0x1E214u);
    if (v35)
        v36 = meth_100476C0(v35);
    else
        v36 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v36;
    if (!v36)
        sub_1003E260(4);
    v37 = v36->field_0;
    v36->field_0->field_38(v36, a1, 1138491392, 1124139008, 20481, 2, 5, 1, -1);
    v36->field_4 = sub_10040AC0;
    LOWORD(v36->field_1E20C) = 5;
    v37->field_34(v36, String2, 1, 3, &unk_100AB488);
    ++LOWORD(v2->field_14);
    v38 = (unk1E214 *)malloc(0x1E214u);
    if (v38)
        v39 = meth_100476C0(v38);
    else
        v39 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v39;
    if (!v39)
        sub_1003E260(4);
    v40 = v39->field_0;
    v39->field_0->field_38(v39, a1, 1138491392, 1131610112, 1048585, 2, 5, 1, -1);
    LOWORD(v39->field_1E20C) = 3;
    v41 = getCaptionString(0x38u);
    v40->field_34(v39, v41, 1, 1, &unk_100AB478);
    ++LOWORD(v2->field_14);
    v42 = (unk1E214 *)malloc(0x1E214u);
    if (v42)
        v43 = meth_100476C0(v42);
    else
        v43 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v43;
    if (!v43)
        sub_1003E260(4);
    v44 = v43->field_0;
    v43->field_0->field_38(v43, a1, 1138491392, 1130364928, 20481, 2, 5, 1, -1);
    v43->field_4 = sub_10041300;
    LOWORD(v43->field_1E20C) = 52;
    v44->field_34(v43, String2, 1, 4, &unk_100AB478);
    ++LOWORD(v2->field_14);
    *(&a1->field_6C + LOWORD(a1->field_10)) = 0;
    v45 = (unk348 *)malloc(0x348u);
    if (v45)
        v46 = meth_10048470(v45);
    else
        v46 = 0;
    a1->field_14[LOWORD(a1->field_10)] = v46;
    if (!v46)
        sub_1003E260(4);
    ++LOWORD(a1->field_10);
    v46->field_340 = a1;
    v46->field_10 = 0;
    v46->field_338 = 1128464384;
    v46->field_33C = 130.0;
    v47 = (unk1E214 *)malloc(0x1E214u);
    if (v47)
        v48 = meth_100476C0(v47);
    else
        v48 = 0;
    v46->field_18[LOWORD(v46->field_14)] = v48;
    if (!v48)
        sub_1003E260(4);
    v49 = v48->field_0;
    v48->field_0->field_38(v48, a1, 0, 1130889216, 1048585, 2, 5, 1, -1);
    v48->field_C = sub_10047360;
    v48->field_4 = sub_10047210;
    *(_DWORD *)&v48->gap10[4] = sub_1003E7A0;
    LOWORD(v48->field_1E20C) = 3;
    v50 = getCaptionString(0x3Au);
    v49->field_34(v48, v50, 1, 1, &unk_100AB438);
    dword_10AA29C0 = (int)v48;
    ++LOWORD(v46->field_14);
    return 1;
}
// 10041300: using guessed type int __cdecl sub_10041300(int);
// 100AB448: using guessed type int dword_100AB448;
// 10AA2848: using guessed type int dword_10AA2848;
// 10AA29C0: using guessed type int dword_10AA29C0;
// 10AA29F4: using guessed type int dword_10AA29F4;
