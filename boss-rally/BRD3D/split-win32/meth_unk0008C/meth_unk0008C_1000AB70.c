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

  if ( !this->? )
      return -2005522669;
  if ( !IsWindow(this->?) )
      return -2005522669;
  if ( !this->? )
      return -2005522669;
  if ( !this->? )
      return -2005522669;
  if ( !this->? )
      return -2005522669;
  if ( !this->? )
      return -2005522669;
  lpSurface = this->? ;
  if (!lpSurface)
      return -2005522669;
  iSurface = lpSurface->lpVtbl;
  ddsCaps.dwCaps = 4;
  result = iSurface->GetAttachedSurface(lpSurface, &ddsCaps, &this->lpDirectDrawSurface1);
  if (result < 0)
      return result;
  v5 = meth_unk00228_DeviceDescHasDCMColorModel((unk00228 *)this->?);
  v6 = this->? ;
  if (v5) {
      v7 = &v6->ddCaps1;
      v8 = 0x4000;
  } else {
      v7 = &v6->? ;
      v8 = 0x800;
  }
  v9 = this->      ? ;
  *(_DWORD *)this->? = 0;
  if ((v9 & 4) != 0 && v7 && v7[40]) {
      ddrawSurface = this->? ;
      ddrawSurfaceVtbl = ddrawSurface->lpVtbl;
      surfaceDesc.dwSize = 108;
      result = ddrawSurfaceVtbl->GetSurfaceDesc(ddrawSurface, &surfaceDesc);
      if (result < 0)
          return result;
      v11 = surfaceDesc.dwWidth;
      v19 = v7[40];
      v21 = surfaceDesc.dwHeight;
      v12 = graphics_1001A870(v19);
      memset(&surfaceDesc, 0, sizeof(surfaceDesc));
      ddraw2 = this->? ;
      surfaceDesc.dwHeight = v21;
      ddSurface = &this->lpDirectDrawSurface2;
      surfaceDesc.dwMipMapCount = v12;
      ddraw2Vtbl = ddraw2->lpVtbl;
      surfaceDesc.dwSize = 108;
      surfaceDesc.dwFlags = 0x47;
      surfaceDesc.ddsCaps.dwCaps = v8 | 0x20000;
      surfaceDesc.dwWidth = v11;
      if (ddraw2Vtbl->CreateSurface(ddraw2, &surfaceDesc, &this->lpDirectDrawSurface2, 0) >= 0) {
          if (this->lpDirectDrawSurface1->lpVtbl->AddAttachedSurface(this->lpDirectDrawSurface1,
                                                                     *ddSurface) >= 0) {
              *(_DWORD *)this->? = 1;
          } else if (*ddSurface) {
              (*ddSurface)->lpVtbl->Release(*ddSurface);
              *ddSurface = 0;
          }
      }
  }
  lpD3DDevice2 = (IDirect3DDevice2 *)&this->lpDirect3DDevice;
  result = this->?->lpVtbl->CreateDevice(this->?,
                                         (const CLSID *const)&this->?
                                             ->lpGUID,
                                         this->lpDirectDrawSurface1,
                                         &this->lpDirect3DDevice);
  if (result >= 0) {
      g_D3DDevice2 = (IDirect3DDevice2 *)lpD3DDevice2->lpVtbl;
      SetupGDevCaps(g_D3DDevice2);
    meth_unk00334_1001AF20(this->?, (IDirect3DDevice2 *)lpD3DDevice2->lpVtbl);
    this->? |= 8u;
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
