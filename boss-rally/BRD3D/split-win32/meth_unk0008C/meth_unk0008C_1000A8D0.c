#include "types-win32.h"
//----- (1000A8D0) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000A8D0(unk0008C *this) {
    D3DVALUE ddSurface;        // edx
    int ddSurfaceVtbl;         // eax
    HRESULT hr;                // eax
    HDC dc;                    // ebp
    unsigned int sizePalette;  // eax
    int tPaletteEntry;         // eax
    int tPaletteEntry2;        // eax
    int v9;                    // edx
    unsigned int i;            // eax
    unsigned int j;            // eax
    unsigned int v12;          // eax
    unsigned int k;            // eax
    unsigned int l;            // eax
    HRESULT palette;           // esi
    DDSURFACEDESC surfaceDesc; // [esp+10h] [ebp-6Ch] BYREF

    meth_unk0008C_ResetPalette(this);
    if (!LODWORD(this->field_8.emissive.r))
        return -2005522669;
    ddSurface = this->field_8.emissive.b;
    if (ddSurface == 0.0)
        return -2005522669;
    memset(&surfaceDesc, 0, sizeof(surfaceDesc));
    ddSurfaceVtbl = *(_DWORD *)LODWORD(ddSurface);
    surfaceDesc.dwSize = 108;
    hr = (*(int(__stdcall **)(D3DVALUE, DDSURFACEDESC *))(ddSurfaceVtbl + 88))(
        COERCE_D3DVALUE(LODWORD(ddSurface)), &surfaceDesc);
    if (hr >= 0) {
        hr = graphics_1001A950(&surfaceDesc.ddpfPixelFormat);
        if (hr) {
            dc = GetDC(0);
            sizePalette = GetDeviceCaps(dc, SIZEPALETTE);
            LODWORD(this->field_8.power) = sizePalette;
            if (sizePalette) {
                if (sizePalette > 0x100)
                    LODWORD(this->field_8.power) = 0x100;
                tPaletteEntry = malloc(4 * LODWORD(this->field_8.power));
                this->field_8.hTexture = tPaletteEntry;
                if (!tPaletteEntry || (tPaletteEntry2 = malloc(4 * LODWORD(this->field_8.power)),
                                       (this->field_8.dwRampSize = tPaletteEntry2) == 0)) {
                    ReleaseDC(0, dc);
                    meth_unk0008C_ResetPalette(this);
                    return -2005522668;
                }
                GetSystemPaletteEntries(
                    dc, 0, LODWORD(this->field_8.power), (LPPALETTEENTRY)this->field_8.hTexture);
                qmemcpy((void *)this->field_8.dwRampSize,
                        (const void *)this->field_8.hTexture,
                        4 * LODWORD(this->field_8.power));
            }
            ReleaseDC(0, dc);
            if ((surfaceDesc.ddpfPixelFormat.dwFlags & DDPF_PALETTEINDEXED1) != 0) {
                v9 = 256;
                for (i = 0; i < 8; *(_BYTE *)(i + this->field_8.dwRampSize - 1) = PC_POLYGON)
                    i += 4;
            } else if ((surfaceDesc.ddpfPixelFormat.dwFlags & DDPF_PALETTEINDEXED2) != 0) {
                for (j = 0; j < 0x10; *(_BYTE *)(j + this->field_8.dwRampSize - 1) = PC_POLYGON)
                    j += 4;
                v9 = 512;
            } else if ((surfaceDesc.ddpfPixelFormat.dwFlags & DDPF_PALETTEINDEXED4) != 0) {
                *(_BYTE *)(this->field_8.dwRampSize + 3) = 64;
                v12 = 4;
                *(_BYTE *)(this->field_8.dwRampSize + 63) = 64;
                do {
                    v12 += 4;
                    *(_BYTE *)(v12 + this->field_8.dwRampSize - 1) = 1;
                } while (v12 < 0x3C);
                v9 = 1;
            } else {
                if ((surfaceDesc.ddpfPixelFormat.dwFlags & DDPF_PALETTEINDEXED8) == 0) {
                    palette = -2005522671;
                LABEL_34:
                    meth_unk0008C_ResetPalette(this);
                    return palette;
                }
                for (k = 0; k < 0x28;
                     *(_BYTE *)(k + this->field_8.dwRampSize + 983) = PC_WIDESTYLED) {
                    k += 4;
                    *(_BYTE *)(k + this->field_8.dwRampSize - 1) = PC_WIDESTYLED;
                }
                for (l = 40; l < 0x3D8; *(_BYTE *)(l + this->field_8.dwRampSize - 1) = PC_POLYGON)
                    l += 4;
                v9 = 4;
            }
            palette = (*(int(__stdcall **)(_DWORD, int, DWORD, D3DVALUE *, _DWORD))(
                *(_DWORD *)LODWORD(this->field_8.emissive.r) + 20))(
                LODWORD(this->field_8.emissive.r),
                v9,
                this->field_8.dwRampSize,
                &this->field_8.emissive.a,
                0);
            if (palette >= 0) {
                palette = (*(int(__stdcall **)(_DWORD, _DWORD))(
                    *(_DWORD *)LODWORD(this->field_8.emissive.b) + 124))(
                    LODWORD(this->field_8.emissive.b), LODWORD(this->field_8.emissive.a));
                if (palette >= 0)
                    return 0;
            }
            goto LABEL_34;
        }
    }
    return hr;
}
