//----- (1000AB20) --------------------------------------------------------
int __thiscall resetPalette(gameSpecificUnk0 *this)
{
  LPDIRECTDRAWPALETTE v2; // eax

  v2 = this->lpDirectDrawPalette;
  if ( v2 )
  {
    v2->lpVtbl->Release(v2);
    this->lpDirectDrawPalette = 0;
  }
  if ( this->lPaletteEntry )
  {
    operator delete(this->lPaletteEntry);
    this->lPaletteEntry = 0;
  }
  if ( this->tPaletteEntry )
  {
    operator delete(this->tPaletteEntry);
    this->tPaletteEntry = 0;
  }
  this->sizePalette = 0;
  return 0;
}
