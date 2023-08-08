#include "../types-win32.h"
//----- (100558A0) --------------------------------------------------------
int __cdecl sub_100558A0(int a1) {
    _DWORD *v1;  // eax
    _DWORD *v2;  // esi
    _DWORD *v3;  // eax
    _DWORD *v4;  // edi
    _DWORD *v5;  // eax
    _WORD *v6;   // edi
    int v7;      // ebx
    LPCSTR v8;   // eax
    _DWORD *v9;  // eax
    _DWORD *v10; // edi
    int v11;     // ebx
    LPCSTR v12;  // eax
    _DWORD *v13; // eax
    _DWORD *v14; // edi
    int v15;     // ebx
    LPCSTR v16;  // eax
    _DWORD *v17; // eax
    _DWORD *v18; // edi
    int v19;     // ebx
    LPCSTR v20;  // eax
    _DWORD *v21; // eax
    _DWORD *v22; // edi
    int v23;     // ebx
    LPCSTR v24;  // eax
    _DWORD *v25; // eax
    _DWORD *v26; // edi
    _DWORD *v27; // eax
    _WORD *v28;  // edi
    int v29;     // ebx
    LPCSTR v30;  // eax
    _DWORD *v31; // eax
    _WORD *v32;  // edi
    int v33;     // ebx
    LPCSTR v34;  // eax
    _DWORD *v35; // eax
    _DWORD *v36; // edi
    _DWORD *v37; // eax
    _DWORD *v38; // edi
    int v39;     // ebx
    _DWORD *v40; // eax
    _WORD *v41;  // edi
    int v42;     // ebx
    LPCSTR v43;  // eax
    _DWORD *v44; // eax
    _DWORD *v45; // edi
    _DWORD *v46; // eax
    _DWORD *v47; // edi
    int v48;     // ebx
    _DWORD *v49; // eax
    _DWORD *v50; // edi
    _DWORD *v51; // eax
    _DWORD *v52; // edi
    __int16 v53; // ax
    _DWORD *v54; // eax
    _DWORD *v55; // edi
    int v56;     // ebx
    float v58;   // [esp+2A8h] [ebp-34h]
    float v59;   // [esp+2A8h] [ebp-34h]
    float v60;   // [esp+2A8h] [ebp-34h]

    *(_WORD *)(a1 + 18) = 0;
    g_GameMode = 6;
    *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 108) = 1;
    v1 = (_DWORD *)malloc(0x348u);
    if (v1)
        v2 = meth_10048470(v1);
    else
        v2 = 0;
    *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v2;
    if (!v2)
        sub_1003E260(4);
    ++*(_WORD *)(a1 + 16);
    v2[208] = a1;
    v2[4] = 0;
    v2[206] = 1128464384;
    v2[207] = 1124204544;
    v3 = (_DWORD *)malloc(0x1E214u);
    if (v3)
        v4 = meth_100476C0(v3);
    else
        v4 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v4;
    if (!v4)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))(
        *v4 + 56))(v4, a1, 0, 0, 9, 2, 5, 0, 0);
    ++*((_WORD *)v2 + 10);
    v5 = (_DWORD *)malloc(0x1E214u);
    if (v5)
        v6 = meth_100476C0(v5);
    else
        v6 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v6;
    if (!v6)
        sub_1003E260(4);
    v7 = *(_DWORD *)v6;
    (*(void(__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(
        *(_DWORD *)v6 + 56))(v6, a1, v2[206], 1092616192, 1048585, 2, 5, 1, -1);
    v6[61702] = 3;
    v8 = getCaptionString(0x54u);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v7 + 52))(
        v6, v8, 1, 1, &unk_100AB508);
    ++*((_WORD *)v2 + 10);
    v9 = (_DWORD *)malloc(0x1E214u);
    if (v9)
        v10 = meth_100476C0(v9);
    else
        v10 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v10;
    if (!v10)
        sub_1003E260(4);
    v11 = *v10;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v10 + 56))(
        v10, a1, v2[206], v2[207], 1056769, 2, 5, 1, -1);
    v10[3] = sub_10044030;
    v10[2] = sub_10044010;
    *((_WORD *)v10 + 61702) = 3;
    v12 = getCaptionString(0x55u);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v11 + 52))(
        v10, v12, 1, 1, &dword_100AB448);
    ++*((_WORD *)v2 + 10);
    ++*((_WORD *)v2 + 418);
    v13 = (_DWORD *)malloc(0x1E214u);
    if (v13)
        v14 = meth_100476C0(v13);
    else
        v14 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v14;
    if (!v14)
        sub_1003E260(4);
    v15 = *v14;
    v58 = *((float *)v2 + 207) - -19.0;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v14 + 56))(
        v14, a1, v2[206], LODWORD(v58), 1056769, 2, 5, 1, -1);
    v14[3] = sub_10044070;
    v14[2] = sub_10044050;
    *((_WORD *)v14 + 61702) = 3;
    v16 = getCaptionString(0x56u);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v15 + 52))(
        v14, v16, 1, 1, &dword_100AB448);
    ++*((_WORD *)v2 + 10);
    ++*((_WORD *)v2 + 418);
    v17 = (_DWORD *)malloc(0x1E214u);
    if (v17)
        v18 = meth_100476C0(v17);
    else
        v18 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v18;
    if (!v18)
        sub_1003E260(4);
    v19 = *v18;
    v59 = *((float *)v2 + 207) - -38.0;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v18 + 56))(
        v18, a1, v2[206], LODWORD(v59), 1056769, 2, 5, 1, -1);
    v18[3] = sub_100440B0;
    v18[2] = sub_10044090;
    *((_WORD *)v18 + 61702) = 3;
    v20 = getCaptionString(0x57u);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v19 + 52))(
        v18, v20, 1, 1, &dword_100AB448);
    ++*((_WORD *)v2 + 10);
    ++*((_WORD *)v2 + 418);
    v21 = (_DWORD *)malloc(0x1E214u);
    if (v21)
        v22 = meth_100476C0(v21);
    else
        v22 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v22;
    if (!v22)
        sub_1003E260(4);
    v23 = *v22;
    v60 = *((float *)v2 + 207) - -114.0;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v22 + 56))(
        v22, a1, v2[206], LODWORD(v60), 1056769, 2, 5, 1, -1);
    v22[3] = sub_10047360;
    v22[2] = sub_100463C0;
    *((_WORD *)v22 + 61702) = 3;
    v24 = getCaptionString(0xCu);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v23 + 52))(
        v22, v24, 1, 1, &dword_100AB448);
    ++*((_WORD *)v2 + 10);
    ++*((_WORD *)v2 + 418);
    v25 = (_DWORD *)malloc(0x1E214u);
    if (v25)
        v26 = meth_100476C0(v25);
    else
        v26 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v26;
    if (!v26)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v26 + 56))(
        v26, a1, 1119748096, 1134460928, 9, 2, 5, 0, 103);
    ++*((_WORD *)v2 + 10);
    v27 = (_DWORD *)malloc(0x1E214u);
    if (v27)
        v28 = meth_100476C0(v27);
    else
        v28 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v28;
    if (!v28)
        sub_1003E260(4);
    v29 = *(_DWORD *)v28;
    (*(void(__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v28 + 56))(
        v28, a1, 1124204544, 1135083520, 1048585, 2, 5, 1, -1);
    v28[61702] = 52;
    v30 = getCaptionString(0x59u);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, int *))(v29 + 52))(
        v28, v30, 1, 4, &dword_100AB448);
    ++*((_WORD *)v2 + 10);
    v31 = (_DWORD *)malloc(0x1E214u);
    if (v31)
        v32 = meth_100476C0(v31);
    else
        v32 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v32;
    if (!v32)
        sub_1003E260(4);
    v33 = *(_DWORD *)v32;
    (*(void(__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v32 + 56))(
        v32, a1, 1124204544, 1136328704, 1048585, 2, 5, 1, -1);
    v32[61702] = 3;
    v34 = getCaptionString(0x5Au);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, int *))(v33 + 52))(
        v32, v34, 1, 1, &dword_100AB448);
    ++*((_WORD *)v2 + 10);
    v35 = (_DWORD *)malloc(0x1E214u);
    if (v35)
        v36 = meth_100476C0(v35);
    else
        v36 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v36;
    if (!v36)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v36 + 56))(
        v36, a1, 1125842944, 1136951296, 9, 2, 5, 0, 57);
    ++*((_WORD *)v2 + 10);
    v37 = (_DWORD *)malloc(0x1E214u);
    if (v37)
        v38 = meth_100476C0(v37);
    else
        v38 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v38;
    if (!v38)
        sub_1003E260(4);
    v39 = *v38;
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v38 + 56))(
        v38, a1, 1125842944, 1136951296, 2097153, 2, 5, 1, -1);
    v38[2] = sub_10042AC0;
    v38[1] = sub_1003F050;
    v38[4] = sub_10042AF0;
    *((_WORD *)v38 + 61702) = 3;
    (*(void(__thiscall **)(_DWORD *, CHAR *, int, int, int *))(v39 + 52))(
        v38, String2, 1, 1, &dword_100AB448);
    (*(void(__thiscall **)(_DWORD *))(v38[2775] + 4))(v38 + 2775);
    v38[20] = 155;
    v38[3040] = 155;
    v38[22] = 347;
    v38[3042] = 347;
    v38[21] = 393;
    v38[3041] = 393;
    v38[23] = 409;
    v38[3043] = 409;
    *((_WORD *)v38 + 6076) = *((_WORD *)v38 + 6084) - *((_WORD *)v38 + 6080) - 16;
    ++*((_WORD *)v2 + 10);
    ++*((_WORD *)v2 + 418);
    v40 = (_DWORD *)malloc(0x1E214u);
    if (v40)
        v41 = meth_100476C0(v40);
    else
        v41 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v41;
    if (!v41)
        sub_1003E260(4);
    v42 = *(_DWORD *)v41;
    (*(void(__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v41 + 56))(
        v41, a1, 1124204544, 1137573888, 1048585, 2, 5, 1, -1);
    v41[61702] = 3;
    v43 = getCaptionString(0x5Bu);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, int *))(v42 + 52))(
        v41, v43, 1, 1, &dword_100AB448);
    ++*((_WORD *)v2 + 10);
    v44 = (_DWORD *)malloc(0x1E214u);
    if (v44)
        v45 = meth_100476C0(v44);
    else
        v45 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v45;
    if (!v45)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v45 + 56))(
        v45, a1, 1125842944, 1138196480, 9, 2, 5, 0, 57);
    ++*((_WORD *)v2 + 10);
    v46 = (_DWORD *)malloc(0x1E214u);
    if (v46)
        v47 = meth_100476C0(v46);
    else
        v47 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v47;
    if (!v47)
        sub_1003E260(4);
    v48 = *v47;
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v47 + 56))(
        v47, a1, 1125842944, 1138196480, 2097153, 2, 5, 1, -1);
    v47[2] = sub_10042AC0;
    v47[1] = sub_1003F0B0;
    v47[4] = sub_10042AF0;
    *((_WORD *)v47 + 61702) = 3;
    (*(void(__thiscall **)(_DWORD *, CHAR *, int, int, int *))(v48 + 52))(
        v47, String2, 1, 1, &dword_100AB448);
    (*(void(__thiscall **)(_DWORD *))(v47[2775] + 4))(v47 + 2775);
    v47[20] = 155;
    v47[3040] = 155;
    v47[22] = 347;
    v47[3042] = 347;
    v47[21] = 431;
    v47[3041] = 431;
    v47[23] = 447;
    v47[3043] = 447;
    *((_WORD *)v47 + 6076) = *((_WORD *)v47 + 6084) - *((_WORD *)v47 + 6080) - 16;
    ++*((_WORD *)v2 + 10);
    ++*((_WORD *)v2 + 418);
    v49 = (_DWORD *)malloc(0x1E214u);
    if (v49)
        v50 = meth_100476C0(v49);
    else
        v50 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v50;
    if (!v50)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v50 + 56))(
        v50, a1, 1117782016, 1110966272, 9, 2, 5, 0, 7);
    ++*((_WORD *)v2 + 10);
    v51 = (_DWORD *)malloc(0x1E214u);
    if (v51)
        v52 = meth_100476C0(v51);
    else
        v52 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v52;
    if (!v52)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v52 + 56))(
        v52, a1, 1135181824, 1114898432, 1, 2, 5, 1, 69);
    v52[1] = sub_10040930;
    v53 = *((_WORD *)v2 + 10) + 1;
    ++*((_WORD *)v52 + 5466);
    *((_WORD *)v52 + 5467) = v53;
    ++*((_WORD *)v2 + 10);
    v54 = (_DWORD *)malloc(0x1E214u);
    if (v54)
        v55 = meth_100476C0(v54);
    else
        v55 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v55;
    if (!v55)
        sub_1003E260(4);
    v56 = *v55;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v55 + 56))(
        v55, a1, v2[206], 1126170624, 1052673, 2, 5, 1, -1);
    v55[1] = sub_1003FC40;
    *((_WORD *)v55 + 61702) = 3;
    (*(void(__thiscall **)(_DWORD *, char *, int, int, void *))(v56 + 52))(
        v55, asc_100AD300, 1, 1, &unk_100AB4A8);
    ++*((_WORD *)v2 + 10);
    return 1;
}
// 100558A0: using guessed type int __cdecl sub_100558A0(int);
// 100AA010: using guessed type int g_GameMode;
// 100AB448: using guessed type int dword_100AB448;
