#include "types-win32.h"
//----- (1001B090) --------------------------------------------------------
HRESULT __thiscall meth_unk00334_1001B090(unk00334 *this, GUID *lpGUID, char *Source, char *a4) {
  DWORD v5;                         // eax
  char *src;                        // ebp
  size_t lll;                       // kr04_4
  size_t llll;                      // edi
  char *mem;                        // eax
  char *v11;                        // ebp
  size_t l;                         // kr08_4
  size_t ll;                        // edi
  void *v14;                        // eax
  HRESULT hr;                       // edi
  IDirectDraw2Vtbl *ppvDDraw2_vtbl; // edi
  DWORD v17;                        // edx
  DWORD v18;                        // edi
  DWORD v19;                        // eax
  IDirectDraw2 *ppvDDraw2_a;        // [esp+Ch] [ebp-28h]
  IDirectDraw2 *ppvDDraw2_b;        // [esp+14h] [ebp-20h]
  IDirect3D2 *d3d2_a;               // [esp+14h] [ebp-20h]
  IDirect3D2 *ppvD3D2;              // [esp+28h] [ebp-Ch] BYREF
  IDirectDraw2 *ppvDDraw2;          // [esp+2Ch] [ebp-8h] BYREF
  LPDIRECTDRAW lpDD;                // [esp+30h] [ebp-4h] BYREF

  lpDD = 0;
  ppvDDraw2 = 0;
  v5 = this->ddCapsFlags;
  ppvD3D2 = 0;
  if ((v5 & 1) != 0)
    return 0;
  if (lpGUID) {
    *(GUID *)&this->lpGUID = *lpGUID;
  } else {
    LOBYTE(v5) = v5 | 2;
    this->ddCapsFlags = v5;
  }
  src = Source;
  if (!Source)
    src = aUnknown_0;
  lll = strlen(src) + 1;
  llll = lll - 1;
  mem = (char *)malloc(lll);
  this->field_14 = mem;
  if (mem) {
    strncpy(mem, src, llll);
    this->field_14[llll] = 0;
  }
  v11 = a4;
  if (!a4)
    v11 = aUnknown_0;
  l = strlen(v11) + 1;
  ll = l - 1;
  v14 = malloc(l);
  this->field_19 = v14;
  if (v14) {
    strncpy((char *)v14, v11, ll);
    *((_BYTE *)this->field_19 + ll) = 0;
  }
  hr = DirectDrawCreate(lpGUID, &lpDD, 0);
  if (hr >= 0) {
    hr = lpDD->lpVtbl->QueryInterface(lpDD, &CLSID_IDirectDraw2, (LPVOID *)&ppvDDraw2);
    if (hr >= 0) {
      hr = lpDD->lpVtbl->QueryInterface(lpDD, &CLSID_IDirect3D2, (LPVOID *)&ppvD3D2);
      if (hr >= 0) {
        g_pD3D2 = ppvD3D2;
        ppvDDraw2_vtbl = ppvDDraw2->lpVtbl;
        ppvDDraw2_a = ppvDDraw2;
        this->ddCaps1.dwSize = 380;
        this->ddCaps0.dwSize = 380;
        hr = ppvDDraw2_vtbl->GetCaps(ppvDDraw2_a, &this->ddCaps1, &this->ddCaps0);
        if (hr >= 0) {
          if (this->ddCaps1.dwZBufferBitDepths) {
              v17 = this->ddCapsFlags & 0xFFFFFFF7;
              ppvDDraw2_b = ppvDDraw2;
              this->field_314 = 0;
              this->ddCapsFlags = v17;
              hr = meth_unk00334_1001B320(this, ppvDDraw2_b);
              if (hr >= 0) {
                  v18 = this->ddCapsFlags & 0xFFFFFFEF;
                  d3d2_a = ppvD3D2;
                  this->field_320 = 0;
                  this->ddCapsFlags = v18;
                  hr = meth_unk00334_1001B510(this, d3d2_a);
                  if (hr >= 0) {
                      v19 = this->ddCapsFlags;
                      LOBYTE(v19) = this->ddCapsFlags | 1;
                      hr = 0;
                      this->ddCapsFlags = v19;
                  }
              }
          } else {
              hr = DDERR_NO3D;
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
