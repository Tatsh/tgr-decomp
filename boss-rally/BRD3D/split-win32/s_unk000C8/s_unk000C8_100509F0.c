#include "types-win32.h"
//----- (100509F0) --------------------------------------------------------
int __cdecl s_unk000C8_100509F0(unk000C8 *a1) {
    WORD v2;            // ax
    unk00348 *v3;       // eax
    unk00348 *v4;       // esi
    WORD v5;            // cx
    unk1E214 *v6;       // eax
    unk1E214 *v7;       // ebp
    WORD v8;            // dx
    unk1E214 *v9;       // eax
    unk1E214 *v10;      // ebp
    WORD v11;           // cx
    unk1E214Vtbl *v12;  // ebx
    LPCSTR v13;         // eax
    unk1E214 *v14;      // eax
    unk1E214 *v15;      // ebp
    unk1A5E0Vtbl *v16;  // eax
    unk1A5E0 *v17;      // ebx
    int v18;            // eax
    int v19;            // ebp
    char *v20;          // eax
    const char *v21;    // eax
    unk1E214 *v22;      // eax
    unk1E214 *v23;      // ebp
    unk1E214Vtbl *v24;  // ebx
    LPCSTR v25;         // eax
    unk1E214 *v26;      // eax
    unk1E214 *v27;      // ebp
    WORD v28;           // dx
    unk1E214Vtbl *v29;  // ebx
    LPCSTR v30;         // eax
    unk1E214 *v31;      // eax
    unk1E214 *v32;      // ebp
    WORD v33;           // cx
    int v34;            // ebx
    unk1E214 *v35;      // eax
    unk1E214 *v36;      // ebp
    __int64 v37;        // rax
    unk1E214 *v38;      // eax
    unk1E214 *v39;      // ebp
    __int64 v40;        // rax
    unk1E214 *v41;      // eax
    unk1E214 *v42;      // ebp
    WORD v43;           // ax
    WORD v44;           // ax
    unk1E214 *v45;      // eax
    unk1E214 *v46;      // ebp
    WORD v47;           // cx
    unk1E214Vtbl *v48;  // ebx
    unk1E214 *v49;      // eax
    unk1E214 *v50;      // ebp
    WORD v51;           // ax
    WORD v52;           // ax
    unk1E214 *v53;      // eax
    unk1E214 *v54;      // ebp
    WORD v55;           // cx
    unk1E214Vtbl *v56;  // ebx
    unk1E214 *v57;      // eax
    unk1E214 *v58;      // ebp
    unk1E214Vtbl *v59;  // ebx
    LPCSTR v60;         // eax
    unk1E214 *v61;      // eax
    unk1E214 *v62;      // ebp
    WORD v63;           // cx
    unk1E214Vtbl *v64;  // ebx
    unk1E214 *v65;      // eax
    unk1E214 *v66;      // ebp
    WORD v67;           // dx
    unk1E214Vtbl *v68;  // ebx
    LPCSTR v69;         // eax
    unk1E214 *v70;      // eax
    unk1E214 *v71;      // ebp
    unk1E214Vtbl *v72;  // ebx
    unk1E214 *v73;      // eax
    unk1E214 *v74;      // ebp
    WORD v75;           // cx
    unk1E214Vtbl *v76;  // ebx
    LPCSTR v77;         // eax
    unk1E214 *v78;      // eax
    unk1E214 *v79;      // ebp
    unk1E214Vtbl *v80;  // ebx
    LPCSTR v81;         // eax
    unk1E214 *v82;      // eax
    unk1E214 *v83;      // ebp
    WORD v84;           // dx
    unk1E214Vtbl *v85;  // ebx
    unk1E214 *v86;      // eax
    unk1E214 *v87;      // ebp
    unk1E214Vtbl *v88;  // ebx
    LPCSTR v89;         // eax
    unk1E214 *v90;      // eax
    unk1E214 *v91;      // ebp
    WORD v92;           // cx
    unk1E214Vtbl *v93;  // ebx
    unk1E214 *v94;      // eax
    unk1E214 *v95;      // ebp
    WORD v96;           // dx
    unk1E214Vtbl *v97;  // ebx
    LPCSTR v98;         // eax
    unk1E214 *v99;      // eax
    unk1E214 *v100;     // ebp
    unk1E214Vtbl *v101; // ebx
    float v103;         // [esp+394h] [ebp-80h]
    float v104;         // [esp+394h] [ebp-80h]
    char *v105;         // [esp+3A8h] [ebp-6Ch]
    float v106;         // [esp+3BCh] [ebp-58h]
    int v107;           // [esp+3C0h] [ebp-54h]
    int v108;           // [esp+3C4h] [ebp-50h]
    char v109[4];       // [esp+3C8h] [ebp-4Ch] BYREF
    char Buffer[32];    // [esp+3E8h] [ebp-2Ch] BYREF
    int v111;           // [esp+410h] [ebp-4h]
    unk000C8 *v112;     // [esp+418h] [ebp+4h]
    float v113;         // [esp+418h] [ebp+4h]
    float v114;         // [esp+418h] [ebp+4h]
    float v115;         // [esp+418h] [ebp+4h]

    v2 = a1->field_10;
    *(&a1->field_10 + 1) = 0;
    *(&a1->field_6C + v2) = 1;
    v3 = (unk00348 *)malloc(0x348u);
    v111 = 0;
    if (v3)
        v4 = meth_unk00348_10048470(v3);
    else
        v4 = 0;
    v5 = a1->field_10;
    v111 = -1;
    a1->field_14[v5] = v4;
    if (!v4)
        sub_1003E260(4);
    ++a1->field_10;
    v4->field_340 = a1;
    v4->field_10 = 0;
    v4->flags_338 = 1128464384;
    v4->field_33C = 130.0;
    v6 = (unk1E214 *)malloc(0x1E214u);
    v111 = 1;
    if (v6)
        v7 = meth_unk1E214_init(v6);
    else
        v7 = 0;
    v8 = v4->field_14;
    v111 = -1;
    v4->field_18[v8] = v7;
    if (!v7)
        sub_1003E260(4);
    v7->lpVtbl->meth14(v7, a1, 0, 0.0, 9, 2, 5, 0, 0);
    ++v4->field_14;
    v9 = (unk1E214 *)malloc(0x1E214u);
    v111 = 2;
    if (v9)
        v10 = meth_unk1E214_init(v9);
    else
        v10 = 0;
    v11 = v4->field_14;
    v111 = -1;
    v4->field_18[v11] = v10;
    if (!v10)
        sub_1003E260(4);
    v12 = v10->lpVtbl;
    v10->lpVtbl->meth14(v10, a1, v4->flags_338, 10.0, 1048585, 2, 5, 1, -1);
    v10->field_3838.field_1A99C[28] = 3;
    v13 = GetStringWithIndex(0x3Du);
    v12->meth13(v10, v13, 1, 1, &unk_100AB508);
    ++v4->field_14;
    v14 = (unk1E214 *)malloc(0x1E214u);
    v111 = 3;
    if (v14)
        v15 = meth_unk1E214_init(v14);
    else
        v15 = 0;
    v111 = -1;
    v4->field_18[v4->field_14] = v15;
    if (!v15)
        sub_1003E260(4);
    v15->lpVtbl->meth14(v15, a1, v4->flags_338, v4->field_33C, 12289, 2, 5, 1, -1);
    v16 = v15->field_3838.lpVtbl;
    v17 = &v15->field_3838;
    v15->field_4 = sub_1003EB60;
    *(_DWORD *)&v15->field_3838.field_1A99C[16] = 1;
    v16->meth5(&v15->field_3838, 2359296, dword_100AB4D8, 5, 0, -1);
    v15->field_14 = (int)sub_1003E8B0;
    v15->field_18 = (int)sub_1003E8C0;
    v18 = 0;
    if (dword_100B3814[6 * (char)dword_10AA28B8] > 0) {
        v112 = (unk000C8 *)v17->lpVtbl->meth4;
        do {
            v19 = v18 + 1;
            v20 = _itoa(v18 + 1, Buffer, 10);
            v105 = _strupr(v20);
            v21 = GetStringWithIndex(0xBFu);
            sprintf(v109, v21, v105);
            ((void(__thiscall *)(unk1A5E0 *, char *, int, int, int *, int))v112)(
                v17, v109, 1, 1, &dword_100AB448, 1);
            v18 = v19;
        } while (v19 < dword_100B3814[6 * (char)dword_10AA28B8]);
    }
    ++v4->field_14;
    v22 = (unk1E214 *)malloc(0x1E214u);
    v111 = 4;
    if (v22)
        v23 = meth_unk1E214_init(v22);
    else
        v23 = 0;
    v111 = -1;
    v4->field_18[v4->field_14] = v23;
    if (!v23)
        sub_1003E260(4);
    v24 = v23->lpVtbl;
    v103 = v4->field_33C - -95.0;
    v23->lpVtbl->meth14(v23, a1, v4->flags_338, v103, 1056769, 2, 5, 1, -1);
    v23->field_C = sub_10047360;
    v23->field_8 = sub_10045DC0;
    v23->field_3838.field_1A99C[28] = 2;
    v25 = GetStringWithIndex(0x1Eu);
    v24->meth13(v23, v25, 1, 0, &dword_100AB448);
    ++v4->field_14;
    ++LOWORD(v4->last);
    v26 = (unk1E214 *)malloc(0x1E214u);
    v111 = 5;
    if (v26)
        v27 = meth_unk1E214_init(v26);
    else
        v27 = 0;
    v28 = v4->field_14;
    v111 = -1;
    v4->field_18[v28] = v27;
    if (!v27)
        sub_1003E260(4);
    v29 = v27->lpVtbl;
    v104 = v4->field_33C - -114.0;
    v27->lpVtbl->meth14(v27, a1, v4->flags_338, v104, 1056769, 2, 5, 1, -1);
    v27->field_C = sub_10047360;
    v27->field_8 = sub_10046F50;
    v27->field_14 = (int)sub_1003E840;
    v27->field_3838.field_1A99C[28] = 3;
    v30 = GetStringWithIndex(0xCu);
    v29->meth13(v27, v30, 1, 1, &dword_100AB448);
    ++v4->field_14;
    ++LOWORD(v4->last);
    v106 = (float)dword_100AB428;
    v113 = (float)dword_100AB42C;
    v31 = (unk1E214 *)malloc(0x1E214u);
    v111 = 6;
    if (v31)
        v32 = meth_unk1E214_init(v31);
    else
        v32 = 0;
    v33 = v4->field_14;
    v111 = -1;
    v4->field_18[v33] = v32;
    if (!v32)
        sub_1003E260(4);
    v32->lpVtbl->meth14(v32, a1, LODWORD(v106), v113, 4202497, 2, 5, 1, 120);
    v32->field_C = sub_10047360;
    v32->field_8 = sub_100457A0;
    v108 = (__int64)v113;
    *(_DWORD *)v32->gap54 = v108;
    v34 = (__int64)v106;
    v32->field_50 = v34;
    v32->field_58 = v34 + 127;
    *(_DWORD *)v32->gap5C = v108 + 33;
    v32->field_2968 = 0;
    v114 = v113 - -33.0;
    *(_WORD *)&v32->field_2A40[2] = 121;
    ++v4->field_14;
    v107 = v34 + 127;
    v35 = (unk1E214 *)malloc(0x1E214u);
    v111 = 7;
    if (v35)
        v36 = meth_unk1E214_init(v35);
    else
        v36 = 0;
    v111 = -1;
    v4->field_18[v4->field_14] = v36;
    if (!v36)
        sub_1003E260(4);
    v36->lpVtbl->meth14(v36, a1, LODWORD(v106), v114, 4202497, 2, 5, 1, 82);
    v36->field_C = sub_10047360;
    v36->field_8 = (int(__cdecl *)())sub_10043FA0;
    v37 = (__int64)v114;
    *(_DWORD *)v36->gap54 = v37;
    v36->field_50 = v34;
    v36->field_58 = v107;
    *(_DWORD *)v36->gap5C = v37 + 33;
    v115 = v114 - -33.0;
    v36->field_2968 = 0;
    *(_WORD *)&v36->field_2A40[2] = 83;
    ++v4->field_14;
    v38 = (unk1E214 *)malloc(0x1E214u);
    v111 = 8;
    if (v38)
        v39 = meth_unk1E214_init(v38);
    else
        v39 = 0;
    v111 = -1;
    v4->field_18[v4->field_14] = v39;
    if (!v39)
        sub_1003E260(4);
    v39->lpVtbl->meth14(v39, a1, LODWORD(v106), v115, 4202497, 2, 5, 1, 84);
    v39->field_C = sub_10047360;
    v39->field_8 = sub_10045780;
    v40 = (__int64)v115;
    *(_DWORD *)v39->gap54 = v40;
    v39->field_50 = v34;
    v39->field_58 = v107;
    *(_DWORD *)v39->gap5C = v40 + 33;
    v39->field_2968 = 0;
    *(_WORD *)&v39->field_2A40[2] = 85;
    ++v4->field_14;
    v41 = (unk1E214 *)malloc(0x1E214u);
    v111 = 9;
    if (v41)
        v42 = meth_unk1E214_init(v41);
    else
        v42 = 0;
    v43 = v4->field_14;
    v111 = -1;
    v4->field_18[v43] = v42;
    if (!v42)
        sub_1003E260(4);
    v42->lpVtbl->meth14(v42, a1, 1116864512, 212.0, 1, 2, 5, 1, 22);
    v42->field_4 = sub_100407E0;
    v44 = v4->field_14 + 1;
    ++v42->field_2AB4[0];
    v42->field_2AB4[1] = v44;
    ++v4->field_14;
    v45 = (unk1E214 *)malloc(0x1E214u);
    v111 = 10;
    if (v45)
        v46 = meth_unk1E214_init(v45);
    else
        v46 = 0;
    v47 = v4->field_14;
    v111 = -1;
    v4->field_18[v47] = v46;
    if (!v46)
        sub_1003E260(4);
    v48 = v46->lpVtbl;
    v46->lpVtbl->meth14(v46, a1, v4->flags_338, 275.0, 1052673, 2, 5, 1, -1);
    v46->field_4 = sub_1003FE80;
    v46->field_3838.field_1A99C[28] = 3;
    v48->meth13(v46, asc_100AD300, 1, 1, &unk_100AB4B8);
    ++v4->field_14;
    v49 = (unk1E214 *)malloc(0x1E214u);
    v111 = 11;
    if (v49)
        v50 = meth_unk1E214_init(v49);
    else
        v50 = 0;
    v51 = v4->field_14;
    v111 = -1;
    v4->field_18[v51] = v50;
    if (!v50)
        sub_1003E260(4);
    v50->lpVtbl->meth14(v50, a1, 1134723072, 72.0, 1, 2, 5, 1, 17);
    v50->field_4 = sub_10040730;
    v52 = v4->field_14 + 1;
    ++v50->field_2AB4[0];
    v50->field_2AB4[1] = v52;
    ++v4->field_14;
    v53 = (unk1E214 *)malloc(0x1E214u);
    v111 = 12;
    if (v53)
        v54 = meth_unk1E214_init(v53);
    else
        v54 = 0;
    v55 = v4->field_14;
    v111 = -1;
    v4->field_18[v55] = v54;
    if (!v54)
        sub_1003E260(4);
    v56 = v54->lpVtbl;
    v54->lpVtbl->meth14(v54, a1, v4->flags_338, 152.0, 1052673, 2, 5, 1, -1);
    v54->field_4 = sub_1003FA00;
    v54->field_3838.field_1A99C[28] = 3;
    v56->meth13(v54, asc_100AD300, 1, 1, &unk_100AB4A8);
    ++v4->field_14;
    v57 = (unk1E214 *)malloc(0x1E214u);
    v111 = 13;
    if (v57)
        v58 = meth_unk1E214_init(v57);
    else
        v58 = 0;
    v111 = -1;
    v4->field_18[v4->field_14] = v58;
    if (!v58)
        sub_1003E260(4);
    v59 = v58->lpVtbl;
    v58->lpVtbl->meth14(v58, a1, 1138819072, 147.0, 1048585, 2, 5, 1, -1);
    v58->field_3838.field_1A99C[28] = 3;
    v60 = GetStringWithIndex(0x3Eu);
    v59->meth13(v58, v60, 1, 1, &unk_100AB4F8);
    ++v4->field_14;
    v61 = (unk1E214 *)malloc(0x1E214u);
    v111 = 14;
    if (v61)
        v62 = meth_unk1E214_init(v61);
    else
        v62 = 0;
    v63 = v4->field_14;
    v111 = -1;
    v4->field_18[v63] = v62;
    if (!v62)
        sub_1003E260(4);
    v64 = v62->lpVtbl;
    v62->lpVtbl->meth14(v62, a1, 1138819072, 128.0, 20481, 2, 5, 1, -1);
    v62->field_4 = sub_10040C00;
    v62->field_3838.field_1A99C[28] = 52;
    v64->meth13(v62, String2, 1, 4, &unk_100AB4F8);
    ++v4->field_14;
    v65 = (unk1E214 *)malloc(0x1E214u);
    v111 = 15;
    if (v65)
        v66 = meth_unk1E214_init(v65);
    else
        v66 = 0;
    v67 = v4->field_14;
    v111 = -1;
    v4->field_18[v67] = v66;
    if (!v66)
        sub_1003E260(4);
    v68 = v66->lpVtbl;
    v66->lpVtbl->meth14(v66, a1, 1138819072, 185.0, 1048585, 2, 5, 1, -1);
    v66->field_3838.field_1A99C[28] = 3;
    v69 = GetStringWithIndex(0x3Fu);
    v68->meth13(v66, v69, 1, 1, &unk_100AB4F8);
    ++v4->field_14;
    v70 = (unk1E214 *)malloc(0x1E214u);
    v111 = 16;
    if (v70)
        v71 = meth_unk1E214_init(v70);
    else
        v71 = 0;
    v111 = -1;
    v4->field_18[v4->field_14] = v71;
    if (!v71)
        sub_1003E260(4);
    v72 = v71->lpVtbl;
    v71->lpVtbl->meth14(v71, a1, 1138819072, 166.0, 20481, 2, 5, 1, -1);
    v71->field_4 = sub_10040D70;
    v71->field_3838.field_1A99C[28] = 52;
    v72->meth13(v71, String2, 1, 4, &unk_100AB4F8);
    ++v4->field_14;
    v73 = (unk1E214 *)malloc(0x1E214u);
    v111 = 17;
    if (v73)
        v74 = meth_unk1E214_init(v73);
    else
        v74 = 0;
    v75 = v4->field_14;
    v111 = -1;
    v4->field_18[v75] = v74;
    if (!v74)
        sub_1003E260(4);
    v76 = v74->lpVtbl;
    v74->lpVtbl->meth14(v74, a1, v4->flags_338, 203.0, 1048585, 2, 5, 1, -1);
    v74->field_3838.field_1A99C[28] = 3;
    v77 = GetStringWithIndex(0x40u);
    v76->meth13(v74, v77, 1, 1, &unk_100AB478);
    ++v4->field_14;
    v78 = (unk1E214 *)malloc(0x1E214u);
    v111 = 18;
    if (v78)
        v79 = meth_unk1E214_init(v78);
    else
        v79 = 0;
    v111 = -1;
    v4->field_18[v4->field_14] = v79;
    if (!v79)
        sub_1003E260(4);
    v80 = v79->lpVtbl;
    v79->lpVtbl->meth14(v79, a1, v4->flags_338, 265.0, 1048585, 2, 5, 1, -1);
    v79->field_3838.field_1A99C[28] = 3;
    v81 = GetStringWithIndex(0x41u);
    v80->meth13(v79, v81, 1, 1, &unk_100AB478);
    ++v4->field_14;
    v82 = (unk1E214 *)malloc(0x1E214u);
    v111 = 19;
    if (v82)
        v83 = meth_unk1E214_init(v82);
    else
        v83 = 0;
    v84 = v4->field_14;
    v111 = -1;
    v4->field_18[v84] = v83;
    if (!v83)
        sub_1003E260(4);
    v85 = v83->lpVtbl;
    v83->lpVtbl->meth14(v83, a1, 1138819072, 217.0, 20481, 2, 5, 1, -1);
    v83->field_4 = sub_100414B0;
    v83->field_3838.field_1A99C[28] = 5;
    v85->meth13(v83, String2, 1, 3, &unk_100AB478);
    ++v4->field_14;
    v86 = (unk1E214 *)malloc(0x1E214u);
    v111 = 20;
    if (v86)
        v87 = meth_unk1E214_init(v86);
    else
        v87 = 0;
    v111 = -1;
    v4->field_18[v4->field_14] = v87;
    if (!v87)
        sub_1003E260(4);
    v88 = v87->lpVtbl;
    v87->lpVtbl->meth14(v87, a1, 1121189888, 85.0, 1048577, 2, 5, 1, -1);
    v87->field_3838.field_1A99C[28] = 3;
    v89 = GetStringWithIndex(0x38u);
    v88->meth13(v87, v89, 1, 1, &unk_100AB458);
    ++v4->field_14;
    v90 = (unk1E214 *)malloc(0x1E214u);
    v111 = 21;
    if (v90)
        v91 = meth_unk1E214_init(v90);
    else
        v91 = 0;
    v92 = v4->field_14;
    v111 = -1;
    v4->field_18[v92] = v91;
    if (!v91)
        sub_1003E260(4);
    v93 = v91->lpVtbl;
    v91->lpVtbl->meth14(v91, a1, 1138491392, 66.0, 20481, 2, 5, 1, -1);
    v91->field_4 = sub_10041300;
    v91->field_3838.field_1A99C[28] = 52;
    v93->meth13(v91, String2, 1, 4, &unk_100AB458);
    ++v4->field_14;
    v94 = (unk1E214 *)malloc(0x1E214u);
    v111 = 22;
    if (v94)
        v95 = meth_unk1E214_init(v94);
    else
        v95 = 0;
    v96 = v4->field_14;
    v111 = -1;
    v4->field_18[v96] = v95;
    if (!v95)
        sub_1003E260(4);
    v97 = v95->lpVtbl;
    v95->lpVtbl->meth14(v95, a1, 1121189888, 123.0, 1048577, 2, 5, 1, -1);
    v95->field_3838.field_1A99C[28] = 3;
    v98 = GetStringWithIndex(0x36u);
    v97->meth13(v95, v98, 1, 1, &unk_100AB458);
    ++v4->field_14;
    v99 = (unk1E214 *)malloc(0x1E214u);
    v111 = 23;
    if (v99)
        v100 = meth_unk1E214_init(v99);
    else
        v100 = 0;
    v111 = -1;
    v4->field_18[v4->field_14] = v100;
    if (!v100)
        sub_1003E260(4);
    v101 = v100->lpVtbl;
    v100->lpVtbl->meth14(v100, a1, 1138491392, 104.0, 20481, 2, 5, 1, -1);
    v100->field_4 = sub_100413B0;
    v100->field_3838.field_1A99C[28] = 52;
    v101->meth13(v100, String2, 1, 4, &unk_100AB458);
    ++v4->field_14;
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
