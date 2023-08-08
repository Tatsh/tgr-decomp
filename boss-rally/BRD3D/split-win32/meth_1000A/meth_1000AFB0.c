#include "../types-win32.h"
//----- (1000AFB0) --------------------------------------------------------
HRESULT __thiscall meth_1000AFB0(unk334 *this) {
    signed int viewportWidth;    // ebx
    DWORD viewportHeight;        // ebp
    double dvClipY;              // st7
    int *d3dViewport2Instance;   // eax
    int d3dViewport2Vtbl;        // ecx
    HRESULT hr;                  // eax
    void *v8;                    // ebx
    unk5C *v9;                   // eax
    unk5C *v10;                  // eax
    int d3dViewport2_1;          // ebx
    _DWORD *v12;                 // esi
    int direct3DMaterial2;       // eax
    D3DVIEWPORT2 d3dViewport2_2; // [esp+18h] [ebp-38h] BYREF
    int v15;                     // [esp+4Ch] [ebp-4h]

    if (!*(_DWORD *)&this->gap24[60] || !*(_DWORD *)&this->gap24[64])
        return -2005522669;
    viewportWidth = abs32(*(_DWORD *)&this->gap24[92] - *(_DWORD *)&this->gap24[84]);
    viewportHeight = abs32(*(_DWORD *)&this->gap24[96] - *(_DWORD *)&this->gap24[88]);
    if (viewportWidth)
        dvClipY = (double)viewportHeight / (double)viewportWidth;
    else
        dvClipY = 1.0;
    memset(&d3dViewport2_2, 0, sizeof(d3dViewport2_2));
    d3dViewport2_2.dvClipY = dvClipY;
    d3dViewport2Instance = *(int **)&this->gap24[64];
    d3dViewport2_2.dvClipHeight = dvClipY + dvClipY;
    d3dViewport2Vtbl = *d3dViewport2Instance;
    d3dViewport2_2.dwSize = 44;
    d3dViewport2_2.dwX = 0;
    d3dViewport2_2.dwY = 0;
    d3dViewport2_2.dwWidth = viewportWidth;
    d3dViewport2_2.dwHeight = viewportHeight;
    d3dViewport2_2.dvClipX = -1.0;
    d3dViewport2_2.dvClipWidth = 2.0;
    d3dViewport2_2.dvMinZ = 0.0;
    d3dViewport2_2.dvMaxZ = 1.0;
    hr = (*(int(__stdcall **)(int *, D3DVIEWPORT2 *))(d3dViewport2Vtbl + 68))(d3dViewport2Instance,
                                                                              &d3dViewport2_2);
    if (hr >= 0) {
        hr = (*(int(__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)&this->gap24[60] + 52))(
            *(_DWORD *)&this->gap24[60], *(_DWORD *)&this->gap24[64]);
        if (hr >= 0) {
            v8 = *(void **)&this->field_30.Data2;
            if (v8) {
                SafeReleaseDirect3DMaterial2(*(unk8C **)&this->field_30.Data2);
                free(v8);
            }
            v9 = (unk5C *)malloc(0x5Cu);
            v15 = 0;
            if (v9)
                v10 = meth_1000A100(
                    v9, *(IDirect3D2 **)&this->gap24[28], *(IDirect3DDevice2 **)&this->gap24[60]);
            else
                v10 = 0;
            *(_DWORD *)&this->field_30.Data2 = v10;
            v10->d3dMaterial.diffuse.r = 0.0;
            v10->d3dMaterial.diffuse.g = 0.0;
            v10->d3dMaterial.diffuse.b = 0.0;
            v10->field_58 = 1;
            d3dViewport2_1 = *(_DWORD *)&this->gap24[64];
            v12 = *(_DWORD **)&this->field_30.Data2;
            v15 = -1;
            direct3DMaterial2 = v12[21];
            v12[19] = 1;
            v12[22] = 0;
            (*(void(__stdcall **)(int, _DWORD *))(*(_DWORD *)direct3DMaterial2 + 12))(
                direct3DMaterial2, v12);
            (*(void(__stdcall **)(int, _DWORD))(*(_DWORD *)d3dViewport2_1 + 32))(d3dViewport2_1,
                                                                                 v12[20]);
            hr = 0;
        }
    }
    return hr;
}
