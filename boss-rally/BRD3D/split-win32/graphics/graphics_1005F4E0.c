#include "types-win32.h"
//----- (1005F4E0) --------------------------------------------------------
int graphics_1005F4E0() {
  int v0;                  // edi
  IDirectDrawSurface **v1; // esi

  v0 = 0;
  if (gSurfaceCount) {
    v1 = &gDDSurface;
    do {
      if (!(*v1)->lpVtbl->Restore(*v1))
        DDCopyBitmap(*v1, (LPCSTR)v1[28]);
      ++v0;
      v1 += 29;
    } while (v0 < gSurfaceCount);
  }
  return 1;
}
