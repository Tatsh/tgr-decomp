#include "../../types-win32.h"
//----- (1000A020) --------------------------------------------------------
BOOL __thiscall meth_1000A020(#511 *this)
{
  int lpDDSurface; // eax
  int lpDDSurface_1; // ecx
  HRESULT hr; // esi
  IDirect3DTexture2 *d3dTexture2; // [esp+24h] [ebp-8h] BYREF
  IDirect3DTexture2 *d3dTexture2_1; // [esp+28h] [ebp-4h] BYREF

  lpDDSurface = *((_DWORD *)this + 1);
  if ( !lpDDSurface )
    return 0;
  lpDDSurface_1 = *(_DWORD *)this;
  if ( !*(_DWORD *)this )
    return 0;
  if ( lpDDSurface == lpDDSurface_1 )
    return 1;
  if ( (*(int (__stdcall **)(int))(*(_DWORD *)lpDDSurface + 108))(lpDDSurface) )
    return 0;
  (***((void (__stdcall ****)(_DWORD, GUID *, IDirect3DTexture2 **))this + 1))(
    *((_DWORD *)this + 1),
    &CLSID_IDirect3DTexture2,
    &d3dTexture2);
  (***(void (__stdcall ****)(_DWORD, GUID *, IDirect3DTexture2 **))this)(
    *(_DWORD *)this,
    &CLSID_IDirect3DTexture2,
    &d3dTexture2_1);
  hr = d3dTexture2->lpVtbl->Load(d3dTexture2, d3dTexture2_1);
  d3dTexture2->lpVtbl->Release(d3dTexture2);
  d3dTexture2_1->lpVtbl->Release(d3dTexture2_1);
  return hr == 0;
}
