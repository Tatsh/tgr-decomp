//----- (100400E0) --------------------------------------------------------
int __cdecl sub_100400E0(int a1) {
    unsigned __int8 v2;  // al
    const char *v3;      // edi
    char *v4;            // edx
    unsigned __int8 v5;  // bl
    int v6;              // eax
    unsigned __int8 v7;  // bl
    int v8;              // eax
    int v9;              // eax
    LPCSTR v10;          // eax
    unsigned __int8 v12; // [esp+14h] [ebp+4h]

    if (dword_10AA2844) {
        v10 = getCaptionString(0xB2u);
    } else {
        switch (dword_10AA2A0C) {
        case 0:
            v2 = sub_10069C30(g_Config, 0, dword_100AB334[2 * dword_10AA2840]);
            v3 = &aEscape[36 * sub_10040040(0, v2)];
            v4 = (char *)(a1 + 11109);
            goto LABEL_17;
        case 1:
            v5 = sub_10069C30(g_Config, 1, dword_100AB334[2 * dword_10AA2840]);
            v12 = v5;
            if (sub_10069BC0(g_Config, 1, dword_100AB334[2 * dword_10AA2840])) {
                v6 = sub_10040040(1, v5);
                v4 = (char *)(a1 + 11109);
                v3 = &byte_10B4E914[36 * v6];
                goto LABEL_17;
            }
            if (v5)
                goto LABEL_13;
            goto LABEL_14;
        case 2:
            v7 = sub_10069C30(g_Config, 2, dword_100AB334[2 * dword_10AA2840]);
            v12 = v7;
            if (!sub_10069BC0(g_Config, 2, dword_100AB334[2 * dword_10AA2840]))
                goto LABEL_12;
            v8 = sub_10040040(2, v7);
            v4 = (char *)(a1 + 11109);
            v3 = &byte_10B4E914[36 * v8];
            goto LABEL_17;
        case 3:
            v7 = sub_10069C30(g_Config, 3, dword_100AB334[2 * dword_10AA2840]);
            v12 = v7;
            if (sub_10069BC0(g_Config, 3, dword_100AB334[2 * dword_10AA2840])) {
                v9 = sub_10040040(3, v7);
                v4 = (char *)(a1 + 11109);
                v3 = &byte_10B4E7AC[36 * v9];
                goto LABEL_17;
            }
        LABEL_12:
            if (v7) {
            LABEL_13:
                v3 = &aEscape[36 * sub_10040040(0, v12)];
                v4 = (char *)(a1 + 11109);
                goto LABEL_17;
            }
        LABEL_14:
            v10 = getCaptionString(0xB1u);
            break;
        default:
            goto LABEL_18;
        }
    }
    v4 = (char *)(a1 + 11109);
    v3 = v10;
LABEL_17:
    strcpy(v4, v3);
LABEL_18:
    (*(void(__thiscall **)(int))(*(_DWORD *)(a1 + 11100) + 4))(a1 + 11100);
    sub_1003EE50(a1, 0);
    return 1;
}
// 100AB334: using guessed type int dword_100AB334[];
// 10AA2840: using guessed type int dword_10AA2840;
// 10AA2844: using guessed type int dword_10AA2844;
// 10AA2A0C: using guessed type int dword_10AA2A0C;
