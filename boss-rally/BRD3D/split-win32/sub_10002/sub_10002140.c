#include "types-win32.h"
//----- (10002140) --------------------------------------------------------
CarPart *sub_10002140() {
    enum MACRO_GAME_MODE v0; // eax
    void *v1;                // ebp
    char *v2;                // eax
    void **v3;               // edx
    void *v4;                // edi
    const void *v5;          // esi
    int v6;                  // ecx

    memset(&gGameMode1, 0, 0x118u);
    v0 = gGameMode;
    gGameMode1 = gGameMode;
    if (gGameMode == GAME_MODE_0) {
        v1 = dword_10ACED34;
        LOBYTE(v0) = *((_BYTE *)dword_10ACED34 + 4);
        dword_10220B24 = v0;
        dword_10220B28 = *((unsigned __int8 *)dword_10ACED34 + 5);
        dword_10220B2C = *(_DWORD *)dword_10ACED34;
        gChosenTrack1 = gChosenTrack;
        gChosenWeather2 = gChosenWeather1;
        v2 = &byte_10220B3C;
        v3 = &dword_10ACED34;
        do {
            *((_DWORD *)v2 - 1) = v3[71];
            v4 = v2 + 12;
            v2 += 64;
            v5 = v3 + 74;
            v6 = *((unsigned __int8 *)*v3 + 4 * dword_10220B24 + dword_10220B28 + 6);
            v3 += 2778;
            *((_DWORD *)v2 - 16) = v6;
            *((_DWORD *)v2 - 15) = byte_100AA210[v6];
            *((_DWORD *)v2 - 14) = *(v3 - 2690);
            qmemcpy(v4, v5, 0x30u);
        } while ((int)v2 < (int)&unk_10220B7C);
        qmemcpy(&unk_10A9DBD8, v1, 0x14Cu);
        dword_100B4050 = 1;
        sub_1002F4C0();
        qmemcpy(&dword_10AA26F0, dword_10ACED34, 0x14Cu);
        sub_1002F460();
    }
    return sub_10035BD1();
}
// 100B380C: using guessed type int gChosenTrack;
// 100B4050: using guessed type int dword_100B4050;
// 10220B20: using guessed type int gGameMode1;
// 10220B24: using guessed type int dword_10220B24;
// 10220B28: using guessed type int dword_10220B28;
// 10220B2C: using guessed type int dword_10220B2C;
// 10220B30: using guessed type int gChosenTrack1;
// 10220B34: using guessed type int gChosenWeather2;
// 10220B3C: using guessed type char byte_10220B3C;
// 104BBE08: using guessed type int gChosenWeather1;
// 10AA26F0: using guessed type int dword_10AA26F0;
