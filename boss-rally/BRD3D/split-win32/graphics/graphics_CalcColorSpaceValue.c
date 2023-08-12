#include "types-win32.h"
//----- (1000B940) --------------------------------------------------------
int __cdecl graphics_CalcColorSpaceValue(LPDIRECTDRAWSURFACE surface, COLORREF color) {
  IDirectDrawSurfaceVtbl *surfaceVtbl2; // edi
  IDirectDrawSurfaceVtbl *surfaceVtbl;  // ebx
  HRESULT(__stdcall * surfaceLock)
  (IDirectDrawSurface *, LPRECT, LPDDSURFACEDESC, DWORD, HANDLE); // edi
  int i;                                                          // eax
  int ret;                                                        // edi
  HDC hdc;                                                        // [esp+40h] [ebp-78h] BYREF
  int negative1;                                                  // [esp+44h] [ebp-74h]
  COLORREF colorRef;                                              // [esp+48h] [ebp-70h]
  DDSURFACEDESC surfaceDesc;                                      // [esp+4Ch] [ebp-6Ch] BYREF

  negative1 = -1;
  if (color != -1) {
    surfaceVtbl2 = surface->lpVtbl;
    if (!surface->lpVtbl->GetDC(surface, &hdc)) {
      colorRef = GetPixel(hdc, 0, 0);
      SetPixel(hdc, 0, 0, color);
      surfaceVtbl2->ReleaseDC(surface, hdc);
    }
  }
  surfaceVtbl = surface->lpVtbl;
  memset(&surfaceDesc, 0, sizeof(surfaceDesc));
  surfaceLock = surfaceVtbl->Lock;
  surfaceDesc.dwSize = 108;
  for (i = surfaceLock(surface, 0, &surfaceDesc, 0, 0); i == 2289435164;
       i = surfaceLock(surface, 0, &surfaceDesc, 0, 0))
    ;
  if (i) {
    ret = negative1;
  } else {
    ret = *(_DWORD *)surfaceDesc.lpSurface; // ?
    if (surfaceDesc.ddpfPixelFormat.dwRGBBitCount < 0x20)
      ret &= (1 << SLOBYTE(surfaceDesc.ddpfPixelFormat.dwRGBBitCount)) - 1;
    surfaceVtbl->Unlock(surface, 0);
  }
  if (color != -1 && !surfaceVtbl->GetDC(surface, &hdc)) {
    SetPixel(hdc, 0, 0, colorRef);
    surfaceVtbl->ReleaseDC(surface, hdc);
  }
  return ret;
}
