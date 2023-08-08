#include "../types-win32.h"
//----- (1005A6E0) --------------------------------------------------------
int __cdecl sub_1005A6E0(unkC8 *a1) {
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
    unk1E214 *v21;     // eax
    unk1E214 *v22;     // ebp
    unk1E214Vtbl *v23; // ebx
    LPCSTR v24;        // eax
    unk1E214 *v25;     // eax
    unk1E214 *v26;     // ebp
    unk1E214Vtbl *v27; // ebx
    unk1E214 *v28;     // eax
    unk1E214 *v29;     // ebp
    unk1E214Vtbl *v30; // ebx
    LPCSTR v31;        // eax
    unk1E214 *v32;     // eax
    unk1E214 *v33;     // ebp
    unk348 *v34;       // eax
    unk348 *v35;       // ebp
    unk1E214 *v36;     // eax
    unk1E214 *v37;     // esi
    unk1E214Vtbl *v38; // ebx
    LPCSTR v39;        // eax
    float v41;         // [esp+1B4h] [ebp-34h]

    g_unkC8Ptr2->last->lpVtbl->unknownMeth0(g_unkC8Ptr2->last, aTimeattackGrf);
    HIWORD(a1->field_10) = 0;
    Value = -1;
    dword_10AA28E8 = 0;
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
    v2->field_338 = 0x43430000;
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
    v6->field_0->field_38(v6, a1, v2->field_338, 0x41200000, 0x100009, 2, 5, 1, -1);
    LOWORD(v6->field_1E20C) = 3;
    v8 = getCaptionString(0xC2u);
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
    v10->field_0->field_38(v10, a1, v2->field_338, LODWORD(v2->field_33C), 0x3001, 2, 5, 1, -1);
    v11 = v10->field_3838;
    v12 = &v10->field_3838;
    v10->field_4 = sub_1003EC30;
    v10->field_1E1F4 = 1;
    (*(void(__thiscall **)(int *, int, void *, int, _DWORD, int))(v11 + 20))(
        &v10->field_3838, 262145, &unk_100AB4D8, 5, 0, -1);
    *(_DWORD *)v10->gap383C = sub_10042740;
    *(_DWORD *)&v10->gap383C[16] = sub_10042560;
    for (i = 0; i < 26000; i += 260) {
        if ((unk6594 *)((char *)g_unkC8Ptr2->last + i) != (unk6594 *)-4)
            (*(void(__thiscall **)(int *, char *, _DWORD, int, void *, _DWORD))(*v12 + 16))(
                v12, (char *)&g_unkC8Ptr2->last->field_4 + i, 0, 1, &unk_100AB4D8, 0);
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
    v41 = v2->field_33C - -95.0;
    v15->field_0->field_38(v15, a1, v2->field_338, LODWORD(v41), 0x102001, 2, 5, 1, -1);
    v15->field_C = sub_10047360;
    v15->field_8 = (int(__cdecl *)())sub_10044F00;
    LOWORD(v15->field_1E20C) = 3;
    v17 = getCaptionString(0x1Eu);
    v16->field_34(v15, v17, 1, 1, &dword_100AB448);
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
    v19->field_0->field_38(v19, a1, 1138491392, 1129316352, 1052673, 2, 5, 1, -1);
    v19->field_4 = sub_10041040;
    LOWORD(v19->field_1E20C) = 52;
    v20->field_34(v19, asc_100AD300, 1, 4, &unk_100AB478);
    ++LOWORD(v2->field_14);
    v21 = (unk1E214 *)malloc(0x1E214u);
    if (v21)
        v22 = meth_100476C0(v21);
    else
        v22 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v22;
    if (!v22)
        sub_1003E260(4);
    v23 = v22->field_0;
    v22->field_0->field_38(v22, a1, 1138491392, 1130364928, 1048577, 2, 5, 1, -1);
    LOWORD(v22->field_1E20C) = 3;
    v24 = getCaptionString(0x6Fu);
    v23->field_34(v22, v24, 1, 1, &unk_100AB478);
    ++LOWORD(v2->field_14);
    v25 = (unk1E214 *)malloc(0x1E214u);
    if (v25)
        v26 = meth_100476C0(v25);
    else
        v26 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v26;
    if (!v26)
        sub_1003E260(4);
    v27 = v26->field_0;
    v26->field_0->field_38(v26, a1, 1138491392, 1131413504, 1052673, 2, 5, 1, -1);
    v26->field_4 = sub_10041180;
    LOWORD(v26->field_1E20C) = 52;
    v27->field_34(v26, asc_100AD300, 1, 4, &unk_100AB478);
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
    v29->field_0->field_38(v29, a1, 1138491392, 1132462080, 1048577, 2, 5, 1, -1);
    LOWORD(v29->field_1E20C) = 3;
    v31 = getCaptionString(0x3Fu);
    v30->field_34(v29, v31, 1, 1, &unk_100AB478);
    ++LOWORD(v2->field_14);
    v32 = (unk1E214 *)malloc(0x1E214u);
    if (v32)
        v33 = meth_100476C0(v32);
    else
        v33 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v33;
    if (!v33)
        sub_1003E260(4);
    v33->field_0->field_38(v33, a1, 1117782016, 1110966272, 9, 2, 5, 0, 6);
    ++LOWORD(v2->field_14);
    *(&a1->field_6C + LOWORD(a1->field_10)) = 0;
    v34 = (unk348 *)malloc(0x348u);
    if (v34)
        v35 = meth_10048470(v34);
    else
        v35 = 0;
    a1->field_14[LOWORD(a1->field_10)] = v35;
    if (!v35)
        sub_1003E260(4);
    ++LOWORD(a1->field_10);
    v35->field_340 = a1;
    v35->field_10 = 0;
    v35->field_338 = 1128464384;
    v35->field_33C = 130.0;
    v36 = (unk1E214 *)malloc(0x1E214u);
    if (v36)
        v37 = meth_100476C0(v36);
    else
        v37 = 0;
    v35->field_18[LOWORD(v35->field_14)] = v37;
    if (!v37)
        sub_1003E260(4);
    v38 = v37->field_0;
    v37->field_0->field_38(v37, a1, 0, 1130889216, 1048585, 2, 5, 1, -1);
    v37->field_C = sub_10047360;
    v37->field_4 = sub_10047250;
    *(_DWORD *)&v37->gap10[4] = sub_1003E7A0;
    LOWORD(v37->field_1E20C) = 3;
    v39 = getCaptionString(0x70u);
    v38->field_34(v37, v39, 1, 1, &unk_100AB438);
    dword_10AA29C4 = (int)v37;
    ++LOWORD(v35->field_14);
    return 1;
}
// 100AB448: using guessed type int dword_100AB448;
// 10AA28E8: using guessed type int dword_10AA28E8;
// 10AA29C4: using guessed type int dword_10AA29C4;
