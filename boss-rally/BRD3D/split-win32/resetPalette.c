#include "types-win32.h"
//----- (1000AB20) --------------------------------------------------------
int __thiscall resetPalette(unk8C *this) {
    IDirectDrawPalette *ddrawPalette; // eax

    ddrawPalette = this->lpDirectDrawPalette;
    if (ddrawPalette) {
        ddrawPalette->lpVtbl->Release(ddrawPalette);
        this->lpDirectDrawPalette = NULL;
    }
    if (this->lpDirect3DMaterial2) {
        free(this->lpDirect3DMaterial2);
        this->lpDirect3DMaterial2 = NULL;
    }
    if (this->field_50) {
        free((void *)this->field_50);
        this->field_50 = NULL;
    }
    this->field_4C = NULL;
    return 0;
}
