//----- (1000A8D0) --------------------------------------------------------
HRESULT __thiscall sub_1000A8D0(gameSpecificUnk0 *this)
{
  LPDIRECTDRAWSURFACE ddSurface; // edx
  IDirectDrawSurfaceVtbl *v3; // eax
  HRESULT hr; // eax
  HDC dc; // ebp
  unsigned int sizePalette; // eax
  tagPALETTEENTRY *tPaletteEntry; // eax
  tagPALETTEENTRY *tPaletteEntry2; // eax
  DWORD v9; // edx
  unsigned int i; // eax
  unsigned int j; // eax
  unsigned int v12; // eax
  unsigned int k; // eax
  unsigned int l; // eax
  HRESULT palette; // esi
  DDSURFACEDESC surfaceDesc; // [esp+10h] [ebp-6Ch] BYREF

  resetPalette(this);
  if ( !this->ddraw2 )
    return -2005522669;
  ddSurface = this->lpDDrawSurface2;
  if ( !ddSurface )
    return -2005522669;
  memset(&surfaceDesc, 0, sizeof(surfaceDesc));
  v3 = ddSurface->lpVtbl;
  surfaceDesc.dwSize = 108;
  hr = v3->GetSurfaceDesc(ddSurface, &surfaceDesc);
  if ( hr >= 0 )
  {
    hr = (HRESULT)sub_1001A950(&surfaceDesc.ddpfPixelFormat);
    if ( hr )
    {
      dc = GetDC(0);
      sizePalette = GetDeviceCaps(dc, 104);     // SIZEPALETTE
      this->sizePalette = sizePalette;
      if ( sizePalette )
      {
        if ( sizePalette > 0x100 )
          this->sizePalette = 256;
        tPaletteEntry = (tagPALETTEENTRY *)operator new(4 * this->sizePalette);
        this->tPaletteEntry = tPaletteEntry;
        if ( !tPaletteEntry
          || (tPaletteEntry2 = (tagPALETTEENTRY *)operator new(4 * this->sizePalette),
              (this->lPaletteEntry = tPaletteEntry2) == 0) )
        {
          ReleaseDC(0, dc);
          resetPalette(this);
          return -2005522668;
        }
        GetSystemPaletteEntries(dc, 0, this->sizePalette, this->tPaletteEntry);
        qmemcpy(this->lPaletteEntry, this->tPaletteEntry, 4 * this->sizePalette);
      }
      ReleaseDC(0, dc);
      if ( (surfaceDesc.ddpfPixelFormat.dwFlags & 0x800) != 0 )
      {
        v9 = 256;
        for ( i = 0; i < 2; this->lPaletteEntry[i - 1].peFlags = 1 )
          ++i;
      }
      else if ( (surfaceDesc.ddpfPixelFormat.dwFlags & 0x1000) != 0 )
      {
        for ( j = 0; j < 4; this->lPaletteEntry[j - 1].peFlags = 1 )
          ++j;
        v9 = 512;
      }
      else if ( (surfaceDesc.ddpfPixelFormat.dwFlags & 8) != 0 )
      {
        this->lPaletteEntry->peFlags = 64;
        v12 = 1;
        this->lPaletteEntry[15].peFlags = 64;
        do
          this->lPaletteEntry[v12++].peFlags = 1;
        while ( v12 < 15 );
        v9 = 1;
      }
      else
      {
        if ( (surfaceDesc.ddpfPixelFormat.dwFlags & 0x20) == 0 )
        {
          palette = -2005522671;
LABEL_34:
          resetPalette(this);
          return palette;
        }
        for ( k = 0; k < 10; this->lPaletteEntry[k + 245].peFlags = 64 )
          this->lPaletteEntry[k++].peFlags = 64;
        for ( l = 10; l < 246; this->lPaletteEntry[l - 1].peFlags = 1 )
          ++l;
        v9 = 4;
      }
      palette = this->ddraw2->lpVtbl->CreatePalette(
                  this->ddraw2,
                  v9,
                  this->lPaletteEntry,
                  &this->lpDirectDrawPalette,
                  0);
      if ( palette >= 0 )
      {
        palette = this->lpDDrawSurface2->lpVtbl->SetPalette(this->lpDDrawSurface2, this->lpDirectDrawPalette);
        if ( palette >= 0 )
          return 0;
      }
      goto LABEL_34;
    }
  }
  return hr;
}
