//----- (1003C5C0) --------------------------------------------------------
int __cdecl sub_1003C5C0(int *a1, int a2, int *a3) {
    int result;  // eax
    int v4;      // ecx
    int v5;      // ebp
    int v6;      // edx
    int v7;      // eax
    int v8;      // ecx
    int v9;      // edx
    int v10;     // eax
    int v11;     // edx
    int v12;     // ecx
    int v13;     // [esp+30h] [ebp-78h] BYREF
    int v14[2];  // [esp+34h] [ebp-74h] BYREF
    char *v15;   // [esp+3Ch] [ebp-6Ch]
    int v16;     // [esp+40h] [ebp-68h]
    int v17;     // [esp+44h] [ebp-64h]
    int v18;     // [esp+50h] [ebp-58h]
    int v19;     // [esp+54h] [ebp-54h]
    int v20[20]; // [esp+58h] [ebp-50h] BYREF

    if (dword_10A9D000)
        return 0;
    if (!a1)
        return -2005467006;
    memset(v20, 0, sizeof(v20));
    v20[7] = 299025032;
    v4 = *(_DWORD *)(a2 + 200);
    v20[6] = -1363573792;
    v5 = *a1;
    v20[9] = (int)&unk_11321608;
    v20[8] = 1610667455;
    v20[17] = g_ChosenWeather;
    v20[1] = v4 != 0 ? 320 : 64;
    v20[16] = g_chosenTrack;
    v20[0] = 80;
    v20[10] = 8;
    v20[12] = a2;
    v20[18] = dword_10AA2A18;
    v20[19] = dword_100AC658;
    result =
        (*(int(__stdcall **)(int *, int *, int, _DWORD, _DWORD))(v5 + 156))(a1, v20, 130, 0, 0);
    if (result >= 0) {
        v14[0] = 0;
        v6 = *a3;
        v7 = a3[3];
        v14[1] = 0;
        v17 = v6;
        v15 = 0;
        *a3 = (int)a1;
        v16 = 0;
        v8 = a3[4];
        a3[3] = 1;
        v9 = *(_DWORD *)(a2 + 200);
        v18 = v7;
        v10 = a3[1];
        v19 = v8;
        a3[4] = v9;
        v14[0] = 16;
        v15 = dplay4aShortName;
        result = (*(int(__stdcall **)(int *, int *, int *, int, _DWORD, _DWORD, int))(v5 + 24))(
            a1, &v13, v14, v10, 0, 0, 256);
        if (result < 0) {
            v11 = v18;
            *a3 = v17;
            v12 = v19;
            a3[3] = v11;
            a3[4] = v12;
            return result;
        }
        a3[2] = v13;
        return 0;
    }
    return result;
}
// 1008F538: using guessed type int dword_1008F538;
// 100AC658: using guessed type int dword_100AC658;
// 100B380C: using guessed type int g_chosenTrack;
// 1022B350: using guessed type int g_ChosenWeather;
// 10A9D000: using guessed type int dword_10A9D000;
// 10AA2A18: using guessed type int dword_10AA2A18;
