//----- (1000AD70) --------------------------------------------------------
int __thiscall ReleaseDDrawSurface(unk0 *this)
{
  IDirect3DDevice2 *dev; // eax
  LPDIRECTDRAWSURFACE lpDDSurface_1; // eax
  LPDIRECTDRAWSURFACE lpDDSurface; // eax

  if ( this->field_0 )
    returnZeroWrapper();
  sub_1000AEA0(this);
  dev = this->lpD3DDevice2;
  this->field_1C &= 0xFFFFFFF7;
  if ( dev )
  {
    dev->lpVtbl->Release(dev);
    this->lpD3DDevice2 = 0;
    g_D3DDevice2 = 0;
  }
  if ( this->lpDDSurface )
  {
    lpDDSurface_1 = this->lpDDrawSurface1;
    if ( lpDDSurface_1 )
      lpDDSurface_1->lpVtbl->DeleteAttachedSurface(lpDDSurface_1, 0, this->lpDDSurface);
    this->lpDDSurface->lpVtbl->Release(this->lpDDSurface);
    this->lpDDSurface = 0;
  }
  lpDDSurface = this->lpDDrawSurface1;
  if ( lpDDSurface )
  {
    lpDDSurface->lpVtbl->Release(this->lpDDrawSurface1);
    this->lpDDrawSurface1 = 0;
  }
  return 0;
}
