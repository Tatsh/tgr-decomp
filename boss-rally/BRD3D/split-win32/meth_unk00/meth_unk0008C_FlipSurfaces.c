#include "types-win32.h"
//----- (1000AF00) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_FlipSurfaces(unk0008C *this) {
    unk0008C *u5C_1;                       // eax
    unk0008C *u5C_0;                       // edi
    IDirect3DViewport2 *d3dViewport2;      // ebx
    IDirect3DMaterial2 *direct3DMaterial2; // eax
    HRESULT hr;                            // edi
    D3DRECT rect;                          // [esp+10h] [ebp-10h] BYREF

    rect.x2 = gWidth;
    rect.y2 = gHeight;
    u5C_1 = this->field_8;
    rect.x1 = 0;
    rect.y1 = 0;
    *(_DWORD *)u5C_1->gap4 = 0;
    u5C_1->field_8 = 0;
    *(_DWORD *)u5C_1->gapC = 0;
    u5C_1->lpDirectDrawSurface1 = (IDirectDrawSurface *)1;
    u5C_0 = this->field_8;
    d3dViewport2 = this->lpDirect3DViewport2;
    direct3DMaterial2 = u5C_0->lpDirect3DMaterial2;
    u5C_0->lpDirectDrawSurface1 = 0;
    u5C_0->field_4C = 1;
    direct3DMaterial2->lpVtbl->SetMaterial(direct3DMaterial2, (LPD3DMATERIAL)u5C_0);
    d3dViewport2->lpVtbl->SetBackground(d3dViewport2, u5C_0->field_50);
    this->lpDirect3DViewport2->lpVtbl->Clear(
        this->lpDirect3DViewport2, 1, &rect, D3DCLEAR_ZBUFFER | D3DCLEAR_TARGET);
    hr = this->lpDirectDrawSurface0->lpVtbl->Flip(
        this->lpDirectDrawSurface0, this->lpDirectDrawSurface1, DDFLIP_WAIT);
    while (this->lpDirectDrawSurface0->lpVtbl->GetFlipStatus(this->lpDirectDrawSurface0,
                                                             DDGFS_ISFLIPDONE))
        ;
    return hr;
}
// 100A81C0: using guessed type int gWidth;
// 100A81C4: using guessed type int gHeight;
