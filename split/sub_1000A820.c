//----- (1000A820) --------------------------------------------------------
HRESULT __thiscall sub_1000A820(gameSpecificUnk0 *this)
{
  IDirectDraw2 *dd2; // edx
  IDirectDraw2Vtbl *dd2Vtbl; // eax
  HRESULT result; // eax
  int v5; // eax
  DDSURFACEDESC ddSurfaceDesc; // [esp+8h] [ebp-6Ch] BYREF

  if ( !this->u0 )
    return -2005522669;
  dd2 = this->ddraw2;
  if ( !dd2 )
    return -2005522669;
  memset(&ddSurfaceDesc, 0, sizeof(ddSurfaceDesc));
  dd2Vtbl = dd2->lpVtbl;
  ddSurfaceDesc.dwSize = 108;
  ddSurfaceDesc.dwFlags = DDPF_PALETTEINDEXED8|DDPF_ALPHAPIXELS;
  ddSurfaceDesc.ddsCaps.dwCaps = DDPF_ZPIXELS|DDPF_YUV|DDPF_PALETTEINDEXEDTO8|DDPF_PALETTEINDEXED4;
  ddSurfaceDesc.dwBackBufferCount = 1;
  result = dd2Vtbl->CreateSurface(dd2, &ddSurfaceDesc, &this->lpDDrawSurface2, 0);
  if ( result >= 0 )
  {
    result = sub_1000A8D0(this);
    if ( result >= 0 )
    {
      v5 = this->field_1C;
      LOBYTE(v5) = v5 | 4;
      this->field_1C = v5;
      result = 0;
    }
  }
  return result;
}
