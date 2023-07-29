//----- (1000A020) --------------------------------------------------------
BOOL __thiscall sub_1000A020(unk2 *this)
{
  LPDIRECTDRAWSURFACE lpDDSurface; // eax
  LPDIRECTDRAWSURFACE lpDDSurface_1; // ecx
  HRESULT hr; // esi
  IDirect3DTexture2 *d3dTexture2; // [esp+24h] [ebp-8h] BYREF
  IDirect3DTexture2 *d3dTexture2_1; // [esp+28h] [ebp-4h] BYREF

  lpDDSurface = this->lpDDSurface;
  if ( !lpDDSurface )
    return 0;
  lpDDSurface_1 = this->ddSurface;
  if ( !this->ddSurface )
    return 0;
  if ( lpDDSurface == lpDDSurface_1 )
    return 1;
  if ( lpDDSurface->lpVtbl->Restore(lpDDSurface) )
    return 0;
  this->lpDDSurface->lpVtbl->QueryInterface(this->lpDDSurface, &CLSID_IDirect3DTexture2, (LPVOID *)&d3dTexture2);
  this->ddSurface->lpVtbl->QueryInterface(this->ddSurface, &CLSID_IDirect3DTexture2, (LPVOID *)&d3dTexture2_1);
  hr = d3dTexture2->lpVtbl->Load(d3dTexture2, d3dTexture2_1);
  d3dTexture2->lpVtbl->Release(d3dTexture2);
  d3dTexture2_1->lpVtbl->Release(d3dTexture2_1);
  return hr == 0;
}
