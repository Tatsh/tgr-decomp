#include "types-win32.h"
//----- (100413B0) --------------------------------------------------------
int __cdecl sub_100413B0(int a1) {
    LPCSTR v1;        // eax
    int v2;           // edi
    LPCSTR v4;        // [esp-4h] [ebp-90h]
    LPCSTR v5;        // [esp-4h] [ebp-90h]
    char Buffer[128]; // [esp+Ch] [ebp-80h] BYREF

    sprintf(byte_10AA2518, "%d", dword_10AA28A0 + 1);
    if (dword_10AA28A0) {
        if (dword_10AA28A0 == 1) {
            v5 = getCaptionString(0xB4u);
            sprintf(Buffer, "%s%s", byte_10AA2518, v5);
            goto LABEL_9;
        }
        if (dword_10AA28A0 == 2) {
            v4 = getCaptionString(0xB5u);
            sprintf(Buffer, "%s%s", byte_10AA2518, v4);
            goto LABEL_9;
        }
        v1 = getCaptionString(0xB6u);
    } else {
        v1 = getCaptionString(0xB3u);
    }
    sprintf(Buffer, "%s%s", byte_10AA2518, v1);
LABEL_9:
    strcpy((char *)(a1 + 11109), Buffer);
    v2 = *(_DWORD *)(a1 + 11100);
    (*(void(__thiscall **)(int))(v2 + 4))(a1 + 11100);
    if (a1 != -11109)
        (*(void(__thiscall **)(int))(v2 + 16))(a1 + 11100);
    return 1;
}
// 100413B0: using guessed type int __cdecl sub_100413B0(int);
// 10AA28A0: using guessed type int dword_10AA28A0;
