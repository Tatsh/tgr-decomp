//----- (1000B2C0) --------------------------------------------------------
int __thiscall sub_1000B2C0(unk0 *this)
{
  int hr; // eax
  LPDIRECTDRAWSURFACE ddSurface; // eax
  LPDIRECTDRAWSURFACE ddSurface_1; // eax
  LPDIRECTDRAWSURFACE ddSurface_2; // eax

  if ( (this->field_1C & 0x1F) != 31 )
    return -2005522669;
  ddSurface = this->lpDDrawSurface2;
  if ( !ddSurface
    || !ddSurface->lpVtbl->IsLost(this->lpDDrawSurface2)
    || (hr = this->lpDDrawSurface2->lpVtbl->Restore(this->lpDDrawSurface2), hr >= 0) )
  {
    ddSurface_1 = this->lpDDSurface;
    if ( !ddSurface_1
      || !ddSurface_1->lpVtbl->IsLost(this->lpDDSurface)
      || (hr = this->lpDDSurface->lpVtbl->Restore(this->lpDDSurface), hr >= 0) )
    {
      ddSurface_2 = this->lpDDrawSurface1;
      if ( !ddSurface_2
        || !ddSurface_2->lpVtbl->IsLost(this->lpDDrawSurface1)
        || (hr = this->lpDDrawSurface1->lpVtbl->Restore(this->lpDDrawSurface1), hr >= 0) )
      {
        if ( !this->field_0 || (hr = sub_10001190(), hr >= 0) )
          hr = 0;
      }
    }
  }
  return hr;
}
