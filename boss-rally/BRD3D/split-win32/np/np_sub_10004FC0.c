#include "types-win32.h"
//----- (10004FC0) --------------------------------------------------------
int np_sub_10004FC0() {
    int v0;     // eax
    int v1;     // esi
    int result; // eax
    char v3;    // al

    WaitForSingleObject(gMutex5, INFINITE);
    v0 = dword_1022AAF4;
    if (dword_1022AAF4) {
        v0 = dword_1022AAF4 + 1;
        dword_1022AAF4 = v0;
        if (v0 >= 27) {
            v0 = 0;
            dword_1022AF20 = 1;
            dword_1022AAF4 = 0;
        }
    }
    v1 = v0;
    result = ReleaseMutex(gMutex5);
    if (v1) {
        result = gNetworkPlay;
        if (gNetworkPlay) {
            result = gIsGameMode4;
            if (gIsGameMode4) {
                result = dword_106909E0;
                if (!dword_106909E0) {
                    result = dword_100BD3E0;
                    if (dword_10ACEE50 < dword_100BD3E0) {
                        v3 = atomic_sub_10004A10(dword_10094294);
                        result = sub_10004760(&unk,
                                              dword_10094294,
                                              gChosenCar,
                                              byte_10AD0854[0],
                                              byte_10AD0855[0],
                                              byte_10AD0856[0],
                                              dword_10277B48,
                                              (int)dplay4aShortName,
                                              v3 & 0xBF | 0x80,
                                              0);
                    }
                }
            }
        }
    }
    return result;
}
// 10094294: using guessed type int dword_10094294;
// 1022AAF4: using guessed type int dword_1022AAF4;
// 1022AF14: using guessed type int gIsGameMode4;
// 1022AF18: using guessed type int gNetworkPlay;
// 1022AF20: using guessed type int dword_1022AF20;
// 1022B34C: using guessed type int gChosenCar;
// 10277B48: using guessed type int dword_10277B48;
// 106909E0: using guessed type int dword_106909E0;
// 10ACEE50: using guessed type int dword_10ACEE50;
