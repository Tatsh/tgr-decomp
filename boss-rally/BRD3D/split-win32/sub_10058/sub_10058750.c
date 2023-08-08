#include "../types-win32.h"
//----- (10058750) --------------------------------------------------------
int __cdecl sub_10058750(unkC8 *a1) {
    unk348 *v1;        // eax
    unk348 *v2;        // ebp
    unk1E214 *v3;      // eax
    unk1E214 *v4;      // esi
    unk1E214 *v5;      // eax
    unk1E214 *v6;      // esi
    unk1E214 *v7;      // eax
    unk1E214 *v8;      // esi
    unk1E214Vtbl *v9;  // ebx
    LPCSTR v10;        // eax
    unk1E214 *v11;     // eax
    unk1E214 *v12;     // esi
    unk1E214Vtbl *v13; // ebx
    LPCSTR v14;        // eax
    unk1E214 *v15;     // eax
    unk1E214 *v16;     // esi
    unk1E214Vtbl *v17; // ebx
    LPCSTR v18;        // eax
    unk1E214 *v19;     // eax
    unk1E214 *v20;     // esi
    unk1E214Vtbl *v21; // ebx
    LPCSTR v22;        // eax
    unk1E214 *v23;     // eax
    unk1E214 *v24;     // esi
    unk1E214Vtbl *v25; // ebx
    LPCSTR v26;        // eax
    unk1E214 *v27;     // eax
    unk1E214 *v28;     // esi
    unk1E214Vtbl *v29; // ebx
    LPCSTR v30;        // eax
    unk1E214 *v31;     // eax
    unk1E214 *v32;     // esi
    unk1E214Vtbl *v33; // ebx
    LPCSTR v34;        // eax
    unk1E214 *v35;     // eax
    unk1E214 *v36;     // esi
    unk1E214Vtbl *v37; // ebx
    LPCSTR v38;        // eax
    unk1E214 *v39;     // eax
    unk1E214 *v40;     // esi
    int v41;           // edx
    unk1E214 *v42;     // eax
    unk1E214 *v43;     // esi
    unk1E214Vtbl *v44; // ebx
    __int16 v45;       // cx
    unk1E214 *v46;     // eax
    unk1E214 *v47;     // esi
    int *v48;          // ecx
    unk1E214 *v49;     // eax
    unk1E214 *v50;     // esi
    unk1E214 *v51;     // eax
    unk1E214 *v52;     // esi
    unk1E214 *v53;     // eax
    unk1E214 *v54;     // esi
    __int16 v55;       // ax
    unk1E214 *v56;     // eax
    unk1E214 *v57;     // esi
    unk1E214Vtbl *v58; // ebx
    unk1E214 *v59;     // eax
    unk1E214 *v60;     // esi
    __int16 v61;       // ax
    unk1E214 *v62;     // eax
    unk1E214 *v63;     // esi
    unk1E214Vtbl *v64; // ebx
    unk1E214 *v65;     // eax
    unk1E214 *v66;     // esi
    __int16 v67;       // ax
    unk1E214 *v68;     // eax
    unk1E214 *v69;     // esi
    unk1E214Vtbl *v70; // ebx
    unk1E214 *v71;     // eax
    unk1E214 *v72;     // esi
    __int16 v73;       // ax
    unk1E214 *v74;     // eax
    unk1E214 *v75;     // esi
    unk1E214Vtbl *v76; // ebx
    unk1E214 *v77;     // eax
    unk1E214 *v78;     // ebx
    unk1E214Vtbl *v79; // esi
    int v80;           // edx
    float v82;         // [esp+3E0h] [ebp-34h]
    float v83;         // [esp+3E0h] [ebp-34h]
    float v84;         // [esp+3E0h] [ebp-34h]
    float v85;         // [esp+3E0h] [ebp-34h]
    float v86;         // [esp+3E0h] [ebp-34h]
    float v87;         // [esp+3E0h] [ebp-34h]
    float v88;         // [esp+3E0h] [ebp-34h]

    HIWORD(a1->field_10) = 0;
    g_GameMode = 6;
    sub_1003E310();
    sub_1003E510();
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
    v2->field_33C = 111.0;
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
    v6->field_0->field_38(v6, a1, 0, 0x43A00000, 9, 2, 5, 0, 95);
    ++LOWORD(v2->field_14);
    v7 = (unk1E214 *)malloc(0x1E214u);
    if (v7)
        v8 = meth_100476C0(v7);
    else
        v8 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v8;
    if (!v8)
        sub_1003E260(4);
    v9 = v8->field_0;
    v8->field_0->field_38(v8, a1, v2->field_338, LODWORD(v2->field_33C), 1056769, 2, 5, 1, -1);
    v8->field_C = sub_10047360;
    v8->field_8 = sub_10042B30;
    LOWORD(v8->field_1E20C) = 3;
    v10 = getCaptionString(0x14u);
    v9->field_34(v8, v10, 1, 1, &dword_100AB448);
    ++LOWORD(v2->field_14);
    ++LOWORD(v2->last);
    v11 = (unk1E214 *)malloc(0x1E214u);
    if (v11)
        v12 = meth_100476C0(v11);
    else
        v12 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v12;
    if (!v12)
        sub_1003E260(4);
    v13 = v12->field_0;
    v82 = v2->field_33C - -19.0;
    v12->field_0->field_38(v12, a1, v2->field_338, LODWORD(v82), 1056769, 2, 5, 1, -1);
    v12->field_C = sub_10047360;
    v12->field_8 = sub_10042DC0;
    LOWORD(v12->field_1E20C) = 3;
    v14 = getCaptionString(0x15u);
    v13->field_34(v12, v14, 1, 1, &dword_100AB448);
    ++LOWORD(v2->field_14);
    ++LOWORD(v2->last);
    v15 = (unk1E214 *)malloc(0x1E214u);
    if (v15)
        v16 = meth_100476C0(v15);
    else
        v16 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v16;
    if (!v16)
        sub_1003E260(4);
    v17 = v16->field_0;
    v83 = v2->field_33C - -38.0;
    v16->field_0->field_38(v16, a1, v2->field_338, LODWORD(v83), 1056769, 2, 5, 1, -1);
    v16->field_C = sub_10047360;
    v16->field_8 = sub_10042E20;
    LOWORD(v16->field_1E20C) = 3;
    v18 = getCaptionString(0x16u);
    v17->field_34(v16, v18, 1, 1, &dword_100AB448);
    ++LOWORD(v2->field_14);
    ++LOWORD(v2->last);
    v19 = (unk1E214 *)malloc(0x1E214u);
    if (v19)
        v20 = meth_100476C0(v19);
    else
        v20 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v20;
    if (!v20)
        sub_1003E260(4);
    v21 = v20->field_0;
    v84 = v2->field_33C - -57.0;
    v20->field_0->field_38(v20, a1, v2->field_338, LODWORD(v84), 1056769, 2, 5, 1, -1);
    v20->field_C = sub_10047360;
    v20->field_8 = sub_10042C80;
    LOWORD(v20->field_1E20C) = 3;
    v22 = getCaptionString(0x17u);
    v21->field_34(v20, v22, 1, 1, &dword_100AB448);
    ++LOWORD(v2->field_14);
    ++LOWORD(v2->last);
    v23 = (unk1E214 *)malloc(0x1E214u);
    if (v23)
        v24 = meth_100476C0(v23);
    else
        v24 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v24;
    if (!v24)
        sub_1003E260(4);
    v25 = v24->field_0;
    v85 = v2->field_33C - -76.0;
    v24->field_0->field_38(v24, a1, v2->field_338, LODWORD(v85), 1056769, 2, 5, 1, -1);
    v24->field_C = sub_10047360;
    v24->field_8 = sub_10042E80;
    LOWORD(v24->field_1E20C) = 3;
    v26 = getCaptionString(0x18u);
    v25->field_34(v24, v26, 1, 1, &dword_100AB448);
    ++LOWORD(v2->field_14);
    ++LOWORD(v2->last);
    if (g_NetworkPlay == 2) {
        v27 = (unk1E214 *)malloc(0x1E214u);
        if (v27)
            v28 = meth_100476C0(v27);
        else
            v28 = 0;
        v2->field_18[LOWORD(v2->field_14)] = v28;
        if (!v28)
            sub_1003E260(4);
        v29 = v28->field_0;
        v86 = v2->field_33C - -95.0;
        v28->field_0->field_38(v28, a1, v2->field_338, LODWORD(v86), 1056769, 2, 5, 1, -1);
        v28->field_C = sub_10047360;
        v28->field_8 = sub_100437B0;
        LOWORD(v28->field_1E20C) = 3;
        v30 = getCaptionString(0x68u);
        v29->field_34(v28, v30, 1, 1, &dword_100AB448);
        ++LOWORD(v2->field_14);
        ++LOWORD(v2->last);
    }
    v31 = (unk1E214 *)malloc(0x1E214u);
    if (v31)
        v32 = meth_100476C0(v31);
    else
        v32 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v32;
    if (!v32)
        sub_1003E260(4);
    v33 = v32->field_0;
    v87 = v2->field_33C - -114.0;
    v32->field_0->field_38(v32, a1, v2->field_338, LODWORD(v87), 1056769, 2, 5, 1, -1);
    v32->field_C = sub_10047360;
    v32->field_8 = sub_10043A00;
    *(_DWORD *)&v32->gap10[8] = sub_10043810;
    LOWORD(v32->field_1E20C) = 3;
    if (dword_10AA2884)
        v34 = getCaptionString(0x19u);
    else
        v34 = getCaptionString(0x69u);
    ((void(__thiscall *)(unk1E214 *, LPCSTR))v33->field_34)(v32, v34);
    ++LOWORD(v2->field_14);
    ++LOWORD(v2->last);
    v35 = (unk1E214 *)malloc(0x1E214u);
    if (v35)
        v36 = meth_100476C0(v35);
    else
        v36 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v36;
    if (!v36)
        sub_1003E260(4);
    v37 = v36->field_0;
    v88 = v2->field_33C - -133.0;
    v36->field_0->field_38(v36, a1, v2->field_338, LODWORD(v88), 1056769, 2, 5, 1, -1);
    v36->field_C = sub_10047360;
    v36->field_8 = (int(__cdecl *)())sub_10046400;
    LOWORD(v36->field_1E20C) = 3;
    v38 = getCaptionString(0xCu);
    v37->field_34(v36, v38, 1, 1, &dword_100AB448);
    ++LOWORD(v2->field_14);
    ++LOWORD(v2->last);
    v39 = (unk1E214 *)malloc(0x1E214u);
    if (v39)
        v40 = meth_100476C0(v39);
    else
        v40 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v40;
    if (!v40)
        sub_1003E260(4);
    v40->field_0->field_38(v40, a1, 1107296256, 1134886912, 12289, 2, 5, 1, -1);
    v41 = v40->field_3838;
    v40->field_4 = sub_1003EBC0;
    v40->field_1E1F4 = 1;
    (*(void(__thiscall **)(int *, int, void *, int, _DWORD, int))(v41 + 20))(
        &v40->field_3838, 25427969, &unk_100AB408, 5, 0, -1);
    dword_10AA29E0 = (int)v40;
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
    v43->field_0->field_38(v43, a1, 1107296256, 1134886912, 2097153, 2, 5, 1, -1);
    v43->field_8 = sub_10042AF0;
    v43->field_4 = sub_1003F110;
    *(_DWORD *)v43->gap10 = sub_1003F170;
    LOWORD(v43->field_1E20C) = 3;
    v44->field_34(v43, String2, 0, 1, &dword_100AB448);
    v43->field_50 = 32;
    v43->field_2F80 = 32;
    v43->field_58 = 415;
    *(_DWORD *)v43->gap2F88 = 415;
    v45 = *(_WORD *)v43->gap2F88 - LOWORD(v43->field_2F80);
    *(_DWORD *)v43->gap54 = 330;
    v43->field_2F84 = 330;
    *(_DWORD *)v43->gap5C = 346;
    v43->field_2F8C = 346;
    LOWORD(v43->field_2F78) = v45 - 16;
    dword_10AA28D8 = 0;
    dword_10AA285C = 1;
    v43->field_2F7C = 1;
    ++LOWORD(v2->field_14);
    v46 = (unk1E214 *)malloc(0x1E214u);
    if (v46)
        v47 = meth_100476C0(v46);
    else
        v47 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v47;
    if (!v47)
        sub_1003E260(4);
    v47->field_0->field_38(v47, a1, 1139933184, 0x40000000, 4097, 2, 5, 1, -1);
    v47->field_4 = sub_1003EBE0;
    v47->field_1E1F4 = 1;
    v48 = &v47->field_3838;
    if (g_NetworkPlay == 2)
        (*(void(__thiscall **)(int *, int, void *, int, _DWORD, int))(*v48 + 20))(
            v48, 0x2040001, &unk_100AB3F8, 4, 0, -1);
    else
        (*(void(__thiscall **)(int *, int, void *, int, _DWORD, int))(*v48 + 20))(
            v48, 0x3040001, &unk_100AB3F8, 4, 0, -1);
    dword_10AA29E4 = (int)v47;
    ++LOWORD(v2->field_14);
    v49 = (unk1E214 *)malloc(0x1E214u);
    if (v49)
        v50 = meth_100476C0(v49);
    else
        v50 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v50;
    if (!v50)
        sub_1003E260(4);
    v50->field_0->field_38(v50, a1, 1114898432, 1131675648, 9, 2, 5, 1, 54);
    ++LOWORD(v2->field_14);
    v51 = (unk1E214 *)malloc(0x1E214u);
    if (v51)
        v52 = meth_100476C0(v51);
    else
        v52 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v52;
    if (!v52)
        sub_1003E260(4);
    v52->field_0->field_38(v52, a1, 1116864512, 1129709568, 1, 2, 5, 1, 53);
    v52->field_4 = sub_1003E920;
    ++LOWORD(v2->field_14);
    v53 = (unk1E214 *)malloc(0x1E214u);
    if (v53)
        v54 = meth_100476C0(v53);
    else
        v54 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v54;
    if (!v54)
        sub_1003E260(4);
    v54->field_0->field_38(v54, a1, 1135181824, 1116471296, 1, 2, 5, 1, 11);
    v54->field_4 = sub_1003F720;
    v55 = LOWORD(v2->field_14) + 1;
    ++*(_WORD *)&v54->gap5C[10840];
    *(_WORD *)&v54->gap5C[10842] = v55;
    ++LOWORD(v2->field_14);
    v56 = (unk1E214 *)malloc(0x1E214u);
    if (v56)
        v57 = meth_100476C0(v56);
    else
        v57 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v57;
    if (!v57)
        sub_1003E260(4);
    v58 = v57->field_0;
    v57->field_0->field_38(v57, a1, v2->field_338, 1124663296, 1052673, 2, 5, 1, -1);
    v57->field_4 = sub_1003F760;
    LOWORD(v57->field_1E20C) = 3;
    v58->field_34(v57, asc_100AD300, 1, 1, &unk_100AB468);
    ++LOWORD(v2->field_14);
    v59 = (unk1E214 *)malloc(0x1E214u);
    if (v59)
        v60 = meth_100476C0(v59);
    else
        v60 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v60;
    if (!v60)
        sub_1003E260(4);
    v60->field_0->field_38(v60, a1, 1121452032, 1115947008, 1, 2, 5, 1, 25);
    v60->field_4 = sub_10040890;
    v61 = LOWORD(v2->field_14) + 1;
    ++*(_WORD *)&v60->gap5C[10840];
    *(_WORD *)&v60->gap5C[10842] = v61;
    ++LOWORD(v2->field_14);
    v62 = (unk1E214 *)malloc(0x1E214u);
    if (v62)
        v63 = meth_100476C0(v62);
    else
        v63 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v63;
    if (!v63)
        sub_1003E260(4);
    v64 = v63->field_0;
    v63->field_0->field_38(v63, a1, v2->field_338, 1123418112, 1052673, 2, 5, 1, -1);
    v63->field_4 = sub_1003F7F0;
    LOWORD(v63->field_1E20C) = 3;
    v64->field_34(v63, asc_100AD300, 1, 1, &unk_100AB498);
    ++LOWORD(v2->field_14);
    v65 = (unk1E214 *)malloc(0x1E214u);
    if (v65)
        v66 = meth_100476C0(v65);
    else
        v66 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v66;
    if (!v66)
        sub_1003E260(4);
    v66->field_0->field_38(v66, a1, 1139671040, 1124139008, 1, 2, 5, 1, 14);
    v66->field_4 = sub_100408B0;
    v67 = LOWORD(v2->field_14) + 1;
    ++*(_WORD *)&v66->gap5C[10840];
    *(_WORD *)&v66->gap5C[10842] = v67;
    ++LOWORD(v2->field_14);
    v68 = (unk1E214 *)malloc(0x1E214u);
    if (v68)
        v69 = meth_100476C0(v68);
    else
        v69 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v69;
    if (!v69)
        sub_1003E260(4);
    v70 = v69->field_0;
    v69->field_0->field_38(v69, a1, v2->field_338, 1127546880, 1052673, 2, 5, 1, -1);
    v69->field_4 = sub_1003F990;
    LOWORD(v69->field_1E20C) = 3;
    v70->field_34(v69, asc_100AD300, 1, 1, &unk_100AB488);
    ++LOWORD(v2->field_14);
    v71 = (unk1E214 *)malloc(0x1E214u);
    if (v71)
        v72 = meth_100476C0(v71);
    else
        v72 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v72;
    if (!v72)
        sub_1003E260(4);
    v72->field_0->field_38(v72, a1, 1140621312, 1128792064, 1, 2, 5, 1, 12);
    v72->field_4 = sub_10040870;
    v73 = LOWORD(v2->field_14) + 1;
    ++*(_WORD *)&v72->gap5C[10840];
    *(_WORD *)&v72->gap5C[10842] = v73;
    ++LOWORD(v2->field_14);
    v74 = (unk1E214 *)malloc(0x1E214u);
    if (v74)
        v75 = meth_100476C0(v74);
    else
        v75 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v75;
    if (!v75)
        sub_1003E260(4);
    v76 = v75->field_0;
    v75->field_0->field_38(v75, a1, v2->field_338, 1132658688, 1052673, 2, 5, 1, -1);
    v75->field_4 = sub_1003F860;
    LOWORD(v75->field_1E20C) = 3;
    v76->field_34(v75, asc_100AD300, 1, 1, &unk_100AB478);
    ++LOWORD(v2->field_14);
    v77 = (unk1E214 *)malloc(0x1E214u);
    if (v77)
        v78 = meth_100476C0(v77);
    else
        v78 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v78;
    if (!v78)
        sub_1003E260(4);
    v79 = v78->field_0;
    v78->field_0->field_38(v78, a1, 1134559232, 1092616192, 1048577, 2, 5, 1, -1);
    LOWORD(v78->field_1E20C) = 52;
    v79->field_34(v78, asc_100AD300, 1, 4, &unk_100AB438);
    v80 = *(_DWORD *)&v78->gap5C[11008];
    strcpy(&v78->gap5C[11017], g_lpSessionDesc_dwUser3);
    (*(void(__thiscall **)(_BYTE *, int, int, int *))(v80 + 4))(
        &v78->gap5C[11008], 1, 1, &dword_100AB448);
    ++LOWORD(v2->field_14);
    return 1;
}
// 1003E920: using guessed type int __cdecl sub_1003E920(int);
// 1003EBC0: using guessed type int __cdecl sub_1003EBC0(int);
// 1003EBE0: using guessed type int __cdecl sub_1003EBE0(int);
// 1003F110: using guessed type int __cdecl sub_1003F110(int);
// 1003F720: using guessed type int __cdecl sub_1003F720(int);
// 1003F760: using guessed type int __cdecl sub_1003F760(int);
// 1003F7F0: using guessed type int __cdecl sub_1003F7F0(int);
// 1003F860: using guessed type int __cdecl sub_1003F860(int);
// 1003F990: using guessed type int __cdecl sub_1003F990(int);
// 10040870: using guessed type int __cdecl sub_10040870(int);
// 10040890: using guessed type int __cdecl sub_10040890(int);
// 100408B0: using guessed type int __cdecl sub_100408B0(int);
// 10042B30: using guessed type int sub_10042B30();
// 10042C80: using guessed type int sub_10042C80();
// 10042DC0: using guessed type int sub_10042DC0();
// 10042E20: using guessed type int sub_10042E20();
// 10042E80: using guessed type int sub_10042E80();
// 100437B0: using guessed type int sub_100437B0();
// 100AA010: using guessed type int g_GameMode;
// 100AB448: using guessed type int dword_100AB448;
// 1022AF18: using guessed type int g_NetworkPlay;
// 10AA285C: using guessed type int dword_10AA285C;
// 10AA2884: using guessed type int dword_10AA2884;
// 10AA28D8: using guessed type int dword_10AA28D8;
// 10AA29E0: using guessed type int dword_10AA29E0;
// 10AA29E4: using guessed type int dword_10AA29E4;
