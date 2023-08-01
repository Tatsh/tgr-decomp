//----- (1000AEA0) --------------------------------------------------------
int __thiscall sub_1000AEA0(unk0 *this) {
    unk0_member2 *v2; // edi

    v2 = this->unknown;
    this->field_1C |= 0x10u;
    if (v2) {
        SafeReleaseDirect3DMaterial2(v2);
        free(v2);
        this->unknown = 0;
    }
    if (this->lpDirect3DViewport2) {
        this->lpD3DDevice2->lpVtbl->DeleteViewport(this->lpD3DDevice2, this->lpDirect3DViewport2);
        this->lpDirect3DViewport2->lpVtbl->Release(this->lpDirect3DViewport2);
        this->lpDirect3DViewport2 = 0;
    }
    return 0;
}
