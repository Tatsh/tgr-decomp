#include "types-win32.h"
//----- (1003DFC0) --------------------------------------------------------
int __cdecl sub_1003DFC0() {
    int result; // eax

    result = 0;
    gChosenTrack = 0;
    gChosenWeather0 = 0;
    gChosenCar = 0;
    gTransmissionType = 1;
    gTireType = (void *)2;
    gSuspensionType = 1;
    gConfigJoystickIndex = 0;
    gConfigJoystickPtr = &gConfig;
    gHandlingType = 1;
    return result;
}
// 10094350: using guessed type int g_HandlingType;
// 10094354: using guessed type int g_TransmissionType;
// 10094358: using guessed type int g_SuspensionType;
// 100B380C: using guessed type int g_chosenTrack;
// 1022B34C: using guessed type int g_chosenCar;
// 1022B350: using guessed type int g_ChosenWeather;
// 10B4E1D0: using guessed type int g_ConfigJoystickIndex;
