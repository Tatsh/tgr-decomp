#include "../types-win32.h"
//----- (1003FE80) --------------------------------------------------------
int __cdecl sub_1003FE80(int a1) {
    const char *v1; // edi
    int v2;         // edx
    int result;     // eax
    const char *v4; // eax
    int v5;         // ecx
    int v6;         // edx

    if (g_unkC8Ptr1 == (void *)dword_10AA2964 && !dword_10AA28E8) {
        *(float *)(a1 + 12144) = *(float *)(a1 + 12144) - 8.0;
        v1 = getCaptionString(0x1Cu);
        v2 = *(_DWORD *)(a1 + 11100);
        strcpy((char *)(a1 + 11109), v1);
        (*(void(__thiscall **)(int))(v2 + 4))(a1 + 11100);
        sub_1003EE50(a1, 0);
        result = 1;
        *(float *)(a1 + 12144) = *(float *)(a1 + 12144) - -8.0;
        return result;
    }
    if (g_GameMode) {
        v5 = dword_10AA2A00;
        goto LABEL_9;
    }
    if (!byte_10AA28A8) {
        v5 = (unsigned __int8)byte_100B3821[24 * (char)dword_10AA28B8 + 2 * dword_10AA28A4];
    LABEL_9:
        v4 = getCaptionString(dword_100AC3B0[v5]);
        goto LABEL_10;
    }
    v4 = getCaptionString(dword_100AC3B0[(
        unsigned __int8)byte_100B3821[24 * (char)dword_10AA28B8 + 2 * dword_10AA28AC]]);
LABEL_10:
    v6 = *(_DWORD *)(a1 + 11100);
    strcpy((char *)(a1 + 11109), v4);
    (*(void(__thiscall **)(int))(v6 + 4))(a1 + 11100);
    sub_1003EE50(a1, 0);
    return 1;
}
// 1003FE80: using guessed type int __cdecl sub_1003FE80(int);
// 100AA010: using guessed type int g_GameMode;
// 10AA28A4: using guessed type int dword_10AA28A4;
// 10AA28A8: using guessed type char byte_10AA28A8;
// 10AA28AC: using guessed type int dword_10AA28AC;
// 10AA28B8: using guessed type int dword_10AA28B8;
// 10AA28E8: using guessed type int dword_10AA28E8;
// 10AA2964: using guessed type int dword_10AA2964;
// 10AA2A00: using guessed type int dword_10AA2A00;
