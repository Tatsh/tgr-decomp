#include "types-win32.h"
//----- (100602E0) --------------------------------------------------------
int __thiscall meth_DICreateMouseDevice(unk54 *this, HWND hWnd) {
    LPDIRECTINPUTDEVICEA *diDeviceA; // esi
    HRESULT hr;                      // edi
    const CHAR *v4;                  // eax
    int result;                      // eax
    HRESULT hr_2;                    // edi
    const CHAR *v7;                  // eax
    HRESULT hr_1;                    // esi
    const CHAR *v9;                  // eax

    diDeviceA = &this->lpDIDeviceA;
    hr = g_DirectInputA->lpVtbl->CreateDevice(
        g_DirectInputA, &CLSID_GUID_SysMouse, &this->lpDIDeviceA, 0);
    if (hr >= 0) {
        hr_2 = (*diDeviceA)->lpVtbl->SetDataFormat(*diDeviceA, &g_diMouseDataFormat);
        if (hr_2 >= 0) {
            hr_1 = (*diDeviceA)
                       ->lpVtbl->SetCooperativeLevel(
                           *diDeviceA, hWnd, DISCL_FOREGROUND | DISCL_EXCLUSIVE);
            if (hr_1 >= 0) {
                result = 1;
            } else {
                v9 = getCaptionString(0xAEu);
                showMessageBox_0(hWnd, hr_1, v9);
                result = 0;
            }
        } else {
            v7 = getCaptionString(0xADu);
            showMessageBox_0(hWnd, hr_2, v7);
            result = 0;
        }
    } else {
        v4 = getCaptionString(0xACu);
        showMessageBox_0(hWnd, hr, v4);
        result = 0;
    }
    return result;
}
