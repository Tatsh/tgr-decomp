#include "types-win32.h"
//----- (1000AB70) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000AB70(unk0008C *this) {
    IDirectDrawSurface *lpSurface;    // eax
    IDirectDrawSurfaceVtbl *iSurface; // edx
    HRESULT result;                   // eax
    BOOL v5;                          // eax
    D3DVALUE v6;                      // edi
    int v7;                           // edi
    int v8;                           // ebp
    char v9;                          // al
    int ddrawSurfaceVtbl;             // edx
    DWORD v11;                        // ebx
    unsigned int v12;                 // edx
    D3DVALUE ddraw2;                  // eax
    LPDIRECTDRAWSURFACE *ddSurface;   // edi
    int ddraw2Vtbl;                   // edx
    IDirect3DDevice2 *lpD3DDevice2;   // edi
    unk00334 *v17;                    // esi
    D3DVALUE ddrawSurface;            // [esp-8h] [ebp-8Ch]
    unsigned int v19;                 // [esp-4h] [ebp-88h]
    DDSCAPS ddsCaps;                  // [esp+10h] [ebp-74h] BYREF
    DWORD v21;                        // [esp+14h] [ebp-70h]
    DDSURFACEDESC surfaceDesc;        // [esp+18h] [ebp-6Ch] BYREF

    if (!LODWORD(this->field_8.ambient.g))
        return -2005522669;
    if (!IsWindow((HWND)LODWORD(this->field_8.ambient.g)))
        return -2005522669;
    if (!LODWORD(this->field_8.specular.b))
        return -2005522669;
    if (!LODWORD(this->field_8.specular.g))
        return -2005522669;
    if (!LODWORD(this->field_8.emissive.r))
        return -2005522669;
    if (!LODWORD(this->field_8.emissive.g))
        return -2005522669;
    lpSurface = (IDirectDrawSurface *)LODWORD(this->field_8.emissive.b);
    if (!lpSurface)
        return -2005522669;
    iSurface = lpSurface->lpVtbl;
    ddsCaps.dwCaps = 4;
    result = iSurface->GetAttachedSurface(lpSurface, &ddsCaps, &this->lpDirectDrawSurface1);
    if (result < 0)
        return result;
    v5 = meth_unk00228_DeviceDescHasDCMColorModel((unk00228 *)LODWORD(this->field_8.specular.b));
    v6 = this->field_8.specular.b;
    if (v5) {
        v7 = LODWORD(v6) + 28;
        v8 = 0x4000;
    } else {
        v7 = LODWORD(v6) + 280;
        v8 = 0x800;
    }
    v9 = LOBYTE(this->field_8.dcvDiffuse.b);
    this->field_8.diffuse.r = 0.0;
    if ((v9 & 4) != 0 && v7 && *(_DWORD *)(v7 + 160)) {
        ddrawSurface = this->field_8.emissive.b;
        ddrawSurfaceVtbl = *(_DWORD *)LODWORD(ddrawSurface);
        surfaceDesc.dwSize = 108;
        result = (*(int(__stdcall **)(D3DVALUE, DDSURFACEDESC *))(ddrawSurfaceVtbl + 88))(
            COERCE_D3DVALUE(LODWORD(ddrawSurface)), &surfaceDesc);
        if (result < 0)
            return result;
        v11 = surfaceDesc.dwWidth;
        v19 = *(_DWORD *)(v7 + 160);
        v21 = surfaceDesc.dwHeight;
        v12 = graphics_1001A870(v19);
        memset(&surfaceDesc, 0, sizeof(surfaceDesc));
        ddraw2 = this->field_8.emissive.r;
        surfaceDesc.dwHeight = v21;
        ddSurface = &this->lpDirectDrawSurface2;
        surfaceDesc.dwMipMapCount = v12;
        ddraw2Vtbl = *(_DWORD *)LODWORD(ddraw2);
        surfaceDesc.dwSize = 108;
        surfaceDesc.dwFlags = 0x47;
        surfaceDesc.ddsCaps.dwCaps = v8 | 0x20000;
        surfaceDesc.dwWidth = v11;
        if ((*(int(__stdcall **)(D3DVALUE, DDSURFACEDESC *, LPDIRECTDRAWSURFACE *, _DWORD))(
                ddraw2Vtbl + 24))(
                COERCE_D3DVALUE(LODWORD(ddraw2)), &surfaceDesc, &this->lpDirectDrawSurface2, 0) >=
            0) {
            if (this->lpDirectDrawSurface1->lpVtbl->AddAttachedSurface(this->lpDirectDrawSurface1,
                                                                       *ddSurface) >= 0) {
                LODWORD(this->field_8.diffuse.r) = 1;
            } else if (*ddSurface) {
                (*ddSurface)->lpVtbl->Release(*ddSurface);
                *ddSurface = 0;
            }
        }
    }
    lpD3DDevice2 = (IDirect3DDevice2 *)&this->lpDirect3DDevice;
    result = (*(int(__stdcall **)(_DWORD, int, IDirectDrawSurface *, IDirect3DDevice2 **))(
        *(_DWORD *)LODWORD(this->field_8.emissive.g) + 32))(LODWORD(this->field_8.emissive.g),
                                                            LODWORD(this->field_8.specular.b) + 4,
                                                            this->lpDirectDrawSurface1,
                                                            &this->lpDirect3DDevice);
    if (result >= 0) {
        g_D3DDevice2 = (IDirect3DDevice2 *)lpD3DDevice2->lpVtbl;
        SetupGDevCaps(g_D3DDevice2);
        meth_unk00334_1001AF20((unk00334 *)LODWORD(this->field_8.specular.b),
                               (IDirect3DDevice2 *)lpD3DDevice2->lpVtbl);
        LODWORD(this->field_8.ambient.r) |= 8u;
        result = meth_unk0008C_1000ADF0(this);
        if (result >= 0) {
            v17 = this->last;
            if (v17)
                meth_unk000334_10001160(v17);
            graphics_EnumTextureFormatsSomething(g_D3DDevice2);
            result = 0;
        }
    }
    return result;
}
