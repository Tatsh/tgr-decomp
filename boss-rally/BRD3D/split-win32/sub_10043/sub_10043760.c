#include "types-win32.h"
//----- (10043760) --------------------------------------------------------
int __cdecl sub_10043760(int a1) {
    *(_DWORD *)(*(_DWORD *)(a1 + 10984) + 104) = 0;
    (*(void(__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 10984) + 24))(
        *(_DWORD *)(a1 + 10984), 0);
    if (gGameMode == GAME_MODE_0)
        dword_100BD3E0 = 3;
    sub_1003E310();
    meth_BossRallyConfig_WriteConfigFile(&gConfig, gBossRallyCfgPath);
    sub_10041B50();
    return 0;
}
// 10043760: using guessed type int __cdecl sub_10043760(int);
