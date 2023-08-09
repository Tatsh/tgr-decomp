#include "types-win32.h"
//----- (1000A8D0) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000A8D0(unk0008C *this) {
    LPDIRECTDRAWSURFACE ddSurface;         // edx
    IDirectDrawSurfaceVtbl *ddSurfaceVtbl; // eax
    HRESULT hr;                            // eax
    HDC dc;                                // ebp
    unsigned int sizePalette;              // eax
    int tPaletteEntry;                     // eax
    IDirect3DMaterial2 *tPaletteEntry2;    // eax
    DWORD v9;                              // edx
    unsigned int i;                        // eax
    unsigned int j;                        // eax
    unsigned int v12;                      // eax
    unsigned int k;                        // eax
    unsigned int l;                        // eax
    HRESULT palette;                       // esi
    DDSURFACEDESC surfaceDesc;             // [esp+10h] [ebp-6Ch] BYREF

    resetPalette(this);
    if (!this->lpDirectDraw2)
        return -2005522669;
    ddSurface = this->lpDirectDrawSurface0;
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
            this->field_4C = sizePalette;
            if (sizePalette) {
                if (sizePalette > 0x100)
                    this->field_4C = 0x100;
                tPaletteEntry = malloc(4 * this->field_4C);
                this->field_50 = tPaletteEntry;
                if (!tPaletteEntry ||
                    (tPaletteEntry2 = (IDirect3DMaterial2 *)malloc(4 * this->field_4C),
                     (this->lpDirect3DMaterial2 = tPaletteEntry2) == 0)) {
                    ReleaseDC(0, dc);
                    resetPalette(this);
                    return -2005522668;
                }
                GetSystemPaletteEntries(dc, 0, this->field_4C, (LPPALETTEENTRY)this->field_50);
                qmemcpy(
                    this->lpDirect3DMaterial2, (const void *)this->field_50, 4 * this->field_4C);
            }
            ReleaseDC(0, dc);
            if ((surfaceDesc.ddpfPixelFormat.dwFlags & DDPF_PALETTEINDEXED1) != 0) {
                v9 = 256;
                for (i = 0; i < 2; HIBYTE(this->lpDirect3DMaterial2[i - 1].lpVtbl) = PC_POLYGON)
                    ++i;
            } else if ((surfaceDesc.ddpfPixelFormat.dwFlags & DDPF_PALETTEINDEXED2) != 0) {
                for (j = 0; j < 4; HIBYTE(this->lpDirect3DMaterial2[j - 1].lpVtbl) = PC_POLYGON)
                    ++j;
                v9 = 512;
            } else if ((surfaceDesc.ddpfPixelFormat.dwFlags & DDPF_PALETTEINDEXED4) != 0) {
                HIBYTE(this->lpDirect3DMaterial2->lpVtbl) = 64;
                v12 = 1;
                HIBYTE(this->lpDirect3DMaterial2[15].lpVtbl) = 64;
                do
                    HIBYTE(this->lpDirect3DMaterial2[v12++].lpVtbl) = 1;
                while (v12 < 15);
                v9 = 1;
            } else {
                if ((surfaceDesc.ddpfPixelFormat.dwFlags & DDPF_PALETTEINDEXED8) == 0) {
                    palette = -2005522671;
                LABEL_34:
                    resetPalette(this);
                    return palette;
                }
                for (k = 0; k < 10;
                     HIBYTE(this->lpDirect3DMaterial2[k + 245].lpVtbl) = PC_WIDESTYLED)
                    HIBYTE(this->lpDirect3DMaterial2[k++].lpVtbl) = PC_WIDESTYLED;
                for (l = 10; l < 246; HIBYTE(this->lpDirect3DMaterial2[l - 1].lpVtbl) = PC_POLYGON)
                    ++l;
                v9 = 4;
            }
            palette = this->lpDirectDraw2->lpVtbl->CreatePalette(
                this->lpDirectDraw2,
                v9,
                (LPPALETTEENTRY)this->lpDirect3DMaterial2,
                &this->lpDirectDrawPalette,
                0);
            if (palette >= 0) {
                palette = this->lpDirectDrawSurface0->lpVtbl->SetPalette(this->lpDirectDrawSurface0,
                                                                         this->lpDirectDrawPalette);
                if (palette >= 0)
                    return 0;
            }
            goto LABEL_34;
        }
    }
    return hr;
}
