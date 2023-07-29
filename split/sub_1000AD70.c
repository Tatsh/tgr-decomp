//----- (1000AD70) --------------------------------------------------------
int __thiscall sub_1000AD70(gameSpecificUnk0 *this)
{
  LPDIRECT3DDEVICE2 v2; // eax
  LPDIRECTDRAWSURFACE lpDDSurface_1; // eax
  LPDIRECTDRAWSURFACE lpDDSurface; // eax

  if ( this[1].field_30 )
    returnZeroWrapper();
  sub_1000AEA0(this);
  v2 = this->lpD3DDevice2;
  this->field_1C &= 0xFFFFFFF7;
  if ( v2 )
  {
    v2->lpVtbl->Release(v2);
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
