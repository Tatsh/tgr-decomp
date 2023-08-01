//----- (10050060) --------------------------------------------------------
int __cdecl sub_10050060(int a1) {
    _DWORD *v1;  // eax
    _DWORD *v2;  // esi
    _DWORD *v3;  // eax
    _DWORD *v4;  // ebp
    _DWORD *v5;  // eax
    _WORD *v6;   // ebp
    int v7;      // ebx
    LPCSTR v8;   // eax
    _DWORD *v9;  // eax
    _DWORD *v10; // ebp
    int v11;     // eax
    _DWORD *v12; // ebx
    int i;       // ebp
    _DWORD *v14; // eax
    _DWORD *v15; // ebp
    int v16;     // ebx
    LPCSTR v17;  // eax
    _DWORD *v18; // eax
    _DWORD *v19; // ebp
    int v20;     // ebx
    LPCSTR v21;  // eax
    _DWORD *v22; // eax
    _DWORD *v23; // ebp
    _DWORD *v24; // eax
    _WORD *v25;  // ebp
    int v26;     // ebx
    LPCSTR v27;  // eax
    _DWORD *v28; // eax
    _DWORD *v29; // ebp
    int v30;     // ebx
    _DWORD *v31; // eax
    _WORD *v32;  // ebp
    int v33;     // ebx
    LPCSTR v34;  // eax
    _DWORD *v35; // eax
    _DWORD *v36; // ebp
    int v37;     // ebx
    _DWORD *v38; // eax
    _WORD *v39;  // ebp
    int v40;     // ebx
    LPCSTR v41;  // eax
    _DWORD *v42; // eax
    _DWORD *v43; // ebp
    int v44;     // ebx
    _DWORD *v45; // eax
    _DWORD *v46; // ebp
    _DWORD *v47; // eax
    _DWORD *v48; // esi
    int v49;     // ebx
    LPCSTR v50;  // eax
    float v52;   // [esp+244h] [ebp-34h]
    float v53;   // [esp+244h] [ebp-34h]

    dword_10AA2848 = 1;
    (*(void(__thiscall **)(_DWORD, char *))(**(_DWORD **)(dword_10AA2908 + 192) + 4))(
        *(_DWORD *)(dword_10AA2908 + 192), aRallyseasonBrf);
    dword_10AA2848 = 0;
    *(_WORD *)(a1 + 18) = 0;
    Value = -1;
    *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 108) = 1;
    v1 = (_DWORD *)malloc(0x348u);
    if (v1)
        v2 = sub_10048470(v1);
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
        v4 = sub_100476C0(v3);
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
        v6 = sub_100476C0(v5);
    else
        v6 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v6;
    if (!v6)
        sub_1003E260(4);
    v7 = *(_DWORD *)v6;
    (*(void(__thiscall **)(_WORD *, int, _DWORD, int, int, int, int, int, int))(
        *(_DWORD *)v6 + 56))(v6, a1, v2[206], 1092616192, 1048585, 2, 5, 1, -1);
    v6[61702] = 3;
    v8 = getCaptionString(0x39u);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v7 + 52))(
        v6, v8, 1, 1, &unk_100AB508);
    ++*((_WORD *)v2 + 10);
    v9 = (_DWORD *)malloc(0x1E214u);
    if (v9)
        v10 = sub_100476C0(v9);
    else
        v10 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v10;
    if (!v10)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v10 + 56))(
        v10, a1, v2[206], v2[207], 12289, 2, 5, 1, -1);
    v11 = v10[3598];
    v12 = v10 + 3598;
    v10[1] = sub_1003EB10;
    v10[30845] = 1;
    (*(void(__thiscall **)(_DWORD *, int, void *, int, _DWORD, int))(v11 + 20))(
        v10 + 3598, 262145, &unk_100AB4D8, 5, 0, -1);
    v10[3599] = sub_10042020;
    v10[3603] = sub_10041DF0;
    for (i = 0; i < 26000; i += 260) {
        if (*(_DWORD *)(dword_10AA2908 + 192) + i != -4)
            (*(void(__thiscall **)(_DWORD *, int, _DWORD, int, void *, _DWORD))(*v12 + 16))(
                v12, *(_DWORD *)(dword_10AA2908 + 192) + i + 4, 0, 1, &unk_100AB4D8, 0);
    }
    ++*((_WORD *)v2 + 10);
    ++*((_WORD *)v2 + 418);
    v14 = (_DWORD *)malloc(0x1E214u);
    if (v14)
        v15 = sub_100476C0(v14);
    else
        v15 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v15;
    if (!v15)
        sub_1003E260(4);
    v16 = *v15;
    v52 = *((float *)v2 + 207) - -95.0;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v15 + 56))(
        v15, a1, v2[206], LODWORD(v52), 1060881, 2, 5, 1, -1);
    v15[3] = sub_10047360;
    v15[2] = sub_100450F0;
    v15[1] = sub_100418D0;
    *((_WORD *)v15 + 61702) = 2;
    v17 = getCaptionString(0x1Eu);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, _DWORD, int *))(v16 + 52))(
        v15, v17, 1, 0, &dword_100AB448);
    ++*((_WORD *)v2 + 10);
    ++*((_WORD *)v2 + 418);
    v18 = (_DWORD *)malloc(0x1E214u);
    if (v18)
        v19 = sub_100476C0(v18);
    else
        v19 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v19;
    if (!v19)
        sub_1003E260(4);
    v20 = *v19;
    v53 = *((float *)v2 + 207) - -114.0;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v19 + 56))(
        v19, a1, v2[206], LODWORD(v53), 1056769, 2, 5, 1, -1);
    v19[3] = sub_10047360;
    v19[2] = sub_10046EB0;
    *((_WORD *)v19 + 61702) = 3;
    v21 = getCaptionString(0xCu);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v20 + 52))(
        v19, v21, 1, 1, &dword_100AB448);
    dword_10AA29F4 = (int)v19;
    ++*((_WORD *)v2 + 10);
    ++*((_WORD *)v2 + 418);
    v22 = (_DWORD *)malloc(0x1E214u);
    if (v22)
        v23 = sub_100476C0(v22);
    else
        v23 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v23;
    if (!v23)
        sub_1003E260(4);
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD, int))(*v23 + 56))(
        v23, a1, 1117782016, 1110966272, 9, 2, 5, 0, 6);
    ++*((_WORD *)v2 + 10);
    v24 = (_DWORD *)malloc(0x1E214u);
    if (v24)
        v25 = sub_100476C0(v24);
    else
        v25 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v25;
    if (!v25)
        sub_1003E260(4);
    v26 = *(_DWORD *)v25;
    (*(void(__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v25 + 56))(
        v25, a1, 1134886912, 1125711872, 1048585, 2, 5, 1, -1);
    v25[61702] = 3;
    v27 = getCaptionString(0x36u);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v26 + 52))(
        v25, v27, 1, 1, &unk_100AB468);
    ++*((_WORD *)v2 + 10);
    v28 = (_DWORD *)malloc(0x1E214u);
    if (v28)
        v29 = sub_100476C0(v28);
    else
        v29 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v29;
    if (!v29)
        sub_1003E260(4);
    v30 = *v29;
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v29 + 56))(
        v29, a1, 1134886912, 1120010240, 20481, 2, 5, 1, -1);
    v29[1] = sub_10040A50;
    *((_WORD *)v29 + 61702) = 5;
    (*(void(__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v30 + 52))(
        v29, String2, 1, 3, &unk_100AB468);
    ++*((_WORD *)v2 + 10);
    v31 = (_DWORD *)malloc(0x1E214u);
    if (v31)
        v32 = sub_100476C0(v31);
    else
        v32 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v32;
    if (!v32)
        sub_1003E260(4);
    v33 = *(_DWORD *)v32;
    (*(void(__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v32 + 56))(
        v32, a1, 1138491392, 1127546880, 1048585, 2, 5, 1, -1);
    v32[61702] = 3;
    v34 = getCaptionString(0x37u);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v33 + 52))(
        v32, v34, 1, 1, &unk_100AB488);
    ++*((_WORD *)v2 + 10);
    v35 = (_DWORD *)malloc(0x1E214u);
    if (v35)
        v36 = sub_100476C0(v35);
    else
        v36 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v36;
    if (!v36)
        sub_1003E260(4);
    v37 = *v36;
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v36 + 56))(
        v36, a1, 1138491392, 1124139008, 20481, 2, 5, 1, -1);
    v36[1] = sub_10040AC0;
    *((_WORD *)v36 + 61702) = 5;
    (*(void(__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v37 + 52))(
        v36, String2, 1, 3, &unk_100AB488);
    ++*((_WORD *)v2 + 10);
    v38 = (_DWORD *)malloc(0x1E214u);
    if (v38)
        v39 = sub_100476C0(v38);
    else
        v39 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v39;
    if (!v39)
        sub_1003E260(4);
    v40 = *(_DWORD *)v39;
    (*(void(__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v39 + 56))(
        v39, a1, 1138491392, 1131610112, 1048585, 2, 5, 1, -1);
    v39[61702] = 3;
    v41 = getCaptionString(0x38u);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v40 + 52))(
        v39, v41, 1, 1, &unk_100AB478);
    ++*((_WORD *)v2 + 10);
    v42 = (_DWORD *)malloc(0x1E214u);
    if (v42)
        v43 = sub_100476C0(v42);
    else
        v43 = 0;
    v2[*((unsigned __int16 *)v2 + 10) + 6] = v43;
    if (!v43)
        sub_1003E260(4);
    v44 = *v43;
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v43 + 56))(
        v43, a1, 1138491392, 1130364928, 20481, 2, 5, 1, -1);
    v43[1] = sub_10041300;
    *((_WORD *)v43 + 61702) = 52;
    (*(void(__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v44 + 52))(
        v43, String2, 1, 4, &unk_100AB478);
    ++*((_WORD *)v2 + 10);
    *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 108) = 0;
    v45 = (_DWORD *)malloc(0x348u);
    if (v45)
        v46 = sub_10048470(v45);
    else
        v46 = 0;
    *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v46;
    if (!v46)
        sub_1003E260(4);
    ++*(_WORD *)(a1 + 16);
    v46[208] = a1;
    v46[4] = 0;
    v46[206] = 1128464384;
    v46[207] = 1124204544;
    v47 = (_DWORD *)malloc(0x1E214u);
    if (v47)
        v48 = sub_100476C0(v47);
    else
        v48 = 0;
    v46[*((unsigned __int16 *)v46 + 10) + 6] = v48;
    if (!v48)
        sub_1003E260(4);
    v49 = *v48;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, int, int, int, int, int, int))(*v48 + 56))(
        v48, a1, 0, 1130889216, 1048585, 2, 5, 1, -1);
    v48[3] = sub_10047360;
    v48[1] = sub_10047210;
    v48[5] = sub_1003E7A0;
    *((_WORD *)v48 + 61702) = 3;
    v50 = getCaptionString(0x3Au);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, void *))(v49 + 52))(
        v48, v50, 1, 1, &unk_100AB438);
    dword_10AA29C0 = (int)v48;
    ++*((_WORD *)v46 + 10);
    return 1;
}
// 10041300: using guessed type int __cdecl sub_10041300(int);
// 10050060: using guessed type int __cdecl sub_10050060(int);
// 100AB448: using guessed type int dword_100AB448;
// 10AA2848: using guessed type int dword_10AA2848;
// 10AA2908: using guessed type int dword_10AA2908;
// 10AA29C0: using guessed type int dword_10AA29C0;
// 10AA29F4: using guessed type int dword_10AA29F4;
