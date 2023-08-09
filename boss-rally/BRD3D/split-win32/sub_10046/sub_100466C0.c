#include "types-win32.h"
//----- (100466C0) --------------------------------------------------------
int __cdecl sub_100466C0(int a1) {
    (*(void(__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
    if (gUnkC8Ptr1)
        (**(void(__thiscall ***)(void *, int))gUnkC8Ptr1)(gUnkC8Ptr1, 1);
    dword_10AA2984 = 0;
    gUnkC8Ptr1 = (void *)gUnkC8Ptr4;
    sub_1003E310();
    WriteConfigFile((#483 *)gConfig, gBossRallyCfgPath);
    return 0;
}
// 10AA2918: using guessed type int dword_10AA2918;
// 10AA2984: using guessed type int dword_10AA2984;
