//----- (100173F0) --------------------------------------------------------
void __cdecl sub_100173F0(_DWORD *a1) {
    int v1;           // esi
    int v2;           // edx
    int v3;           // ecx
    int v4;           // edi
    const char *v5;   // eax
    const char *v6;   // eax
    int v7;           // esi
    int v8;           // edi
    int v9;           // ebx
    LPCSTR v10;       // ebp
    int v11;          // [esp+10h] [ebp-104h]
    int v12;          // [esp+10h] [ebp-104h]
    char Buffer[256]; // [esp+14h] [ebp-100h] BYREF

    if (g_GameMode != 3) {
        v1 = *a1 + 16;
        if (dword_100BD3E8) {
            v2 = dword_100BD3E0;
            v3 = *(_DWORD *)(dword_106C2CF8 + 4008);
            if (v3 < dword_100BD3E0 || dword_100AA8B4 == 1) {
                v4 = a1[22 * dword_106C5708 + 1] + 5;
                if (v3 >= dword_100BD3E0) {
                    v6 = getCaptionString(0xE6u);
                    sprintf(Buffer, v6);
                } else {
                    if (dword_100AA8B4 == 2) {
                        v5 = asc_100A73D4;
                    } else {
                        v5 = getCaptionString(0xE5u);
                        v2 = dword_100BD3E0;
                    }
                    sprintf(Buffer, "%%y1%s%d/%d", v5, *(_DWORD *)(dword_106C2CF8 + 4008) + 1, v2);
                }
                sub_10019260();
                sub_10019280();
                sub_100192F0(15);
                sub_10019300((int)Buffer, v1, v4 + 15);
            }
        }
        if (dword_100BD3F8 && !dword_1022AF1C) {
            v7 = v1 - 2;
            v8 = a1[22 * dword_106C5708 + 1] + a1[22 * dword_106C5708 + 3] - 12;
            sub_10019240();
            sub_10019280();
            sub_100192A0(255, 240, 125, 255, 120, 0);
            sprintf(Buffer, "%d", *(_DWORD *)(dword_106C2CF8 + 4088) + 1);
            v9 = 0;
            if (*(_DWORD *)(dword_106C2CF8 + 4088)) {
                if (*(_DWORD *)(dword_106C2CF8 + 4088) == 1) {
                    v10 = getCaptionString(0xB4u);
                    v9 = 1;
                } else if (*(_DWORD *)(dword_106C2CF8 + 4088) == 2) {
                    v10 = getCaptionString(0xB5u);
                } else {
                    v10 = getCaptionString(0xB6u);
                    v9 = 1;
                }
            } else {
                v10 = getCaptionString(0xB3u);
                v9 = -3;
            }
            if (dword_100AA8B4 == 1) {
                sub_100192F0(40);
                v11 = sub_100193C0(Buffer, 40);
                sub_10019300((int)Buffer, v7 - 1, v8 - 1);
                sub_100192F0(20);
                sub_10019300((int)v10, v9 + v11 + v7 + 3, v8 - 15);
            } else {
                sub_100192F0(26);
                v12 = sub_100193C0(Buffer, 26);
                sub_10019300((int)Buffer, v7, v8);
                sub_100192F0(13);
                sub_10019300((int)v10, v12 + 2 * v9 / 3 + v7 + 3, v8 - 10);
            }
            sub_10019250();
        }
    }
}
// 100AA010: using guessed type int g_GameMode;
// 100AA8B4: using guessed type int dword_100AA8B4;
// 100BD3E8: using guessed type int dword_100BD3E8;
// 100BD3F8: using guessed type int dword_100BD3F8;
// 1022AF1C: using guessed type int dword_1022AF1C;
// 106C2CF8: using guessed type int dword_106C2CF8;
// 106C5708: using guessed type int dword_106C5708;
