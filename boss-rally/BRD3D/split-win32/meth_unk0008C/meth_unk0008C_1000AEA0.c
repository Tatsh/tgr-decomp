#include "types-win32.h"
//----- (1000AEA0) --------------------------------------------------------
int __thiscall meth_unk0008C_1000AEA0(unk0008C *this) {
    unk0008C *v2; // edi

    v2 = this->field_8;
    this->field_1C |= 0x10u;
    if (v2) {
        meth_unk0008C_SafeReleaseDirect3DMaterial2(v2);
        free(v2);
        this->field_8 = NULL;
    }
    if (this->lpDirect3DViewport2) {
        this->lpDirect3DDevice->lpVtbl->DeleteViewport(this->lpDirect3DDevice,
                                                       this->lpDirect3DViewport2);
        this->lpDirect3DViewport2->lpVtbl->Release(this->lpDirect3DViewport2);
        this->lpDirect3DViewport2 = NULL;
    }
    return 0;
}
