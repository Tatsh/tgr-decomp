#include "../../types-win32.h"
//----- (1001B090) --------------------------------------------------------
HRESULT __thiscall meth_1001B090(unk0 *this, GUID *lpGUID, char *Source, char *a4) {
    void *v5;                         // eax
    char *src;                        // ebp
    size_t lll;                       // kr04_4
    size_t llll;                      // edi
    char *mem;                        // eax
    char *v11;                        // ebp
    size_t l;                         // kr08_4
    size_t ll;                        // edi
    char *v14;                        // eax
    HRESULT hr;                       // edi
    IDirectDraw2Vtbl *ppvDDraw2_vtbl; // edi
    void *v17;                        // edx
    void *v18;                        // edi
    void *v19;                        // eax
    IDirectDraw2 *ppvDDraw2_a;        // [esp+Ch] [ebp-28h]
    IDirectDraw *ppvDDraw2_b;         // [esp+14h] [ebp-20h]
# 462 * d3d2_a;                       // [esp+14h] [ebp-20h]
    IDirect3D2 *ppvD3D2;              // [esp+28h] [ebp-Ch] BYREF
    IDirectDraw2 *ppvDDraw2;          // [esp+2Ch] [ebp-8h] BYREF
    LPDIRECTDRAW lpDD;                // [esp+30h] [ebp-4h] BYREF

    lpDD = 0;
    ppvDDraw2 = 0;
    v5 = this->field_27;
    ppvD3D2 = 0;
    if (((unsigned __int8)v5 & 1) != 0)
        return 0;
    if (lpGUID) {
        *(GUID *)&this->field_30 = *lpGUID;
    } else {
        LOBYTE(v5) = (unsigned __int8)v5 | 2;
        this->field_27 = v5;
    }
    src = Source;
    if (!Source)
        src = aUnknown_0;
    lll = strlen(src) + 1;
    llll = lll - 1;
    mem = (char *)malloc(lll);
    this->unkMeth1 = (int)mem;
    if (mem) {
        strncpy(mem, src, llll);
        *(_BYTE *)(llll + this->unkMeth1) = 0;
    }
    v11 = a4;
    if (!a4)
        v11 = aUnknown_0;
    l = strlen(v11) + 1;
    ll = l - 1;
    v14 = (char *)malloc(l);
    this->field_19 = (int)v14;
    if (v14) {
        strncpy(v14, v11, ll);
        *(_BYTE *)(ll + this->field_19) = 0;
    }
    hr = DirectDrawCreate(lpGUID, &lpDD, 0);
    if (hr >= 0) {
        hr = lpDD->lpVtbl->QueryInterface(lpDD, &CLSID_IDirectDraw2, (LPVOID *)&ppvDDraw2);
        if (hr >= 0) {
            hr = lpDD->lpVtbl->QueryInterface(lpDD, &IID_IDirect3D2, (LPVOID *)&ppvD3D2);
            if (hr >= 0) {
                g_pD3D2 = ppvD3D2;
                ppvDDraw2_vtbl = ppvDDraw2->lpVtbl;
                ppvDDraw2_a = ppvDDraw2;
                this->field_1C = 380;
                this[2].field_80 = 380;
                hr = ppvDDraw2_vtbl->GetCaps(
                    ppvDDraw2_a, (LPDDCAPS) & this->field_1C, (LPDDCAPS) & this[2].field_80);
                if (hr >= 0) {
                    if (this->lpPaletteEntry) {
                        v17 = (void *)((int)this->field_27 & 0xFFFFFFF7);
                        ppvDDraw2_b = (IDirectDraw *)ppvDDraw2;
                        this[5].lpDDrawSurface1 = 0;
                        this->field_27 = v17;
                        hr = meth_1001B320(this, ppvDDraw2_b);
                        if (hr >= 0) {
                            v18 = (void *)((int)this->field_27 & 0xFFFFFFEF);
                            d3d2_a = (#462 *)ppvD3D2;
                            this[5].lpDirect3DViewport2 = 0;
                            this->field_27 = v18;
                            hr = meth_1001B510((#468 *)this, d3d2_a);
                            if (hr >= 0) {
                                v19 = this->field_27;
                                LOBYTE(v19) = (int)this->field_27 | 1;
                                hr = 0;
                                this->field_27 = v19;
                            }
                        }
                    } else {
                        hr = -2005532502;
                    }
                }
            }
        }
    }
    if (ppvD3D2) {
        ppvD3D2->lpVtbl->Release(ppvD3D2);
        ppvD3D2 = 0;
        g_pD3D2 = 0;
    }
    if (ppvDDraw2) {
        ppvDDraw2->lpVtbl->Release(ppvDDraw2);
        ppvDDraw2 = 0;
    }
    if (lpDD)
        lpDD->lpVtbl->Release(lpDD);
    return hr;
}
