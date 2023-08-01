//----- (1000B150) --------------------------------------------------------
HRESULT __thiscall sub_1000B150(unk0 *this)
{
  LPDIRECTDRAWSURFACE v1; // eax
  LPDIRECTDRAWPALETTE v2; // ecx
  HRESULT result; // eax

  v1 = this->lpDDrawSurface2;
  if ( !v1 || (v2 = this->lpDirectDrawPalette) == 0 || (result = v1->lpVtbl->SetPalette(v1, v2), result >= 0) )
    result = 0;
  return result;
}
