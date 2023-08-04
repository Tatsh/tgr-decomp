#include "../../types-win32.h"
//----- (1000A8D0) --------------------------------------------------------
HRESULT __thiscall sub_1000A8D0(unk0 *this)
{
  LPDIRECTDRAWSURFACE ddSurface; // edx
  IDirectDrawSurfaceVtbl *ddSurfaceVtbl; // eax
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
  ddSurfaceVtbl = ddSurface->lpVtbl;
  surfaceDesc.dwSize = 108;
  hr = ddSurfaceVtbl->GetSurfaceDesc(ddSurface, &surfaceDesc);
  if ( hr >= 0 )
  {
    hr = sub_1001A950(&surfaceDesc.ddpfPixelFormat);
    if ( hr )
    {
      dc = GetDC(0);
      sizePalette = GetDeviceCaps(dc, SIZEPALETTE);
      this->sizePalette = sizePalette;
      if ( sizePalette )
      {
        if ( sizePalette > 0x100 )
          this->sizePalette = 0x100;
        tPaletteEntry = (tagPALETTEENTRY *)malloc(4 * this->sizePalette);
        this->tPaletteEntry = tPaletteEntry;
        if ( !tPaletteEntry
          || (tPaletteEntry2 = (tagPALETTEENTRY *)malloc(4 * this->sizePalette),
              (this->lpPaletteEntry = tPaletteEntry2) == 0) )
        {
          ReleaseDC(0, dc);
          resetPalette(this);
          return -2005522668;
        }
        GetSystemPaletteEntries(dc, 0, this->sizePalette, this->tPaletteEntry);
        qmemcpy(this->lpPaletteEntry, this->tPaletteEntry, 4 * this->sizePalette);
      }
      ReleaseDC(0, dc);
      if ( (surfaceDesc.ddpfPixelFormat.dwFlags & DDPF_PALETTEINDEXED1) != 0 )
      {
        v9 = 256;
        for ( i = 0; i < 2; this->lpPaletteEntry[i - 1].peFlags = PC_POLYGON )
          ++i;
      }
      else if ( (surfaceDesc.ddpfPixelFormat.dwFlags & DDPF_PALETTEINDEXED2) != 0 )
      {
        for ( j = 0; j < 4; this->lpPaletteEntry[j - 1].peFlags = PC_POLYGON )
          ++j;
        v9 = 512;
      }
      else if ( (surfaceDesc.ddpfPixelFormat.dwFlags & DDPF_PALETTEINDEXED4) != 0 )
      {
        this->lpPaletteEntry->peFlags = 64;
        v12 = 1;
        this->lpPaletteEntry[15].peFlags = 64;
        do
          this->lpPaletteEntry[v12++].peFlags = 1;
        while ( v12 < 15 );
        v9 = 1;
      }
      else
      {
        if ( (surfaceDesc.ddpfPixelFormat.dwFlags & DDPF_PALETTEINDEXED8) == 0 )
        {
          palette = -2005522671;
LABEL_34:
          resetPalette(this);
          return palette;
        }
        for ( k = 0; k < 10; this->lpPaletteEntry[k + 245].peFlags = PC_WIDESTYLED )
          this->lpPaletteEntry[k++].peFlags = PC_WIDESTYLED;
        for ( l = 10; l < 246; this->lpPaletteEntry[l - 1].peFlags = PC_POLYGON )
          ++l;
        v9 = 4;
      }
      palette = this->ddraw2->lpVtbl->CreatePalette(
                  this->ddraw2,
                  v9,
                  this->lpPaletteEntry,
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
