#include "../../types-win32.h"
//----- (1003F760) --------------------------------------------------------
int __cdecl sub_1003F760(int a1) {
    const char *v1; // eax
    int v2;         // eax
    int v3;         // edx

    if (dword_10AA2904 != (void *)dword_10AA2964 || dword_10AA28E8) {
        v2 = dword_100AC654;
        if (dword_100AC654 > 15)
            v2 = dword_100AC654 - 16;
        v1 = getCaptionString(dword_100AC368[v2]);
    } else {
        v1 = getCaptionString(0x14u);
    }
    v3 = *(_DWORD *)(a1 + 11100);
    strcpy((char *)(a1 + 11109), v1);
    (*(void(__thiscall **)(int))(v3 + 4))(a1 + 11100);
    sub_1003EE50(a1, 0);
    return 1;
}
// 1003F760: using guessed type int __cdecl sub_1003F760(int);
// 100AC654: using guessed type int dword_100AC654;
// 10AA28E8: using guessed type int dword_10AA28E8;
// 10AA2964: using guessed type int dword_10AA2964;
