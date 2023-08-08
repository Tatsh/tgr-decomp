#include "types-win32.h"
//----- (1004F700) --------------------------------------------------------
int __cdecl sub_1004F700(unkC8 *a1) {
    unk348 *v2;        // eax
    unk348 *v3;        // esi
    unk1E214 *v4;      // eax
    unk1E214 *v5;      // ebp
    unk1E214 *v6;      // eax
    unk1E214 *v7;      // ebp
    unk1E214Vtbl *v8;  // ebx
    LPCSTR v9;         // eax
    unk1E214 *v10;     // eax
    unk1E214 *v11;     // ebp
    int v12;           // eax
    int *v13;          // ebx
    int i;             // ebp
    unk1E214 *v15;     // eax
    unk1E214 *v16;     // ebp
    unk1E214Vtbl *v17; // ebx
    LPCSTR v18;        // eax
    FILE *v19;         // eax
    unk1E214 *v20;     // eax
    unk1E214 *v21;     // ebp
    unk1E214Vtbl *v22; // ebx
    LPCSTR v23;        // eax
    unk1E214 *v24;     // eax
    unk1E214 *v25;     // ebp
    unk1E214Vtbl *v26; // ebx
    LPCSTR v27;        // eax
    unk1E214 *v28;     // eax
    unk1E214 *v29;     // ebp
    unk1E214 *v30;     // eax
    unk1E214 *v31;     // ebp
    unk1E214Vtbl *v32; // ebx
    LPCSTR v33;        // eax
    unk1E214 *v34;     // eax
    unk1E214 *v35;     // ebp
    unk1E214Vtbl *v36; // ebx
    unk1E214 *v37;     // eax
    unk1E214 *v38;     // ebp
    unk1E214Vtbl *v39; // ebx
    LPCSTR v40;        // eax
    unk1E214 *v41;     // eax
    unk1E214 *v42;     // ebp
    unk1E214Vtbl *v43; // ebx
    unk1E214 *v44;     // eax
    unk1E214 *v45;     // ebp
    unk1E214Vtbl *v46; // ebx
    LPCSTR v47;        // eax
    unk1E214 *v48;     // eax
    unk1E214 *v49;     // ebp
    unk1E214Vtbl *v50; // ebx
    float v52;         // [esp+240h] [ebp-38h]
    float v53;         // [esp+240h] [ebp-38h]
    float v54;         // [esp+240h] [ebp-38h]
    int v55;           // [esp+250h] [ebp-28h]
    int v56;           // [esp+27Ch] [ebp+4h]

    HIWORD(a1->field_10) = 0;
    Value = -1;
    dword_10AA2848 = 1;
    (*(void(__thiscall **)(char *, char *))(*(_DWORD *)g_unkC8Ptr2->field_C0 + 4))(
        g_unkC8Ptr2->field_C0, aRallyseasonBrf);
    dword_10AA2848 = 0;
    *(&a1->field_6C + LOWORD(a1->field_10)) = 1;
    v2 = (unk348 *)malloc(0x348u);
    if (v2)
        v3 = meth_10048470(v2);
    else
        v3 = 0;
    a1->field_14[LOWORD(a1->field_10)] = v3;
    if (!v3)
        sub_1003E260(4);
    ++LOWORD(a1->field_10);
    v3->field_340 = a1;
    v3->field_10 = 0;
    v3->field_338 = 1128464384;
    v3->field_33C = 130.0;
    v4 = (unk1E214 *)malloc(0x1E214u);
    if (v4)
        v5 = meth_100476C0(v4);
    else
        v5 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v5;
    if (!v5)
        sub_1003E260(4);
    v5->field_0->field_38(v5, a1, 0, 0, 9, 2, 5, 0, 0);
    ++LOWORD(v3->field_14);
    v6 = (unk1E214 *)malloc(0x1E214u);
    if (v6)
        v7 = meth_100476C0(v6);
    else
        v7 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v7;
    if (!v7)
        sub_1003E260(4);
    v8 = v7->field_0;
    v7->field_0->field_38(v7, a1, v3->field_338, 0x41200000, 0x100009, 2, 5, 1, -1);
    LOWORD(v7->field_1E20C) = 3;
    v9 = getCaptionString(0x34u);
    v8->field_34(v7, v9, 1, 1, &unk_100AB508);
    ++LOWORD(v3->field_14);
    v10 = (unk1E214 *)malloc(0x1E214u);
    if (v10)
        v11 = meth_100476C0(v10);
    else
        v11 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v11;
    if (!v11)
        sub_1003E260(4);
    v11->field_0->field_38(v11, a1, v3->field_338, LODWORD(v3->field_33C), 0x3001, 2, 5, 1, -1);
    v12 = v11->field_3838;
    v13 = &v11->field_3838;
    v11->field_4 = sub_1003EAE0;
    v11->field_1E1F4 = 1;
    (*(void(__thiscall **)(int *, int, void *, int, _DWORD, int))(v12 + 20))(
        &v11->field_3838, 262145, &unk_100AB538, 4, 0, -1);
    *(_DWORD *)v11->gap383C = sub_10042170;
    for (i = 0; i < 0x6590; i += 0x104) {
        if (&g_unkC8Ptr2->field_C0[i] != (char *)-4)
            (*(void(__thiscall **)(int *, char *, _DWORD, int, void *, int))(*v13 + 16))(
                v13, &g_unkC8Ptr2->field_C0[i + 4], 0, 1, &unk_100AB4D8, 1);
    }
    ++LOWORD(v3->field_14);
    ++LOWORD(v3->last);
    v15 = (unk1E214 *)malloc(0x1E214u);
    if (v15)
        v16 = meth_100476C0(v15);
    else
        v16 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v16;
    if (!v16)
        sub_1003E260(4);
    v17 = v16->field_0;
    v52 = v3->field_33C - -76.0;
    v16->field_0->field_38(v16, a1, v3->field_338, LODWORD(v52), 0x103011, 2, 5, 1, -1);
    v16->field_C = sub_10047360;
    v16->field_8 = sub_10045090;
    v16->field_4 = sub_10041890;
    LOWORD(v16->field_1E20C) = 2;
    v18 = getCaptionString(0x1Eu);
    v17->field_34(v16, v18, 1, 0, &dword_100AB448);
    ++LOWORD(v3->field_14);
    ++LOWORD(v3->last);
    v56 = 1;
    v19 = fopen(aAutosaveBrf, Mode);
    if (v19)
        fclose(v19);
    else
        v56 = 0;
    v20 = (unk1E214 *)malloc(0x1E214u);
    if (v20)
        v21 = meth_100476C0(v20);
    else
        v21 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v21;
    if (!v21)
        sub_1003E260(4);
    v22 = v21->field_0;
    v53 = v3->field_33C - -95.0;
    v21->field_0->field_38(
        v21, a1, v3->field_338, LODWORD(v53), v56 != 0 ? 1056769 : 1056785, 2, 5, 1, -1);
    v21->field_C = sub_10047360;
    v21->field_8 = sub_100450C0;
    if (v56) {
        LOWORD(v21->field_1E20C) = 3;
        v55 = 1;
    } else {
        LOWORD(v21->field_1E20C) = 2;
        v55 = 0;
    }
    v23 = getCaptionString(0x35u);
    v22->field_34(v21, v23, 1, v55, &dword_100AB448);
    ++LOWORD(v3->field_14);
    ++LOWORD(v3->last);
    v24 = (unk1E214 *)malloc(0x1E214u);
    if (v24)
        v25 = meth_100476C0(v24);
    else
        v25 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v25;
    if (!v25)
        sub_1003E260(4);
    v26 = v25->field_0;
    v54 = v3->field_33C - -114.0;
    v25->field_0->field_38(v25, a1, v3->field_338, LODWORD(v54), 0x102001, 2, 5, 1, -1);
    v25->field_C = sub_10047360;
    v25->field_8 = (int(__cdecl *)())sub_10046E10;
    LOWORD(v25->field_1E20C) = 3;
    v27 = getCaptionString(0xCu);
    v26->field_34(v25, v27, 1, 1, &dword_100AB448);
    ++LOWORD(v3->field_14);
    ++LOWORD(v3->last);
    v28 = (unk1E214 *)malloc(0x1E214u);
    if (v28)
        v29 = meth_100476C0(v28);
    else
        v29 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v29;
    if (!v29)
        sub_1003E260(4);
    v29->field_0->field_38(v29, a1, 0x42A00000, 0x42380000, 9, 2, 5, 0, 6);
    ++LOWORD(v3->field_14);
    v30 = (unk1E214 *)malloc(0x1E214u);
    if (v30)
        v31 = meth_100476C0(v30);
    else
        v31 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v31;
    if (!v31)
        sub_1003E260(4);
    v32 = v31->field_0;
    v31->field_0->field_38(v31, a1, 0x43A50000, 0x43190000, 0x100009, 2, 5, 1, -1);
    LOWORD(v31->field_1E20C) = 3;
    v33 = getCaptionString(0x36u);
    v32->field_34(v31, v33, 1, 1, &unk_100AB468);
    ++LOWORD(v3->field_14);
    v34 = (unk1E214 *)malloc(0x1E214u);
    if (v34)
        v35 = meth_100476C0(v34);
    else
        v35 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v35;
    if (!v35)
        sub_1003E260(4);
    v36 = v35->field_0;
    v35->field_0->field_38(v35, a1, 0x43A50000, 0x42C20000, 0x5001, 2, 5, 1, -1);
    v35->field_4 = sub_10040A50;
    LOWORD(v35->field_1E20C) = 5;
    v36->field_34(v35, String2, 1, 3, &unk_100AB468);
    ++LOWORD(v3->field_14);
    v37 = (unk1E214 *)malloc(0x1E214u);
    if (v37)
        v38 = meth_100476C0(v37);
    else
        v38 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v38;
    if (!v38)
        sub_1003E260(4);
    v39 = v38->field_0;
    v38->field_0->field_38(v38, a1, 1138491392, 1127546880, 1048585, 2, 5, 1, -1);
    LOWORD(v38->field_1E20C) = 3;
    v40 = getCaptionString(0x37u);
    v39->field_34(v38, v40, 1, 1, &unk_100AB488);
    ++LOWORD(v3->field_14);
    v41 = (unk1E214 *)malloc(0x1E214u);
    if (v41)
        v42 = meth_100476C0(v41);
    else
        v42 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v42;
    if (!v42)
        sub_1003E260(4);
    v43 = v42->field_0;
    v42->field_0->field_38(v42, a1, 1138491392, 1124139008, 20481, 2, 5, 1, -1);
    v42->field_4 = sub_10040AC0;
    LOWORD(v42->field_1E20C) = 5;
    v43->field_34(v42, String2, 1, 3, &unk_100AB488);
    ++LOWORD(v3->field_14);
    v44 = (unk1E214 *)malloc(0x1E214u);
    if (v44)
        v45 = meth_100476C0(v44);
    else
        v45 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v45;
    if (!v45)
        sub_1003E260(4);
    v46 = v45->field_0;
    v45->field_0->field_38(v45, a1, 1138491392, 1131610112, 1048585, 2, 5, 1, -1);
    LOWORD(v45->field_1E20C) = 3;
    v47 = getCaptionString(0x38u);
    v46->field_34(v45, v47, 1, 1, &unk_100AB478);
    ++LOWORD(v3->field_14);
    v48 = (unk1E214 *)malloc(0x1E214u);
    if (v48)
        v49 = meth_100476C0(v48);
    else
        v49 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v49;
    if (!v49)
        sub_1003E260(4);
    v50 = v49->field_0;
    v49->field_0->field_38(v49, a1, 1138491392, 1130364928, 20481, 2, 5, 1, -1);
    v49->field_4 = sub_10041300;
    LOWORD(v49->field_1E20C) = 0x34;
    v50->field_34(v49, String2, 1, 4, &unk_100AB478);
    ++LOWORD(v3->field_14);
    return 1;
}
// 10041300: using guessed type int __cdecl sub_10041300(int);
// 100AB448: using guessed type int dword_100AB448;
// 10AA2848: using guessed type int dword_10AA2848;
