#include "types-win32.h"
//----- (1000B170) --------------------------------------------------------
HRESULT __thiscall meth_unk00334_1000B170(unk00334 *this) {
    IDirectDrawPalette *v2; // eax
    HRESULT result;         // eax
    IDirectDraw2 *v4;       // eax

    v2 = (IDirectDrawPalette *)this->field_48;
    if (!v2 || (result = v2->lpVtbl->GetEntries(
                    v2, 0, 0, *(_DWORD *)this->gap4C, (LPPALETTEENTRY)this->bitDepth),
                result >= 0) &&
                   (result = (*(int(__stdcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(
                        *(_DWORD *)this->field_48 + 24))(
                        this->field_48, 0, 0, *(_DWORD *)this->gap4C, *(_DWORD *)&this->gap4C[4]),
                    result >= 0)) {
        v4 = this->lpDDraw2;
        if (!v4 || (result = v4->lpVtbl->FlipToGDISurface(this->lpDDraw2), result >= 0)) {
            if (this->hwnd) {
                if (IsWindow(this->hwnd)) {
                    DrawMenuBar(this->hwnd);
                    RedrawWindow(this->hwnd, 0, 0, 0x400u);
                }
            }
            result = 0;
        }
    }
    return result;
}
