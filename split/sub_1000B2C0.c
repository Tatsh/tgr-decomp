//----- (1000B2C0) --------------------------------------------------------
int __thiscall sub_1000B2C0(gameSpecificUnk0 *gsu0)
{
  int hr; // eax
  LPDIRECTDRAWSURFACE ddSurface; // eax
  LPDIRECTDRAWSURFACE ddSurface_1; // eax
  LPDIRECTDRAWSURFACE ddSurface_2; // eax

  if ( (gsu0->field_1C & 0x1F) != 31 )
    return -2005522669;
  ddSurface = gsu0->lpDDrawSurface2;
  if ( !ddSurface
    || !ddSurface->lpVtbl->IsLost(gsu0->lpDDrawSurface2)
    || (hr = gsu0->lpDDrawSurface2->lpVtbl->Restore(gsu0->lpDDrawSurface2), hr >= 0) )
  {
    ddSurface_1 = gsu0->lpDDSurface;
    if ( !ddSurface_1
      || !ddSurface_1->lpVtbl->IsLost(gsu0->lpDDSurface)
      || (hr = gsu0->lpDDSurface->lpVtbl->Restore(gsu0->lpDDSurface), hr >= 0) )
    {
      ddSurface_2 = gsu0->lpDDrawSurface1;
      if ( !ddSurface_2
        || !ddSurface_2->lpVtbl->IsLost(gsu0->lpDDrawSurface1)
        || (hr = gsu0->lpDDrawSurface1->lpVtbl->Restore(gsu0->lpDDrawSurface1), hr >= 0) )
      {
        if ( !gsu0[1].field_30 || (hr = sub_10001190(), hr >= 0) )
          hr = 0;
      }
    }
  }
  return hr;
}
