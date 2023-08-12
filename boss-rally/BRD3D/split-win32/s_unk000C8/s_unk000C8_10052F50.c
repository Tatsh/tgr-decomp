#include "types-win32.h"
//----- (10052F50) --------------------------------------------------------
int __cdecl s_unk000C8_10052F50(unk000C8 *a1) {
    unk00348 *v2;      // eax
    unk00348 *v3;      // esi
    unk1E214 *v4;      // eax
    unk1E214 *v5;      // ebp
    unk1E214 *v6;      // eax
    unk1E214 *v7;      // ebp
    unk1E214Vtbl *v8;  // ebx
    LPCSTR v9;         // eax
    unk1E214 *v10;     // eax
    unk1E214 *v11;     // ebp
    unk1E214Vtbl *v12; // ebx
    LPCSTR v13;        // eax
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
    unk1E214Vtbl *v24; // ebx
    LPCSTR v25;        // eax
    unk1E214 *v26;     // eax
    unk1E214 *v27;     // ebp
    unk1E214Vtbl *v28; // ebx
    LPCSTR v29;        // eax
    unk1E214 *v30;     // eax
    unk1E214 *v31;     // ebp
    int v32;           // ebx
    unk1E214 *v33;     // eax
    unk1E214 *v34;     // ebp
    __int64 v35;       // rax
    unk1E214 *v36;     // eax
    unk1E214 *v37;     // ebp
    __int64 v38;       // rax
    unk1E214 *v39;     // eax
    unk1E214 *v40;     // ebp
    unk1E214Vtbl *v41; // ebx
    LPCSTR v42;        // eax
    unk1E214 *v43;     // eax
    unk1E214 *v44;     // ebp
    unk1E214Vtbl *v45; // ebx
    unk1E214 *v46;     // eax
    unk1E214 *v47;     // ebp
    WORD v48;          // cx
    unk1E214 *v49;     // eax
    unk1E214 *v50;     // ebp
    unk1E214Vtbl *v51; // ebx
    unk1E214 *v52;     // eax
    unk1E214 *v53;     // ebp
    WORD v54;          // ax
    unk1E214 *v55;     // eax
    unk1E214 *v56;     // ebp
    unk1E214Vtbl *v57; // ebx
    unk1E214 *v58;     // eax
    unk1E214 *v59;     // ebp
    unk1E214Vtbl *v60; // ebx
    LPCSTR v61;        // eax
    unk1E214 *v62;     // eax
    unk1E214 *v63;     // ebp
    unk1E214Vtbl *v64; // ebx
    unk1E214 *v65;     // eax
    unk1E214 *v66;     // ebp
    unk1E214Vtbl *v67; // ebx
    LPCSTR v68;        // eax
    unk1E214 *v69;     // eax
    unk1E214 *v70;     // ebp
    unk1E214Vtbl *v71; // ebx
    float v73;         // [esp+32Ch] [ebp-40h]
    float v74;         // [esp+32Ch] [ebp-40h]
    float v75;         // [esp+32Ch] [ebp-40h]
    float v76;         // [esp+32Ch] [ebp-40h]
    float v77;         // [esp+354h] [ebp-18h]
    int v78;           // [esp+358h] [ebp-14h]
    int v79;           // [esp+35Ch] [ebp-10h]
    float v80;         // [esp+370h] [ebp+4h]
    float v81;         // [esp+370h] [ebp+4h]
    float v82;         // [esp+370h] [ebp+4h]

    *(&a1->field_10 + 1) = 0;
    dword_10AA28AC = dword_10AA28A4;
    *(&a1->field_6C + a1->field_10) = 1;
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
    v3->flags_338 = 1128464384;
    v3->field_33C = 130.0;
    v3->field_4 = sub_100409F0;
    v3->field_8 = sub_10040A20;
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
    v9 = text_GetStringWithIndex(0x47u);
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
    v11->lpVtbl->meth14(v11, a1, v3->flags_338, v3->field_33C, 1056769, 2, 5, 1, -1);
    v11->field_C = sub_10047360;
    v11->field_8 = sub_100412C0;
    v11->field_3838.field_1A99C[28] = 3;
    v13 = text_GetStringWithIndex(0x48u);
    v12->meth13(v11, v13, 1, 1, &dword_100AB448);
    ++v3->field_14;
    ++LOWORD(v3->last);
    v14 = (unk1E214 *)malloc(0x1E214u);
    if (v14)
        v15 = meth_unk1E214_init(v14);
    else
        v15 = 0;
    v3->field_18[v3->field_14] = v15;
    if (!v15)
        sub_1003E260(4);
    v16 = v15->lpVtbl;
    v73 = v3->field_33C - -19.0;
    v15->lpVtbl->meth14(v15, a1, v3->flags_338, v73, 1056769, 2, 5, 1, -1);
    v15->field_C = sub_10047360;
    v15->field_8 = sub_100412D0;
    v15->field_3838.field_1A99C[28] = 3;
    v17 = text_GetStringWithIndex(0x49u);
    v16->meth13(v15, v17, 1, 1, &dword_100AB448);
    ++v3->field_14;
    ++LOWORD(v3->last);
    v18 = (unk1E214 *)malloc(0x1E214u);
    if (v18)
        v19 = meth_unk1E214_init(v18);
    else
        v19 = 0;
    v3->field_18[v3->field_14] = v19;
    if (!v19)
        sub_1003E260(4);
    v20 = v19->lpVtbl;
    v74 = v3->field_33C - -38.0;
    v19->lpVtbl->meth14(v19, a1, v3->flags_338, v74, 1056769, 2, 5, 1, -1);
    v19->field_C = sub_10047360;
    v19->field_8 = sub_100412E0;
    v19->field_3838.field_1A99C[28] = 3;
    v21 = text_GetStringWithIndex(0x4Au);
    v20->meth13(v19, v21, 1, 1, &dword_100AB448);
    ++v3->field_14;
    ++LOWORD(v3->last);
    v22 = (unk1E214 *)malloc(0x1E214u);
    if (v22)
        v23 = meth_unk1E214_init(v22);
    else
        v23 = 0;
    v3->field_18[v3->field_14] = v23;
    if (!v23)
        sub_1003E260(4);
    v24 = v23->lpVtbl;
    v75 = v3->field_33C - -57.0;
    v23->lpVtbl->meth14(v23, a1, v3->flags_338, v75, 1056769, 2, 5, 1, -1);
    v23->field_C = sub_10047360;
    v23->field_8 = sub_100412F0;
    v23->field_3838.field_1A99C[28] = 3;
    v25 = text_GetStringWithIndex(0x4Bu);
    v24->meth13(v23, v25, 1, 1, &dword_100AB448);
    ++v3->field_14;
    ++LOWORD(v3->last);
    v26 = (unk1E214 *)malloc(0x1E214u);
    if (v26)
        v27 = meth_unk1E214_init(v26);
    else
        v27 = 0;
    v3->field_18[v3->field_14] = v27;
    if (!v27)
        sub_1003E260(4);
    v28 = v27->lpVtbl;
    v76 = v3->field_33C - -95.0;
    v27->lpVtbl->meth14(v27, a1, v3->flags_338, v76, 1056769, 2, 5, 1, -1);
    v27->field_C = sub_10047360;
    v27->field_8 = (int(__cdecl *)())sub_10045F70;
    v27->field_3838.field_1A99C[28] = 3;
    v29 = text_GetStringWithIndex(0x1Eu);
    v28->meth13(v27, v29, 1, 1, &dword_100AB448);
    ++v3->field_14;
    ++LOWORD(v3->last);
    v77 = (float)dword_100AB428;
    v80 = (float)dword_100AB42C;
    v30 = (unk1E214 *)malloc(0x1E214u);
    if (v30)
        v31 = meth_unk1E214_init(v30);
    else
        v31 = 0;
    v3->field_18[v3->field_14] = v31;
    if (!v31)
        sub_1003E260(4);
    v31->lpVtbl->meth14(v31, a1, LODWORD(v77), v80, 4202497, 2, 5, 1, 120);
    v31->field_C = sub_10047360;
    v31->field_8 = sub_10045820;
    v79 = (__int64)v80;
    *(_DWORD *)v31->gap54 = v79;
    v32 = (__int64)v77;
    v31->field_50 = v32;
    v31->field_58 = v32 + 127;
    *(_DWORD *)v31->gap5C = v79 + 33;
    v31->field_2968 = 0;
    v81 = v80 - -33.0;
    *(_WORD *)&v31->field_2A40[2] = 121;
    ++v3->field_14;
    v78 = v32 + 127;
    v33 = (unk1E214 *)malloc(0x1E214u);
    if (v33)
        v34 = meth_unk1E214_init(v33);
    else
        v34 = 0;
    v3->field_18[v3->field_14] = v34;
    if (!v34)
        sub_1003E260(4);
    v34->lpVtbl->meth14(v34, a1, LODWORD(v77), v81, 4202497, 2, 5, 1, 82);
    v34->field_C = sub_10047360;
    v34->field_8 = (int(__cdecl *)())sub_10043FA0;
    v35 = (__int64)v81;
    *(_DWORD *)v34->gap54 = v35;
    v34->field_50 = v32;
    v34->field_58 = v78;
    *(_DWORD *)v34->gap5C = v35 + 33;
    v82 = v81 - -33.0;
    v34->field_2968 = 0;
    *(_WORD *)&v34->field_2A40[2] = 83;
    ++v3->field_14;
    v36 = (unk1E214 *)malloc(0x1E214u);
    if (v36)
        v37 = meth_unk1E214_init(v36);
    else
        v37 = 0;
    v3->field_18[v3->field_14] = v37;
    if (!v37)
        sub_1003E260(4);
    v37->lpVtbl->meth14(v37, a1, LODWORD(v77), v82, 4202497, 2, 5, 1, 84);
    v37->field_C = sub_10047360;
    v37->field_8 = sub_10045800;
    v38 = (__int64)v82;
    *(_DWORD *)v37->gap54 = v38;
    v37->field_50 = v32;
    v37->field_58 = v78;
    *(_DWORD *)v37->gap5C = v38 + 33;
    v37->field_2968 = 0;
    *(_WORD *)&v37->field_2A40[2] = 85;
    ++v3->field_14;
    v39 = (unk1E214 *)malloc(0x1E214u);
    if (v39)
        v40 = meth_unk1E214_init(v39);
    else
        v40 = 0;
    v3->field_18[v3->field_14] = v40;
    if (!v40)
        sub_1003E260(4);
    v41 = v40->lpVtbl;
    v40->lpVtbl->meth14(v40, a1, 1121189888, 123.0, 1048577, 2, 5, 1, -1);
    v40->field_3838.field_1A99C[28] = 3;
    v42 = text_GetStringWithIndex(0x4Cu);
    v41->meth13(v40, v42, 1, 1, &unk_100AB458);
    ++v3->field_14;
    v43 = (unk1E214 *)malloc(0x1E214u);
    if (v43)
        v44 = meth_unk1E214_init(v43);
    else
        v44 = 0;
    v3->field_18[v3->field_14] = v44;
    if (!v44)
        sub_1003E260(4);
    v45 = v44->lpVtbl;
    v44->lpVtbl->meth14(v44, a1, 1138491392, 79.0, 20481, 2, 5, 1, -1);
    v44->field_4 = sub_1003E8D0;
    v44->field_3838.field_1A99C[28] = 5;
    v45->meth13(v44, String2, 1, 3, &unk_100AB458);
    ++v3->field_14;
    v46 = (unk1E214 *)malloc(0x1E214u);
    if (v46)
        v47 = meth_unk1E214_init(v46);
    else
        v47 = 0;
    v3->field_18[v3->field_14] = v47;
    if (!v47)
        sub_1003E260(4);
    v47->lpVtbl->meth14(v47, a1, 1116864512, 212.0, 1, 2, 5, 1, 22);
    v47->field_4 = sub_100407E0;
    v48 = v3->field_14 + 1;
    ++v47->field_2AB4[0];
    v47->field_2AB4[1] = v48;
    ++v3->field_14;
    v49 = (unk1E214 *)malloc(0x1E214u);
    if (v49)
        v50 = meth_unk1E214_init(v49);
    else
        v50 = 0;
    v3->field_18[v3->field_14] = v50;
    if (!v50)
        sub_1003E260(4);
    v51 = v50->lpVtbl;
    v50->lpVtbl->meth14(v50, a1, v3->flags_338, 275.0, 1052673, 2, 5, 1, -1);
    v50->field_4 = sub_1003FE80;
    v50->field_3838.field_1A99C[28] = 3;
    v51->meth13(v50, asc_100AD300, 1, 1, &unk_100AB4B8);
    ++v3->field_14;
    v52 = (unk1E214 *)malloc(0x1E214u);
    if (v52)
        v53 = meth_unk1E214_init(v52);
    else
        v53 = 0;
    v3->field_18[v3->field_14] = v53;
    if (!v53)
        sub_1003E260(4);
    v53->lpVtbl->meth14(v53, a1, 1134723072, 72.0, 1, 2, 5, 1, 17);
    v53->field_4 = sub_10040730;
    v54 = v3->field_14 + 1;
    ++v53->field_2AB4[0];
    v53->field_2AB4[1] = v54;
    ++v3->field_14;
    v55 = (unk1E214 *)malloc(0x1E214u);
    if (v55)
        v56 = meth_unk1E214_init(v55);
    else
        v56 = 0;
    v3->field_18[v3->field_14] = v56;
    if (!v56)
        sub_1003E260(4);
    v57 = v56->lpVtbl;
    v56->lpVtbl->meth14(v56, a1, v3->flags_338, 152.0, 1052673, 2, 5, 1, -1);
    v56->field_4 = sub_1003FA00;
    v56->field_3838.field_1A99C[28] = 3;
    v57->meth13(v56, asc_100AD300, 1, 1, &unk_100AB4A8);
    ++v3->field_14;
    v58 = (unk1E214 *)malloc(0x1E214u);
    if (v58)
        v59 = meth_unk1E214_init(v58);
    else
        v59 = 0;
    v3->field_18[v3->field_14] = v59;
    if (!v59)
        sub_1003E260(4);
    v60 = v59->lpVtbl;
    v59->lpVtbl->meth14(v59, a1, 1138819072, 185.0, 1048585, 2, 5, 1, -1);
    v59->field_3838.field_1A99C[28] = 3;
    v61 = text_GetStringWithIndex(0x4Du);
    v60->meth13(v59, v61, 1, 1, &unk_100AB4F8);
    ++v3->field_14;
    v62 = (unk1E214 *)malloc(0x1E214u);
    if (v62)
        v63 = meth_unk1E214_init(v62);
    else
        v63 = 0;
    v3->field_18[v3->field_14] = v63;
    if (!v63)
        sub_1003E260(4);
    v64 = v63->lpVtbl;
    v63->lpVtbl->meth14(v63, a1, 1138819072, 166.0, 20481, 2, 5, 1, -1);
    v63->field_4 = sub_10040EE0;
    v63->field_3838.field_1A99C[28] = 52;
    v64->meth13(v63, String2, 1, 4, &unk_100AB4F8);
    ++v3->field_14;
    v65 = (unk1E214 *)malloc(0x1E214u);
    if (v65)
        v66 = meth_unk1E214_init(v65);
    else
        v66 = 0;
    v3->field_18[v3->field_14] = v66;
    if (!v66)
        sub_1003E260(4);
    v67 = v66->lpVtbl;
    v66->lpVtbl->meth14(v66, a1, v3->flags_338, 258.0, 1048585, 2, 5, 1, -1);
    v66->field_3838.field_1A99C[28] = 3;
    v68 = text_GetStringWithIndex(0x40u);
    v67->meth13(v66, v68, 1, 1, &unk_100AB478);
    ++v3->field_14;
    v69 = (unk1E214 *)malloc(0x1E214u);
    if (v69)
        v70 = meth_unk1E214_init(v69);
    else
        v70 = 0;
    v3->field_18[v3->field_14] = v70;
    if (!v70)
        sub_1003E260(4);
    v71 = v70->lpVtbl;
    v70->lpVtbl->meth14(v70, a1, 1138819072, 211.0, 20481, 2, 5, 1, -1);
    v70->field_4 = sub_1003EA90;
    v70->field_3838.field_1A99C[28] = 5;
    v71->meth13(v70, String2, 1, 3, &unk_100AB478);
    ++v3->field_14;
    return 1;
}
// 1003E8D0: using guessed type int __cdecl sub_1003E8D0(int);
// 1003EA90: using guessed type int __cdecl sub_1003EA90(int);
// 1003FA00: using guessed type int __cdecl sub_1003FA00(int);
// 1003FE80: using guessed type int __cdecl sub_1003FE80(int);
// 10040730: using guessed type int __cdecl sub_10040730(int);
// 100407E0: using guessed type int __cdecl sub_100407E0(int);
// 100409F0: using guessed type int sub_100409F0();
// 10040A20: using guessed type int sub_10040A20();
// 10043FA0: using guessed type int __cdecl sub_10043FA0(int);
// 100AB428: using guessed type int dword_100AB428;
// 100AB42C: using guessed type int dword_100AB42C;
// 100AB448: using guessed type int dword_100AB448;
// 10AA28A4: using guessed type int dword_10AA28A4;
// 10AA28AC: using guessed type int dword_10AA28AC;
