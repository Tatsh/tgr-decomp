#include "types-win32.h"
//----- (100414B0) --------------------------------------------------------
int __cdecl sub_100414B0(int a1) {
    int v1;              // edx
    int v2;              // ecx
    __int16 *v3;         // eax
    unsigned __int16 v4; // si
    int result;          // eax
    int v6;              // edi
    char Buffer[32];     // [esp+10h] [ebp-20h] BYREF

    v1 = 0;
    memset(Buffer, 0, sizeof(Buffer));
    if (dword_10AA289C) {
        v2 = 4;
        v3 = &word_10AA270E[4 * (char)dword_10AA28B8];
        do {
            v4 = *v3++;
            v1 += v4;
            --v2;
        } while (v2);
        _itoa(v1, Buffer, 10);
    } else {
        strcpy(Buffer, a0);
    }
    result = 0;
    if (strlen(Buffer)) {
        strcpy((char *)(a1 + 11109), _strupr(Buffer));
        v6 = *(_DWORD *)(a1 + 11100);
        (*(void(__thiscall **)(int))(v6 + 8))(a1 + 11100);
        if (a1 != -11109)
            (*(void(__thiscall **)(int))(v6 + 44))(a1 + 11100);
        result = 1;
    }
    return result;
}
// 10AA270E: using guessed type __int16 word_10AA270E[];
// 10AA289C: using guessed type int dword_10AA289C;
// 10AA28B8: using guessed type int dword_10AA28B8;
