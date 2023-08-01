//----- (1000B1F0) --------------------------------------------------------
HRESULT __thiscall sub_1000B1F0(unk0 *this)
{
  LPDIRECTDRAWPALETTE v1; // eax
  HRESULT result; // eax

  v1 = this->lpDirectDrawPalette;
  if ( !v1 || (result = v1->lpVtbl->SetEntries(v1, 0, 0, this->sizePalette, this->lPaletteEntry), result >= 0) )
    result = 0;
  return result;
}
