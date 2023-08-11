#include "types-win32.h"
//----- (10035BD1) --------------------------------------------------------
CarPart *sub_10035BD1() {
    if (MEMORY[0x106C56D0] != dword_10B4E708 || dword_106C29A4 != dword_10B4E70C)
        meth_BossRallyConfig_WriteConfigFile(&gConfig, gBossRallyCfgPath);
    sub_100734F0();
    input_10079550();
    if (gNetworkPlay) {
        if (gNetworkPlay > 1)
            sub_100713B0();
        atomic_sub_10005960();
    }
    sub_1002F690();
    CloseHandle(MEMORY[0x106C6650]);
    MEMORY[0x106C6650] = 0;
    meth_unk0008C_FlipSurfaces(gUnk8C);
    sub_1006A9C0(1, 640, 480, 16, 0);
    return car_100613B0();
}
// 100713B0: using guessed type int sub_100713B0(void);
// 1022AF18: using guessed type int g_NetworkPlay;
// 106C29A4: using guessed type int dword_106C29A4;
// 106C56D0: using guessed type int dword_106C56D0;
// 10B4E708: using guessed type int dword_10B4E708;
// 10B4E70C: using guessed type int dword_10B4E70C;
