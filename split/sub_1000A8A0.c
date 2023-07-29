//----- (1000A8A0) --------------------------------------------------------
int __thiscall sub_1000A8A0(gameSpecificUnk0 *this)
{
  LPDIRECTDRAWSURFACE v2; // eax

  this->field_1C &= 0xFFFFFFFB;
  resetPalette(this);
  v2 = this->lpDDrawSurface2;
  if ( v2 )
  {
    v2->lpVtbl->Release(this->lpDDrawSurface2);
    this->lpDDrawSurface2 = 0;
  }
  return 0;
}
