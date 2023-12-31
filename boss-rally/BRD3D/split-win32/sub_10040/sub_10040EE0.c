#include "types-win32.h"
//----- (10040EE0) --------------------------------------------------------
int __cdecl sub_10040EE0(int a1) {
    double v1;       // st7
    double v2;       // st7
    double v3;       // st6
    int result;      // eax
    int v5;          // edi
    float v6;        // [esp+10h] [ebp-28h]
    char Buffer[32]; // [esp+18h] [ebp-20h] BYREF

    memset(Buffer, 0, sizeof(Buffer));
    if (dword_10AA28D0 == 3)
        v1 = *(float *)&dword_10AA28C8;
    else
        v1 = flt_10AA25A0[dword_10AA28D0];
    if (v1 > 0.0) {
        v2 = (double)(int)(__int64)(v1 * 100.0);
        v3 = (double)(int)(__int64)(v2 * 0.0099999998);
        v6 = v3;
        sprintf(Buffer,
                "%d:%02d.%02d",
                (unsigned int)(__int64)(v6 * 0.016666668),
                (unsigned int)(__int64)(v6 - (double)(int)(__int64)(v6 * 0.016666668) * 60.0),
                (unsigned int)(__int64)(v2 - v3 * 100.0));
    } else {
        strcpy(Buffer, asc_100AD308);
    }
    result = 0;
    if (strlen(Buffer)) {
        strcpy((char *)(a1 + 11109), _strupr(Buffer));
        v5 = *(_DWORD *)(a1 + 11100);
        (*(void(__thiscall **)(int))(v5 + 4))(a1 + 11100);
        if (a1 != -11109)
            (*(void(__thiscall **)(int))(v5 + 16))(a1 + 11100);
        result = 1;
    }
    return result;
}
// 10AA28D0: using guessed type int dword_10AA28D0;
