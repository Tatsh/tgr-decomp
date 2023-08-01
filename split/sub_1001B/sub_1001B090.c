//----- (1001B090) --------------------------------------------------------
HRESULT __thiscall sub_1001B090(#468 * this, GUID *lpGUID, char *Source, char *a4) {
    int v5;                           // eax
    char *src;                        // ebp
    size_t lll;                       // kr04_4
    size_t llll;                      // edi
    char *mem;                        // eax
    char *v11;                        // ebp
    size_t l;                         // kr08_4
    size_t ll;                        // edi
    char *v14;                        // eax
    HRESULT v15;                      // edi
    IDirectDraw2Vtbl *ppvDDraw2_vtbl; // edi
    unsigned int v17;                 // edx
    unsigned int v18;                 // edi
    int v19;                          // eax
    IDirectDraw2 *ppvDDraw2_a;        // [esp+Ch] [ebp-28h]
    IDirectDraw *ppvDDraw2_b;         // [esp+14h] [ebp-20h]
# 462 * d3d2_a;                       // [esp+14h] [ebp-20h]
    IDirect3D2 *ppvD3D2;              // [esp+28h] [ebp-Ch] BYREF
    IDirectDraw2 *ppvDDraw2;          // [esp+2Ch] [ebp-8h] BYREF
    LPDIRECTDRAW lpDD;                // [esp+30h] [ebp-4h] BYREF

    lpDD = 0;
    ppvDDraw2 = 0;
    v5 = *(_DWORD *)this;
    ppvD3D2 = 0;
    if ((v5 & 1) != 0)
        return 0;
    if (lpGUID) {
        *(GUID *)((char *)this + 4) = *lpGUID;
    } else {
        LOBYTE(v5) = v5 | 2;
        *(_DWORD *)this = v5;
    }
    src = Source;
    if (!Source)
        src = aUnknown_0;
    lll = strlen(src) + 1;
    llll = lll - 1;
    mem = (char *)malloc(lll);
    *((_DWORD *)this + 5) = mem;
    if (mem) {
        strncpy(mem, src, llll);
        *(_BYTE *)(llll + *((_DWORD *)this + 5)) = 0;
    }
    v11 = a4;
    if (!a4)
        v11 = aUnknown_0;
    l = strlen(v11) + 1;
    ll = l - 1;
    v14 = (char *)malloc(l);
    *((_DWORD *)this + 6) = v14;
    if (v14) {
        strncpy(v14, v11, ll);
        *(_BYTE *)(ll + *((_DWORD *)this + 6)) = 0;
    }
    v15 = DirectDrawCreate(lpGUID, &lpDD, 0);
    if (v15 >= 0) {
        v15 = lpDD->lpVtbl->QueryInterface(lpDD, &CLSID_IDirectDraw2, (LPVOID *)&ppvDDraw2);
        if (v15 >= 0) {
            v15 = lpDD->lpVtbl->QueryInterface(lpDD, &IID_IDirect3D2, (LPVOID *)&ppvD3D2);
            if (v15 >= 0) {
                g_pD3D2 = ppvD3D2;
                ppvDDraw2_vtbl = ppvDDraw2->lpVtbl;
                ppvDDraw2_a = ppvDDraw2;
                *((_DWORD *)this + 7) = 380;
                *((_DWORD *)this + 102) = 380;
                v15 = ppvDDraw2_vtbl->GetCaps(
                    ppvDDraw2_a, (LPDDCAPS)((char *)this + 28), (LPDDCAPS)((char *)this + 408));
                if (v15 >= 0) {
                    if (*((_DWORD *)this + 21)) {
                        v17 = *(_DWORD *)this & 0xFFFFFFF7;
                        ppvDDraw2_b = (IDirectDraw *)ppvDDraw2;
                        *((_DWORD *)this + 197) = 0;
                        *(_DWORD *)this = v17;
                        v15 = sub_1001B320(this, ppvDDraw2_b);
                        if (v15 >= 0) {
                            v18 = *(_DWORD *)this & 0xFFFFFFEF;
                            d3d2_a = (#462 *)ppvD3D2;
                            *((_DWORD *)this + 200) = 0;
                            *(_DWORD *)this = v18;
                            v15 = sub_1001B510(this, d3d2_a);
                            if (v15 >= 0) {
                                v19 = *(_DWORD *)this;
                                LOBYTE(v19) = *(_DWORD *)this | 1;
                                v15 = 0;
                                *(_DWORD *)this = v19;
                            }
                        }
                    } else {
                        v15 = -2005532502;
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
    return v15;
}
