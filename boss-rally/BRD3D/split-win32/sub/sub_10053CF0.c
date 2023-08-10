#include "types-win32.h"
//----- (10053CF0) --------------------------------------------------------
int __cdecl sub_10053CF0(unk000C8 *a1) {
    unk00348 *v2;                                                  // eax
    unk00348 *v3;                                                  // ebp
    WORD v4;                                                       // dx
    unk1E214 *v5;                                                  // eax
    unk1E214 *v6;                                                  // esi
    unk1E214 *v7;                                                  // eax
    unk1E214 *v8;                                                  // esi
    unk1E214Vtbl *v9;                                              // edi
    LPCSTR v10;                                                    // eax
    unk1E214 *v11;                                                 // eax
    unk1E214 *v12;                                                 // esi
    WORD v13;                                                      // dx
    unk1A5E0Vtbl *v14;                                             // edi
    char *v15;                                                     // eax
    unk1E214 *v16;                                                 // eax
    unk1E214 *v17;                                                 // esi
    unk1E214Vtbl *v18;                                             // edi
    LPCSTR v19;                                                    // eax
    unk1E214 *v20;                                                 // eax
    unk1E214 *v21;                                                 // esi
    WORD v22;                                                      // dx
    unk1E214Vtbl *v23;                                             // edi
    LPCSTR v24;                                                    // eax
    unk1E214 *v25;                                                 // eax
    unk1E214 *v26;                                                 // esi
    WORD v27;                                                      // cx
    int v28;                                                       // edi
    unk1E214 *v29;                                                 // eax
    unk1E214 *v30;                                                 // esi
    __int64 v31;                                                   // rax
    unk1E214 *v32;                                                 // eax
    unk1E214 *v33;                                                 // esi
    __int64 v34;                                                   // rax
    unk1E214 *v35;                                                 // eax
    unk1E214 *v36;                                                 // esi
    unk1E214Vtbl *v37;                                             // edi
    LPCSTR v38;                                                    // eax
    unk1E214 *v39;                                                 // eax
    unk1E214 *v40;                                                 // esi
    WORD v41;                                                      // cx
    unk1E214Vtbl *v42;                                             // edi
    unk1E214 *v43;                                                 // eax
    unk1E214 *v44;                                                 // esi
    WORD v45;                                                      // dx
    unk1E214Vtbl *v46;                                             // edi
    LPCSTR v47;                                                    // eax
    unk1E214 *v48;                                                 // eax
    unk1E214 *v49;                                                 // esi
    unk1E214Vtbl *v50;                                             // edi
    unk1E214 *v51;                                                 // eax
    unk1E214 *u1E214;                                              // esi
    WORD v53;                                                      // cx
    unk1E214Vtbl *v54;                                             // edi
    LPCSTR v55;                                                    // eax
    unk1E214 *v56;                                                 // eax
    unk1E214 *v57;                                                 // esi
    WORD v58;                                                      // dx
    unk1E214Vtbl *v59;                                             // edi
    unk1E214 *v60;                                                 // eax
    unk1E214 *v61;                                                 // esi
    WORD v62;                                                      // ax
    WORD v63;                                                      // ax
    unk1E214 *v64;                                                 // eax
    unk1E214 *v65;                                                 // esi
    WORD v66;                                                      // cx
    unk1E214Vtbl *v67;                                             // edi
    unk1E214 *v68;                                                 // eax
    unk1E214 *v69;                                                 // esi
    WORD v70;                                                      // ax
    WORD v71;                                                      // ax
    unk1E214 *v72;                                                 // eax
    unk1E214 *v73;                                                 // esi
    WORD v74;                                                      // cx
    unk1E214Vtbl *v75;                                             // edi
    unk1E214 *v76;                                                 // eax
    unk1E214 *v77;                                                 // esi
    unk1E214Vtbl *v78;                                             // edi
    LPCSTR v79;                                                    // eax
    unk1E214 *v80;                                                 // eax
    unk1E214 *v81;                                                 // esi
    WORD v82;                                                      // dx
    unk1E214Vtbl *v83;                                             // edi
    float v85;                                                     // [esp+304h] [ebp-80h]
    float v86;                                                     // [esp+304h] [ebp-80h]
    int(__thiscall * v87)(unk1A5E0 *, char *, int, int, int, int); // [esp+32Ch] [ebp-58h]
    float v88;                                                     // [esp+32Ch] [ebp-58h]
    int v89;                                                       // [esp+330h] [ebp-54h]
    int v90;                                                       // [esp+334h] [ebp-50h]
    char v91[32];                                                  // [esp+338h] [ebp-4Ch] BYREF
    char Buffer[32];                                               // [esp+358h] [ebp-2Ch] BYREF
    int v93;                                                       // [esp+380h] [ebp-4h]
    unk000C8 *v94;                                                 // [esp+388h] [ebp+4h]
    float v95;                                                     // [esp+388h] [ebp+4h]
    float v96;                                                     // [esp+388h] [ebp+4h]
    float v97;                                                     // [esp+388h] [ebp+4h]

    *(&a1->field_10 + 1) = 0;
    dword_10AA28AC = dword_10AA28A4;
    *(&a1->field_6C + a1->field_10) = 1;
    v2 = (unk00348 *)malloc(0x348u);
    v93 = 0;
    if (v2)
        v3 = meth_10048470(v2);
    else
        v3 = 0;
    v4 = a1->field_10;
    v93 = -1;
    a1->field_14[v4] = v3;
    if (!v3)
        sub_1003E260(4);
    ++a1->field_10;
    v3->field_340 = a1;
    v3->field_4 = sub_100409F0;
    v3->field_8 = sub_10040A20;
    v3->field_10 = 0;
    v3->flags_338 = 0x43430000;
    v3->field_33C = 130.0;
    v5 = (unk1E214 *)malloc(0x1E214u);
    v93 = 1;
    if (v5)
        v6 = meth_unk1E214_init(v5);
    else
        v6 = 0;
    v93 = -1;
    v3->field_18[v3->field_14] = v6;
    if (!v6)
        sub_1003E260(4);
    v6->lpVtbl->meth14(v6, a1, 0, 0.0, 9, 2, 5, 0, 0);
    ++v3->field_14;
    v7 = (unk1E214 *)malloc(0x1E214u);
    v93 = 2;
    if (v7)
        v8 = meth_unk1E214_init(v7);
    else
        v8 = 0;
    v93 = -1;
    v3->field_18[v3->field_14] = v8;
    if (!v8)
        sub_1003E260(4);
    v9 = v8->lpVtbl;
    v8->lpVtbl->meth14(v8, a1, v3->flags_338, 10.0, 1048585, 2, 5, 1, -1);
    v8->field_3838.field_1A99C[28] = 3;
    v10 = GetStringWithIndex(0x4Eu);
    v9->meth13(v8, v10, 1, 1, &unk_100AB508);
    ++v3->field_14;
    v11 = (unk1E214 *)malloc(0x1E214u);
    v93 = 3;
    if (v11)
        v12 = meth_unk1E214_init(v11);
    else
        v12 = 0;
    v13 = v3->field_14;
    v93 = -1;
    v3->field_18[v13] = v12;
    if (!v12)
        sub_1003E260(4);
    v12->lpVtbl->meth14(v12, a1, v3->flags_338, v3->field_33C, 12289, 2, 5, 1, -1);
    v14 = v12->field_3838.lpVtbl;
    v12->field_4 = sub_1003EB60;
    *(_DWORD *)&v12->field_3838.field_1A99C[16] = 1;
    v14->meth5(&v12->field_3838, 0x200000, dword_100AB4D8, 5, 0, -1);
    v12->field_14 = (int)sub_1003E8B0;
    v12->field_18 = (int)sub_1003E8C0;
    v94 = 0;
    if (dword_100B3814[6 * (char)dword_10AA28B8] > 0) {
        v87 = v14->meth4;
        do {
            strcpy(v91, GetStringWithIndex(0x37u));
            strcat(v91, asc_100AD300);
            v94 = (unk000C8 *)((char *)v94 + 1);
            v15 = _itoa((int)v94, Buffer, 10);
            strcat(v91, _strupr(v15));
            v87(&v12->field_3838, v91, 1, 1, (int)&dword_100AB448, 1);
        } while ((int)v94 < dword_100B3814[6 * (char)dword_10AA28B8]);
    }
    ++v3->field_14;
    ++LOWORD(v3->last);
    v16 = (unk1E214 *)malloc(0x1E214u);
    v93 = 4;
    if (v16)
        v17 = meth_unk1E214_init(v16);
    else
        v17 = 0;
    v93 = -1;
    v3->field_18[v3->field_14] = v17;
    if (!v17)
        sub_1003E260(4);
    v18 = v17->lpVtbl;
    v85 = v3->field_33C - -95.0;
    v17->lpVtbl->meth14(v17, a1, v3->flags_338, v85, 1056769, 2, 5, 1, -1);
    v17->field_C = sub_10047360;
    v17->field_8 = sub_100460A0;
    v17->field_3838.field_1A99C[28] = 3;
    v19 = GetStringWithIndex(0x1Eu);
    v18->meth13(v17, v19, 1, 1, &dword_100AB448);
    ++v3->field_14;
    ++LOWORD(v3->last);
    v20 = (unk1E214 *)malloc(0x1E214u);
    v93 = 5;
    if (v20)
        v21 = meth_unk1E214_init(v20);
    else
        v21 = 0;
    v22 = v3->field_14;
    v93 = -1;
    v3->field_18[v22] = v21;
    if (!v21)
        sub_1003E260(4);
    v23 = v21->lpVtbl;
    v86 = v3->field_33C - -114.0;
    v21->lpVtbl->meth14(v21, a1, v3->flags_338, v86, 1056769, 2, 5, 1, -1);
    v21->field_C = sub_10047360;
    v21->field_8 = (int(__cdecl *)())sub_100470A0;
    v21->field_3838.field_1A99C[28] = 3;
    v24 = GetStringWithIndex(0xCu);
    v23->meth13(v21, v24, 1, 1, &dword_100AB448);
    ++v3->field_14;
    ++LOWORD(v3->last);
    v88 = (float)dword_100AB428;
    v95 = (float)dword_100AB42C;
    v25 = (unk1E214 *)malloc(0x1E214u);
    v93 = 6;
    if (v25)
        v26 = meth_unk1E214_init(v25);
    else
        v26 = 0;
    v27 = v3->field_14;
    v93 = -1;
    v3->field_18[v27] = v26;
    if (!v26)
        sub_1003E260(4);
    v26->lpVtbl->meth14(v26, a1, LODWORD(v88), v95, 4202497, 2, 5, 1, 120);
    v26->field_C = sub_10047360;
    v26->field_8 = sub_10045860;
    v90 = (__int64)v95;
    *(_DWORD *)v26->gap54 = v90;
    v28 = (__int64)v88;
    v26->field_50 = v28;
    v26->field_58 = v28 + 127;
    *(_DWORD *)v26->gap5C = v90 + 33;
    v26->field_2968 = 0;
    v96 = v95 - -33.0;
    *(_WORD *)&v26->field_2A40[2] = 121;
    ++v3->field_14;
    v89 = v28 + 127;
    v29 = (unk1E214 *)malloc(0x1E214u);
    v93 = 7;
    if (v29)
        v30 = meth_unk1E214_init(v29);
    else
        v30 = 0;
    v93 = -1;
    v3->field_18[v3->field_14] = v30;
    if (!v30)
        sub_1003E260(4);
    v30->lpVtbl->meth14(v30, a1, LODWORD(v88), v96, 4202497, 2, 5, 1, 82);
    v30->field_C = sub_10047360;
    v30->field_8 = (int(__cdecl *)())sub_10043FA0;
    v31 = (__int64)v96;
    *(_DWORD *)v30->gap54 = v31;
    v30->field_50 = v28;
    v30->field_58 = v89;
    *(_DWORD *)v30->gap5C = v31 + 33;
    v97 = v96 - -33.0;
    v30->field_2968 = 0;
    *(_WORD *)&v30->field_2A40[2] = 83;
    ++v3->field_14;
    v32 = (unk1E214 *)malloc(0x1E214u);
    v93 = 8;
    if (v32)
        v33 = meth_unk1E214_init(v32);
    else
        v33 = 0;
    v93 = -1;
    v3->field_18[v3->field_14] = v33;
    if (!v33)
        sub_1003E260(4);
    v33->lpVtbl->meth14(v33, a1, LODWORD(v88), v97, 4202497, 2, 5, 1, 84);
    v33->field_C = sub_10047360;
    v33->field_8 = sub_10045840;
    v34 = (__int64)v97;
    *(_DWORD *)v33->gap54 = v34;
    v33->field_50 = v28;
    v33->field_58 = v89;
    *(_DWORD *)v33->gap5C = v34 + 33;
    v33->field_2968 = 0;
    *(_WORD *)&v33->field_2A40[2] = 85;
    ++v3->field_14;
    v35 = (unk1E214 *)malloc(0x1E214u);
    v93 = 9;
    if (v35)
        v36 = meth_unk1E214_init(v35);
    else
        v36 = 0;
    v93 = -1;
    v3->field_18[v3->field_14] = v36;
    if (!v36)
        sub_1003E260(4);
    v37 = v36->lpVtbl;
    v36->lpVtbl->meth14(v36, a1, 0x42D40000, 85.0, 1048577, 2, 5, 1, -1);
    v36->field_3838.field_1A99C[28] = 3;
    v38 = GetStringWithIndex(0x38u);
    v37->meth13(v36, v38, 1, 1, &unk_100AB458);
    ++v3->field_14;
    v39 = (unk1E214 *)malloc(0x1E214u);
    v93 = 10;
    if (v39)
        v40 = meth_unk1E214_init(v39);
    else
        v40 = 0;
    v41 = v3->field_14;
    v93 = -1;
    v3->field_18[v41] = v40;
    if (!v40)
        sub_1003E260(4);
    v42 = v40->lpVtbl;
    v40->lpVtbl->meth14(v40, a1, 0x43DC0000, 66.0, 20481, 2, 5, 1, -1);
    v40->field_4 = sub_10041300;
    v40->field_3838.field_1A99C[28] = 52;
    v42->meth13(v40, String2, 1, 4, &unk_100AB458);
    ++v3->field_14;
    v43 = (unk1E214 *)malloc(0x1E214u);
    v93 = 11;
    if (v43)
        v44 = meth_unk1E214_init(v43);
    else
        v44 = 0;
    v45 = v3->field_14;
    v93 = -1;
    v3->field_18[v45] = v44;
    if (!v44)
        sub_1003E260(4);
    v46 = v44->lpVtbl;
    v44->lpVtbl->meth14(v44, a1, 0x42D40000, 123.0, 1048577, 2, 5, 1, -1);
    v44->field_3838.field_1A99C[28] = 3;
    v47 = GetStringWithIndex(0x36u);
    v46->meth13(v44, v47, 1, 1, &unk_100AB458);
    ++v3->field_14;
    v48 = (unk1E214 *)malloc(0x1E214u);
    v93 = 12;
    if (v48)
        v49 = meth_unk1E214_init(v48);
    else
        v49 = 0;
    v93 = -1;
    v3->field_18[v3->field_14] = v49;
    if (!v49)
        sub_1003E260(4);
    v50 = v49->lpVtbl;
    v49->lpVtbl->meth14(v49, a1, 0x43DC0000, 104.0, 20481, 2, 5, 1, -1);
    v49->field_4 = sub_100413B0;
    v49->field_3838.field_1A99C[28] = 52;
    v50->meth13(v49, String2, 1, 4, &unk_100AB458);
    ++v3->field_14;
    v51 = (unk1E214 *)malloc(0x1E214u);
    v93 = 13;
    if (v51)
        u1E214 = meth_unk1E214_init(v51);
    else
        u1E214 = 0;
    v53 = v3->field_14;
    v93 = -1;
    v3->field_18[v53] = u1E214;
    if (!u1E214)
        sub_1003E260(4);
    v54 = u1E214->lpVtbl;
    u1E214->lpVtbl->meth14(u1E214, a1, 0x42D40000, 185.0, 1048577, 2, 5, 1, -1);
    u1E214->field_3838.field_1A99C[28] = 3;
    v55 = GetStringWithIndex(0x4Cu);
    v54->meth13(u1E214, v55, 1, 1, &unk_100AB4F8);
    ++v3->field_14;
    v56 = (unk1E214 *)malloc(0x1E214u);
    v93 = 14;
    if (v56)
        v57 = meth_unk1E214_init(v56);
    else
        v57 = 0;
    v58 = v3->field_14;
    v93 = -1;
    v3->field_18[v58] = v57;
    if (!v57)
        sub_1003E260(4);
    v59 = v57->lpVtbl;
    v57->lpVtbl->meth14(v57, a1, 0x43DC0000, 141.0, 20481, 2, 5, 1, -1);
    v57->field_4 = sub_1003E8D0;
    v57->field_3838.field_1A99C[28] = 5;
    v59->meth13(v57, String2, 1, 3, &unk_100AB4F8);
    ++v3->field_14;
    v60 = (unk1E214 *)malloc(0x1E214u);
    v93 = 15;
    if (v60)
        v61 = meth_unk1E214_init(v60);
    else
        v61 = 0;
    v62 = v3->field_14;
    v93 = -1;
    v3->field_18[v62] = v61;
    if (!v61)
        sub_1003E260(4);
    v61->lpVtbl->meth14(v61, a1, 0x42920000, 212.0, 1, 2, 5, 1, 22);
    v61->field_4 = sub_100407E0;
    v63 = v3->field_14 + 1;
    ++v61->field_2AB4[0];
    v61->field_2AB4[1] = v63;
    ++v3->field_14;
    v64 = (unk1E214 *)malloc(0x1E214u);
    v93 = 16;
    if (v64)
        v65 = meth_unk1E214_init(v64);
    else
        v65 = 0;
    v66 = v3->field_14;
    v93 = -1;
    v3->field_18[v66] = v65;
    if (!v65)
        sub_1003E260(4);
    v67 = v65->lpVtbl;
    v65->lpVtbl->meth14(v65, a1, v3->flags_338, 275.0, 1052673, 2, 5, 1, -1);
    v65->field_4 = sub_1003FE80;
    v65->field_3838.field_1A99C[28] = 3;
    v67->meth13(v65, asc_100AD300, 1, 1, &unk_100AB4B8);
    ++v3->field_14;
    v68 = (unk1E214 *)malloc(0x1E214u);
    v93 = 17;
    if (v68)
        v69 = meth_unk1E214_init(v68);
    else
        v69 = 0;
    v70 = v3->field_14;
    v93 = -1;
    v3->field_18[v70] = v69;
    if (!v69)
        sub_1003E260(4);
    v69->lpVtbl->meth14(v69, a1, 0x43A28000, 72.0, 1, 2, 5, 1, 17);
    v69->field_4 = sub_10040730;
    v71 = v3->field_14 + 1;
    ++v69->field_2AB4[0];
    v69->field_2AB4[1] = v71;
    ++v3->field_14;
    v72 = (unk1E214 *)malloc(0x1E214u);
    v93 = 18;
    if (v72)
        v73 = meth_unk1E214_init(v72);
    else
        v73 = 0;
    v74 = v3->field_14;
    v93 = -1;
    v3->field_18[v74] = v73;
    if (!v73)
        sub_1003E260(4);
    v75 = v73->lpVtbl;
    v73->lpVtbl->meth14(v73, a1, v3->flags_338, 152.0, 1052673, 2, 5, 1, -1);
    v73->field_4 = sub_1003FA00;
    v73->field_3838.field_1A99C[28] = 3;
    v75->meth13(v73, asc_100AD300, 1, 1, &unk_100AB4A8);
    ++v3->field_14;
    v76 = (unk1E214 *)malloc(0x1E214u);
    v93 = 19;
    if (v76)
        v77 = meth_unk1E214_init(v76);
    else
        v77 = 0;
    v93 = -1;
    v3->field_18[v3->field_14] = v77;
    if (!v77)
        sub_1003E260(4);
    v78 = v77->lpVtbl;
    v77->lpVtbl->meth14(v77, a1, v3->flags_338, 258.0, 1048585, 2, 5, 1, -1);
    v77->field_3838.field_1A99C[28] = 3;
    v79 = GetStringWithIndex(0x40u);
    v78->meth13(v77, v79, 1, 1, &unk_100AB478);
    ++v3->field_14;
    v80 = (unk1E214 *)malloc(0x1E214u);
    v93 = 20;
    if (v80)
        v81 = meth_unk1E214_init(v80);
    else
        v81 = 0;
    v82 = v3->field_14;
    v93 = -1;
    v3->field_18[v82] = v81;
    if (!v81)
        sub_1003E260(4);
    v83 = v81->lpVtbl;
    v81->lpVtbl->meth14(v81, a1, 0x43E10000, 211.0, 20481, 2, 5, 1, -1);
    v81->field_4 = sub_1003EA90;
    v81->field_3838.field_1A99C[28] = 5;
    v83->meth13(v81, String2, 1, 3, &unk_100AB478);
    ++v3->field_14;
    return 1;
}
// 1003E8B0: using guessed type int sub_1003E8B0();
// 1003E8C0: using guessed type int sub_1003E8C0();
// 1003E8D0: using guessed type int __cdecl sub_1003E8D0(int);
// 1003EA90: using guessed type int __cdecl sub_1003EA90(int);
// 1003EB60: using guessed type int __cdecl sub_1003EB60(int);
// 1003FA00: using guessed type int __cdecl sub_1003FA00(int);
// 1003FE80: using guessed type int __cdecl sub_1003FE80(int);
// 10040730: using guessed type int __cdecl sub_10040730(int);
// 100407E0: using guessed type int __cdecl sub_100407E0(int);
// 100409F0: using guessed type int sub_100409F0();
// 10040A20: using guessed type int sub_10040A20();
// 10041300: using guessed type int __cdecl sub_10041300(int);
// 100413B0: using guessed type int __cdecl sub_100413B0(int);
// 10043FA0: using guessed type int __cdecl sub_10043FA0(int);
// 100AB428: using guessed type int dword_100AB428;
// 100AB42C: using guessed type int dword_100AB42C;
// 100AB448: using guessed type int dword_100AB448;
// 100B3814: using guessed type int dword_100B3814[];
// 10AA28A4: using guessed type int dword_10AA28A4;
// 10AA28AC: using guessed type int dword_10AA28AC;
// 10AA28B8: using guessed type int dword_10AA28B8;
