#include "types-win32.h"
//----- (1003F7F0) --------------------------------------------------------
int __cdecl sub_1003F7F0(int a1) {
    const char *v1; // edi
    int v2;         // edx

    v1 = GetStringWithIndex(dword_100AC348[dword_100AC64C]);
    v2 = *(_DWORD *)(a1 + 11100);
    strcpy((char *)(a1 + 11109), v1);
    (*(void(__thiscall **)(int))(v2 + 4))(a1 + 11100);
    sub_1003EE50(a1, 0);
    return 1;
}
// 1003F7F0: using guessed type int __cdecl sub_1003F7F0(int);
// 100AC64C: using guessed type int dword_100AC64C;
