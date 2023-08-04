#include "../../types-win32.h"
//----- (1000AB70) --------------------------------------------------------
HRESULT __thiscall meth_1000AB70(unk0 *this)
{
  LPDIRECTDRAWSURFACE lpSurface; // eax
  IDirectDrawSurfaceVtbl *iSurface; // edx
  HRESULT result; // eax
  BOOL v5; // eax
  IID *v6; // edi
  unsigned __int8 *v7; // edi
  int v8; // ebp
  char v9; // al
  IDirectDrawSurfaceVtbl *ddrawSurfaceVtbl; // edx
  DWORD v11; // ebx
  int v12; // edx
  IDirectDraw2 *ddraw2; // eax
  LPDIRECTDRAWSURFACE *ddSurface; // edi
  IDirectDraw2Vtbl *ddraw2Vtbl; // edx
  IDirect3DDevice *lpD3DDevice2; // edi
  int *v17; // esi
  LPDIRECTDRAWSURFACE ddrawSurface; // [esp-8h] [ebp-8Ch]
  unsigned int v19; // [esp-4h] [ebp-88h]
  DDSCAPS ddsCaps; // [esp+10h] [ebp-74h] BYREF
  DWORD v21; // [esp+14h] [ebp-70h]
  DDSURFACEDESC surfaceDesc; // [esp+18h] [ebp-6Ch] BYREF

  if ( !this->hwnd )
    return -2005522669;
  if ( !IsWindow(this->hwnd) )
    return -2005522669;
  if ( !this->unk )
    return -2005522669;
  if ( !this->u0 )
    return -2005522669;
  if ( !this->ddraw2 )
    return -2005522669;
  if ( !this->d3d2 )
    return -2005522669;
  lpSurface = this->lpDDrawSurface2;
  if ( !lpSurface )
    return -2005522669;
  iSurface = lpSurface->lpVtbl;
  ddsCaps.dwCaps = 4;
  result = iSurface->GetAttachedSurface(lpSurface, &ddsCaps, &this->lpDDrawSurface1);
  if ( result < 0 )
    return result;
  v5 = sub_1001AD90(&this->unk->Data1);
  v6 = this->unk;
  if ( v5 )
  {
    v7 = &v6[1].Data4[4];
    v8 = 0x4000;
  }
  else
  {
    v7 = v6[17].Data4;
    v8 = 2048;
  }
  v9 = this->unkMeth1;
  this->textureHandle = 0;
  if ( (v9 & 4) != 0 && v7 && *((_DWORD *)v7 + 40) )
  {
    ddrawSurface = this->lpDDrawSurface2;
    ddrawSurfaceVtbl = ddrawSurface->lpVtbl;
    surfaceDesc.dwSize = 108;
    result = ddrawSurfaceVtbl->GetSurfaceDesc(ddrawSurface, &surfaceDesc);
    if ( result < 0 )
      return result;
    v11 = surfaceDesc.dwWidth;
    v19 = *((_DWORD *)v7 + 40);
    v21 = surfaceDesc.dwHeight;
    v12 = sub_1001A870(v19);
    memset(&surfaceDesc, 0, sizeof(surfaceDesc));
    ddraw2 = this->ddraw2;
    surfaceDesc.dwHeight = v21;
    ddSurface = &this->lpDDSurface;
    surfaceDesc.dwMipMapCount = v12;
    ddraw2Vtbl = ddraw2->lpVtbl;
    surfaceDesc.dwSize = 108;
    surfaceDesc.dwFlags = 71;
    surfaceDesc.ddsCaps.dwCaps = v8 | 0x20000;
    surfaceDesc.dwWidth = v11;
    if ( ddraw2Vtbl->CreateSurface(ddraw2, &surfaceDesc, &this->lpDDSurface, 0) >= 0 )
    {
      if ( this->lpDDrawSurface1->lpVtbl->AddAttachedSurface(this->lpDDrawSurface1, *ddSurface) >= 0 )
      {
        this->textureHandle = 1;
      }
      else if ( *ddSurface )
      {
        (*ddSurface)->lpVtbl->Release(*ddSurface);
        *ddSurface = 0;
      }
    }
  }
  lpD3DDevice2 = (IDirect3DDevice *)&this->lpD3DDevice2;
  result = this->d3d2->lpVtbl->CreateDevice(
             this->d3d2,
             (const CLSID *const)&this->unk->Data2,
             this->lpDDrawSurface1,
             &this->lpD3DDevice2);
  if ( result >= 0 )
  {
    g_D3DDevice2 = (IDirect3DDevice2 *)lpD3DDevice2->lpVtbl;
    setup_g_DevCaps(g_D3DDevice2);
    sub_1001AF20((int)this->unk, (IDirect3DDevice2 *)lpD3DDevice2->lpVtbl);
    this->field_1C |= 8u;
    result = sub_1000ADF0(this);
    if ( result >= 0 )
    {
      v17 = (int *)this->field_0;
      if ( v17 )
        sub_10001160(v17);
      enumTextureFormatsSomething((#486 *)g_D3DDevice2);
      result = 0;
    }
  }
  return result;
}
