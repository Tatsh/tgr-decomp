#include "types-win32.h"
//----- (1002F8F0) --------------------------------------------------------
int sub_1002F8F0() {
    int result;   // eax
    unk000C8 *v1; // ecx
    DWORD ticks;  // eax
    unk00334 *v3; // eax

    switch (dword_10690A14) {
    case 0:
        sub_10038EC0();
        pm_sub_10073320(0);
        sub_1005FDB0();
        dword_10690A14 = 4;
        return 1;
    case 1:
        dword_10690A14 = 2;
        return 1;
    case 2:
        ++dword_10690A10;
        sub_10034C73();
        return dword_100AA5A8;
    case 3:
        sub_1006A9C0(1, gWidth1, gHeight1, gBitDepth, dword_10B4E6F4);
        ShowStaticImage(gUnk8C, aLoadingImg, 0);
        sub_1006A9C0(1, gWidth1, gHeight1, gBitDepth, dword_10B4E6F4);
        sub_10069840();
        dword_10690A14 = 1;
        return 1;
    case 4:
        v1 = gUnkC8Ptr1;
        if (!gUnkC8Ptr1 && !dword_100AC300) {
            sub_100734F0();
            dword_10690A14 = 3;
            return 1;
        }
        if (!gUnkC8Ptr1 && dword_100AC300) {
            pm_sub_10073320(0);
            sub_1005D440();
            ticks = getTicks();
            v1 = gUnkC8Ptr1;
            g_TickCount = ticks;
        }
        if (gRunBenchmark) {
            result = 1;
            gGameMode = GAME_MODE_1;
            gChosenTrack = 2;
            gChosenCar = 5;
            gChosenWeather0 = 0;
            gConfigJoystickIndex = 0;
            gConfigJoystickPtr = (BossRallyConfigJoystick *)&gConfig;
            gHandlingType = 1;
            gSuspensionType = 1;
            gTireType = 2;
            gTransmissionType = 1;
            dword_100AC300 = 0;
            dword_10690A14 = 3;
            return result;
        }
        if (v1->field_C) {
            v1->lpVtbl->meth3(v1);
        } else {
            v3 = (unk00334 *)gUnk8C->u334b;
            if (v3) {
                meth_unk00334_1001AC80(v3, &width, &height, &bitDepth, &dword_10690A04);
                v1 = gUnkC8Ptr1;
            }
            ((void(__thiscall *)(unk000C8 *))v1->lpVtbl->meth4)(v1);
        }
        if (!gUnkC8Ptr1 || !dword_100AC300)
            return 1;
        if (g_unkC8AreSamePtr) {
            if (g_TickCount + 90000 < getTicks()) {
                gUnkC8Ptr1->field_68 = 0;
                gUnkC8Ptr1->lpVtbl->meth6(gUnkC8Ptr1, 0);
                gGameMode = GAME_MODE_4;
                dword_106805B8 = 0;
                return 1;
            }
        } else {
            g_TickCount = getTicks();
        }
        return 1;
    }
}
// 10094350: using guessed type int gHandlingType;
// 10094354: using guessed type int gTransmissionType;
// 10094358: using guessed type int gSuspensionType;
// 100AA5A8: using guessed type int dword_100AA5A8;
// 100AC300: using guessed type int dword_100AC300;
// 100B380C: using guessed type int gChosenTrack;
// 1022B34C: using guessed type int gChosenCar;
// 1022B350: using guessed type int gChosenWeather0;
// 106805B8: using guessed type int dword_106805B8;
// 10690A10: using guessed type int dword_10690A10;
// 10690A14: using guessed type int dword_10690A14;
// 10AA2868: using guessed type int g_unkC8AreSamePtr;
// 10AA33E8: using guessed type int g_TickCount;
// 10B4E1D0: using guessed type int gConfigJoystickIndex;
// 10B4E6E8: using guessed type int dword_10B4E6E8;
// 10B4E6EC: using guessed type int dword_10B4E6EC;
// 10B4E6F0: using guessed type int dword_10B4E6F0;
// 10B4E6F4: using guessed type int dword_10B4E6F4;
// 118ABDC4: using guessed type int gRunBenchmark;
