#include "types-win32.h"
//----- (1000AB70) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000AB70(unk0008C *this) {
    IDirectDrawSurface *lpSurface;            // eax
    IDirectDrawSurfaceVtbl *iSurface;         // edx
    HRESULT result;                           // eax
    BOOL v5;                                  // eax
    unk00334 *v6;                             // edi
    int *v7;                                  // edi
    MACRO_DDCAPS_3D v8;                       // ebp
    char v9;                                  // al
    IDirectDrawSurfaceVtbl *ddrawSurfaceVtbl; // edx
    DWORD v11;                                // ebx
    unsigned int v12;                         // edx
    IDirectDraw2 *ddraw2;                     // eax
    LPDIRECTDRAWSURFACE *ddSurface;           // edi
    IDirectDraw2Vtbl *ddraw2Vtbl;             // edx
    IDirect3DDevice2 *lpD3DDevice2;           // edi
    unk00334 *v17;                            // esi
    LPDIRECTDRAWSURFACE ddrawSurface;         // [esp-8h] [ebp-8Ch]
    unsigned int v19;                         // [esp-4h] [ebp-88h]
    DDSCAPS ddsCaps;                          // [esp+10h] [ebp-74h] BYREF
    DWORD v21;                                // [esp+14h] [ebp-70h]
    DDSURFACEDESC surfaceDesc;                // [esp+18h] [ebp-6Ch] BYREF

    if (!this->hwnd)
        return -2005522669;
    if (!IsWindow(this->hwnd))
        return -2005522669;
    if (!this->u334)
        return -2005522669;
    if (!this->field_30)
        return -2005522669;
    if (!this->lpDirectDraw2)
        return -2005522669;
    if (!this->lpDirect3D2)
        return -2005522669;
    lpSurface = this->lpDirectDrawSurface0;
    if (!lpSurface)
        return -2005522669;
    iSurface = lpSurface->lpVtbl;
    ddsCaps.dwCaps = DDCAPS_ALIGNSIZEDEST;
    result = iSurface->GetAttachedSurface(lpSurface, &ddsCaps, &this->lpDirectDrawSurface1);
    if (result < 0)
        return result;
    v5 = meth_unk00228_Field24IsNotNull(this->u334);
    v6 = this->u334;
    if (v5) {
        v7 = &v6->field_1C;
        v8 = DDCAPS_OVERLAYSTRETCH;
    } else {
        v7 = &v6->field_118;
        v8 = DDCAPS_OVERLAY;
    }
    v9 = this->field_14;
    *(_DWORD *)this->gapC = 0;
    if ((v9 & 4) != 0 && v7 && v7[40]) {
        ddrawSurface = this->lpDirectDrawSurface0;
        ddrawSurfaceVtbl = ddrawSurface->lpVtbl;
        surfaceDesc.dwSize = 108;
        result = ddrawSurfaceVtbl->GetSurfaceDesc(ddrawSurface, &surfaceDesc);
        if (result < 0)
            return result;
        v11 = surfaceDesc.dwWidth;
        v19 = v7[40];
        v21 = surfaceDesc.dwHeight;
        v12 = sub_1001A870(v19);
        memset(&surfaceDesc, 0, sizeof(surfaceDesc));
        ddraw2 = this->lpDirectDraw2;
        surfaceDesc.dwHeight = v21;
        ddSurface = &this->lpDirectDrawSurface2;
        surfaceDesc.dwMipMapCount = v12;
        ddraw2Vtbl = ddraw2->lpVtbl;
        surfaceDesc.dwSize = 108;
        surfaceDesc.dwFlags =
            DDCAPS_BLT | DDCAPS_ALIGNSIZEDEST | DDCAPS_ALIGNBOUNDARYDEST | DDCAPS_3D;
        surfaceDesc.ddsCaps.dwCaps = v8 | DDCAPS_READSCANLINE;
        surfaceDesc.dwWidth = v11;
        if (ddraw2Vtbl->CreateSurface(ddraw2, &surfaceDesc, &this->lpDirectDrawSurface2, 0) >= 0) {
            if (this->lpDirectDrawSurface1->lpVtbl->AddAttachedSurface(this->lpDirectDrawSurface1,
                                                                       *ddSurface) >= 0) {
                *(_DWORD *)this->gapC = 1;
            } else if (*ddSurface) {
                (*ddSurface)->lpVtbl->Release(*ddSurface);
                *ddSurface = 0;
            }
        }
    }
    lpD3DDevice2 = (IDirect3DDevice2 *)&this->lpDirect3DDevice;
    result = this->lpDirect3D2->lpVtbl->CreateDevice(this->lpDirect3D2,
                                                     (const CLSID *const)&this->u334->lpGUID,
                                                     this->lpDirectDrawSurface1,
                                                     &this->lpDirect3DDevice);
    if (result >= 0) {
        g_D3DDevice2 = (IDirect3DDevice2 *)lpD3DDevice2->lpVtbl;
        setup_g_DevCaps(g_D3DDevice2);
        meth_unk00334_1001AF20(this->u334, (IDirect3DDevice2 *)lpD3DDevice2->lpVtbl);
        this->field_1C |= 8u;
        result = meth_unk0008C_1000ADF0(this);
        if (result >= 0) {
            v17 = this->last;
            if (v17)
                meth_unk000334_10001160(v17);
            enumTextureFormatsSomething(g_D3DDevice2);
            result = 0;
        }
    }
    return result;
}
