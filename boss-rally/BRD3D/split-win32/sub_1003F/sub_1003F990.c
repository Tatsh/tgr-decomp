#include "types-win32.h"
//----- (1003F990) --------------------------------------------------------
int __cdecl sub_1003F990(int a1) {
    const char *v1; // edi
    int v2;         // edx

    v1 = GetStringWithIndex(dword_100AC358[dword_100AC650]);
    v2 = *(_DWORD *)(a1 + 11100);
    strcpy((char *)(a1 + 11109), v1);
    (*(void(__thiscall **)(int))(v2 + 4))(a1 + 11100);
    sub_1003EE50(a1, 0);
    return 1;
}
// 1003F990: using guessed type int __cdecl sub_1003F990(int);
// 100AC650: using guessed type int dword_100AC650;
