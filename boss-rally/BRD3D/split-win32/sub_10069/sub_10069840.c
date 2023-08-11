#include "types-win32.h"
//----- (10069840) --------------------------------------------------------
void sub_10069840() {
    void *v0;             // ecx
    void *v1;             // ecx
    void *v2;             // ecx
    void *v3;             // ecx
    void *ultraCarHeader; // ecx
    void *vehicle;        // ecx
    void *enemy;          // ecx

    *(_DWORD *)&gUnk06594.gap1C8[8584] = dword_10B4E708;
    dword_106C29A4 = dword_10B4E70C;
    sub_100770C0();
    gIsGameMode4 = gGameMode == GAME_MODE_4;
    dword_118ABDC0 = 0;
    dword_106909D8 = 0;
    meth_CreateMutexWrapper(v0);
    sub_10034C83();
    sub_10034C32();
    sub_10069800();
    sub_10034A85();
    sub_1002B280(0);
    if (gGameMode == GAME_MODE_1 || gGameMode == GAME_MODE_6) {
        *((_WORD *)dword_10ACED34 + 121) = -1;
        *((_WORD *)dword_10ACED34 + 120) = -1;
        *((_WORD *)dword_10ACED34 + 122) = -1;
    }
    sub_100697E0(1);
    sub_10034C66((int)meth_DebugPrint);
    *(_DWORD *)&gUnk06594.gap1C8[12548] = 0;
    dword_10B4DF28 = 0;
    dword_100B36FC = 2;
    dword_100B4050 = 1;
    gChosenWeather1 = 1;
    dword_104B0338 = 0;
    dword_104B033C = 0;
    sub_10034C66((int)sub_1002C500);
    ElementCount = 8;
    sub_10036020();
    meth_DebugPrint(v1);
    while (!sub_10071130(UNK10071130_0, (FILE *)1))
        ;
    sub_10036020();
    meth_DebugPrint(v2);
    while (!sub_10071130(UNK10071130_2, (FILE *)1))
        ;
    sub_10060D90();
    if (gGameMode == GAME_MODE_0) {
        sub_1002F460();
    LABEL_11:
        dword_100B4050 = 1;
        goto LABEL_12;
    }
    if (gGameMode == GAME_MODE_2)
        goto LABEL_11;
LABEL_12:
    gChosenWeather1 = gChosenWeather0;
    *((_DWORD *)dword_10ACED34 + 62) = gHandlingType;
    *((_DWORD *)dword_10ACED34 + 63) = gTransmissionType;
    *((_DWORD *)dword_10ACED34 + 65) = gSuspensionType;
    v3 = (void *)gTireType;
    *((_DWORD *)dword_10ACED34 + 64) = gTireType;
    meth_DebugPrint(v3);
    meth_DebugPrint(ultraCarHeader);
    meth_DebugPrint(vehicle);
    meth_DebugPrint(enemy);
    sub_10034C7E();
}
// 1006987E: variable 'v0' is possibly undefined
// 10069943: variable 'v1' is possibly undefined
// 10069969: variable 'v2' is possibly undefined
// 10069A19: variable 'ultraCarHeader' is possibly undefined
// 10069A2B: variable 'vehicle' is possibly undefined
// 10069A3D: variable 'enemy' is possibly undefined
// 10094350: using guessed type int gHandlingType;
// 10094354: using guessed type int gTransmissionType;
// 10094358: using guessed type int gSuspensionType;
// 100B36FC: using guessed type int dword_100B36FC;
// 100B4050: using guessed type int dword_100B4050;
// 1022AF14: using guessed type int gIsGameMode4;
// 1022B350: using guessed type int gChosenWeather0;
// 104B0338: using guessed type int dword_104B0338;
// 104B033C: using guessed type int dword_104B033C;
// 104BBE08: using guessed type int gChosenWeather1;
// 106909D8: using guessed type int dword_106909D8;
// 106C29A4: using guessed type int dword_106C29A4;
// 10B4DF28: using guessed type int dword_10B4DF28;
// 10B4E708: using guessed type int dword_10B4E708;
// 10B4E70C: using guessed type int dword_10B4E70C;
// 118ABDC0: using guessed type int dword_118ABDC0;
