#include "types-win32.h"
//----- (1001ACF0) --------------------------------------------------------
BOOL __thiscall meth_unk00334_1001ACF0(unk00334 *this, unk00228 *u228) {
    int bitDepth;   // eax
    int bitDepthTo; // edi
    DWORD v5;       // eax

    if (!u228)
        return 0;
    bitDepth = meth_unk00334_GetBitDepth(this);
    bitDepthTo = graphics_BitDepthTo(bitDepth);
    if (meth_unk00228_DeviceDescHasDCMColorModel(u228))
        v5 = bitDepthTo & u228->deviceDesc0.dwDeviceRenderBitDepth;
    else
        v5 = bitDepthTo & u228->deviceDesc1.dwDeviceRenderBitDepth;
    return v5 != 0;
}
