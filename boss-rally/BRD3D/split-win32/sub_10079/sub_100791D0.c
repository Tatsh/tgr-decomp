#include "../types-win32.h"
//----- (100791D0) --------------------------------------------------------
int sub_100791D0() {
    int result;                               // eax
    IDirectInputDevice2AVtbl *diDevice2AVtbl; // edx
    int v2[5];                                // [esp+14h] [ebp-14h] BYREF

    result = g_ConfigJoystickIndex;
    if (g_ConfigJoystickIndex) {
        if (++dword_118ABE00 == 1) {
            if (dword_10B4E1E0 &&
                !g_DirectInputA->lpVtbl->EnumDevices(
                    g_DirectInputA,
                    4,
                    (LPDIENUMDEVICESCALLBACKA)diEnumDevicesCallback,
                    (LPVOID)5,
                    257) &&
                g_DirectInputDevice2A) {
                diDevice2AVtbl = g_DirectInputDevice2A->lpVtbl;
                diEffect.dwStartDelay = 1;
                v2[0] = 20;
                v2[1] = 16;
                v2[2] = 0;
                v2[3] = 0;
                v2[4] = 0;
                if (diDevice2AVtbl->SetProperty(
                        g_DirectInputDevice2A, (const GUID *const)9, (LPCDIPROPHEADER)v2) < 0)
                    OutputDebugStringA(aErrorFailedToC);
                sub_100773D0();
                sub_10079390(1000, 8000);
            } else {
                g_DirectInputA->lpVtbl->EnumDevices(g_DirectInputA,
                                                    4,
                                                    (LPDIENUMDEVICESCALLBACKA)diEnumDevicesCallback,
                                                    (LPVOID)6,
                                                    1);
                sub_100773D0();
                diEffect.dwStartDelay = 0;
            }
            if (!g_DirectInputDevice2A)
                return 0;
            if (sub_10078C30(g_DirectInputDevice2A, (GUID *)4, 0, 1, -128, 128) < 0)
                goto LABEL_15;
            if (sub_10078C80((int *)g_DirectInputDevice2A, 5, 0, 1, 0) < 0)
                goto LABEL_17;
            if (sub_10078C30(g_DirectInputDevice2A, (GUID *)4, 4, 1, -128, 128) < 0) {
            LABEL_15:
                OutputDebugStringA(aErrorIdirectin);
                g_DirectInputDevice2A->lpVtbl->Unacquire(g_DirectInputDevice2A);
                g_DirectInputDevice2A->lpVtbl->Release(g_DirectInputDevice2A);
                g_DirectInputDevice2A = 0;
                return 0;
            }
            if (sub_10078C80((int *)g_DirectInputDevice2A, 5, 4, 1, 0) >= 0) {
                result = g_ConfigJoystickIndex;
            } else {
            LABEL_17:
                OutputDebugStringA(aErrorIdirectin_0);
                g_DirectInputDevice2A->lpVtbl->Unacquire(g_DirectInputDevice2A);
                g_DirectInputDevice2A->lpVtbl->Release(g_DirectInputDevice2A);
                g_DirectInputDevice2A = 0;
                result = 0;
            }
        }
    }
    return result;
}
// 10B4E1D0: using guessed type int g_ReadJoystick;
// 10B4E1E0: using guessed type int dword_10B4E1E0;
// 118ABE00: using guessed type int dword_118ABE00;
