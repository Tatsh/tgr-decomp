#include "../types-win32.h"
//----- (100491B0) --------------------------------------------------------
int __cdecl sub_100491B0(int a1) {
    unsigned __int16 v1; // ax
    _DWORD *v2;          // eax
    _DWORD *v3;          // esi
    _DWORD *v4;          // eax
    _DWORD *v5;          // ebp
    _DWORD *v6;          // eax
    _DWORD *v7;          // ebp
    _DWORD *v8;          // eax
    _WORD *v9;           // ebp
    int v10;             // ebx
    LPCSTR v11;          // eax
    _DWORD *v12;         // eax
    _DWORD *v13;         // ebp
    int v14;             // ebx
    LPCSTR v15;          // eax
    __int16 v16;         // dx
    _DWORD *v17;         // eax
    _DWORD *v18;         // ebp
    _DWORD *v19;         // eax
    _DWORD *v20;         // ebp
    int v21;             // ebx
    LPCSTR v22;          // eax
    __int16 v23;         // dx
    _DWORD *v24;         // eax
    _DWORD *v25;         // ebp
    _DWORD *v26;         // eax
    _DWORD *v27;         // ebp
    int v28;             // ebx
    LPCSTR v29;          // eax
    __int16 v30;         // dx
    _DWORD *v31;         // eax
    _DWORD *v32;         // ebp
    _DWORD *v33;         // eax
    _DWORD *v34;         // ebp
    int v35;             // ebx
    LPCSTR v36;          // eax
    __int16 v37;         // dx
    _DWORD *v38;         // eax
    _DWORD *v39;         // ebp
    _DWORD *v40;         // eax
    _DWORD *v41;         // ebp
    int v42;             // ebx
    LPCSTR v43;          // eax
    __int16 v44;         // dx
    _DWORD *v45;         // eax
    _DWORD *v46;         // ebp
    _DWORD *v47;         // eax
    _DWORD *v48;         // ebp
    int v49;             // ebx
    LPCSTR v50;          // eax
    __int16 v51;         // dx
    _DWORD *v52;         // eax
    _DWORD *v53;         // ebp
    int v54;             // ebx
    LPCSTR v55;          // eax
    _DWORD *v56;         // eax
    _WORD *v57;          // ebp
    int v58;             // ebx
    int result;          // eax
    float v60;           // [esp+268h] [ebp-34h]
    float v61;           // [esp+268h] [ebp-34h]
    float v62;           // [esp+268h] [ebp-34h]
    float v63;           // [esp+268h] [ebp-34h]
    float v64;           // [esp+268h] [ebp-34h]
    float v65;           // [esp+268h] [ebp-34h]

    v1 = *(_WORD *)(a1 + 16);
    *(_WORD *)(a1 + 18) = 0;
    *(_DWORD *)(a1 + 4 * v1 + 108) = 1;
    v2 = (_DWORD *)malloc(0x348u);
    if (v2)
        v3 = meth_10048470(v2);
    else
        v3 = 0;
    *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v3;
    if (!v3)
        sub_1003E260(4);
    ++*(_WORD *)(a1 + 16);
    v3[208] = a1;
    v3[4] = 0;
    v3[206] = 1128464384;
    v3[207] = 1123680256;
    v4 = (_DWORD *)malloc(0x1E214u);
    if (v4)
        v5 = meth_100476C0(v4);
    else
        v5 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v5;
    if (!v5)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))(
        *v5 + 56))(v5, a1, 0, 0, 9, 2, 5, 0, 0);
    ++*((_WORD *)v3 + 10);
    v6 = (_DWORD *)malloc(0x1E214u);
    if (v6)
        v7 = meth_100476C0(v6);
    else
        v7 = 0;
    v3[205] = v7;
    if (!v7)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, _DWORD, int))(*v7 + 56))(
        v7, a1, 0, 0, 9, 2, 5, 0, 1);
    v8 = (_DWORD *)malloc(0x1E214u);
    if (v8)
        v9 = meth_100476C0(v8);
    else
        v9 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v9;
    if (!v9)
        sub_1003E260(4);
    v10 = *(_DWORD *)v9;
    (*(void(__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(
        *(_DWORD *)v9 + 56))(v9, a1, v3[206], 1092616192, 1048585, 2, 5, 1, -1);
    v9[61702] = 3;
    v11 = getCaptionString(1u);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v10 + 52))(
        v9, v11, 1, 1, &unk_100AB508);
    ++*((_WORD *)v3 + 10);
    v12 = (_DWORD *)malloc(0x1E214u);
    if (v12)
        v13 = meth_100476C0(v12);
    else
        v13 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v13;
    if (!v13)
        sub_1003E260(4);
    v14 = *v13;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v13 + 56))(
        v13, a1, v3[206], v3[207], 1056769, 2, 5, 1, -1);
    v13[3] = sub_10047360;
    v13[2] = meth_10045900;
    *((_WORD *)v13 + 61702) = 3;
    v15 = getCaptionString(2u);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v14 + 52))(
        v13, v15, 1, 1, &dword_100AB448);
    v16 = *((_WORD *)v3 + 10);
    ++*((_WORD *)v13 + 5466);
    *((_WORD *)v13 + 5467) = v16 + 1;
    ++*((_WORD *)v3 + 10);
    ++*((_WORD *)v3 + 418);
    v17 = (_DWORD *)malloc(0x1E214u);
    if (v17)
        v18 = meth_100476C0(v17);
    else
        v18 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v18;
    if (!v18)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v18 + 56))(
        v18, a1, 1117782016, 1110966272, 2057, 2, 5, 0, 6);
    ++*((_WORD *)v3 + 10);
    v19 = (_DWORD *)malloc(0x1E214u);
    if (v19)
        v20 = meth_100476C0(v19);
    else
        v20 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v20;
    if (!v20)
        sub_1003E260(4);
    v21 = *v20;
    v60 = *((float *)v3 + 207) - -19.0;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v20 + 56))(
        v20, a1, v3[206], LODWORD(v60), 1056769, 2, 5, 1, -1);
    v20[3] = sub_100474B0;
    v20[2] = sub_10043BF0;
    *((_WORD *)v20 + 61702) = 3;
    v22 = getCaptionString(3u);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v21 + 52))(
        v20, v22, 1, 1, &dword_100AB448);
    v23 = *((_WORD *)v3 + 10);
    ++*((_WORD *)v20 + 5466);
    *((_WORD *)v20 + 5467) = v23 + 1;
    ++*((_WORD *)v3 + 10);
    ++*((_WORD *)v3 + 418);
    v24 = (_DWORD *)malloc(0x1E214u);
    if (v24)
        v25 = meth_100476C0(v24);
    else
        v25 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v25;
    if (!v25)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v25 + 56))(
        v25, a1, 1117782016, 1110966272, 2057, 2, 5, 0, 7);
    ++*((_WORD *)v3 + 10);
    v26 = (_DWORD *)malloc(0x1E214u);
    if (v26)
        v27 = meth_100476C0(v26);
    else
        v27 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v27;
    if (!v27)
        sub_1003E260(4);
    v28 = *v27;
    v61 = *((float *)v3 + 207) - -38.0;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v27 + 56))(
        v27, a1, v3[206], LODWORD(v61), 1056769, 2, 5, 1, -1);
    v27[3] = sub_100474B0;
    v27[2] = sub_10044B90;
    *((_WORD *)v27 + 61702) = 3;
    v29 = getCaptionString(4u);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v28 + 52))(
        v27, v29, 1, 1, &dword_100AB448);
    v30 = *((_WORD *)v3 + 10);
    ++*((_WORD *)v27 + 5466);
    *((_WORD *)v27 + 5467) = v30 + 1;
    ++*((_WORD *)v3 + 10);
    ++*((_WORD *)v3 + 418);
    v31 = (_DWORD *)malloc(0x1E214u);
    if (v31)
        v32 = meth_100476C0(v31);
    else
        v32 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v32;
    if (!v32)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v32 + 56))(
        v32, a1, 1117782016, 1110966272, 2057, 2, 5, 0, 8);
    ++*((_WORD *)v3 + 10);
    v33 = (_DWORD *)malloc(0x1E214u);
    if (v33)
        v34 = meth_100476C0(v33);
    else
        v34 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v34;
    if (!v34)
        sub_1003E260(4);
    v35 = *v34;
    v62 = *((float *)v3 + 207) - -57.0;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v34 + 56))(
        v34, a1, v3[206], LODWORD(v62), 1056769, 2, 5, 1, -1);
    v34[3] = sub_10047360;
    v34[2] = meth_10044F50;
    *((_WORD *)v34 + 61702) = 3;
    v36 = getCaptionString(5u);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v35 + 52))(
        v34, v36, 1, 1, &dword_100AB448);
    v37 = *((_WORD *)v3 + 10);
    ++*((_WORD *)v34 + 5466);
    *((_WORD *)v34 + 5467) = v37 + 1;
    ++*((_WORD *)v3 + 10);
    ++*((_WORD *)v3 + 418);
    v38 = (_DWORD *)malloc(0x1E214u);
    if (v38)
        v39 = meth_100476C0(v38);
    else
        v39 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v39;
    if (!v39)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v39 + 56))(
        v39, a1, 1117782016, 1110966272, 2057, 2, 5, 0, 10);
    ++*((_WORD *)v3 + 10);
    v40 = (_DWORD *)malloc(0x1E214u);
    if (v40)
        v41 = meth_100476C0(v40);
    else
        v41 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v41;
    if (!v41)
        sub_1003E260(4);
    v42 = *v41;
    v63 = *((float *)v3 + 207) - -76.0;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v41 + 56))(
        v41, a1, v3[206], LODWORD(v63), 1056769, 2, 5, 1, -1);
    v41[3] = sub_100474B0;
    v41[2] = sub_100451E0;
    *((_WORD *)v41 + 61702) = 3;
    v43 = getCaptionString(6u);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v42 + 52))(
        v41, v43, 1, 1, &dword_100AB448);
    v44 = *((_WORD *)v3 + 10);
    ++*((_WORD *)v41 + 5466);
    *((_WORD *)v41 + 5467) = v44 + 1;
    ++*((_WORD *)v3 + 10);
    ++*((_WORD *)v3 + 418);
    v45 = (_DWORD *)malloc(0x1E214u);
    if (v45)
        v46 = meth_100476C0(v45);
    else
        v46 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v46;
    if (!v46)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v46 + 56))(
        v46, a1, 1117782016, 1110966272, 2057, 2, 5, 0, 9);
    ++*((_WORD *)v3 + 10);
    v47 = (_DWORD *)malloc(0x1E214u);
    if (v47)
        v48 = meth_100476C0(v47);
    else
        v48 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v48;
    if (!v48)
        sub_1003E260(4);
    v49 = *v48;
    v64 = *((float *)v3 + 207) - -95.0;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v48 + 56))(
        v48, a1, v3[206], LODWORD(v64), 1056769, 2, 5, 1, -1);
    v48[3] = sub_100475F0;
    v48[2] = sub_10041970;
    *((_WORD *)v48 + 61702) = 3;
    v50 = getCaptionString(7u);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v49 + 52))(
        v48, v50, 1, 1, &dword_100AB448);
    v51 = *((_WORD *)v3 + 10);
    ++*((_WORD *)v48 + 5466);
    *((_WORD *)v48 + 5467) = v51 + 1;
    ++*((_WORD *)v3 + 10);
    ++*((_WORD *)v3 + 418);
    v52 = (_DWORD *)malloc(0x1E214u);
    if (v52)
        v53 = meth_100476C0(v52);
    else
        v53 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v53;
    if (!v53)
        sub_1003E260(4);
    v54 = *v53;
    v65 = *((float *)v3 + 207) - -114.0;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v53 + 56))(
        v53, a1, v3[206], LODWORD(v65), 1056769, 2, 5, 1, -1);
    v53[3] = sub_100474B0;
    v53[2] = sub_10046170;
    *((_WORD *)v53 + 61702) = 3;
    v55 = getCaptionString(8u);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v54 + 52))(
        v53, v55, 1, 1, &dword_100AB448);
    ++*((_WORD *)v3 + 10);
    ++*((_WORD *)v3 + 418);
    v56 = (_DWORD *)malloc(0x1E214u);
    if (v56)
        v57 = meth_100476C0(v56);
    else
        v57 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v57;
    if (!v57)
        sub_1003E260(4);
    v58 = *(_DWORD *)v57;
    (*(void(__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(
        *(_DWORD *)v57 + 56))(v57, a1, v3[206], 1105723392, 1048585, 2, 5, 1, -1);
    v57[61702] = 3;
    (*(void(__thiscall **)(_WORD *, char *, int, int, void *))(v58 + 52))(
        v57, asc_100AD300, 1, 1, &unk_100AB558);
    result = 1;
    dword_10A9DBD0 = (unsigned __int16)(*((_WORD *)v3 + 10))++;
    return result;
}
// 100491B0: using guessed type int __cdecl sub_100491B0(int);
// 100AB448: using guessed type int dword_100AB448;
// 10A9DBD0: using guessed type int dword_10A9DBD0;
