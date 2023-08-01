//----- (1000AB20) --------------------------------------------------------
int __thiscall resetPalette(unk0 *this) {
    LPDIRECTDRAWPALETTE ddrawPalette; // eax

    ddrawPalette = this->lpDirectDrawPalette;
    if (ddrawPalette) {
        ddrawPalette->lpVtbl->Release(ddrawPalette);
        this->lpDirectDrawPalette = 0;
    }
    if (this->lPaletteEntry) {
        free(this->lPaletteEntry);
        this->lPaletteEntry = 0;
    }
    if (this->tPaletteEntry) {
        free(this->tPaletteEntry);
        this->tPaletteEntry = 0;
    }
    this->sizePalette = 0;
    return 0;
}
