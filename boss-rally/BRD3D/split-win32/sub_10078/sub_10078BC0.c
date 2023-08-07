#include "../../types-win32.h"
//----- (10078BC0) --------------------------------------------------------
LPDIRECTINPUTDEVICEA sub_10078BC0() {
    LPDIRECTINPUTDEVICEA result; // eax

    result = (LPDIRECTINPUTDEVICEA)--dword_118ABDD8;
    if (dword_118ABDD8 >= 0) {
        result = (LPDIRECTINPUTDEVICEA)dword_118ABDD8;
        if (!dword_118ABDD8) {
            result = g_lpDirectInputDeviceA;
            if (g_lpDirectInputDeviceA) {
                g_lpDirectInputDeviceA->lpVtbl->Unacquire(g_lpDirectInputDeviceA);
                result = (LPDIRECTINPUTDEVICEA)g_lpDirectInputDeviceA->lpVtbl->Release(
                    g_lpDirectInputDeviceA);
                g_lpDirectInputDeviceA = 0;
            }
        }
    } else {
        dword_118ABDD8 = 0;
    }
    return result;
}
// 118ABDD8: using guessed type int dword_118ABDD8;
