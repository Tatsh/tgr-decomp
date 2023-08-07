#include "../../types-win32.h"
//----- (1000AFB0) --------------------------------------------------------
HRESULT __thiscall meth_1000AFB0(unk0 *this) {
    signed int viewportWidth;                 // ebx
    DWORD viewportHeight;                     // ebp
    double dvClipY;                           // st7
    IDirect3DViewport2 *d3dViewport2Instance; // eax
    IDirect3DViewport2Vtbl *d3dViewport2Vtbl; // ecx
    HRESULT hr;                               // eax
    unk0_member2 *v8;                         // ebx
    unk0_member2 *v9;                         // eax
    unk0_member2 *v10;                        // eax
    IDirect3DViewport2 *d3dViewport2_1;       // ebx
    unk0_member2 *v12;                        // esi
    LPDIRECT3DMATERIAL2 direct3DMaterial2;    // eax
    D3DVIEWPORT2 d3dViewport2_2;              // [esp+18h] [ebp-38h] BYREF
    int v15;                                  // [esp+4Ch] [ebp-4h]

    if (!this->lpD3DDevice2 || !this->lpDirect3DViewport2)
        return -2005522669;
    viewportWidth = abs32(this->field_80 - this->field_1);
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
        hr = this->lpD3DDevice2->lpVtbl->SetCurrentViewport(this->lpD3DDevice2,
                                                            this->lpDirect3DViewport2);
        if (hr >= 0) {
            v8 = this->unknown;
            if (v8) {
                SafeReleaseDirect3DMaterial2(this->unknown);
                free(v8);
            }
            v9 = (unk0_member2 *)malloc(0x5Cu);
            v15 = 0;
            if (v9)
                v10 = meth_1000A100(v9, this->d3d2, this->lpD3DDevice2);
            else
                v10 = 0;
            this->unknown = v10;
            v10->d3dMaterial.diffuse.r = 0.0;
            v10->d3dMaterial.diffuse.g = 0.0;
            v10->d3dMaterial.diffuse.b = 0.0;
            v10->field_58 = 1;
            d3dViewport2_1 = this->lpDirect3DViewport2;
            v12 = this->unknown;
            v15 = -1;
            direct3DMaterial2 = v12->lpDirect3DMaterial2;
            v12->d3dMaterial.dwRampSize = 1;
            v12->field_58 = 0;
            direct3DMaterial2->lpVtbl->SetMaterial(direct3DMaterial2, &v12->d3dMaterial);
            d3dViewport2_1->lpVtbl->SetBackground(d3dViewport2_1, v12->lpD3DMaterialHandle);
            hr = 0;
        }
    }
    return hr;
}
