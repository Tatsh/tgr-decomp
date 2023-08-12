#include "types-win32.h"
//----- (10008D90) --------------------------------------------------------
HRESULT __cdecl SetupGDevCaps(IDirect3DDevice2 *dev2) {
    IDirect3DDevice2Vtbl *d3dDev2Vtbl; // ecx

    memset(&gHWCaps, 0, 0xFCu);
    memset(&gHELCaps, 0, 0xFCu);
    d3dDev2Vtbl = dev2->lpVtbl;
    gHWCaps.dwSize = 0xFC;
    gHWCaps.dpcTriCaps.dwSize = 0x38;
    gHELCaps.dwSize = 0xFC;
    gHELCaps.dpcTriCaps.dwSize = 0x38;
    return d3dDev2Vtbl->GetCaps(dev2, &gHWCaps, &gHELCaps);
}
