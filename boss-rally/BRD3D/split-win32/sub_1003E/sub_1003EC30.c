#include "../types-win32.h"
//----- (1003EC30) --------------------------------------------------------
int __cdecl sub_1003EC30(int a1) {
    int v1; // edi
    int v2; // eax

    v1 = *(_DWORD *)(a1 + 14392);
    v2 = (*(int(__thiscall **)(int, int))(v1 + 32))(a1 + 14392, Value);
    if (v2 < 0)
        v2 = Value;
    else
        Value = v2;
    if (dword_10AA28D8 && v2 >= 0)
        (*(void(__thiscall **)(int, int))(v1 + 36))(a1 + 14392, v2);
    return 1;
}
// 10AA28D8: using guessed type int dword_10AA28D8;
