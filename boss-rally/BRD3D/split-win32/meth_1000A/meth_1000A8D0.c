#include "../types-win32.h"
//----- (1000A8D0) --------------------------------------------------------
HRESULT __thiscall meth_1000A8D0(unk334 *this) {
    LPDIRECTDRAWSURFACE ddSurface;         // edx
    IDirectDrawSurfaceVtbl *ddSurfaceVtbl; // eax
    HRESULT hr;                            // eax
    HDC dc;                                // ebp
    unsigned int sizePalette;              // eax
    tagPALETTEENTRY *tPaletteEntry;        // eax
    tagPALETTEENTRY *tPaletteEntry2;       // eax
    DWORD v9;                              // edx
    unsigned int i;                        // eax
    unsigned int j;                        // eax
    unsigned int v12;                      // eax
    unsigned int k;                        // eax
    unsigned int l;                        // eax
    HRESULT palette;                       // esi
    DDSURFACEDESC surfaceDesc;             // [esp+10h] [ebp-6Ch] BYREF

    resetPalette(this);
  if ( !this->? )
      return -2005522669;
  ddSurface = this->? ;
  if (!ddSurface)
      return -2005522669;
  memset(&surfaceDesc, 0, sizeof(surfaceDesc));
  ddSurfaceVtbl = ddSurface->lpVtbl;
  surfaceDesc.dwSize = 108;
  hr = ddSurfaceVtbl->GetSurfaceDesc(ddSurface, &surfaceDesc);
  if (hr >= 0) {
      hr = sub_1001A950(&surfaceDesc.ddpfPixelFormat);
      if (hr) {
          dc = GetDC(0);
          sizePalette = GetDeviceCaps(dc, SIZEPALETTE);
          this->? = sizePalette;
          if (sizePalette) {
              if (sizePalette > 0x100)
                  this->? = 0x100;
        tPaletteEntry = (tagPALETTEENTRY *)malloc(4 * this->?);
        this->? = tPaletteEntry;
        if ( !tPaletteEntry
          || (tPaletteEntry2 = (tagPALETTEENTRY *)malloc(4 * this->?), (this->? = tPaletteEntry2) == 0) )
        {
            ReleaseDC(0, dc);
            resetPalette(this);
            return -2005522668;
        }
        GetSystemPaletteEntries(dc, 0, this->?, this->?);
        qmemcpy(this->?, this->?, 4 * this->?);
          }
          ReleaseDC(0, dc);
          if ((surfaceDesc.ddpfPixelFormat.dwFlags & DDPF_PALETTEINDEXED1) != 0) {
        v9 = 256;
        for ( i = 0; i < 2; this->?[i - 1].peFlags = PC_POLYGON )
            ++i;
          } else if ((surfaceDesc.ddpfPixelFormat.dwFlags & DDPF_PALETTEINDEXED2) != 0) {
        for ( j = 0; j < 4; this->?[j - 1].peFlags = PC_POLYGON )
            ++j;
        v9 = 512;
          } else if ((surfaceDesc.ddpfPixelFormat.dwFlags & DDPF_PALETTEINDEXED4) != 0) {
        this->?->peFlags = 64;
        v12 = 1;
        this->? [15].peFlags = 64;
        do
            this->? [v12++].peFlags = 1;
        while (v12 < 15);
        v9 = 1;
          } else {
        if ((surfaceDesc.ddpfPixelFormat.dwFlags & DDPF_PALETTEINDEXED8) == 0) {
            palette = -2005522671;
        LABEL_34:
            resetPalette(this);
            return palette;
        }
        for ( k = 0; k < 10; this->?[k + 245].peFlags = PC_WIDESTYLED )
            this->? [k++].peFlags = PC_WIDESTYLED;
        for ( l = 10; l < 246; this->?[l - 1].peFlags = PC_POLYGON )
            ++l;
        v9 = 4;
          }
          palette = this->?->lpVtbl->CreatePalette(this->?, v9, this->?, &this->?, 0);
          if (palette >= 0) {
        palette = this->?->lpVtbl->SetPalette(this->?, this->?);
        if (palette >= 0)
            return 0;
          }
          goto LABEL_34;
      }
  }
  return hr;
}
