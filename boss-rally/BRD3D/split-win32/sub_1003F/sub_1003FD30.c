#include "types-win32.h"
//----- (1003FD30) --------------------------------------------------------
int __cdecl sub_1003FD30(int a1) {
    const char *v1; // edi
    int v2;         // edx

    v1 = text_GetStringWithIndex(*(&dword_100AC418 + dword_10AA2A28));
    v2 = *(_DWORD *)(a1 + 11100);
    strcpy((char *)(a1 + 11109), v1);
    (*(void(__thiscall **)(int))(v2 + 4))(a1 + 11100);
    sub_1003EE50(a1, 0);
    return 1;
}
// 10AA2A28: using guessed type int dword_10AA2A28;
