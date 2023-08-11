#include "types-win32.h"
//----- (1000AFB0) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000AFB0(unk0008C *this) {
    signed int viewportWidth;                 // ebx
    DWORD viewportHeight;                     // ebp
    double dvClipY;                           // st7
    LPDIRECT3DVIEWPORT2 d3dViewport2Instance; // eax
    IDirect3DViewport2Vtbl *d3dViewport2Vtbl; // ecx
    HRESULT hr;                               // eax
    unk0008C *v8;                             // ebx
    unk0005C *v9;                             // eax
    unk0008C *v10;                            // eax
    LPDIRECT3DVIEWPORT2 d3dViewport2_1;       // ebx
    unk0008C *v12;                            // esi
    IDirect3DMaterial2 *direct3DMaterial2;    // eax
    D3DVIEWPORT2 d3dViewport2_2;              // [esp+18h] [ebp-38h] BYREF
    int v15;                                  // [esp+4Ch] [ebp-4h]

    if (!this->lpDirect3DDevice || !this->lpDirect3DViewport2)
        return -2005522669;
    viewportWidth = abs32(this->field_80 - this->field_78);
    viewportHeight = abs32(this->field_84 - this->field_7C);
    if (viewportWidth)
        dvClipY = (double)viewportHeight / (double)viewportWidth;
    else
        dvClipY = 1.0;
    memset(&d3dViewport2_2, 0, sizeof(d3dViewport2_2));
    d3dViewport2_2.dvClipY = dvClipY;
    d3dViewport2Instance = this->lpDirect3DViewport2;
    d3dViewport2_2.dvClipHeight = dvClipY + dvClipY;
    d3dViewport2Vtbl = d3dViewport2Instance->lpVtbl;
    d3dViewport2_2.dwSize = 44;
    d3dViewport2_2.dwX = 0;
    d3dViewport2_2.dwY = 0;
    d3dViewport2_2.dwWidth = viewportWidth;
    d3dViewport2_2.dwHeight = viewportHeight;
    d3dViewport2_2.dvClipX = -1.0;
    d3dViewport2_2.dvClipWidth = 2.0;
    d3dViewport2_2.dvMinZ = 0.0;
    d3dViewport2_2.dvMaxZ = 1.0;
    hr = d3dViewport2Vtbl->SetViewport2(d3dViewport2Instance, &d3dViewport2_2);
    if (hr >= 0) {
        hr = this->lpDirect3DDevice->lpVtbl->SetCurrentViewport(this->lpDirect3DDevice,
                                                                this->lpDirect3DViewport2);
        if (hr >= 0) {
            v8 = this->field_8;
            if (v8) {
                meth_unk0008C_SafeReleaseDirect3DMaterial2(this->field_8);
                free(v8);
            }
            v9 = (unk0005C *)malloc(0x5Cu);
            v15 = 0;
            if (v9)
        v10 = (unk0008C *)meth_unk0005C_1000A100(v9, this->?, this->lpDirect3DDevice);
            else
        v10 = 0;
            this->field_8 = v10;
            *(_DWORD *)v10->field_4 = 0;
            v10->field_8 = 0;
            *(_DWORD *)v10->? = 0;
            v10->lpDirectDrawSurface1 = (IDirectDrawSurface *)1;
            d3dViewport2_1 = this->lpDirect3DViewport2;
            v12 = this->field_8;
            v15 = -1;
            direct3DMaterial2 = v12->? ;
            v12->                    ? = 1;
            v12->lpDirectDrawSurface1 = 0;
            direct3DMaterial2->lpVtbl->SetMaterial(direct3DMaterial2, (LPD3DMATERIAL)v12);
      d3dViewport2_1->lpVtbl->SetBackground(d3dViewport2_1, v12->?);
      hr = 0;
        }
    }
    return hr;
}
