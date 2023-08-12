#include "types-win32.h"
//----- (10043710) --------------------------------------------------------
void __cdecl __noreturn sub_10043710(int a1) {
    sub_1003E220();
    sub_1003E310();
    meth_BossRallyConfig_WriteConfigFile(&gConfig, gBossRallyCfgPath);
    (*(void(__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 10984) + 24))(
        *(_DWORD *)(a1 + 10984), 0);
    sub_1000C510((HANDLE *)dword_10A9D008);
    cleanUpAndExitWithCode(0);
}
