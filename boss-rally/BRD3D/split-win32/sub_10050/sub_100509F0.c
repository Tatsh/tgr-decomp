#include "../types-win32.h"
//----- (100509F0) --------------------------------------------------------
int __cdecl sub_100509F0(unkC8 *a1) {
    unsigned __int16 v2;  // ax
    unk348 *v3;           // eax
    unk348 *v4;           // esi
    unsigned __int16 v5;  // cx
    unk1E214 *v6;         // eax
    unk1E214 *v7;         // ebp
    unsigned __int16 v8;  // dx
    unk1E214 *v9;         // eax
    unk1E214 *v10;        // ebp
    unsigned __int16 v11; // cx
    unk1E214Vtbl *v12;    // ebx
    LPCSTR v13;           // eax
    unk1E214 *v14;        // eax
    unk1E214 *v15;        // ebp
    int v16;              // eax
    int *v17;             // ebx
    int v18;              // eax
    int v19;              // ebp
    char *v20;            // eax
    const char *v21;      // eax
    unk1E214 *v22;        // eax
    unk1E214 *v23;        // ebp
    unk1E214Vtbl *v24;    // ebx
    LPCSTR v25;           // eax
    unk1E214 *v26;        // eax
    unk1E214 *v27;        // ebp
    unsigned __int16 v28; // dx
    unk1E214Vtbl *v29;    // ebx
    LPCSTR v30;           // eax
    unk1E214 *v31;        // eax
    unk1E214 *v32;        // ebp
    unsigned __int16 v33; // cx
    int v34;              // ebx
    unk1E214 *v35;        // eax
    unk1E214 *v36;        // ebp
    __int64 v37;          // rax
    unk1E214 *v38;        // eax
    unk1E214 *v39;        // ebp
    __int64 v40;          // rax
    unk1E214 *v41;        // eax
    unk1E214 *v42;        // ebp
    unsigned __int16 v43; // ax
    __int16 v44;          // ax
    unk1E214 *v45;        // eax
    unk1E214 *v46;        // ebp
    unsigned __int16 v47; // cx
    unk1E214Vtbl *v48;    // ebx
    unk1E214 *v49;        // eax
    unk1E214 *v50;        // ebp
    unsigned __int16 v51; // ax
    __int16 v52;          // ax
    unk1E214 *v53;        // eax
    unk1E214 *v54;        // ebp
    unsigned __int16 v55; // cx
    unk1E214Vtbl *v56;    // ebx
    unk1E214 *v57;        // eax
    unk1E214 *v58;        // ebp
    unk1E214Vtbl *v59;    // ebx
    LPCSTR v60;           // eax
    unk1E214 *v61;        // eax
    unk1E214 *v62;        // ebp
    unsigned __int16 v63; // cx
    unk1E214Vtbl *v64;    // ebx
    unk1E214 *v65;        // eax
    unk1E214 *v66;        // ebp
    unsigned __int16 v67; // dx
    unk1E214Vtbl *v68;    // ebx
    LPCSTR v69;           // eax
    unk1E214 *v70;        // eax
    unk1E214 *v71;        // ebp
    unk1E214Vtbl *v72;    // ebx
    unk1E214 *v73;        // eax
    unk1E214 *v74;        // ebp
    unsigned __int16 v75; // cx
    unk1E214Vtbl *v76;    // ebx
    LPCSTR v77;           // eax
    unk1E214 *v78;        // eax
    unk1E214 *v79;        // ebp
    unk1E214Vtbl *v80;    // ebx
    LPCSTR v81;           // eax
    unk1E214 *v82;        // eax
    unk1E214 *v83;        // ebp
    unsigned __int16 v84; // dx
    unk1E214Vtbl *v85;    // ebx
    unk1E214 *v86;        // eax
    unk1E214 *v87;        // ebp
    unk1E214Vtbl *v88;    // ebx
    LPCSTR v89;           // eax
    unk1E214 *v90;        // eax
    unk1E214 *v91;        // ebp
    unsigned __int16 v92; // cx
    unk1E214Vtbl *v93;    // ebx
    unk1E214 *v94;        // eax
    unk1E214 *v95;        // ebp
    unsigned __int16 v96; // dx
    unk1E214Vtbl *v97;    // ebx
    LPCSTR v98;           // eax
    unk1E214 *v99;        // eax
    unk1E214 *v100;       // ebp
    unk1E214Vtbl *v101;   // ebx
    float v103;           // [esp+394h] [ebp-80h]
    float v104;           // [esp+394h] [ebp-80h]
    char *v105;           // [esp+3A8h] [ebp-6Ch]
    float v106;           // [esp+3BCh] [ebp-58h]
    int v107;             // [esp+3C0h] [ebp-54h]
    int v108;             // [esp+3C4h] [ebp-50h]
    char v109[4];         // [esp+3C8h] [ebp-4Ch] BYREF
    char Buffer[32];      // [esp+3E8h] [ebp-2Ch] BYREF
    int v111;             // [esp+410h] [ebp-4h]
    unkC8 *v112;          // [esp+418h] [ebp+4h]
    float v113;           // [esp+418h] [ebp+4h]
    float v114;           // [esp+418h] [ebp+4h]
    float v115;           // [esp+418h] [ebp+4h]

    v2 = a1->field_10;
    HIWORD(a1->field_10) = 0;
    *(&a1->field_6C + v2) = 1;
    v3 = (unk348 *)malloc(0x348u);
    v111 = 0;
    if (v3)
        v4 = meth_10048470(v3);
    else
        v4 = 0;
    v5 = a1->field_10;
    v111 = -1;
    a1->field_14[v5] = v4;
    if (!v4)
        sub_1003E260(4);
    ++LOWORD(a1->field_10);
    v4->field_340 = a1;
    v4->field_10 = 0;
    v4->field_338 = 1128464384;
    v4->field_33C = 130.0;
    v6 = (unk1E214 *)malloc(0x1E214u);
    v111 = 1;
    if (v6)
        v7 = meth_100476C0(v6);
    else
        v7 = 0;
    v8 = v4->field_14;
    v111 = -1;
    v4->field_18[v8] = v7;
    if (!v7)
        sub_1003E260(4);
    v7->field_0->field_38(v7, a1, 0, 0, 9, 2, 5, 0, 0);
    ++LOWORD(v4->field_14);
    v9 = (unk1E214 *)malloc(0x1E214u);
    v111 = 2;
    if (v9)
        v10 = meth_100476C0(v9);
    else
        v10 = 0;
    v11 = v4->field_14;
    v111 = -1;
    v4->field_18[v11] = v10;
    if (!v10)
        sub_1003E260(4);
    v12 = v10->field_0;
    v10->field_0->field_38(v10, a1, v4->field_338, 1092616192, 1048585, 2, 5, 1, -1);
    LOWORD(v10->field_1E20C) = 3;
    v13 = getCaptionString(0x3Du);
    v12->field_34(v10, v13, 1, 1, &unk_100AB508);
    ++LOWORD(v4->field_14);
    v14 = (unk1E214 *)malloc(0x1E214u);
    v111 = 3;
    if (v14)
        v15 = meth_100476C0(v14);
    else
        v15 = 0;
    v111 = -1;
    v4->field_18[LOWORD(v4->field_14)] = v15;
    if (!v15)
        sub_1003E260(4);
    v15->field_0->field_38(v15, a1, v4->field_338, LODWORD(v4->field_33C), 12289, 2, 5, 1, -1);
    v16 = v15->field_3838;
    v17 = &v15->field_3838;
    v15->field_4 = sub_1003EB60;
    v15->field_1E1F4 = 1;
    (*(void(__thiscall **)(int *, int, void *, int, _DWORD, int))(v16 + 20))(
        &v15->field_3838, 2359296, &unk_100AB4D8, 5, 0, -1);
    *(_DWORD *)&v15->gap10[4] = sub_1003E8B0;
    *(_DWORD *)&v15->gap10[8] = sub_1003E8C0;
    v18 = 0;
    if (dword_100B3814[6 * (char)dword_10AA28B8] > 0) {
        v112 = *(unkC8 **)(*v17 + 16);
        do {
            v19 = v18 + 1;
            v20 = _itoa(v18 + 1, Buffer, 10);
            v105 = _strupr(v20);
            v21 = getCaptionString(0xBFu);
            sprintf(v109, v21, v105);
            ((void(__thiscall *)(int *, char *, int, int, int *, int))v112)(
                v17, v109, 1, 1, &dword_100AB448, 1);
            v18 = v19;
        } while (v19 < dword_100B3814[6 * (char)dword_10AA28B8]);
    }
    ++LOWORD(v4->field_14);
    v22 = (unk1E214 *)malloc(0x1E214u);
    v111 = 4;
    if (v22)
        v23 = meth_100476C0(v22);
    else
        v23 = 0;
    v111 = -1;
    v4->field_18[LOWORD(v4->field_14)] = v23;
    if (!v23)
        sub_1003E260(4);
    v24 = v23->field_0;
    v103 = v4->field_33C - -95.0;
    v23->field_0->field_38(v23, a1, v4->field_338, LODWORD(v103), 1056769, 2, 5, 1, -1);
    v23->field_C = sub_10047360;
    v23->field_8 = sub_10045DC0;
    LOWORD(v23->field_1E20C) = 2;
    v25 = getCaptionString(0x1Eu);
    v24->field_34(v23, v25, 1, 0, &dword_100AB448);
    ++LOWORD(v4->field_14);
    ++LOWORD(v4->last);
    v26 = (unk1E214 *)malloc(0x1E214u);
    v111 = 5;
    if (v26)
        v27 = meth_100476C0(v26);
    else
        v27 = 0;
    v28 = v4->field_14;
    v111 = -1;
    v4->field_18[v28] = v27;
    if (!v27)
        sub_1003E260(4);
    v29 = v27->field_0;
    v104 = v4->field_33C - -114.0;
    v27->field_0->field_38(v27, a1, v4->field_338, LODWORD(v104), 1056769, 2, 5, 1, -1);
    v27->field_C = sub_10047360;
    v27->field_8 = sub_10046F50;
    *(_DWORD *)&v27->gap10[4] = sub_1003E840;
    LOWORD(v27->field_1E20C) = 3;
    v30 = getCaptionString(0xCu);
    v29->field_34(v27, v30, 1, 1, &dword_100AB448);
    ++LOWORD(v4->field_14);
    ++LOWORD(v4->last);
    v106 = (float)dword_100AB428;
    v113 = (float)dword_100AB42C;
    v31 = (unk1E214 *)malloc(0x1E214u);
    v111 = 6;
    if (v31)
        v32 = meth_100476C0(v31);
    else
        v32 = 0;
    v33 = v4->field_14;
    v111 = -1;
    v4->field_18[v33] = v32;
    if (!v32)
        sub_1003E260(4);
    ((void(__thiscall *)(
        unk1E214 *, unkC8 *, float, float, int, int, int, int, int))v32->field_0->field_38)(
        v32, a1, COERCE_FLOAT(LODWORD(v106)), COERCE_FLOAT(LODWORD(v113)), 4202497, 2, 5, 1, 120);
    v32->field_C = sub_10047360;
    v32->field_8 = sub_100457A0;
    v108 = (__int64)v113;
    *(_DWORD *)v32->gap54 = v108;
    v34 = (__int64)v106;
    v32->field_50 = v34;
    v32->field_58 = v34 + 127;
    *(_DWORD *)v32->gap5C = v108 + 33;
    *(_DWORD *)&v32->gap5C[10508] = 0;
    v114 = v113 - -33.0;
    *(_WORD *)&v32->gap5C[10726] = 121;
    ++LOWORD(v4->field_14);
    v107 = v34 + 127;
    v35 = (unk1E214 *)malloc(0x1E214u);
    v111 = 7;
    if (v35)
        v36 = meth_100476C0(v35);
    else
        v36 = 0;
    v111 = -1;
    v4->field_18[LOWORD(v4->field_14)] = v36;
    if (!v36)
        sub_1003E260(4);
    ((void(__thiscall *)(
        unk1E214 *, unkC8 *, float, float, int, int, int, int, int))v36->field_0->field_38)(
        v36, a1, COERCE_FLOAT(LODWORD(v106)), COERCE_FLOAT(LODWORD(v114)), 4202497, 2, 5, 1, 82);
    v36->field_C = sub_10047360;
    v36->field_8 = (int(__cdecl *)())sub_10043FA0;
    v37 = (__int64)v114;
    *(_DWORD *)v36->gap54 = v37;
    v36->field_50 = v34;
    v36->field_58 = v107;
    *(_DWORD *)v36->gap5C = v37 + 33;
    v115 = v114 - -33.0;
    *(_DWORD *)&v36->gap5C[10508] = 0;
    *(_WORD *)&v36->gap5C[10726] = 83;
    ++LOWORD(v4->field_14);
    v38 = (unk1E214 *)malloc(0x1E214u);
    v111 = 8;
    if (v38)
        v39 = meth_100476C0(v38);
    else
        v39 = 0;
    v111 = -1;
    v4->field_18[LOWORD(v4->field_14)] = v39;
    if (!v39)
        sub_1003E260(4);
    ((void(__thiscall *)(
        unk1E214 *, unkC8 *, float, float, int, int, int, int, int))v39->field_0->field_38)(
        v39, a1, COERCE_FLOAT(LODWORD(v106)), COERCE_FLOAT(LODWORD(v115)), 4202497, 2, 5, 1, 84);
    v39->field_C = sub_10047360;
    v39->field_8 = sub_10045780;
    v40 = (__int64)v115;
    *(_DWORD *)v39->gap54 = v40;
    v39->field_50 = v34;
    v39->field_58 = v107;
    *(_DWORD *)v39->gap5C = v40 + 33;
    *(_DWORD *)&v39->gap5C[10508] = 0;
    *(_WORD *)&v39->gap5C[10726] = 85;
    ++LOWORD(v4->field_14);
    v41 = (unk1E214 *)malloc(0x1E214u);
    v111 = 9;
    if (v41)
        v42 = meth_100476C0(v41);
    else
        v42 = 0;
    v43 = v4->field_14;
    v111 = -1;
    v4->field_18[v43] = v42;
    if (!v42)
        sub_1003E260(4);
    v42->field_0->field_38(v42, a1, 1116864512, 1129578496, 1, 2, 5, 1, 22);
    v42->field_4 = sub_100407E0;
    v44 = LOWORD(v4->field_14) + 1;
    ++*(_WORD *)&v42->gap5C[10840];
    *(_WORD *)&v42->gap5C[10842] = v44;
    ++LOWORD(v4->field_14);
    v45 = (unk1E214 *)malloc(0x1E214u);
    v111 = 10;
    if (v45)
        v46 = meth_100476C0(v45);
    else
        v46 = 0;
    v47 = v4->field_14;
    v111 = -1;
    v4->field_18[v47] = v46;
    if (!v46)
        sub_1003E260(4);
    v48 = v46->field_0;
    v46->field_0->field_38(v46, a1, v4->field_338, 1133084672, 1052673, 2, 5, 1, -1);
    v46->field_4 = sub_1003FE80;
    LOWORD(v46->field_1E20C) = 3;
    v48->field_34(v46, asc_100AD300, 1, 1, &unk_100AB4B8);
    ++LOWORD(v4->field_14);
    v49 = (unk1E214 *)malloc(0x1E214u);
    v111 = 11;
    if (v49)
        v50 = meth_100476C0(v49);
    else
        v50 = 0;
    v51 = v4->field_14;
    v111 = -1;
    v4->field_18[v51] = v50;
    if (!v50)
        sub_1003E260(4);
    v50->field_0->field_38(v50, a1, 1134723072, 1116733440, 1, 2, 5, 1, 17);
    v50->field_4 = sub_10040730;
    v52 = LOWORD(v4->field_14) + 1;
    ++*(_WORD *)&v50->gap5C[10840];
    *(_WORD *)&v50->gap5C[10842] = v52;
    ++LOWORD(v4->field_14);
    v53 = (unk1E214 *)malloc(0x1E214u);
    v111 = 12;
    if (v53)
        v54 = meth_100476C0(v53);
    else
        v54 = 0;
    v55 = v4->field_14;
    v111 = -1;
    v4->field_18[v55] = v54;
    if (!v54)
        sub_1003E260(4);
    v56 = v54->field_0;
    v54->field_0->field_38(v54, a1, v4->field_338, 1125646336, 1052673, 2, 5, 1, -1);
    v54->field_4 = sub_1003FA00;
    LOWORD(v54->field_1E20C) = 3;
    v56->field_34(v54, asc_100AD300, 1, 1, &unk_100AB4A8);
    ++LOWORD(v4->field_14);
    v57 = (unk1E214 *)malloc(0x1E214u);
    v111 = 13;
    if (v57)
        v58 = meth_100476C0(v57);
    else
        v58 = 0;
    v111 = -1;
    v4->field_18[LOWORD(v4->field_14)] = v58;
    if (!v58)
        sub_1003E260(4);
    v59 = v58->field_0;
    v58->field_0->field_38(v58, a1, 1138819072, 1125318656, 1048585, 2, 5, 1, -1);
    LOWORD(v58->field_1E20C) = 3;
    v60 = getCaptionString(0x3Eu);
    v59->field_34(v58, v60, 1, 1, &unk_100AB4F8);
    ++LOWORD(v4->field_14);
    v61 = (unk1E214 *)malloc(0x1E214u);
    v111 = 14;
    if (v61)
        v62 = meth_100476C0(v61);
    else
        v62 = 0;
    v63 = v4->field_14;
    v111 = -1;
    v4->field_18[v63] = v62;
    if (!v62)
        sub_1003E260(4);
    v64 = v62->field_0;
    v62->field_0->field_38(v62, a1, 1138819072, 1124073472, 20481, 2, 5, 1, -1);
    v62->field_4 = sub_10040C00;
    LOWORD(v62->field_1E20C) = 52;
    v64->field_34(v62, String2, 1, 4, &unk_100AB4F8);
    ++LOWORD(v4->field_14);
    v65 = (unk1E214 *)malloc(0x1E214u);
    v111 = 15;
    if (v65)
        v66 = meth_100476C0(v65);
    else
        v66 = 0;
    v67 = v4->field_14;
    v111 = -1;
    v4->field_18[v67] = v66;
    if (!v66)
        sub_1003E260(4);
    v68 = v66->field_0;
    v66->field_0->field_38(v66, a1, 1138819072, 1127809024, 1048585, 2, 5, 1, -1);
    LOWORD(v66->field_1E20C) = 3;
    v69 = getCaptionString(0x3Fu);
    v68->field_34(v66, v69, 1, 1, &unk_100AB4F8);
    ++LOWORD(v4->field_14);
    v70 = (unk1E214 *)malloc(0x1E214u);
    v111 = 16;
    if (v70)
        v71 = meth_100476C0(v70);
    else
        v71 = 0;
    v111 = -1;
    v4->field_18[LOWORD(v4->field_14)] = v71;
    if (!v71)
        sub_1003E260(4);
    v72 = v71->field_0;
    v71->field_0->field_38(v71, a1, 1138819072, 1126563840, 20481, 2, 5, 1, -1);
    v71->field_4 = sub_10040D70;
    LOWORD(v71->field_1E20C) = 52;
    v72->field_34(v71, String2, 1, 4, &unk_100AB4F8);
    ++LOWORD(v4->field_14);
    v73 = (unk1E214 *)malloc(0x1E214u);
    v111 = 17;
    if (v73)
        v74 = meth_100476C0(v73);
    else
        v74 = 0;
    v75 = v4->field_14;
    v111 = -1;
    v4->field_18[v75] = v74;
    if (!v74)
        sub_1003E260(4);
    v76 = v74->field_0;
    v74->field_0->field_38(v74, a1, v4->field_338, 1128988672, 1048585, 2, 5, 1, -1);
    LOWORD(v74->field_1E20C) = 3;
    v77 = getCaptionString(0x40u);
    v76->field_34(v74, v77, 1, 1, &unk_100AB478);
    ++LOWORD(v4->field_14);
    v78 = (unk1E214 *)malloc(0x1E214u);
    v111 = 18;
    if (v78)
        v79 = meth_100476C0(v78);
    else
        v79 = 0;
    v111 = -1;
    v4->field_18[LOWORD(v4->field_14)] = v79;
    if (!v79)
        sub_1003E260(4);
    v80 = v79->field_0;
    v79->field_0->field_38(v79, a1, v4->field_338, 1132756992, 1048585, 2, 5, 1, -1);
    LOWORD(v79->field_1E20C) = 3;
    v81 = getCaptionString(0x41u);
    v80->field_34(v79, v81, 1, 1, &unk_100AB478);
    ++LOWORD(v4->field_14);
    v82 = (unk1E214 *)malloc(0x1E214u);
    v111 = 19;
    if (v82)
        v83 = meth_100476C0(v82);
    else
        v83 = 0;
    v84 = v4->field_14;
    v111 = -1;
    v4->field_18[v84] = v83;
    if (!v83)
        sub_1003E260(4);
    v85 = v83->field_0;
    v83->field_0->field_38(v83, a1, 1138819072, 1129906176, 20481, 2, 5, 1, -1);
    v83->field_4 = sub_100414B0;
    LOWORD(v83->field_1E20C) = 5;
    v85->field_34(v83, String2, 1, 3, &unk_100AB478);
    ++LOWORD(v4->field_14);
    v86 = (unk1E214 *)malloc(0x1E214u);
    v111 = 20;
    if (v86)
        v87 = meth_100476C0(v86);
    else
        v87 = 0;
    v111 = -1;
    v4->field_18[LOWORD(v4->field_14)] = v87;
    if (!v87)
        sub_1003E260(4);
    v88 = v87->field_0;
    v87->field_0->field_38(v87, a1, 1121189888, 1118437376, 1048577, 2, 5, 1, -1);
    LOWORD(v87->field_1E20C) = 3;
    v89 = getCaptionString(0x38u);
    v88->field_34(v87, v89, 1, 1, &unk_100AB458);
    ++LOWORD(v4->field_14);
    v90 = (unk1E214 *)malloc(0x1E214u);
    v111 = 21;
    if (v90)
        v91 = meth_100476C0(v90);
    else
        v91 = 0;
    v92 = v4->field_14;
    v111 = -1;
    v4->field_18[v92] = v91;
    if (!v91)
        sub_1003E260(4);
    v93 = v91->field_0;
    v91->field_0->field_38(v91, a1, 1138491392, 1115947008, 20481, 2, 5, 1, -1);
    v91->field_4 = sub_10041300;
    LOWORD(v91->field_1E20C) = 52;
    v93->field_34(v91, String2, 1, 4, &unk_100AB458);
    ++LOWORD(v4->field_14);
    v94 = (unk1E214 *)malloc(0x1E214u);
    v111 = 22;
    if (v94)
        v95 = meth_100476C0(v94);
    else
        v95 = 0;
    v96 = v4->field_14;
    v111 = -1;
    v4->field_18[v96] = v95;
    if (!v95)
        sub_1003E260(4);
    v97 = v95->field_0;
    v95->field_0->field_38(v95, a1, 1121189888, 1123418112, 1048577, 2, 5, 1, -1);
    LOWORD(v95->field_1E20C) = 3;
    v98 = getCaptionString(0x36u);
    v97->field_34(v95, v98, 1, 1, &unk_100AB458);
    ++LOWORD(v4->field_14);
    v99 = (unk1E214 *)malloc(0x1E214u);
    v111 = 23;
    if (v99)
        v100 = meth_100476C0(v99);
    else
        v100 = 0;
    v111 = -1;
    v4->field_18[LOWORD(v4->field_14)] = v100;
    if (!v100)
        sub_1003E260(4);
    v101 = v100->field_0;
    v100->field_0->field_38(v100, a1, 1138491392, 1120927744, 20481, 2, 5, 1, -1);
    v100->field_4 = sub_100413B0;
    LOWORD(v100->field_1E20C) = 52;
    v101->field_34(v100, String2, 1, 4, &unk_100AB458);
    ++LOWORD(v4->field_14);
    return 1;
}
// 1003E8B0: using guessed type int sub_1003E8B0();
// 1003E8C0: using guessed type int sub_1003E8C0();
// 1003EB60: using guessed type int __cdecl sub_1003EB60(int);
// 1003FA00: using guessed type int __cdecl sub_1003FA00(int);
// 1003FE80: using guessed type int __cdecl sub_1003FE80(int);
// 10040730: using guessed type int __cdecl sub_10040730(int);
// 100407E0: using guessed type int __cdecl sub_100407E0(int);
// 10041300: using guessed type int __cdecl sub_10041300(int);
// 100413B0: using guessed type int __cdecl sub_100413B0(int);
// 10043FA0: using guessed type int __cdecl sub_10043FA0(int);
// 100AB428: using guessed type int dword_100AB428;
// 100AB42C: using guessed type int dword_100AB42C;
// 100AB448: using guessed type int dword_100AB448;
// 100B3814: using guessed type int dword_100B3814[];
// 10AA28B8: using guessed type int dword_10AA28B8;
