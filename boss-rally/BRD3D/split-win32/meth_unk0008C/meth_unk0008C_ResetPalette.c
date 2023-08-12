#include "types-win32.h"
//----- (1000AB20) --------------------------------------------------------
int __thiscall meth_unk0008C_ResetPalette(unk0008C *this) {
    D3DVALUE ddrawPalette; // eax

    ddrawPalette = this->field_8.emissive.a;
    if (ddrawPalette != 0.0) {
        (*(void(__stdcall **)(D3DVALUE))(*(_DWORD *)LODWORD(ddrawPalette) + 8))(
            COERCE_D3DVALUE(LODWORD(ddrawPalette)));
        this->field_8.emissive.a = 0.0;
    }
    if (this->field_8.dwRampSize) {
        free((void *)this->field_8.dwRampSize);
        this->field_8.dwRampSize = NULL;
    }
    if (this->field_8.hTexture) {
        free((void *)this->field_8.hTexture);
        this->field_8.hTexture = NULL;
    }
    this->field_8.power = 0.0;
    return 0;
}
