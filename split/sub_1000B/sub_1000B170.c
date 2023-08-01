//----- (1000B170) --------------------------------------------------------
HRESULT __thiscall sub_1000B170(unk0 *this) {
    IDirectDrawPalette *v2; // eax
    HRESULT result;         // eax
    IDirectDraw2 *v4;       // eax

    v2 = this->lpDirectDrawPalette;
    if (!v2 || (result = v2->lpVtbl->GetEntries(v2, 0, 0, this->sizePalette, this->lPaletteEntry),
                result >= 0) &&
                   (result = this->lpDirectDrawPalette->lpVtbl->SetEntries(
                        this->lpDirectDrawPalette, 0, 0, this->sizePalette, this->tPaletteEntry),
                    result >= 0)) {
        v4 = this->ddraw2;
        if (!v4 || (result = v4->lpVtbl->FlipToGDISurface(this->ddraw2), result >= 0)) {
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
