#include "types-win32.h"
//----- (1000AFB0) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000AFB0(unk0008C *this) {
    signed int viewportWidth;                 // ebx
    DWORD viewportHeight;                     // ebp
    double dvClipY;                           // st7
    LPDIRECT3DVIEWPORT2 d3dViewport2Instance; // eax
    IDirect3DViewport2Vtbl *d3dViewport2Vtbl; // ecx
    HRESULT hr;                               // eax
    void *v8;                                 // ebx
    unk0005C *v9;                             // eax
    unk0005C *v10;                            // eax
    LPDIRECT3DVIEWPORT2 d3dViewport2_1;       // ebx
    _DWORD *v12;                              // esi
    int direct3DMaterial2;                    // eax
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
            v8 = (void *)this->field_8.dwSize;
            if (v8) {
                meth_unk0008C_SafeReleaseDirect3DMaterial2((unk0008C *)this->field_8.dwSize);
                free(v8);
            }
            v9 = (unk0005C *)malloc(0x5Cu);
            v15 = 0;
            if (v9)
                v10 = meth_unk0005C_1000A100(
                    v9, (IDirect3D2 *)LODWORD(this->field_8.emissive.g), this->lpDirect3DDevice);
            else
                v10 = 0;
            this->field_8.dwSize = (DWORD)v10;
            v10->d3dMaterial.diffuse.r = 0.0;
            v10->d3dMaterial.diffuse.g = 0.0;
            v10->d3dMaterial.diffuse.b = 0.0;
            v10->field_58 = 1;
            d3dViewport2_1 = this->lpDirect3DViewport2;
            v12 = (_DWORD *)this->field_8.dwSize;
            v15 = -1;
            direct3DMaterial2 = v12[21];
            v12[19] = 1;
            v12[22] = 0;
            (*(void(__stdcall **)(int, _DWORD *))(*(_DWORD *)direct3DMaterial2 + 12))(
                direct3DMaterial2, v12);
            d3dViewport2_1->lpVtbl->SetBackground(d3dViewport2_1, v12[20]);
            hr = 0;
        }
    }
    return hr;
}
