#include "../../types-win32.h"
//----- (1003EA90) --------------------------------------------------------
int __cdecl sub_1003EA90(int a1) {
    int v1; // ebx

    _itoa(*((__int16 *)&dword_10A9D068 + dword_10AA28AC), (char *)(a1 + 11109), 10);
    v1 = *(_DWORD *)(a1 + 11100);
    (*(void(__thiscall **)(int))(v1 + 8))(a1 + 11100);
    if (a1 != -11109)
        (*(void(__thiscall **)(int))(v1 + 44))(a1 + 11100);
    return 1;
}
// 1003EA90: using guessed type int __cdecl sub_1003EA90(int);
// 10A9D068: using guessed type int dword_10A9D068;
// 10AA28AC: using guessed type int dword_10AA28AC;
