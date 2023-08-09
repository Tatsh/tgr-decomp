#include "types-win32.h"
//----- (1000A170) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_SafeReleaseDirect3DMaterial2(unk0008C *this) {
    HRESULT hr; // eax

    hr = (HRESULT)this->lpDirect3DMaterial2;
    if (hr) {
        hr =
            (*(int(__stdcall **)(HRESULT))(*(_DWORD *)hr + 8))(hr); // IDirect3DMaterial2::Release()
        this->lpDirect3DMaterial2 = NULL;
    }
    return hr;
}
