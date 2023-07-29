//----- (10009ED0) --------------------------------------------------------
BOOL __thiscall sub_10009ED0(unk2 *this, char *a2, LONG rectRight, LONG rectBottom)
{
  unk2 *unk2; // ebp
  LPDIRECTDRAWSURFACE ddSurface; // eax
  BOOL result; // eax
  IDirectDrawSurfaceVtbl *ddSurfaceVtbl; // ecx
  IDirectDrawSurface *ddSurface_1; // eax
  IDirectDrawSurfaceVtbl *ddSurfaceVtbl_1; // ecx
  LONG v10; // edi
  DWORD dwRGBBitCountShiftedRight3; // esi
  LPVOID lpSurface; // ebp
  _BYTE *v14; // ecx
  LONG v15; // esi
  char v16; // dl
  _WORD *v17; // ecx
  LONG rectRight_1; // edx
  __int16 v19; // si
  _DWORD *v20; // ecx
  LONG v21; // edx
  int v22; // esi
  RECT rect; // [esp+20h] [ebp-7Ch] BYREF
  DDSURFACEDESC ddSurfaceDesc; // [esp+30h] [ebp-6Ch] BYREF

  unk2 = this;
  ddSurface = this->ddSurface;
  if ( !this->ddSurface )
    return 0;
  ddSurfaceVtbl = ddSurface->lpVtbl;
  ddSurfaceDesc.dwSize = 108;
  ddSurfaceVtbl->GetSurfaceDesc(ddSurface, &ddSurfaceDesc);
  ddSurface_1 = unk2->ddSurface;
  ddSurfaceVtbl_1 = unk2->ddSurface->lpVtbl;
  rect.left = 0;
  rect.top = 0;
  v10 = rectBottom;
  dwRGBBitCountShiftedRight3 = ddSurfaceDesc.ddpfPixelFormat.dwRGBBitCount >> 3;
  rect.right = rectRight;
  rect.bottom = rectBottom;
  if ( ddSurfaceVtbl_1->Lock(ddSurface_1, &rect, &ddSurfaceDesc, 33, 0) )
    return 0;
  lpSurface = ddSurfaceDesc.lpSurface;
  if ( dwRGBBitCountShiftedRight3 == 1 )
  {
    if ( rectBottom > 0 )
    {
      do
      {
        v14 = lpSurface;
        if ( rectRight > 0 )
        {
          v15 = rectRight;
          do
          {
            v16 = *a2++;
            *v14++ = v16;
            --v15;
          }
          while ( v15 );
        }
        lpSurface = (char *)lpSurface + ddSurfaceDesc.lPitch;
        --v10;
      }
      while ( v10 );
    }
  }
  else if ( dwRGBBitCountShiftedRight3 == 2 )
  {
    if ( rectBottom > 0 )
    {
      do
      {
        v17 = lpSurface;
        if ( rectRight > 0 )
        {
          rectRight_1 = rectRight;
          do
          {
            v19 = *(_WORD *)a2;
            a2 += 2;
            *v17++ = v19;
            --rectRight_1;
          }
          while ( rectRight_1 );
        }
        lpSurface = (char *)lpSurface + ddSurfaceDesc.lPitch;
        --v10;
      }
      while ( v10 );
    }
  }
  else if ( dwRGBBitCountShiftedRight3 == 4 && rectBottom > 0 )
  {
    do
    {
      v20 = lpSurface;
      if ( rectRight > 0 )
      {
        v21 = rectRight;
        do
        {
          v22 = *(_DWORD *)a2;
          a2 += 4;
          *v20++ = v22;
          --v21;
        }
        while ( v21 );
      }
      lpSurface = (char *)lpSurface + ddSurfaceDesc.lPitch;
      --v10;
    }
    while ( v10 );
  }
  if ( this->ddSurface->lpVtbl->Unlock(this->ddSurface, ddSurfaceDesc.lpSurface) )
    result = 0;
  else
    result = sub_1000A020(this);
  return result;
}
