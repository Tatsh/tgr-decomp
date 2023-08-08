#include "types-win32.h"
//----- (10052030) --------------------------------------------------------
int __cdecl sub_10052030(int a1) {
    unsigned __int16 v2; // ax
    unk348 *v3;          // eax
    unk348 *v4;          // esi
    unk1E214 *v5;        // eax
    unk1E214 *v6;        // ebp
    unk1E214 *v7;        // eax
    unk1E214 *v8;        // ebp
    unk1E214Vtbl *v9;    // ebx
    LPCSTR v10;          // eax
    unk1E214 *v11;       // eax
    unk1E214 *v12;       // ebp
    unk1E214Vtbl *v13;   // ebx
    LPCSTR v14;          // eax
    unk1E214 *v15;       // eax
    unk1E214 *v16;       // ebp
    unk1E214Vtbl *v17;   // ebx
    LPCSTR v18;          // eax
    unk1E214 *v19;       // eax
    unk1E214 *v20;       // ebp
    unk1E214Vtbl *v21;   // ebx
    LPCSTR v22;          // eax
    unk1E214 *v23;       // eax
    unk1E214 *v24;       // ebp
    int v25;             // ebx
    unk1E214 *v26;       // eax
    unk1E214 *v27;       // ebp
    __int64 v28;         // rax
    unk1E214 *v29;       // eax
    unk1E214 *v30;       // ebp
    __int64 v31;         // rax
    unk1E214 *v32;       // eax
    unk1E214 *v33;       // ebp
    __int16 v34;         // ax
    unk1E214 *v35;       // eax
    unk1E214 *v36;       // ebp
    unk1E214Vtbl *v37;   // ebx
    unk1E214 *v38;       // eax
    unk1E214 *v39;       // ebp
    __int16 v40;         // ax
    unk1E214 *v41;       // eax
    unk1E214 *v42;       // ebp
    unk1E214Vtbl *v43;   // ebx
    unk1E214 *v44;       // eax
    unk1E214 *v45;       // ebp
    unk1E214Vtbl *v46;   // ebx
    LPCSTR v47;          // eax
    unk1E214 *v48;       // eax
    unk1E214 *v49;       // ebp
    unk1E214Vtbl *v50;   // ebx
    LPCSTR v51;          // eax
    unk1E214 *v52;       // eax
    unk1E214 *v53;       // ebp
    unk1E214Vtbl *v54;   // ebx
    unk1E214 *v55;       // eax
    unk1E214 *v56;       // ebp
    unk1E214Vtbl *v57;   // ebx
    LPCSTR v58;          // eax
    unk1E214 *v59;       // eax
    unk1E214 *v60;       // ebp
    unk1E214Vtbl *v61;   // ebx
    LPCSTR v62;          // eax
    unk1E214 *v63;       // eax
    unk1E214 *v64;       // ebp
    unk1E214Vtbl *v65;   // ebx
    unk1E214 *v66;       // eax
    unk1E214 *v67;       // ebp
    unk1E214Vtbl *v68;   // ebx
    LPCSTR v69;          // eax
    unk1E214 *v70;       // eax
    unk1E214 *v71;       // ebp
    unk1E214Vtbl *v72;   // ebx
    unk1E214 *v73;       // eax
    unk1E214 *v74;       // ebp
    unk1E214Vtbl *v75;   // ebx
    LPCSTR v76;          // eax
    unk1E214 *v77;       // eax
    unk1E214 *v78;       // ebp
    unk1E214Vtbl *v79;   // ebx
    unk1E214 *v80;       // eax
    unk1E214 *v81;       // ebp
    unk1E214Vtbl *v82;   // ebx
    float v84;           // [esp+3C0h] [ebp-40h]
    float v85;           // [esp+3C0h] [ebp-40h]
    float v86;           // [esp+3C0h] [ebp-40h]
    float v87;           // [esp+3C0h] [ebp-40h]
    float v88;           // [esp+3E8h] [ebp-18h]
    int v89;             // [esp+3ECh] [ebp-14h]
    int v90;             // [esp+3F0h] [ebp-10h]
    float v91;           // [esp+404h] [ebp+4h]
    float v92;           // [esp+404h] [ebp+4h]
    float v93;           // [esp+404h] [ebp+4h]

    v2 = *(_WORD *)(a1 + 16);
    *(_WORD *)(a1 + 18) = 0;
    *(_DWORD *)(a1 + 4 * v2 + 108) = 1;
    v3 = (unk348 *)malloc(0x348u);
    if (v3)
        v4 = meth_10048470(v3);
    else
        v4 = 0;
    *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v4;
    if (!v4)
        sub_1003E260(4);
    ++*(_WORD *)(a1 + 16);
    v4->field_340 = (unkC8 *)a1;
    v4->field_10 = 0;
    v4->field_338 = 1128464384;
    v4->field_33C = 130.0;
    v5 = (unk1E214 *)malloc(0x1E214u);
    if (v5)
        v6 = meth_100476C0(v5);
    else
        v6 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v6;
    if (!v6)
        sub_1003E260(4);
    v6->field_0->field_38(v6, (unkC8 *)a1, 0, 0, 9, 2, 5, 0, 0);
    ++LOWORD(v4->field_14);
    v7 = (unk1E214 *)malloc(0x1E214u);
    if (v7)
        v8 = meth_100476C0(v7);
    else
        v8 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v8;
    if (!v8)
        sub_1003E260(4);
    v9 = v8->field_0;
    v8->field_0->field_38(v8, (unkC8 *)a1, v4->field_338, 1092616192, 1048585, 2, 5, 1, -1);
    LOWORD(v8->field_1E20C) = 3;
    v10 = getCaptionString(0x44u);
    v9->field_34(v8, v10, 1, 1, &unk_100AB508);
    ++LOWORD(v4->field_14);
    v11 = (unk1E214 *)malloc(0x1E214u);
    if (v11)
        v12 = meth_100476C0(v11);
    else
        v12 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v12;
    if (!v12)
        sub_1003E260(4);
    v13 = v12->field_0;
    v84 = v4->field_33C - -19.0;
    v12->field_0->field_38(v12, (unkC8 *)a1, v4->field_338, LODWORD(v84), 1056769, 2, 5, 1, -1);
    v12->field_C = sub_10047360;
    v12->field_8 = sub_10047340;
    LOWORD(v12->field_1E20C) = 3;
    v14 = getCaptionString(0x45u);
    v13->field_34(v12, v14, 1, 1, &dword_100AB448);
    ++LOWORD(v4->field_14);
    ++LOWORD(v4->last);
    v15 = (unk1E214 *)malloc(0x1E214u);
    if (v15)
        v16 = meth_100476C0(v15);
    else
        v16 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v16;
    if (!v16)
        sub_1003E260(4);
    v17 = v16->field_0;
    v85 = v4->field_33C - -95.0;
    v16->field_0->field_38(v16, (unkC8 *)a1, v4->field_338, LODWORD(v85), 1056769, 2, 5, 1, -1);
    v16->field_C = sub_10047360;
    v16->field_8 = sub_10045050;
    LOWORD(v16->field_1E20C) = 2;
    v18 = getCaptionString(0x1Eu);
    v17->field_34(v16, v18, 1, 0, &dword_100AB448);
    ++LOWORD(v4->field_14);
    ++LOWORD(v4->last);
    v19 = (unk1E214 *)malloc(0x1E214u);
    if (v19)
        v20 = meth_100476C0(v19);
    else
        v20 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v20;
    if (!v20)
        sub_1003E260(4);
    v21 = v20->field_0;
    v86 = v4->field_33C - -114.0;
    v20->field_0->field_38(v20, (unkC8 *)a1, v4->field_338, LODWORD(v86), 1056769, 2, 5, 1, -1);
    v20->field_C = sub_10047360;
    v20->field_8 = (int(__cdecl *)())sub_10047060;
    LOWORD(v20->field_1E20C) = 3;
    v22 = getCaptionString(0xCu);
    v21->field_34(v20, v22, 1, 1, &dword_100AB448);
    ++LOWORD(v4->field_14);
    ++LOWORD(v4->last);
    v88 = (float)dword_100AB428;
    v91 = (float)dword_100AB42C;
    v23 = (unk1E214 *)malloc(0x1E214u);
    if (v23)
        v24 = meth_100476C0(v23);
    else
        v24 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v24;
    if (!v24)
        sub_1003E260(4);
    ((void(__thiscall *)(
        unk1E214 *, int, float, float, int, int, int, int, int))v24->field_0->field_38)(
        v24, a1, COERCE_FLOAT(LODWORD(v88)), COERCE_FLOAT(LODWORD(v91)), 4202497, 2, 5, 1, 120);
    v24->field_C = sub_10047360;
    v24->field_8 = sub_100457E0;
    v90 = (__int64)v91;
    *(_DWORD *)v24->gap54 = v90;
    v25 = (__int64)v88;
    v24->field_50 = v25;
    v24->field_58 = v25 + 127;
    *(_DWORD *)v24->gap5C = v90 + 33;
    *(_DWORD *)&v24->gap5C[10508] = 0;
    v92 = v91 - -33.0;
    *(_WORD *)&v24->gap5C[10726] = 121;
    ++LOWORD(v4->field_14);
    v89 = v25 + 127;
    v26 = (unk1E214 *)malloc(0x1E214u);
    if (v26)
        v27 = meth_100476C0(v26);
    else
        v27 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v27;
    if (!v27)
        sub_1003E260(4);
    ((void(__thiscall *)(
        unk1E214 *, int, float, float, int, int, int, int, int))v27->field_0->field_38)(
        v27, a1, COERCE_FLOAT(LODWORD(v88)), COERCE_FLOAT(LODWORD(v92)), 4202497, 2, 5, 1, 82);
    v27->field_C = sub_10047360;
    v27->field_8 = (int(__cdecl *)())sub_10043FA0;
    v28 = (__int64)v92;
    *(_DWORD *)v27->gap54 = v28;
    v27->field_50 = v25;
    v27->field_58 = v89;
    *(_DWORD *)v27->gap5C = v28 + 33;
    v93 = v92 - -33.0;
    *(_DWORD *)&v27->gap5C[10508] = 0;
    *(_WORD *)&v27->gap5C[10726] = 83;
    ++LOWORD(v4->field_14);
    v29 = (unk1E214 *)malloc(0x1E214u);
    if (v29)
        v30 = meth_100476C0(v29);
    else
        v30 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v30;
    if (!v30)
        sub_1003E260(4);
    ((void(__thiscall *)(
        unk1E214 *, int, float, float, int, int, int, int, int))v30->field_0->field_38)(
        v30, a1, COERCE_FLOAT(LODWORD(v88)), COERCE_FLOAT(LODWORD(v93)), 4202497, 2, 5, 1, 84);
    v30->field_C = sub_10047360;
    v30->field_8 = sub_100457C0;
    v31 = (__int64)v93;
    *(_DWORD *)v30->gap54 = v31;
    v30->field_50 = v25;
    v30->field_58 = v89;
    *(_DWORD *)v30->gap5C = v31 + 33;
    *(_DWORD *)&v30->gap5C[10508] = 0;
    *(_WORD *)&v30->gap5C[10726] = 85;
    ++LOWORD(v4->field_14);
    v32 = (unk1E214 *)malloc(0x1E214u);
    if (v32)
        v33 = meth_100476C0(v32);
    else
        v33 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v33;
    if (!v33)
        sub_1003E260(4);
    v33->field_0->field_38(v33, (unkC8 *)a1, 1116864512, 1129578496, 1, 2, 5, 1, 22);
    v33->field_4 = sub_100407E0;
    v34 = LOWORD(v4->field_14) + 1;
    ++*(_WORD *)&v33->gap5C[10840];
    *(_WORD *)&v33->gap5C[10842] = v34;
    ++LOWORD(v4->field_14);
    v35 = (unk1E214 *)malloc(0x1E214u);
    if (v35)
        v36 = meth_100476C0(v35);
    else
        v36 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v36;
    if (!v36)
        sub_1003E260(4);
    v37 = v36->field_0;
    v36->field_0->field_38(v36, (unkC8 *)a1, v4->field_338, 1133084672, 1052673, 2, 5, 1, -1);
    v36->field_4 = sub_1003FE80;
    LOWORD(v36->field_1E20C) = 3;
    v37->field_34(v36, asc_100AD300, 1, 1, &unk_100AB4B8);
    ++LOWORD(v4->field_14);
    v38 = (unk1E214 *)malloc(0x1E214u);
    if (v38)
        v39 = meth_100476C0(v38);
    else
        v39 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v39;
    if (!v39)
        sub_1003E260(4);
    v39->field_0->field_38(v39, (unkC8 *)a1, 1134723072, 1116733440, 1, 2, 5, 1, 17);
    v39->field_4 = sub_10040730;
    v40 = LOWORD(v4->field_14) + 1;
    ++*(_WORD *)&v39->gap5C[10840];
    *(_WORD *)&v39->gap5C[10842] = v40;
    ++LOWORD(v4->field_14);
    v41 = (unk1E214 *)malloc(0x1E214u);
    if (v41)
        v42 = meth_100476C0(v41);
    else
        v42 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v42;
    if (!v42)
        sub_1003E260(4);
    v43 = v42->field_0;
    v42->field_0->field_38(v42, (unkC8 *)a1, v4->field_338, 1125646336, 1052673, 2, 5, 1, -1);
    v42->field_4 = sub_1003FA00;
    LOWORD(v42->field_1E20C) = 3;
    v43->field_34(v42, asc_100AD300, 1, 1, &unk_100AB4A8);
    ++LOWORD(v4->field_14);
    v44 = (unk1E214 *)malloc(0x1E214u);
    if (v44)
        v45 = meth_100476C0(v44);
    else
        v45 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v45;
    if (!v45)
        sub_1003E260(4);
    v46 = v45->field_0;
    v45->field_0->field_38(v45, (unkC8 *)a1, 1138819072, 1123680256, 1048585, 2, 5, 1, -1);
    LOWORD(v45->field_1E20C) = 3;
    v47 = getCaptionString(0x40u);
    v46->field_34(v45, v47, 1, 1, &unk_100AB4F8);
    ++LOWORD(v4->field_14);
    v48 = (unk1E214 *)malloc(0x1E214u);
    if (v48)
        v49 = meth_100476C0(v48);
    else
        v49 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v49;
    if (!v49)
        sub_1003E260(4);
    v50 = v49->field_0;
    v49->field_0->field_38(v49, (unkC8 *)a1, 1138819072, 1127809024, 1048585, 2, 5, 1, -1);
    LOWORD(v49->field_1E20C) = 3;
    v51 = getCaptionString(0x46u);
    v50->field_34(v49, v51, 1, 1, &unk_100AB4F8);
    ++LOWORD(v4->field_14);
    v52 = (unk1E214 *)malloc(0x1E214u);
    if (v52)
        v53 = meth_100476C0(v52);
    else
        v53 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v53;
    if (!v53)
        sub_1003E260(4);
    v54 = v53->field_0;
    v53->field_0->field_38(v53, (unkC8 *)a1, 1138819072, 1124925440, 20481, 2, 5, 1, -1);
    v53->field_4 = sub_100415A0;
    LOWORD(v53->field_1E20C) = 5;
    v54->field_34(v53, String2, 1, 3, &unk_100AB4F8);
    ++LOWORD(v4->field_14);
    v55 = (unk1E214 *)malloc(0x1E214u);
    if (v55)
        v56 = meth_100476C0(v55);
    else
        v56 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v56;
    if (!v56)
        sub_1003E260(4);
    v57 = v56->field_0;
    v56->field_0->field_38(v56, (unkC8 *)a1, v4->field_338, 1128988672, 1048585, 2, 5, 1, -1);
    LOWORD(v56->field_1E20C) = 3;
    v58 = getCaptionString(0x40u);
    v57->field_34(v56, v58, 1, 1, &unk_100AB478);
    ++LOWORD(v4->field_14);
    v59 = (unk1E214 *)malloc(0x1E214u);
    if (v59)
        v60 = meth_100476C0(v59);
    else
        v60 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v60;
    if (!v60)
        sub_1003E260(4);
    v61 = v60->field_0;
    v60->field_0->field_38(v60, (unkC8 *)a1, v4->field_338, 1132756992, 1048585, 2, 5, 1, -1);
    LOWORD(v60->field_1E20C) = 3;
    v62 = getCaptionString(0x41u);
    v61->field_34(v60, v62, 1, 1, &unk_100AB478);
    ++LOWORD(v4->field_14);
    v63 = (unk1E214 *)malloc(0x1E214u);
    if (v63)
        v64 = meth_100476C0(v63);
    else
        v64 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v64;
    if (!v64)
        sub_1003E260(4);
    v65 = v64->field_0;
    v64->field_0->field_38(v64, (unkC8 *)a1, 1138819072, 1129906176, 20481, 2, 5, 1, -1);
    v64->field_4 = sub_100414B0;
    LOWORD(v64->field_1E20C) = 5;
    v65->field_34(v64, String2, 1, 3, &unk_100AB478);
    ++LOWORD(v4->field_14);
    v66 = (unk1E214 *)malloc(0x1E214u);
    if (v66)
        v67 = meth_100476C0(v66);
    else
        v67 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v67;
    if (!v67)
        sub_1003E260(4);
    v68 = v67->field_0;
    v67->field_0->field_38(v67, (unkC8 *)a1, 1121189888, 1118437376, 1048577, 2, 5, 1, -1);
    LOWORD(v67->field_1E20C) = 3;
    v69 = getCaptionString(0x38u);
    v68->field_34(v67, v69, 1, 1, &unk_100AB458);
    ++LOWORD(v4->field_14);
    v70 = (unk1E214 *)malloc(0x1E214u);
    if (v70)
        v71 = meth_100476C0(v70);
    else
        v71 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v71;
    if (!v71)
        sub_1003E260(4);
    v72 = v71->field_0;
    v71->field_0->field_38(v71, (unkC8 *)a1, 1138491392, 1115947008, 20481, 2, 5, 1, -1);
    v71->field_4 = sub_10041300;
    LOWORD(v71->field_1E20C) = 52;
    v72->field_34(v71, String2, 1, 4, &unk_100AB458);
    ++LOWORD(v4->field_14);
    v73 = (unk1E214 *)malloc(0x1E214u);
    if (v73)
        v74 = meth_100476C0(v73);
    else
        v74 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v74;
    if (!v74)
        sub_1003E260(4);
    v75 = v74->field_0;
    v74->field_0->field_38(v74, (unkC8 *)a1, 1121189888, 1123418112, 1048577, 2, 5, 1, -1);
    LOWORD(v74->field_1E20C) = 3;
    v76 = getCaptionString(0x36u);
    v75->field_34(v74, v76, 1, 1, &unk_100AB458);
    ++LOWORD(v4->field_14);
    v77 = (unk1E214 *)malloc(0x1E214u);
    if (v77)
        v78 = meth_100476C0(v77);
    else
        v78 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v78;
    if (!v78)
        sub_1003E260(4);
    v79 = v78->field_0;
    v78->field_0->field_38(v78, (unkC8 *)a1, 1138491392, 1120927744, 20481, 2, 5, 1, -1);
    v78->field_4 = sub_100413B0;
    LOWORD(v78->field_1E20C) = 52;
    v79->field_34(v78, String2, 1, 4, &unk_100AB458);
    ++LOWORD(v4->field_14);
    v80 = (unk1E214 *)malloc(0x1E214u);
    if (v80)
        v81 = meth_100476C0(v80);
    else
        v81 = 0;
    v4->field_18[LOWORD(v4->field_14)] = v81;
    if (!v81)
        sub_1003E260(4);
    v82 = v81->field_0;
    v87 = v4->field_33C - 19.0;
    v81->field_0->field_38(v81, (unkC8 *)a1, v4->field_338, LODWORD(v87), 20481, 2, 5, 1, -1);
    v81->field_4 = sub_10040B30;
    LOWORD(v81->field_1E20C) = 52;
    v82->field_34(v81, String2, 1, 4, &dword_100AB448);
    ++LOWORD(v4->field_14);
    return 1;
}
// 1003FA00: using guessed type int __cdecl sub_1003FA00(int);
// 1003FE80: using guessed type int __cdecl sub_1003FE80(int);
// 10040730: using guessed type int __cdecl sub_10040730(int);
// 100407E0: using guessed type int __cdecl sub_100407E0(int);
// 10041300: using guessed type int __cdecl sub_10041300(int);
// 100413B0: using guessed type int __cdecl sub_100413B0(int);
// 10043FA0: using guessed type int __cdecl sub_10043FA0(int);
// 10052030: using guessed type int __cdecl sub_10052030(int);
// 100AB428: using guessed type int dword_100AB428;
// 100AB42C: using guessed type int dword_100AB42C;
// 100AB448: using guessed type int dword_100AB448;
