#include "types-win32.h"
//----- (100791D0) --------------------------------------------------------
int sub_100791D0() {
    int result;                               // eax
    IDirectInputDevice2AVtbl *diDevice2AVtbl; // edx
    DIPROPHEADER v2;                          // [esp+14h] [ebp-14h] BYREF
    int v3;                                   // [esp+24h] [ebp-4h]

    result = gConfigJoystickIndex;
    if (gConfigJoystickIndex) {
        if (++dword_118ABE00 == 1) {
            if (dword_10B4E1E0 &&
                !g_DirectInputA->lpVtbl->EnumDevices(
                    g_DirectInputA,
                    4,
                    (LPDIENUMDEVICESCALLBACKA)diEnumDevicesCallback,
                    (LPVOID)5,
                    257) &&
                gDirectInputDevice2A) {
                diDevice2AVtbl = gDirectInputDevice2A->lpVtbl;
                gDIEffectSquare.dwStartDelay = 1;
                v2.dwSize = 20;
                v2.dwHeaderSize = 16;
                v2.dwObj = 0;
                v2.dwHow = 0;
                v3 = 0;
                if (diDevice2AVtbl->SetProperty(gDirectInputDevice2A, (const GUID *const)9, &v2) <
                    0)
                    OutputDebugStringA(OutputString);
                sub_100773D0();
                DICreateEffects(1000, 8000);
            } else {
                g_DirectInputA->lpVtbl->EnumDevices(g_DirectInputA,
                                                    4,
                                                    (LPDIENUMDEVICESCALLBACKA)diEnumDevicesCallback,
                                                    (LPVOID)6,
                                                    1);
                sub_100773D0();
                gDIEffectSquare.dwStartDelay = 0;
            }
            if (!gDirectInputDevice2A)
                return 0;
            if (DISetProperty2(gDirectInputDevice2A, (GUID *)4, 0, 1, -128, 128) < 0)
                goto LABEL_15;
            if (DISetProperty(gDirectInputDevice2A, (GUID *)5, 0, 1u, 0) < 0)
                goto LABEL_17;
            if (DISetProperty2(gDirectInputDevice2A, (GUID *)4, 4, 1, -128, 128) < 0) {
            LABEL_15:
                OutputDebugStringA(aErrorIdirectin);
                gDirectInputDevice2A->lpVtbl->Unacquire(gDirectInputDevice2A);
                gDirectInputDevice2A->lpVtbl->Release(gDirectInputDevice2A);
                gDirectInputDevice2A = 0;
                return 0;
            }
            if (DISetProperty(gDirectInputDevice2A, (GUID *)5, 4u, 1u, 0) >= 0) {
                result = gConfigJoystickIndex;
            } else {
            LABEL_17:
                OutputDebugStringA(aErrorIdirectin_0);
                gDirectInputDevice2A->lpVtbl->Unacquire(gDirectInputDevice2A);
                gDirectInputDevice2A->lpVtbl->Release(gDirectInputDevice2A);
                gDirectInputDevice2A = 0;
                result = 0;
            }
        }
    }
    return result;
}
// 10B4E1D0: using guessed type int gConfigJoystickIndex;
// 10B4E1E0: using guessed type int dword_10B4E1E0;
// 118ABE00: using guessed type int dword_118ABE00;
