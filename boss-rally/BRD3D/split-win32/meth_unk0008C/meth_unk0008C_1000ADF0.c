#include "types-win32.h"
//----- (1000ADF0) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000ADF0(unk0008C *this) {
    D3DVALUE d3d2;                         // eax
    IDirect3DViewport2 *direct3DViewport2; // esi
    HRESULT hr;                            // eax
    HRESULT hr_1;                          // ebx
    int hr_2;                              // ebx
    D3DVALUE v7;                           // eax

    d3d2 = this->field_8.emissive.g;
    if (d3d2 == 0.0 || !this->lpDirect3DDevice)
        return -2005522669;
    direct3DViewport2 = (IDirect3DViewport2 *)&this->lpDirect3DViewport2;
    hr = (*(int(__stdcall **)(D3DVALUE, LPDIRECT3DVIEWPORT2 *, _DWORD))(*(_DWORD *)LODWORD(d3d2) +
                                                                        24))(
        COERCE_D3DVALUE(LODWORD(d3d2)), &this->lpDirect3DViewport2, 0);
    if (hr < 0)
        return hr;
    hr_1 = this->lpDirect3DDevice->lpVtbl->AddViewport(
        this->lpDirect3DDevice, (LPDIRECT3DVIEWPORT2)direct3DViewport2->lpVtbl);
    if (hr_1 < 0)
        goto LABEL_9;
    hr_2 = meth_unk0008C_1000AFB0(this);
    if (hr_2 < 0) {
        this->lpDirect3DDevice->lpVtbl->DeleteViewport(
            this->lpDirect3DDevice, (LPDIRECT3DVIEWPORT2)direct3DViewport2->lpVtbl);
        (*((void(__stdcall **)(IDirect3DViewport2Vtbl *))direct3DViewport2->lpVtbl->QueryInterface +
           2))(direct3DViewport2->lpVtbl);
        direct3DViewport2->lpVtbl = 0;
        return hr_2;
    }
    hr_1 = meth_unk0008C_FlipSurfaces(this);
    if (hr_1 < 0) {
        this->lpDirect3DDevice->lpVtbl->DeleteViewport(
            this->lpDirect3DDevice, (LPDIRECT3DVIEWPORT2)direct3DViewport2->lpVtbl);
    LABEL_9:
        (*((void(__stdcall **)(IDirect3DViewport2Vtbl *))direct3DViewport2->lpVtbl->QueryInterface +
           2))(direct3DViewport2->lpVtbl);
        direct3DViewport2->lpVtbl = 0;
        return hr_1;
    }
    v7 = this->field_8.ambient.r;
    LOBYTE(v7) |= 0x10u;
    this->field_8.ambient.r = v7;
    return 0;
}
