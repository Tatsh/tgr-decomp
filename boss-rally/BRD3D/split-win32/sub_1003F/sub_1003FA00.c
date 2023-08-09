#include "types-win32.h"
//----- (1003FA00) --------------------------------------------------------
int __cdecl sub_1003FA00(int a1) {
    int v1;           // ebx
    const char *v2;   // edi
    char *v3;         // edx
    const char *v4;   // edi
    int v5;           // edx
    int trackIndex;   // eax
    const char *v7;   // edi
    int v8;           // edx
    unsigned int v9;  // kr14_4
    const char *v10;  // esi
    char *v11;        // edi
    int v12;          // edx
    int v14;          // [esp+Ch] [ebp-84h]
    char buffer[128]; // [esp+10h] [ebp-80h] BYREF

    if (gUnkC8Ptr1 != (unk000C8 *)dword_10AA2964 || dword_10AA28E8) {
        if (gGameMode) {
            strcpy(buffer, GetStringWithIndex(dword_100AC308[dword_100AC648]));
            trackIndex = dword_100AC648;
        } else {
            if (byte_10AA28A8) {
                v4 = GetStringWithIndex(dword_100AC308[(
                    unsigned __int8)byte_100B3820[24 * (char)dword_10AA28B8 + 2 * dword_10AA28AC]]);
                v5 = dword_10AA28AC;
            } else {
                v4 = GetStringWithIndex(dword_100AC308[(
                    unsigned __int8)byte_100B3820[24 * (char)dword_10AA28B8 + 2 * dword_10AA28A4]]);
                v5 = dword_10AA28A4;
            }
            strcpy(buffer, v4);
            trackIndex = (unsigned __int8)byte_100B3820[24 * (char)dword_10AA28B8 + 2 * v5];
        }
        v1 = a1;
        if ((gTrackData[trackIndex]->field_4 & 0x10) != 0) {
            v14 = *(_DWORD *)(a1 + 64);
            *(_DWORD *)(a1 + 12144) = 1124204544;
            v7 = GetStringWithIndex(0xB0u);
            v8 = *(_DWORD *)(a1 + 11100);
            strcpy((char *)(a1 + 11109), v7);
            (*(void(__thiscall **)(int))(v8 + 4))(a1 + 11100);
            sub_1003EE50(a1, 0);
            *(_DWORD *)(a1 + 12144) = v14;
        }
        v2 = buffer;
        v3 = (char *)(a1 + 11109);
    } else {
        v1 = a1;
        v2 = GetStringWithIndex(0x1Bu);
        v3 = (char *)(a1 + 11109);
    }
    v9 = strlen(v2) + 1;
    v10 = v2;
    v11 = v3;
    v12 = *(_DWORD *)(v1 + 11100);
    qmemcpy(v11, v10, v9);
    (*(void(__thiscall **)(int))(v12 + 4))(v1 + 11100);
    sub_1003EE50(v1, 0);
    return 1;
}
// 1003FA00: using guessed type int __cdecl sub_1003FA00(int);
// 100AC648: using guessed type int dword_100AC648;
// 10AA28A4: using guessed type int dword_10AA28A4;
// 10AA28A8: using guessed type char byte_10AA28A8;
// 10AA28AC: using guessed type int dword_10AA28AC;
// 10AA28B8: using guessed type int dword_10AA28B8;
// 10AA28E8: using guessed type int dword_10AA28E8;
// 10AA2964: using guessed type int dword_10AA2964;
