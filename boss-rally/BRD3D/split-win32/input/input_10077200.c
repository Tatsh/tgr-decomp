#include "types-win32.h"
//----- (10077200) --------------------------------------------------------
int __cdecl input_10077200(_DWORD *a1) {
    IDirectInputDevice2A *v1; // eax
    int result;               // eax
    HRESULT v3;               // eax
    int v4;                   // [esp+10h] [ebp-110h] BYREF
    int v5;                   // [esp+14h] [ebp-10Ch]
    char v6[224];             // [esp+40h] [ebp-E0h]

    v1 = gDirectInputDevice2A;
    if (!gDirectInputDevice2A) {
        gConfigJoystickIndex = 2;
        gConfigJoystickPtr = &gConfig.joystick2;
        input_100791D0();
        v1 = gDirectInputDevice2A;
        if (!gDirectInputDevice2A)
            return 1;
    }
    v1->lpVtbl->Poll(v1);
    v3 = gDirectInputDevice2A->lpVtbl->GetDeviceState(gDirectInputDevice2A, 272, &v4);
    if (v3 && v3 == -2147024866)
        input_100773D0();
    for (result = 0; result < 128; ++result) {
        if ((v6[result] & 0x80) != 0) {
            *a1 = 256;
            return result;
        }
    }
    if (v4 >= -50) {
        if (v4 <= 50) {
            if (v5 >= -50) {
                if (v5 <= 50) {
                    result = -1;
                } else {
                    *a1 = 33536;
                    result = 0;
                }
            } else {
                result = 0;
                *a1 = 33280;
            }
        } else {
            result = 0;
            *a1 = 33024;
        }
    } else {
        *a1 = 0x8000;
        result = 0;
    }
    return result;
}
// 10B4E1D0: using guessed type int gConfigJoystickIndex;
