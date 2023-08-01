//----- (1004F700) --------------------------------------------------------
int __cdecl sub_1004F700(int a1) {
    _DWORD *v2;  // eax
    _DWORD *v3;  // esi
    _DWORD *v4;  // eax
    _DWORD *v5;  // ebp
    _DWORD *v6;  // eax
    _WORD *v7;   // ebp
    int v8;      // ebx
    LPCSTR v9;   // eax
    _DWORD *v10; // eax
    _DWORD *v11; // ebp
    int v12;     // eax
    _DWORD *v13; // ebx
    int i;       // ebp
    _DWORD *v15; // eax
    _DWORD *v16; // ebp
    int v17;     // ebx
    LPCSTR v18;  // eax
    FILE *v19;   // eax
    _DWORD *v20; // eax
    _DWORD *v21; // ebp
    int v22;     // ebx
    LPCSTR v23;  // eax
    _DWORD *v24; // eax
    _DWORD *v25; // ebp
    int v26;     // ebx
    LPCSTR v27;  // eax
    _DWORD *v28; // eax
    _DWORD *v29; // ebp
    _DWORD *v30; // eax
    _WORD *v31;  // ebp
    int v32;     // ebx
    LPCSTR v33;  // eax
    _DWORD *v34; // eax
    _DWORD *v35; // ebp
    int v36;     // ebx
    _DWORD *v37; // eax
    _WORD *v38;  // ebp
    int v39;     // ebx
    LPCSTR v40;  // eax
    _DWORD *v41; // eax
    _DWORD *v42; // ebp
    int v43;     // ebx
    _DWORD *v44; // eax
    _WORD *v45;  // ebp
    int v46;     // ebx
    LPCSTR v47;  // eax
    _DWORD *v48; // eax
    _DWORD *v49; // ebp
    int v50;     // ebx
    float v52;   // [esp+240h] [ebp-38h]
    float v53;   // [esp+240h] [ebp-38h]
    float v54;   // [esp+240h] [ebp-38h]
    int v55;     // [esp+250h] [ebp-28h]
    int v56;     // [esp+27Ch] [ebp+4h]

    *(_WORD *)(a1 + 18) = 0;
    Value = -1;
    dword_10AA2848 = 1;
    (*(void(__thiscall **)(_DWORD, char *))(**(_DWORD **)(dword_10AA2908 + 192) + 4))(
        *(_DWORD *)(dword_10AA2908 + 192), aRallyseasonBrf);
    dword_10AA2848 = 0;
    *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 108) = 1;
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
    v3[206] = 1128464384;
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
    v9 = getCaptionString(0x34u);
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
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v11 + 56))(
        v11, a1, v3[206], v3[207], 12289, 2, 5, 1, -1);
    v12 = v11[3598];
    v13 = v11 + 3598;
    v11[1] = sub_1003EAE0;
    v11[30845] = 1;
    (*(void(__thiscall **)(_DWORD *, int, void *, int, _DWORD, int))(v12 + 20))(
        v11 + 3598, 262145, &unk_100AB538, 4, 0, -1);
    v11[3599] = sub_10042170;
    for (i = 0; i < 26000; i += 260) {
        if (*(_DWORD *)(dword_10AA2908 + 192) + i != -4)
            (*(void(__thiscall **)(_DWORD *, int, _DWORD, int, void *, int))(*v13 + 16))(
                v13, *(_DWORD *)(dword_10AA2908 + 192) + i + 4, 0, 1, &unk_100AB4D8, 1);
    }
    ++*((_WORD *)v3 + 10);
    ++*((_WORD *)v3 + 418);
    v15 = (_DWORD *)malloc(0x1E214u);
    if (v15)
        v16 = sub_100476C0(v15);
    else
        v16 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v16;
    if (!v16)
        sub_1003E260(4);
    v17 = *v16;
    v52 = *((float *)v3 + 207) - -76.0;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v16 + 56))(
        v16, a1, v3[206], LODWORD(v52), 1060881, 2, 5, 1, -1);
    v16[3] = sub_10047360;
    v16[2] = sub_10045090;
    v16[1] = sub_10041890;
    *((_WORD *)v16 + 61702) = 2;
    v18 = getCaptionString(0x1Eu);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, _DWORD, int *))(v17 + 52))(
        v16, v18, 1, 0, &dword_100AB448);
    ++*((_WORD *)v3 + 10);
    ++*((_WORD *)v3 + 418);
    v56 = 1;
    v19 = fopen(aAutosaveBrf, aR);
    if (v19)
        fclose(v19);
    else
        v56 = 0;
    v20 = (_DWORD *)malloc(0x1E214u);
    if (v20)
        v21 = sub_100476C0(v20);
    else
        v21 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v21;
    if (!v21)
        sub_1003E260(4);
    v22 = *v21;
    v53 = *((float *)v3 + 207) - -95.0;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v21 + 56))(
        v21, a1, v3[206], LODWORD(v53), v56 != 0 ? 1056769 : 1056785, 2, 5, 1, -1);
    v21[3] = sub_10047360;
    v21[2] = sub_100450C0;
    if (v56) {
        *((_WORD *)v21 + 61702) = 3;
        v55 = 1;
    } else {
        *((_WORD *)v21 + 61702) = 2;
        v55 = 0;
    }
    v23 = getCaptionString(0x35u);
    (*(void(__thiscall **)(_DWORD *, LPCSTR, int, int, int *))(v22 + 52))(
        v21, v23, 1, v55, &dword_100AB448);
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
    v54 = *((float *)v3 + 207) - -114.0;
    (*(void(__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, int, int, int, int))(*v25 + 56))(
        v25, a1, v3[206], LODWORD(v54), 1056769, 2, 5, 1, -1);
    v25[3] = sub_10047360;
    v25[2] = sub_10046E10;
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
        v29, a1, 1117782016, 1110966272, 9, 2, 5, 0, 6);
    ++*((_WORD *)v3 + 10);
    v30 = (_DWORD *)malloc(0x1E214u);
    if (v30)
        v31 = sub_100476C0(v30);
    else
        v31 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v31;
    if (!v31)
        sub_1003E260(4);
    v32 = *(_DWORD *)v31;
    (*(void(__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v31 + 56))(
        v31, a1, 1134886912, 1125711872, 1048585, 2, 5, 1, -1);
    v31[61702] = 3;
    v33 = getCaptionString(0x36u);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v32 + 52))(
        v31, v33, 1, 1, &unk_100AB468);
    ++*((_WORD *)v3 + 10);
    v34 = (_DWORD *)malloc(0x1E214u);
    if (v34)
        v35 = sub_100476C0(v34);
    else
        v35 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v35;
    if (!v35)
        sub_1003E260(4);
    v36 = *v35;
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v35 + 56))(
        v35, a1, 1134886912, 1120010240, 20481, 2, 5, 1, -1);
    v35[1] = sub_10040A50;
    *((_WORD *)v35 + 61702) = 5;
    (*(void(__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v36 + 52))(
        v35, String2, 1, 3, &unk_100AB468);
    ++*((_WORD *)v3 + 10);
    v37 = (_DWORD *)malloc(0x1E214u);
    if (v37)
        v38 = sub_100476C0(v37);
    else
        v38 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v38;
    if (!v38)
        sub_1003E260(4);
    v39 = *(_DWORD *)v38;
    (*(void(__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v38 + 56))(
        v38, a1, 1138491392, 1127546880, 1048585, 2, 5, 1, -1);
    v38[61702] = 3;
    v40 = getCaptionString(0x37u);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v39 + 52))(
        v38, v40, 1, 1, &unk_100AB488);
    ++*((_WORD *)v3 + 10);
    v41 = (_DWORD *)malloc(0x1E214u);
    if (v41)
        v42 = sub_100476C0(v41);
    else
        v42 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v42;
    if (!v42)
        sub_1003E260(4);
    v43 = *v42;
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v42 + 56))(
        v42, a1, 1138491392, 1124139008, 20481, 2, 5, 1, -1);
    v42[1] = sub_10040AC0;
    *((_WORD *)v42 + 61702) = 5;
    (*(void(__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v43 + 52))(
        v42, String2, 1, 3, &unk_100AB488);
    ++*((_WORD *)v3 + 10);
    v44 = (_DWORD *)malloc(0x1E214u);
    if (v44)
        v45 = sub_100476C0(v44);
    else
        v45 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v45;
    if (!v45)
        sub_1003E260(4);
    v46 = *(_DWORD *)v45;
    (*(void(__thiscall **)(_WORD *, int, int, int, int, int, int, int, int))(*(_DWORD *)v45 + 56))(
        v45, a1, 1138491392, 1131610112, 1048585, 2, 5, 1, -1);
    v45[61702] = 3;
    v47 = getCaptionString(0x38u);
    (*(void(__thiscall **)(_WORD *, LPCSTR, int, int, void *))(v46 + 52))(
        v45, v47, 1, 1, &unk_100AB478);
    ++*((_WORD *)v3 + 10);
    v48 = (_DWORD *)malloc(0x1E214u);
    if (v48)
        v49 = sub_100476C0(v48);
    else
        v49 = 0;
    v3[*((unsigned __int16 *)v3 + 10) + 6] = v49;
    if (!v49)
        sub_1003E260(4);
    v50 = *v49;
    (*(void(__thiscall **)(_DWORD *, int, int, int, int, int, int, int, int))(*v49 + 56))(
        v49, a1, 1138491392, 1130364928, 20481, 2, 5, 1, -1);
    v49[1] = sub_10041300;
    *((_WORD *)v49 + 61702) = 52;
    (*(void(__thiscall **)(_DWORD *, CHAR *, int, int, void *))(v50 + 52))(
        v49, String2, 1, 4, &unk_100AB478);
    ++*((_WORD *)v3 + 10);
    return 1;
}
// 10041300: using guessed type int __cdecl sub_10041300(int);
// 1004F700: using guessed type int __cdecl sub_1004F700(int);
// 100AB448: using guessed type int dword_100AB448;
// 10AA2848: using guessed type int dword_10AA2848;
// 10AA2908: using guessed type int dword_10AA2908;
