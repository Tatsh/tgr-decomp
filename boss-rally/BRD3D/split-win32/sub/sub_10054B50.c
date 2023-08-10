#include "types-win32.h"
//----- (10054B50) --------------------------------------------------------
int __cdecl sub_10054B50(unk000C8 *a1) {
    WORD v2;           // ax
    unk00348 *v3;      // eax
    unk00348 *v4;      // esi
    unk1E214 *v5;      // eax
    unk1E214 *v6;      // ebp
    unk1E214 *v7;      // eax
    unk1E214 *v8;      // ebp
    unk1E214Vtbl *v9;  // ebx
    LPCSTR v10;        // eax
    unk1E214 *v11;     // eax
    unk1E214 *v12;     // ebp
    unk1E214Vtbl *v13; // ebx
    LPCSTR v14;        // eax
    unk1E214 *v15;     // eax
    unk1E214 *v16;     // ebp
    unk1E214Vtbl *v17; // ebx
    LPCSTR v18;        // eax
    unk1E214 *v19;     // eax
    unk1E214 *v20;     // ebp
    int v21;           // ebx
    unk1E214 *v22;     // eax
    unk1E214 *v23;     // ebp
    __int64 v24;       // rax
    unk1E214 *v25;     // eax
    unk1E214 *v26;     // ebp
    __int64 v27;       // rax
    unk1E214 *v28;     // eax
    unk1E214 *v29;     // ebp
    unk1E214Vtbl *v30; // ebx
    LPCSTR v31;        // eax
    unk1E214 *v32;     // eax
    unk1E214 *v33;     // ebp
    unk1E214Vtbl *v34; // ebx
    unk1E214 *v35;     // eax
    unk1E214 *v36;     // ebp
    unk1E214Vtbl *v37; // ebx
    LPCSTR v38;        // eax
    unk1E214 *v39;     // eax
    unk1E214 *v40;     // ebp
    unk1E214Vtbl *v41; // ebx
    unk1E214 *v42;     // eax
    unk1E214 *v43;     // ebp
    unk1E214Vtbl *v44; // ebx
    LPCSTR v45;        // eax
    unk1E214 *v46;     // eax
    unk1E214 *v47;     // ebp
    unk1E214Vtbl *v48; // ebx
    unk1E214 *v49;     // eax
    unk1E214 *v50;     // ebp
    unk1E214Vtbl *v51; // ebx
    LPCSTR v52;        // eax
    unk1E214 *v53;     // eax
    unk1E214 *v54;     // ebp
    unk1E214Vtbl *v55; // ebx
    LPCSTR v56;        // eax
    unk1E214 *v57;     // eax
    unk1E214 *v58;     // ebp
    unk1E214Vtbl *v59; // ebx
    LPCSTR v60;        // eax
    unk1E214 *v61;     // eax
    unk1E214 *v62;     // ebp
    unk1E214Vtbl *v63; // ebx
    unk1E214 *v64;     // eax
    unk1E214 *v65;     // ebp
    unk1E214Vtbl *v66; // ebx
    LPCSTR v67;        // eax
    unk1E214 *v68;     // eax
    unk1E214 *v69;     // ebp
    unk1E214Vtbl *v70; // ebx
    LPCSTR v71;        // eax
    unk1E214 *v72;     // eax
    unk1E214 *v73;     // ebp
    unk1E214Vtbl *v74; // ebx
    float v76;         // [esp+34Ch] [ebp-40h]
    float v77;         // [esp+34Ch] [ebp-40h]
    float v78;         // [esp+374h] [ebp-18h]
    int v79;           // [esp+378h] [ebp-14h]
    int v80;           // [esp+37Ch] [ebp-10h]
    float v81;         // [esp+390h] [ebp+4h]
    float v82;         // [esp+390h] [ebp+4h]
    float v83;         // [esp+390h] [ebp+4h]

    v2 = a1->field_10;
    *(&a1->field_10 + 1) = 0;
    *(&a1->field_6C + v2) = 1;
    v3 = (unk00348 *)malloc(0x348u);
    if (v3)
        v4 = meth_10048470(v3);
    else
        v4 = 0;
    a1->field_14[a1->field_10] = v4;
    if (!v4)
        sub_1003E260(4);
    ++a1->field_10;
    v4->field_340 = a1;
    v4->field_4 = sub_100409F0;
    v4->field_8 = sub_10040A20;
    v4->field_10 = 0;
    v4->flags_338 = 1128464384;
    v4->field_33C = 130.0;
    v5 = (unk1E214 *)malloc(0x1E214u);
    if (v5)
        v6 = meth_unk1E214_init(v5);
    else
        v6 = 0;
    v4->field_18[v4->field_14] = v6;
    if (!v6)
        sub_1003E260(4);
    v6->lpVtbl->meth14(v6, a1, 0, 0.0, 9, 2, 5, 0, 0);
    ++v4->field_14;
    v7 = (unk1E214 *)malloc(0x1E214u);
    if (v7)
        v8 = meth_unk1E214_init(v7);
    else
        v8 = 0;
    v4->field_18[v4->field_14] = v8;
    if (!v8)
        sub_1003E260(4);
    v9 = v8->lpVtbl;
    v8->lpVtbl->meth14(v8, a1, v4->flags_338, 10.0, 1048585, 2, 5, 1, -1);
    v8->field_3838.field_1A99C[28] = 3;
    v10 = GetStringWithIndex(0x4Fu);
    v9->meth13(v8, v10, 1, 1, &unk_100AB508);
    ++v4->field_14;
    v11 = (unk1E214 *)malloc(0x1E214u);
    if (v11)
        v12 = meth_unk1E214_init(v11);
    else
        v12 = 0;
    v4->field_18[v4->field_14] = v12;
    if (!v12)
        sub_1003E260(4);
    v13 = v12->lpVtbl;
    v76 = v4->field_33C - -95.0;
    v12->lpVtbl->meth14(v12, a1, v4->flags_338, v76, 1056769, 2, 5, 1, -1);
    v12->field_C = sub_10047360;
    v12->field_8 = (int(__cdecl *)())sub_10047290;
    v12->field_3838.field_1A99C[28] = 3;
    v14 = GetStringWithIndex(0x50u);
    v13->meth13(v12, v14, 1, 1, &dword_100AB448);
    ++v4->field_14;
    ++LOWORD(v4->last);
    v15 = (unk1E214 *)malloc(0x1E214u);
    if (v15)
        v16 = meth_unk1E214_init(v15);
    else
        v16 = 0;
    v4->field_18[v4->field_14] = v16;
    if (!v16)
        sub_1003E260(4);
    v17 = v16->lpVtbl;
    v77 = v4->field_33C - -114.0;
    v16->lpVtbl->meth14(v16, a1, v4->flags_338, v77, 1056769, 2, 5, 1, -1);
    v16->field_C = sub_10047360;
    v16->field_8 = (int(__cdecl *)())sub_100470E0;
    v16->field_3838.field_1A99C[28] = 3;
    v18 = GetStringWithIndex(0xCu);
    v17->meth13(v16, v18, 1, 1, &dword_100AB448);
    ++v4->field_14;
    ++LOWORD(v4->last);
    v78 = (float)dword_100AB428;
    v81 = (float)dword_100AB42C;
    v19 = (unk1E214 *)malloc(0x1E214u);
    if (v19)
        v20 = meth_unk1E214_init(v19);
    else
        v20 = 0;
    v4->field_18[v4->field_14] = v20;
    if (!v20)
        sub_1003E260(4);
    v20->lpVtbl->meth14(v20, a1, LODWORD(v78), v81, 0x402001, 2, 5, 1, 120);
    v20->field_C = sub_10047360;
    v20->field_8 = sub_100458A0;
    v80 = (__int64)v81;
    *(_DWORD *)v20->gap54 = v80;
    v21 = (__int64)v78;
    v20->field_50 = v21;
    v20->field_58 = v21 + 127;
    *(_DWORD *)v20->gap5C = v80 + 33;
    v20->field_2968 = 0;
    v82 = v81 - -33.0;
    *(_WORD *)&v20->field_2A40[2] = 121;
    ++v4->field_14;
    v79 = v21 + 127;
    v22 = (unk1E214 *)malloc(0x1E214u);
    if (v22)
        v23 = meth_unk1E214_init(v22);
    else
        v23 = 0;
    v4->field_18[v4->field_14] = v23;
    if (!v23)
        sub_1003E260(4);
    v23->lpVtbl->meth14(v23, a1, LODWORD(v78), v82, 0x402001, 2, 5, 1, 82);
    v23->field_C = sub_10047360;
    v23->field_8 = (int(__cdecl *)())sub_10043FA0;
    v24 = (__int64)v82;
    *(_DWORD *)v23->gap54 = v24;
    v23->field_50 = v21;
    v23->field_58 = v79;
    *(_DWORD *)v23->gap5C = v24 + 33;
    v83 = v82 - -33.0;
    v23->field_2968 = 0;
    *(_WORD *)&v23->field_2A40[2] = 83;
    ++v4->field_14;
    v25 = (unk1E214 *)malloc(0x1E214u);
    if (v25)
        v26 = meth_unk1E214_init(v25);
    else
        v26 = 0;
    v4->field_18[v4->field_14] = v26;
    if (!v26)
        sub_1003E260(4);
    v26->lpVtbl->meth14(v26, a1, LODWORD(v78), v83, 4202497, 2, 5, 1, 84);
    v26->field_C = sub_10047360;
    v26->field_8 = sub_10045880;
    v27 = (__int64)v83;
    *(_DWORD *)v26->gap54 = v27;
    v26->field_50 = v21;
    v26->field_58 = v79;
    *(_DWORD *)v26->gap5C = v27 + 33;
    v26->field_2968 = 0;
    *(_WORD *)&v26->field_2A40[2] = 85;
    ++v4->field_14;
    v28 = (unk1E214 *)malloc(0x1E214u);
    if (v28)
        v29 = meth_unk1E214_init(v28);
    else
        v29 = 0;
    v4->field_18[v4->field_14] = v29;
    if (!v29)
        sub_1003E260(4);
    v30 = v29->lpVtbl;
    v29->lpVtbl->meth14(v29, a1, 1121189888, 85.0, 1048577, 2, 5, 1, -1);
    v29->field_3838.field_1A99C[28] = 3;
    v31 = GetStringWithIndex(0x38u);
    v30->meth13(v29, v31, 1, 1, &unk_100AB458);
    ++v4->field_14;
    v32 = (unk1E214 *)malloc(0x1E214u);
    if (v32)
        v33 = meth_unk1E214_init(v32);
    else
        v33 = 0;
    v4->field_18[v4->field_14] = v33;
    if (!v33)
        sub_1003E260(4);
    v34 = v33->lpVtbl;
    v33->lpVtbl->meth14(v33, a1, 1138491392, 66.0, 20481, 2, 5, 1, -1);
    v33->field_4 = sub_10041300;
    v33->field_3838.field_1A99C[28] = 52;
    v34->meth13(v33, String2, 1, 4, &unk_100AB458);
    ++v4->field_14;
    v35 = (unk1E214 *)malloc(0x1E214u);
    if (v35)
        v36 = meth_unk1E214_init(v35);
    else
        v36 = 0;
    v4->field_18[v4->field_14] = v36;
    if (!v36)
        sub_1003E260(4);
    v37 = v36->lpVtbl;
    v36->lpVtbl->meth14(v36, a1, 1121189888, 123.0, 1048577, 2, 5, 1, -1);
    v36->field_3838.field_1A99C[28] = 3;
    v38 = GetStringWithIndex(0x36u);
    v37->meth13(v36, v38, 1, 1, &unk_100AB458);
    ++v4->field_14;
    v39 = (unk1E214 *)malloc(0x1E214u);
    if (v39)
        v40 = meth_unk1E214_init(v39);
    else
        v40 = 0;
    v4->field_18[v4->field_14] = v40;
    if (!v40)
        sub_1003E260(4);
    v41 = v40->lpVtbl;
    v40->lpVtbl->meth14(v40, a1, 1138491392, 104.0, 20481, 2, 5, 1, -1);
    v40->field_4 = sub_100413B0;
    v40->field_3838.field_1A99C[28] = 52;
    v41->meth13(v40, String2, 1, 4, &unk_100AB458);
    ++v4->field_14;
    v42 = (unk1E214 *)malloc(0x1E214u);
    if (v42)
        v43 = meth_unk1E214_init(v42);
    else
        v43 = 0;
    v4->field_18[v4->field_14] = v43;
    if (!v43)
        sub_1003E260(4);
    v44 = v43->lpVtbl;
    v43->lpVtbl->meth14(v43, a1, 0, 70.0, 1048585, 2, 5, 1, -1);
    v43->field_3838.field_1A99C[28] = 3;
    v45 = GetStringWithIndex(0x52u);
    v44->meth13(v43, v45, 1, 1, &unk_100AB468);
    ++v4->field_14;
    v46 = (unk1E214 *)malloc(0x1E214u);
    if (v46)
        v47 = meth_unk1E214_init(v46);
    else
        v47 = 0;
    v4->field_18[v4->field_14] = v47;
    if (!v47)
        sub_1003E260(4);
    v48 = v47->lpVtbl;
    v47->lpVtbl->meth14(v47, a1, 1134886912, 97.0, 20481, 2, 5, 1, -1);
    v47->field_4 = sub_10041670;
    v47->field_3838.field_1A99C[28] = 5;
    v48->meth13(v47, String2, 1, 3, &unk_100AB468);
    ++v4->field_14;
    v49 = (unk1E214 *)malloc(0x1E214u);
    if (v49)
        v50 = meth_unk1E214_init(v49);
    else
        v50 = 0;
    v4->field_18[v4->field_14] = v50;
    if (!v50)
        sub_1003E260(4);
    v51 = v50->lpVtbl;
    v50->lpVtbl->meth14(v50, a1, 0, 150.0, 1048585, 2, 5, 1, -1);
    v50->field_3838.field_1A99C[28] = 3;
    v52 = GetStringWithIndex(0x53u);
    v51->meth13(v50, v52, 1, 1, &unk_100AB468);
    ++v4->field_14;
    v53 = (unk1E214 *)malloc(0x1E214u);
    if (v53)
        v54 = meth_unk1E214_init(v53);
    else
        v54 = 0;
    v4->field_18[v4->field_14] = v54;
    if (!v54)
        sub_1003E260(4);
    v55 = v54->lpVtbl;
    v54->lpVtbl->meth14(v54, a1, 1138819072, 125.0, 1048585, 2, 5, 1, -1);
    v54->field_3838.field_1A99C[28] = 3;
    v56 = GetStringWithIndex(0x40u);
    v55->meth13(v54, v56, 1, 1, &unk_100AB4F8);
    ++v4->field_14;
    v57 = (unk1E214 *)malloc(0x1E214u);
    if (v57)
        v58 = meth_unk1E214_init(v57);
    else
        v58 = 0;
    v4->field_18[v4->field_14] = v58;
    if (!v58)
        sub_1003E260(4);
    v59 = v58->lpVtbl;
    v58->lpVtbl->meth14(v58, a1, 1138819072, 185.0, 1048585, 2, 5, 1, -1);
    v58->field_3838.field_1A99C[28] = 3;
    v60 = GetStringWithIndex(0x46u);
    v59->meth13(v58, v60, 1, 1, &unk_100AB4F8);
    ++v4->field_14;
    v61 = (unk1E214 *)malloc(0x1E214u);
    if (v61)
        v62 = meth_unk1E214_init(v61);
    else
        v62 = 0;
    v4->field_18[v4->field_14] = v62;
    if (!v62)
        sub_1003E260(4);
    v63 = v62->lpVtbl;
    v62->lpVtbl->meth14(v62, a1, 1138819072, 141.0, 20481, 2, 5, 1, -1);
    v62->field_4 = sub_100417B0;
    v62->field_3838.field_1A99C[28] = 5;
    v63->meth13(v62, String2, 1, 3, &unk_100AB4F8);
    ++v4->field_14;
    v64 = (unk1E214 *)malloc(0x1E214u);
    if (v64)
        v65 = meth_unk1E214_init(v64);
    else
        v65 = 0;
    v4->field_18[v4->field_14] = v65;
    if (!v65)
        sub_1003E260(4);
    v66 = v65->lpVtbl;
    v65->lpVtbl->meth14(v65, a1, v4->flags_338, 203.0, 1048585, 2, 5, 1, -1);
    v65->field_3838.field_1A99C[28] = 3;
    v67 = GetStringWithIndex(0x40u);
    v66->meth13(v65, v67, 1, 1, &unk_100AB478);
    ++v4->field_14;
    v68 = (unk1E214 *)malloc(0x1E214u);
    if (v68)
        v69 = meth_unk1E214_init(v68);
    else
        v69 = 0;
    v4->field_18[v4->field_14] = v69;
    if (!v69)
        sub_1003E260(4);
    v70 = v69->lpVtbl;
    v69->lpVtbl->meth14(v69, a1, v4->flags_338, 265.0, 1048585, 2, 5, 1, -1);
    v69->field_3838.field_1A99C[28] = 3;
    v71 = GetStringWithIndex(0x41u);
    v70->meth13(v69, v71, 1, 1, &unk_100AB478);
    ++v4->field_14;
    v72 = (unk1E214 *)malloc(0x1E214u);
    if (v72)
        v73 = meth_unk1E214_init(v72);
    else
        v73 = 0;
    v4->field_18[v4->field_14] = v73;
    if (!v73)
        sub_1003E260(4);
    v74 = v73->lpVtbl;
    v73->lpVtbl->meth14(v73, a1, 1138819072, 217.0, 20481, 2, 5, 1, -1);
    v73->field_4 = sub_10041710;
    v73->field_3838.field_1A99C[28] = 5;
    v74->meth13(v73, String2, 1, 3, &unk_100AB478);
    ++v4->field_14;
    return 1;
}
// 100409F0: using guessed type int sub_100409F0();
// 10040A20: using guessed type int sub_10040A20();
// 10041300: using guessed type int __cdecl sub_10041300(int);
// 100413B0: using guessed type int __cdecl sub_100413B0(int);
// 10043FA0: using guessed type int __cdecl sub_10043FA0(int);
// 100AB428: using guessed type int dword_100AB428;
// 100AB42C: using guessed type int dword_100AB42C;
// 100AB448: using guessed type int dword_100AB448;
