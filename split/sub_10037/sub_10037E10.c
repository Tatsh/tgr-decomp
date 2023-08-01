//----- (10037E10) --------------------------------------------------------
int __cdecl sub_10037E10(_DWORD *a1) {
    int v2;     // edi
    int v3;     // eax
    int v4;     // edx
    _WORD *v5;  // ecx
    int v6;     // eax
    int v7;     // ecx
    _WORD *v8;  // edx
    int v9;     // eax
    _BYTE *v10; // edx
    _WORD *i;   // eax

    sub_1002BA60((_BYTE *)a1[5], a1[4]);
    sub_1002BA80(a1[7], a1[6]);
    sub_1002B9E0((_BYTE *)a1[9], 4097);
    sub_1002B9E0((_BYTE *)a1[8], *(unsigned __int16 *)(a1[9] + 0x2000));
    v2 = 0;
    v3 = *(unsigned __int16 *)(a1[9] + 0x2000) - 1;
    if (v3 >= 1) {
        v4 = *(unsigned __int16 *)(a1[9] + 0x2000) - 1;
        v5 = (_WORD *)(a1[8] + 2 * v3);
        do {
            HIWORD(v6) = 0;
            if ((unsigned __int16)*v5 > v2) {
                LOWORD(v6) = *v5;
                v2 = v6;
            }
            --v5;
            --v4;
        } while (v4);
    }
    sub_1002B9E0((_BYTE *)a1[36], v2 + 1);
    v7 = 0;
    if (v2 >= 1) {
        v8 = (_WORD *)(a1[36] + 2 * v2);
        do {
            HIWORD(v9) = 0;
            if ((unsigned __int16)*v8 > v7) {
                LOWORD(v9) = *v8;
                v7 = v9;
            }
            --v8;
            --v2;
        } while (v2);
    }
    v10 = (_BYTE *)a1[35];
    for (i = &v10[2 * v7]; *i; ++v7)
        ++i;
    sub_1002B9E0(v10, v7);
    sub_10037FA0(a1);
    sub_1002BA00((_BYTE *)a1[3], a1[2]);
    sub_1002BF80(a1[20]);
    sub_10074DC0(4);
    if (dword_104BBE08 == 3)
        sub_10038450(a1[7], a1[6]);
    dword_118AA0C4(a1[20]);
    sub_10037FE0((int)a1);
    sub_10074DC0(1);
    dword_118AA0CC(a1[7], a1[6]);
    sub_1002B9E0((_BYTE *)a1[27], 4097);
    sub_1002B9E0((_BYTE *)a1[26], *(unsigned __int16 *)(a1[27] + 0x2000));
    sub_10038250((int)a1);
    return sub_10038410((int)a1);
}
// 104BBE08: using guessed type int dword_104BBE08;
// 118AA0C4: using guessed type int (__cdecl *dword_118AA0C4)(_DWORD);
// 118AA0CC: using guessed type int (__cdecl *dword_118AA0CC)(_DWORD, _DWORD);
