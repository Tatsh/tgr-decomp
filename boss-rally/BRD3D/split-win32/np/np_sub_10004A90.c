#include "types-win32.h"
//----- (10004A90) --------------------------------------------------------
BOOL np_sub_10004A90() {
    BOOL v0;  // ebp
    DWORD v1; // esi
    DWORD v2; // esi

    dword_10094294 = -1;
    do {
        v0 = sub_10004590((int)&unk,
                          dword_10094294,
                          byte_10AD0854[0],
                          byte_10AD0855[0],
                          byte_10AD0856[0],
                          (int)dplay4aShortName,
                          0) != -1;
        v1 = getTicks();
        if (dword_10277B4C) {
            dword_10094294 = 0;
            sub_100049C0();
            sub_10004590((int)&unk,
                         dword_10094294,
                         byte_10AD0854[0],
                         byte_10AD0855[0],
                         byte_10AD0856[0],
                         (int)dplay4aShortName,
                         16);
            sub_10004760(&unk,
                         dword_10094294,
                         gChosenCar,
                         byte_10AD0854[0],
                         byte_10AD0855[0],
                         byte_10AD0856[0],
                         dword_10277B48,
                         (int)dplay4aShortName,
                         2,
                         16);
        }
        if (dword_10094294 != -1)
            break;
        v2 = v1 + 2000;
        do {
            if (getTicks() >= v2)
                break;
            Sleep(0);
        } while (dword_10094294 == -1);
    } while (dword_10094294 == -1);
    return v0;
}
// 10094294: using guessed type int dword_10094294;
// 1022B34C: using guessed type int g_chosenCar;
// 10277B48: using guessed type int dword_10277B48;
// 10277B4C: using guessed type int dword_10277B4C;
