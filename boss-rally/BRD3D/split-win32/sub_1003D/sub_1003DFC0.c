#include "types-win32.h"
//----- (1003DFC0) --------------------------------------------------------
int __cdecl sub_1003DFC0() {
    int result; // eax

    result = 0;
    gChosenTrack = 0;
    gChosenWeather0 = 0;
    gChosenCar = 0;
    gTransmissionType = 1;
    gTireType = 2;
    gSuspensionType = 1;
    gConfigJoystickIndex = 0;
    gConfigJoystickPtr = (BossRallyConfigJoystick *)&gConfig;
    gHandlingType = 1;
    return result;
}
// 10094350: using guessed type int gHandlingType;
// 10094354: using guessed type int gTransmissionType;
// 10094358: using guessed type int gSuspensionType;
// 100B380C: using guessed type int gChosenTrack;
// 1022B34C: using guessed type int gChosenCar;
// 1022B350: using guessed type int gChosenWeather0;
// 10B4E1D0: using guessed type int gConfigJoystickIndex;
