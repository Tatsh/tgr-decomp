#include "types-win32.h"
//----- (100602B0) --------------------------------------------------------
LPDIRECTINPUTDEVICEA __thiscall meth_100602B0(#492 * this) {
    LPDIRECTINPUTDEVICEA result; // eax

    result = (LPDIRECTINPUTDEVICEA) * ((_DWORD *)this + 20);
    if (result) {
        result->lpVtbl->Unacquire(result);
        result = (LPDIRECTINPUTDEVICEA)(*(int(__stdcall **)(_DWORD))(**((_DWORD **)this + 20) + 8))(
            *((_DWORD *)this + 20));
        *((_DWORD *)this + 20) = 0;
    }
    return result;
}
