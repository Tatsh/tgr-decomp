#include "types-win32.h"
//----- (100790E0) --------------------------------------------------------
HRESULT __stdcall input_diEnumDevicesCallback(LPDIRECTINPUTDEVICEA deviceInstance,
                                              LPVOID userData) {
    int HRESULT; // esi
    GUID guid;   // [esp+8h] [ebp-10h] BYREF
        // The real type passed in is LPDIDEVICEINSTANCEA, and guid is assigned to deviceInstance->guidInstance. The pointer is then overwritten below with CreateDevice
    guid.Data1 = (unsigned int)deviceInstance[1].lpVtbl;
    *(IDirectInputDeviceA *)&guid.Data2 = deviceInstance[2];
    *(IDirectInputDeviceA *)guid.Data4 = deviceInstance[3];
    *(IDirectInputDeviceA *)&guid.Data4[4] = deviceInstance[4];
    if (g_DirectInputA->lpVtbl->CreateDevice(g_DirectInputA, &guid, &deviceInstance, 0) < 0) {
        OutputDebugStringA(aErrorFailedToC_0);
    } else {
        HRESULT = deviceInstance->lpVtbl->QueryInterface(
            deviceInstance, &CLSID_IDirectInputDevice2A, (LPVOID *)&gDirectInputDevice2A);
        deviceInstance->lpVtbl->Release(deviceInstance);
        if (HRESULT < 0) {
            OutputDebugStringA(aErrorFailedToO);
            return 0;
        }
        if (gDirectInputDevice2A->lpVtbl->SetCooperativeLevel(
                gDirectInputDevice2A, gHwnd, (DWORD)userData) < 0) {
            OutputDebugStringA(aErrorFailedToS);
        LABEL_8:
            gDirectInputDevice2A->lpVtbl->Release(gDirectInputDevice2A);
            gDirectInputDevice2A = 0;
            return 0;
        }
        if (gDirectInputDevice2A->lpVtbl->SetDataFormat(gDirectInputDevice2A, &g_diDataFormat) <
            0) {
            OutputDebugStringA(aErrorFailedToS_0);
            goto LABEL_8;
        }
    }
    return 0;
}
