#include "../types-win32.h"
//----- (1003DFC0) --------------------------------------------------------
int __cdecl sub_1003DFC0() {
    int result; // eax

    result = 0;
    g_chosenTrack = 0;
    g_ChosenWeather = 0;
    g_chosenCar = 0;
    g_TransmissionType = 1;
    g_UltraCarHeader = (void *)2;
    g_SuspensionType = 1;
    g_ConfigJoystickIndex = 0;
    g_ConfigJoystickPtr = &g_Config;
    g_HandlingType = 1;
    return result;
}
// 10094350: using guessed type int g_HandlingType;
// 10094354: using guessed type int g_TransmissionType;
// 10094358: using guessed type int g_SuspensionType;
// 100B380C: using guessed type int g_chosenTrack;
// 1022B34C: using guessed type int g_chosenCar;
// 1022B350: using guessed type int g_ChosenWeather;
// 10B4E1D0: using guessed type int g_ConfigJoystickIndex;
