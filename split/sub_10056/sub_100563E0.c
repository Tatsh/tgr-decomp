//----- (100563E0) --------------------------------------------------------
int __cdecl sub_100563E0(int a1) {
    unsigned __int16 v1; // ax
    _DWORD *v2;          // eax
    _DWORD *v3;          // ebp
    _DWORD *v4;          // eax
    _DWORD *v5;          // edi
    _DWORD *v6;          // eax
    _WORD *v7;           // edi
    int v8;              // ebx
    LPCSTR v9;           // eax
    _DWORD *v10;         // eax
    _WORD *v11;          // edi
    int v12;             // ebx
    LPCSTR v13;          // eax
    _DWORD *v14;         // eax
    _DWORD *v15;         // edi
    _DWORD *v16;         // eax
    _DWORD *v17;         // ebx
    int v18;             // edi
    int v19;             // edx
    _DWORD *v20;         // eax
    _DWORD *v21;         // esi
    int v22;             // edi
    LPCSTR v23;          // eax
    _DWORD *v24;         // eax
    _DWORD *v25;         // esi
    int v26;             // edi
    LPCSTR v27;          // eax
    _DWORD *v28;         // eax
    _DWORD *v29;         // esi
    float v31;           // [esp+124h] [ebp-38h]
    float v32;           // [esp+124h] [ebp-38h]

    v1 = *(_WORD *)(a1 + 16);
    *(_WORD *)(a1 + 18) = 0;
    *(_DWORD *)(a1 + 4 * v1 + 108) = 1;
    v2 = (_DWORD *)malloc(0x348u);
    if (v2)
        v3 = sub_10048470(v2);
    else
        v3 = 0;
    *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v3;
    if (!v3)
        sub_1003E260(4);
    ++*(_WORD *)(a1 + 16);
    v3[208] = a1;
    v3[4] = 0;
    v3[206] = 1128136704;
    v3[207] = 1124204544;
    v4 = (_DWORD *)malloc(0x1E214u);
    if (v4)
        v5 = sub_100476C0(v4);
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
        v7 = sub_100476C0(v6);
    else
        v7 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v7;
    if (!v7)
        sub_1003E260(4);
    v8 = *(_DWORD *)v7;
    (*(void(__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(
        *(_DWORD *)v7 + 56))(v7, a1, v3[206], 1092616192, 1048585, 2, 5, 1, -1);
    v7[61702] = 3;
    v9 = getCaptionString(0x5Cu);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v8 + 52))(
        v7, v9, 1, 1, &unk_100AB508);
    ++*((_WORD *)v3 + 10);
    v10 = (_DWORD *)malloc(0x1E214u);
    if (v10)
        v11 = sub_100476C0(v10);
    else
        v11 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v11;
    if (!v11)
        sub_1003E260(4);
    v12 = *(_DWORD *)v11;
    (*(void(__thiscall **)(_WORD *, int, _DWORD, _DWORD, int, int, int, int, int))(
        *(_DWORD *)v11 + 56))(v11, a1, v3[206], v3[207], 1048585, 2, 5, 1, -1);
    v11[61702] = 52;
    v13 = getCaptionString(0x3Cu);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, int *))(v12 + 52))(
        v11, v13, 1, 4, &dword_100AB448);
    ++*((_WORD *)v3 + 10);
    v14 = (_DWORD *)malloc(0x1E214u);
    if (v14)
        v15 = sub_100476C0(v14);
    else
        v15 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v15;
    if (!v15)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v15 + 56))(
        v15, a1, 1125908480, 1126957056, 9, 2, 5, 0, 57);
    ++*((_WORD *)v3 + 10);
    v16 = (_DWORD *)malloc(0x1E214u);
    if (v16)
        v17 = sub_100476C0(v16);
    else
        v17 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v17;
    if (!v17)
        sub_1003E260(4);
    v18 = *v17;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v17 + 56))(
        v17, a1, v3[206], 1127088128, 2097153, 2, 5, 1, -1);
    v17[2] = sub_10042A90;
    v17[1] = sub_1003EEF0;
    v17[4] = sub_1003EF60;
    *((_WORD *)v17 + 61702) = 3;
    (*(void(__thiscall **)(_DWORD *, CHAR *, int, int, int *))(v18 + 52))(
        v17, String2, 1, 1, &dword_100AB448);
    if (strlen(dplay4aShortName) <= 1)
        strcpy(dplay4aShortName, getCaptionString(0xC0u));
    v19 = v17[2775];
    strcpy((char *)v17 + 11109, dplay4aShortName);
    (*(void(__thiscall **)(_DWORD *))(v19 + 4))(v17 + 2775);
    v17[20] = 186;
    v17[3040] = 186;
    v17[22] = 316;
    v17[3042] = 316;
    v17[21] = 172;
    v17[3041] = 172;
    v17[23] = 188;
    v17[3043] = 188;
    *((_WORD *)v17 + 6076) = *((_WORD *)v17 + 6084) - *((_WORD *)v17 + 6080) - 16;
    ++*((_WORD *)v3 + 10);
    ++*((_WORD *)v3 + 418);
    v20 = (_DWORD *)malloc(0x1E214u);
    if (v20)
        v21 = sub_100476C0(v20);
    else
        v21 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v21;
    if (!v21)
        sub_1003E260(4);
    v22 = *v21;
    v31 = *((float *)v3 + 207) - -95.0;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v21 + 56))(
        v21, a1, v3[206], LODWORD(v31), 1056769, 2, 5, 1, -1);
    v21[3] = sub_10047360;
    v21[2] = sub_10043CD0;
    *((_WORD *)v21 + 61702) = 3;
    v23 = getCaptionString(0x1Eu);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v22 + 52))(
        v21, v23, 1, 1, &dword_100AB448);
    dword_10AA29A8 = (int)v21;
    ++*((_WORD *)v3 + 10);
    ++*((_WORD *)v3 + 418);
    v24 = (_DWORD *)malloc(0x1E214u);
    if (v24)
        v25 = sub_100476C0(v24);
    else
        v25 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v25;
    if (!v25)
        sub_1003E260(4);
    v26 = *v25;
    v32 = *((float *)v3 + 207) - -114.0;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v25 + 56))(
        v25, a1, v3[206], LODWORD(v32), 1056769, 2, 5, 1, -1);
    v25[3] = sub_10047360;
    v25[2] = sub_10043FC0;
    *((_WORD *)v25 + 61702) = 3;
    v27 = getCaptionString(0xCu);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v26 + 52))(
        v25, v27, 1, 1, &dword_100AB448);
    ++*((_WORD *)v3 + 10);
    ++*((_WORD *)v3 + 418);
    v28 = (_DWORD *)malloc(0x1E214u);
    if (v28)
        v29 = sub_100476C0(v28);
    else
        v29 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v29;
    if (!v29)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v29 + 56))(
        v29, a1, 1117782016, 1110966272, 9, 2, 5, 0, 7);
    ++*((_WORD *)v3 + 10);
    return 1;
}
// 100563E0: using guessed type int __cdecl sub_100563E0(int);
// 100AB448: using guessed type int dword_100AB448;
// 10AA29A8: using guessed type int dword_10AA29A8;
