#include "types-win32.h"
//----- (1000B1F0) --------------------------------------------------------
HRESULT __thiscall meth_unk00334_1000B1F0(unk00334 *this) {
    DWORD v1;       // eax
    HRESULT result; // eax

    v1 = this->ddCaps1.dwAlphaOverlayConstBitDepths;
    if (!v1 || (result = (*(int(__stdcall **)(DWORD, _DWORD, _DWORD, DWORD, DWORD))(
                    *(_DWORD *)v1 + 24))(v1,
                                         0,
                                         0,
                                         this->ddCaps1.dwAlphaOverlayPixelBitDepths,
                                         this->ddCaps1.dwZBufferBitDepths),
                result >= 0)) {
        result = 0;
    }
    return result;
}
