//----- (1000A820) --------------------------------------------------------
HRESULT __thiscall sub_1000A820(gameSpecificUnk0 *this)
{
  IDirectDraw2 *v2; // edx
  IDirectDraw2Vtbl *v3; // eax
  HRESULT result; // eax
  int v5; // eax
  DDSURFACEDESC v6; // [esp+8h] [ebp-6Ch] BYREF

  if ( !this->u0 )
    return -2005522669;
  v2 = this->ddraw2;
  if ( !v2 )
    return -2005522669;
  memset(&v6, 0, sizeof(v6));
  v3 = v2->lpVtbl;
  v6.dwSize = 108;
  v6.dwFlags = 33;
  v6.ddsCaps.dwCaps = 8728;
  v6.dwBackBufferCount = 1;
  result = v3->CreateSurface(v2, &v6, &this->lpDDrawSurface2, 0);
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
