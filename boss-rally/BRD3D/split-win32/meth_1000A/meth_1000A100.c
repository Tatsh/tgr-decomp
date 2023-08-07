#include "../../types-win32.h"
//----- (1000A100) --------------------------------------------------------
unk0_member2 *__thiscall meth_1000A100(unk0_member2 *this,
                                       IDirect3D2 *d3d2,
                                       IDirect3DDevice2 *d3dDevice2) {
    IDirect3DMaterial2 **d3dMaterial2;  // edi
    IDirect3D2Vtbl *d3d2Vtbl;           // ecx
    IDirect3DMaterial2 *d3dMaterial2_1; // [esp-4h] [ebp-10h]

    memset(this, 0, 0x50u); // sizeof(D3DMATERIAL)
    d3dMaterial2 = &this->lpDirect3DMaterial2;
    d3d2Vtbl = d3d2->lpVtbl;
    this->d3dMaterial.dwSize = 80;
    this->d3dMaterial.dwRampSize = 16;
    this->d3dMaterial.diffuse.a = 1.0;
    d3d2Vtbl->CreateMaterial(d3d2, &this->lpDirect3DMaterial2, 0);
    (*d3dMaterial2)->lpVtbl->SetMaterial(*d3dMaterial2, (LPD3DMATERIAL)this);
    (*d3dMaterial2)->lpVtbl->GetHandle(*d3dMaterial2, d3dDevice2, &this->lpD3DMaterialHandle);
    d3dMaterial2_1 = *d3dMaterial2;
    this->field_58 = 0;
    d3dMaterial2_1->lpVtbl->SetMaterial(d3dMaterial2_1, &this->d3dMaterial);
    return this;
}
