#include "types-win32.h"
//----- (1000AF00) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_FlipSurfaces(unk0008C *this) {
    D3DMATERIAL *lpMat;                    // eax
    LPD3DMATERIAL v3;                      // edi
    IDirect3DViewport2 *d3dViewport2;      // ebx
    IDirect3DMaterial2 *direct3DMaterial2; // eax
    int hr;                                // edi
    D3DRECT rect;                          // [esp+10h] [ebp-10h] BYREF

    rect.x2 = gWidth;
    rect.y2 = gHeight;
    lpMat = (D3DMATERIAL *)this->field_8.dwSize;
    rect.x1 = 0;
    rect.y1 = 0;
    *(_QWORD *)&lpMat->diffuse.r = 0i64;
    lpMat->diffuse.b = 0.0;
    LODWORD(lpMat[1].diffuse.g) = 1;
    v3 = (LPD3DMATERIAL)this->field_8.dwSize;
    d3dViewport2 = this->lpDirect3DViewport2;
    direct3DMaterial2 = (IDirect3DMaterial2 *)LODWORD(v3[1].diffuse.r);
    v3[1].diffuse.g = 0.0;
    v3->dwRampSize = 1;
    direct3DMaterial2->lpVtbl->SetMaterial(direct3DMaterial2, v3);
    d3dViewport2->lpVtbl->SetBackground(d3dViewport2, v3[1].dwSize);
    this->lpDirect3DViewport2->lpVtbl->Clear(
        this->lpDirect3DViewport2, 1, &rect, D3DCLEAR_ZBUFFER | D3DCLEAR_TARGET);
    hr = (*(int(__stdcall **)(_DWORD, IDirectDrawSurface *, MACRO_DDFLIP))(
        *(_DWORD *)LODWORD(this->field_8.emissive.b) + 44))(
        LODWORD(this->field_8.emissive.b), this->lpDirectDrawSurface1, DDFLIP_WAIT);
    while ((*(int(__stdcall **)(_DWORD, MACRO_DDGFS))(*(_DWORD *)LODWORD(this->field_8.emissive.b) +
                                                      72))(LODWORD(this->field_8.emissive.b),
                                                           DDGFS_ISFLIPDONE))
        ;
    return hr;
}
// 100A81C0: using guessed type int gWidth;
// 100A81C4: using guessed type int gHeight;
