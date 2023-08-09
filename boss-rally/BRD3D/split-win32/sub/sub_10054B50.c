#include "types-win32.h"
//----- (10054B50) --------------------------------------------------------
int __cdecl sub_10054B50(int a1) {
    unsigned __int16 v2; // ax
    _DWORD *v3;          // eax
    _DWORD *v4;          // esi
    _DWORD *v5;          // eax
    _DWORD *v6;          // ebp
    _DWORD *v7;          // eax
    _WORD *v8;           // ebp
    int v9;              // ebx
    LPCSTR v10;          // eax
    _DWORD *v11;         // eax
    _DWORD *v12;         // ebp
    int v13;             // ebx
    LPCSTR v14;          // eax
    _DWORD *v15;         // eax
    _DWORD *v16;         // ebp
    int v17;             // ebx
    LPCSTR v18;          // eax
    _DWORD *v19;         // eax
    _DWORD *v20;         // ebp
    int v21;             // ebx
    _DWORD *v22;         // eax
    _DWORD *v23;         // ebp
    __int64 v24;         // rax
    _DWORD *v25;         // eax
    _DWORD *v26;         // ebp
    __int64 v27;         // rax
    _DWORD *v28;         // eax
    _WORD *v29;          // ebp
    int v30;             // ebx
    LPCSTR v31;          // eax
    _DWORD *v32;         // eax
    _DWORD *v33;         // ebp
    int v34;             // ebx
    _DWORD *v35;         // eax
    _WORD *v36;          // ebp
    int v37;             // ebx
    LPCSTR v38;          // eax
    _DWORD *v39;         // eax
    _DWORD *v40;         // ebp
    int v41;             // ebx
    _DWORD *v42;         // eax
    _WORD *v43;          // ebp
    int v44;             // ebx
    LPCSTR v45;          // eax
    _DWORD *v46;         // eax
    _DWORD *v47;         // ebp
    int v48;             // ebx
    _DWORD *v49;         // eax
    _WORD *v50;          // ebp
    int v51;             // ebx
    LPCSTR v52;          // eax
    _DWORD *v53;         // eax
    _WORD *v54;          // ebp
    int v55;             // ebx
    LPCSTR v56;          // eax
    _DWORD *v57;         // eax
    _WORD *v58;          // ebp
    int v59;             // ebx
    LPCSTR v60;          // eax
    _DWORD *v61;         // eax
    _DWORD *v62;         // ebp
    int v63;             // ebx
    _DWORD *v64;         // eax
    _WORD *v65;          // ebp
    int v66;             // ebx
    LPCSTR v67;          // eax
    _DWORD *v68;         // eax
    _WORD *v69;          // ebp
    int v70;             // ebx
    LPCSTR v71;          // eax
    _DWORD *v72;         // eax
    _DWORD *v73;         // ebp
    int v74;             // ebx
    float v76;           // [esp+34Ch] [ebp-40h]
    float v77;           // [esp+34Ch] [ebp-40h]
    float v78;           // [esp+374h] [ebp-18h]
    int v79;             // [esp+378h] [ebp-14h]
    int v80;             // [esp+37Ch] [ebp-10h]
    float v81;           // [esp+390h] [ebp+4h]
    float v82;           // [esp+390h] [ebp+4h]
    float v83;           // [esp+390h] [ebp+4h]

    v2 = *(_WORD *)(a1 + 16);
    *(_WORD *)(a1 + 18) = 0;
    *(_DWORD *)(a1 + 4 * v2 + 108) = 1;
    v3 = (_DWORD *)malloc(0x348u);
    if (v3)
        v4 = meth_10048470(v3);
    else
        v4 = 0;
    *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v4;
    if (!v4)
        sub_1003E260(4);
    ++*(_WORD *)(a1 + 16);
    v4[208] = a1;
    v4[1] = sub_100409F0;
    v4[2] = sub_10040A20;
    v4[4] = 0;
    v4[206] = 1128464384;
    v4[207] = 1124204544;
    v5 = (_DWORD *)malloc(0x1E214u);
    if (v5)
        v6 = meth_unk1E214_init(v5);
    else
        v6 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v6;
    if (!v6)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))(
        *v6 + 56))(v6, a1, 0, 0, 9, 2, 5, 0, 0);
    ++*((_WORD *)v4 + 10);
    v7 = (_DWORD *)malloc(0x1E214u);
    if (v7)
        v8 = meth_unk1E214_init(v7);
    else
        v8 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v8;
    if (!v8)
        sub_1003E260(4);
    v9 = *(_DWORD *)v8;
    (*(void(__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(
        *(_DWORD *)v8 + 56))(v8, a1, v4[206], 1092616192, 1048585, 2, 5, 1, -1);
    v8[61702] = 3;
    v10 = GetStringWithIndex(0x4Fu);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v9 + 52))(
        v8, v10, 1, 1, &unk_100AB508);
    ++*((_WORD *)v4 + 10);
    v11 = (_DWORD *)malloc(0x1E214u);
    if (v11)
        v12 = meth_unk1E214_init(v11);
    else
        v12 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v12;
    if (!v12)
        sub_1003E260(4);
    v13 = *v12;
    v76 = *((float *)v4 + 207) - -95.0;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v12 + 56))(
        v12, a1, v4[206], LODWORD(v76), 1056769, 2, 5, 1, -1);
    v12[3] = sub_10047360;
    v12[2] = sub_10047290;
    *((_WORD *)v12 + 61702) = 3;
    v14 = GetStringWithIndex(0x50u);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v13 + 52))(
        v12, v14, 1, 1, &dword_100AB448);
    ++*((_WORD *)v4 + 10);
    ++*((_WORD *)v4 + 418);
    v15 = (_DWORD *)malloc(0x1E214u);
    if (v15)
        v16 = meth_unk1E214_init(v15);
    else
        v16 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v16;
    if (!v16)
        sub_1003E260(4);
    v17 = *v16;
    v77 = *((float *)v4 + 207) - -114.0;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v16 + 56))(
        v16, a1, v4[206], LODWORD(v77), 1056769, 2, 5, 1, -1);
    v16[3] = sub_10047360;
    v16[2] = sub_100470E0;
    *((_WORD *)v16 + 61702) = 3;
    v18 = GetStringWithIndex(0xCu);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v17 + 52))(
        v16, v18, 1, 1, &dword_100AB448);
    ++*((_WORD *)v4 + 10);
    ++*((_WORD *)v4 + 418);
    v78 = (float)dword_100AB428;
    v81 = (float)dword_100AB42C;
    v19 = (_DWORD *)malloc(0x1E214u);
    if (v19)
        v20 = meth_unk1E214_init(v19);
    else
        v20 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v20;
    if (!v20)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, float, float, int, int, int, int, int))(*v20 + 56))(
        v20, a1, COERCE_FLOAT(LODWORD(v78)), COERCE_FLOAT(LODWORD(v81)), 4202497, 2, 5, 1, 120);
    v20[3] = sub_10047360;
    v20[2] = sub_100458A0;
    v80 = (__int64)v81;
    v20[21] = v80;
    v21 = (__int64)v78;
    v20[20] = v21;
    v20[22] = v21 + 127;
    v20[23] = v80 + 33;
    v20[2650] = 0;
    v82 = v81 - -33.0;
    *((_WORD *)v20 + 5409) = 121;
    ++*((_WORD *)v4 + 10);
    v79 = v21 + 127;
    v22 = (_DWORD *)malloc(0x1E214u);
    if (v22)
        v23 = meth_unk1E214_init(v22);
    else
        v23 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v23;
    if (!v23)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, float, float, int, int, int, int, int))(*v23 + 56))(
        v23, a1, COERCE_FLOAT(LODWORD(v78)), COERCE_FLOAT(LODWORD(v82)), 4202497, 2, 5, 1, 82);
    v23[3] = sub_10047360;
    v23[2] = sub_10043FA0;
    v24 = (__int64)v82;
    v23[21] = v24;
    v23[20] = v21;
    v23[22] = v79;
    v23[23] = v24 + 33;
    v83 = v82 - -33.0;
    v23[2650] = 0;
    *((_WORD *)v23 + 5409) = 83;
    ++*((_WORD *)v4 + 10);
    v25 = (_DWORD *)malloc(0x1E214u);
    if (v25)
        v26 = meth_unk1E214_init(v25);
    else
        v26 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v26;
    if (!v26)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, float, float, int, int, int, int, int))(*v26 + 56))(
        v26, a1, COERCE_FLOAT(LODWORD(v78)), COERCE_FLOAT(LODWORD(v83)), 4202497, 2, 5, 1, 84);
    v26[3] = sub_10047360;
    v26[2] = sub_10045880;
    v27 = (__int64)v83;
    v26[21] = v27;
    v26[20] = v21;
    v26[22] = v79;
    v26[23] = v27 + 33;
    v26[2650] = 0;
    *((_WORD *)v26 + 5409) = 85;
    ++*((_WORD *)v4 + 10);
    v28 = (_DWORD *)malloc(0x1E214u);
    if (v28)
        v29 = meth_unk1E214_init(v28);
    else
        v29 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v29;
    if (!v29)
        sub_1003E260(4);
    v30 = *(_DWORD *)v29;
    (*(void(__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v29 + 56))(
        v29, a1, 1121189888, 1118437376, 1048577, 2, 5, 1, -1);
    v29[61702] = 3;
    v31 = GetStringWithIndex(0x38u);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v30 + 52))(
        v29, v31, 1, 1, &unk_100AB458);
    ++*((_WORD *)v4 + 10);
    v32 = (_DWORD *)malloc(0x1E214u);
    if (v32)
        v33 = meth_unk1E214_init(v32);
    else
        v33 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v33;
    if (!v33)
        sub_1003E260(4);
    v34 = *v33;
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v33 + 56))(
        v33, a1, 1138491392, 1115947008, 20481, 2, 5, 1, -1);
    v33[1] = sub_10041300;
    *((_WORD *)v33 + 61702) = 52;
    (*(void(__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v34 + 52))(
        v33, String2, 1, 4, &unk_100AB458);
    ++*((_WORD *)v4 + 10);
    v35 = (_DWORD *)malloc(0x1E214u);
    if (v35)
        v36 = meth_unk1E214_init(v35);
    else
        v36 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v36;
    if (!v36)
        sub_1003E260(4);
    v37 = *(_DWORD *)v36;
    (*(void(__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v36 + 56))(
        v36, a1, 1121189888, 1123418112, 1048577, 2, 5, 1, -1);
    v36[61702] = 3;
    v38 = GetStringWithIndex(0x36u);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v37 + 52))(
        v36, v38, 1, 1, &unk_100AB458);
    ++*((_WORD *)v4 + 10);
    v39 = (_DWORD *)malloc(0x1E214u);
    if (v39)
        v40 = meth_unk1E214_init(v39);
    else
        v40 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v40;
    if (!v40)
        sub_1003E260(4);
    v41 = *v40;
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v40 + 56))(
        v40, a1, 1138491392, 1120927744, 20481, 2, 5, 1, -1);
    v40[1] = sub_100413B0;
    *((_WORD *)v40 + 61702) = 52;
    (*(void(__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v41 + 52))(
        v40, String2, 1, 4, &unk_100AB458);
    ++*((_WORD *)v4 + 10);
    v42 = (_DWORD *)malloc(0x1E214u);
    if (v42)
        v43 = meth_unk1E214_init(v42);
    else
        v43 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v43;
    if (!v43)
        sub_1003E260(4);
    v44 = *(_DWORD *)v43;
    (*(void(__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(
        *(_DWORD *)v43 + 56))(v43, a1, 0, 1116471296, 1048585, 2, 5, 1, -1);
    v43[61702] = 3;
    v45 = GetStringWithIndex(0x52u);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v44 + 52))(
        v43, v45, 1, 1, &unk_100AB468);
    ++*((_WORD *)v4 + 10);
    v46 = (_DWORD *)malloc(0x1E214u);
    if (v46)
        v47 = meth_unk1E214_init(v46);
    else
        v47 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v47;
    if (!v47)
        sub_1003E260(4);
    v48 = *v47;
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v47 + 56))(
        v47, a1, 1134886912, 1120010240, 20481, 2, 5, 1, -1);
    v47[1] = sub_10041670;
    *((_WORD *)v47 + 61702) = 5;
    (*(void(__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v48 + 52))(
        v47, String2, 1, 3, &unk_100AB468);
    ++*((_WORD *)v4 + 10);
    v49 = (_DWORD *)malloc(0x1E214u);
    if (v49)
        v50 = meth_unk1E214_init(v49);
    else
        v50 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v50;
    if (!v50)
        sub_1003E260(4);
    v51 = *(_DWORD *)v50;
    (*(void(__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(
        *(_DWORD *)v50 + 56))(v50, a1, 0, 1125515264, 1048585, 2, 5, 1, -1);
    v50[61702] = 3;
    v52 = GetStringWithIndex(0x53u);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v51 + 52))(
        v50, v52, 1, 1, &unk_100AB468);
    ++*((_WORD *)v4 + 10);
    v53 = (_DWORD *)malloc(0x1E214u);
    if (v53)
        v54 = meth_unk1E214_init(v53);
    else
        v54 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v54;
    if (!v54)
        sub_1003E260(4);
    v55 = *(_DWORD *)v54;
    (*(void(__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v54 + 56))(
        v54, a1, 1138819072, 1123680256, 1048585, 2, 5, 1, -1);
    v54[61702] = 3;
    v56 = GetStringWithIndex(0x40u);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v55 + 52))(
        v54, v56, 1, 1, &unk_100AB4F8);
    ++*((_WORD *)v4 + 10);
    v57 = (_DWORD *)malloc(0x1E214u);
    if (v57)
        v58 = meth_unk1E214_init(v57);
    else
        v58 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v58;
    if (!v58)
        sub_1003E260(4);
    v59 = *(_DWORD *)v58;
    (*(void(__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v58 + 56))(
        v58, a1, 1138819072, 1127809024, 1048585, 2, 5, 1, -1);
    v58[61702] = 3;
    v60 = GetStringWithIndex(0x46u);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v59 + 52))(
        v58, v60, 1, 1, &unk_100AB4F8);
    ++*((_WORD *)v4 + 10);
    v61 = (_DWORD *)malloc(0x1E214u);
    if (v61)
        v62 = meth_unk1E214_init(v61);
    else
        v62 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v62;
    if (!v62)
        sub_1003E260(4);
    v63 = *v62;
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v62 + 56))(
        v62, a1, 1138819072, 1124925440, 20481, 2, 5, 1, -1);
    v62[1] = sub_100417B0;
    *((_WORD *)v62 + 61702) = 5;
    (*(void(__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v63 + 52))(
        v62, String2, 1, 3, &unk_100AB4F8);
    ++*((_WORD *)v4 + 10);
    v64 = (_DWORD *)malloc(0x1E214u);
    if (v64)
        v65 = meth_unk1E214_init(v64);
    else
        v65 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v65;
    if (!v65)
        sub_1003E260(4);
    v66 = *(_DWORD *)v65;
    (*(void(__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(
        *(_DWORD *)v65 + 56))(v65, a1, v4[206], 1128988672, 1048585, 2, 5, 1, -1);
    v65[61702] = 3;
    v67 = GetStringWithIndex(0x40u);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v66 + 52))(
        v65, v67, 1, 1, &unk_100AB478);
    ++*((_WORD *)v4 + 10);
    v68 = (_DWORD *)malloc(0x1E214u);
    if (v68)
        v69 = meth_unk1E214_init(v68);
    else
        v69 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v69;
    if (!v69)
        sub_1003E260(4);
    v70 = *(_DWORD *)v69;
    (*(void(__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(
        *(_DWORD *)v69 + 56))(v69, a1, v4[206], 1132756992, 1048585, 2, 5, 1, -1);
    v69[61702] = 3;
    v71 = GetStringWithIndex(0x41u);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v70 + 52))(
        v69, v71, 1, 1, &unk_100AB478);
    ++*((_WORD *)v4 + 10);
    v72 = (_DWORD *)malloc(0x1E214u);
    if (v72)
        v73 = meth_unk1E214_init(v72);
    else
        v73 = 0;
    v4[*((unsigned __int16 *)v4 + 10) + 6] = v73;
    if (!v73)
        sub_1003E260(4);
    v74 = *v73;
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v73 + 56))(
        v73, a1, 1138819072, 1129906176, 20481, 2, 5, 1, -1);
    v73[1] = sub_10041710;
    *((_WORD *)v73 + 61702) = 5;
    (*(void(__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v74 + 52))(
        v73, String2, 1, 3, &unk_100AB478);
    ++*((_WORD *)v4 + 10);
    return 1;
}
// 100409F0: using guessed type int sub_100409F0();
// 10040A20: using guessed type int sub_10040A20();
// 10041300: using guessed type int __cdecl sub_10041300(int);
// 100413B0: using guessed type int __cdecl sub_100413B0(int);
// 10043FA0: using guessed type int __cdecl sub_10043FA0(int);
// 10054B50: using guessed type int __cdecl sub_10054B50(int);
// 100AB428: using guessed type int dword_100AB428;
// 100AB42C: using guessed type int dword_100AB42C;
// 100AB448: using guessed type int dword_100AB448;
