#include "../types-win32.h"
//----- (100602B0) --------------------------------------------------------
LPDIRECTINPUTDEVICEA __thiscall meth_100602B0(unk1 *this) {
    LPDIRECTINPUTDEVICEA result; // eax

    result = this->lpDIDeviceA;
    if (result) {
        result->lpVtbl->Unacquire(result);
        result = (LPDIRECTINPUTDEVICEA)this->lpDIDeviceA->lpVtbl->Release(this->lpDIDeviceA);
        this->lpDIDeviceA = 0;
    }
    return result;
}
