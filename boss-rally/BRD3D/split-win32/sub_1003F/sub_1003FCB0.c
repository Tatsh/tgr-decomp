#include "types-win32.h"
//----- (1003FCB0) --------------------------------------------------------
int __cdecl sub_1003FCB0(int a1) {
    const char *v1; // eax
    int v2;         // edx

    if (MEMORY[0x118ABDBC])
        v1 = getCaptionString(dword_100AC400[dword_10AA2A1C]);
    else
        v1 = getCaptionString(0x74u);
    v2 = *(_DWORD *)(a1 + 11100);
    strcpy((char *)(a1 + 11109), v1);
    (*(void(__thiscall **)(int))(v2 + 4))(a1 + 11100);
    sub_1003EE50(a1, 0);
    return 1;
}
// 100AC400: using guessed type int dword_100AC400[];
// 10AA2A1C: using guessed type int dword_10AA2A1C;
// 118ABDBC: using guessed type int dword_118ABDBC;
