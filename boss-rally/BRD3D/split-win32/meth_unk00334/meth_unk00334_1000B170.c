#include "types-win32.h"
//----- (1000B170) --------------------------------------------------------
HRESULT __thiscall meth_unk00334_1000B170(unk00334 *this) {
    IDirectDrawPalette *v2; // eax
    HRESULT result;         // eax
    DWORD v4;               // eax

    v2 = (IDirectDrawPalette *)this->ddCaps1.dwAlphaOverlayConstBitDepths;
    if (!v2 || (result = v2->lpVtbl->GetEntries(v2,
                                                0,
                                                0,
                                                this->ddCaps1.dwAlphaOverlayPixelBitDepths,
                                                (LPPALETTEENTRY)this->ddCaps1.dwZBufferBitDepths),
                result >= 0) &&
                   (result = (*(int(__stdcall **)(DWORD, _DWORD, _DWORD, DWORD, DWORD))(
                        *(_DWORD *)this->ddCaps1.dwAlphaOverlayConstBitDepths + 24))(
                        this->ddCaps1.dwAlphaOverlayConstBitDepths,
                        0,
                        0,
                        this->ddCaps1.dwAlphaOverlayPixelBitDepths,
                        this->ddCaps1.dwAlphaOverlaySurfaceBitDepths),
                    result >= 0)) {
        v4 = this->ddCaps1.dwAlphaBltConstBitDepths;
        if (!v4 || (result = (*(int(__stdcall **)(DWORD))(*(_DWORD *)v4 + 40))(
                        this->ddCaps1.dwAlphaBltConstBitDepths),
                    result >= 0)) {
            if (this->ddCaps1.dwCaps) {
                if (IsWindow((HWND)this->ddCaps1.dwCaps)) {
                    DrawMenuBar((HWND)this->ddCaps1.dwCaps);
                    RedrawWindow((HWND)this->ddCaps1.dwCaps, 0, 0, 0x400u);
                }
            }
            result = 0;
        }
    }
    return result;
}
