#include "types-win32.h"
//----- (1000A820) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000A820(unk0008C *this) {
    D3DVALUE dd2;                // edx
    int dd2Vtbl;                 // eax
    HRESULT result;              // eax
    D3DVALUE v5;                 // eax
    DDSURFACEDESC ddSurfaceDesc; // [esp+8h] [ebp-6Ch] BYREF

    if (!LODWORD(this->field_8.specular.g))
        return -2005522669;
    dd2 = this->field_8.emissive.r;
    if (dd2 == 0.0)
        return -2005522669;
    memset(&ddSurfaceDesc, 0, sizeof(ddSurfaceDesc));
    dd2Vtbl = *(_DWORD *)LODWORD(dd2);
    ddSurfaceDesc.dwSize = 108;
    ddSurfaceDesc.dwFlags = DDPF_PALETTEINDEXED8 | DDPF_ALPHAPIXELS;
    ddSurfaceDesc.ddsCaps.dwCaps =
        DDPF_ZPIXELS | DDPF_YUV | DDPF_PALETTEINDEXEDTO8 | DDPF_PALETTEINDEXED4;
    ddSurfaceDesc.dwBackBufferCount = 1;
    result = (*(int(__stdcall **)(D3DVALUE, DDSURFACEDESC *, D3DVALUE *, _DWORD))(dd2Vtbl + 24))(
        COERCE_D3DVALUE(LODWORD(dd2)), &ddSurfaceDesc, &this->field_8.emissive.b, 0);
    if (result >= 0) {
        result = meth_unk0008C_1000A8D0(this);
        if (result >= 0) {
            v5 = this->field_8.ambient.r;
            LOBYTE(v5) |= 4u;
            this->field_8.ambient.r = v5;
            result = 0;
        }
    }
    return result;
}
