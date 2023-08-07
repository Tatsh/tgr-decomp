#include "../../types-win32.h"
//----- (10041180) --------------------------------------------------------
int __cdecl sub_10041180(int a1) {
    double v1;       // st7
    double v2;       // st6
    int result;      // eax
    int v4;          // edi
    float v5;        // [esp+10h] [ebp-28h]
    char Buffer[32]; // [esp+18h] [ebp-20h] BYREF

    memset(Buffer, 0, sizeof(Buffer));
    if (*(float *)&dword_10AA28CC > 0.0) {
        v1 = (double)(int)(__int64)(*(float *)&dword_10AA28CC * 100.0);
        v2 = (double)(int)(__int64)(v1 * 0.0099999998);
        v5 = v2;
        sprintf(Buffer,
                "%d:%02d.%02d",
                (unsigned int)(__int64)(v5 * 0.016666668),
                (unsigned int)(__int64)(v5 - (double)(int)(__int64)(v5 * 0.016666668) * 60.0),
                (unsigned int)(__int64)(v1 - v2 * 100.0));
    } else {
        strcpy(Buffer, asc_100AD308);
    }
    result = 0;
    if (strlen(Buffer)) {
        strcpy((char *)(a1 + 11109), _strupr(Buffer));
        v4 = *(_DWORD *)(a1 + 11100);
        (*(void(__thiscall **)(int))(v4 + 4))(a1 + 11100);
        if (a1 != -11109)
            (*(void(__thiscall **)(int))(v4 + 16))(a1 + 11100);
        result = 1;
    }
    return result;
}
// 10AA28CC: using guessed type int dword_10AA28CC;
