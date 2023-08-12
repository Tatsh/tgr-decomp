#include "types-win32.h"
//----- (100602B0) --------------------------------------------------------
LPDIRECTINPUTDEVICEA __thiscall meth_unk00054_100602B0(unk00054 *this) {
    LPDIRECTINPUTDEVICEA result; // eax

    result = this->lpDIDeviceA;
    if (result) {
        result->lpVtbl->Unacquire(result);
        result = (LPDIRECTINPUTDEVICEA)this->lpDIDeviceA->lpVtbl->Release(this->lpDIDeviceA);
        this->lpDIDeviceA = 0;
    }
    return result;
}
