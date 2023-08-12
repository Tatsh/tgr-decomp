#include "types-win32.h"
//----- (1001AB00) --------------------------------------------------------
int __stdcall graphics_enumTextureFormatsCallback(LPDDSURFACEDESC lpSurfaceDesc, LPVOID ctx) {
  intptr_t v2;   // ebx
  unk00074 *u74; // edx

  if (ctx) {
    v2 = *((_DWORD *)ctx + 2);
    if (v2) {
      if (!lpSurfaceDesc)
        return 0;
      if (lpSurfaceDesc->dwSize != 0x6C)
        return 0;
      u74 = (unk00074 *)malloc(0x74u);
      if (u74) {
        memset(u74, 0, 0x6Cu);
        u74->field_0.dwSize = 0x6C;
        u74->field_6C = 0;
        u74->last = 0;
      } else {
        u74 = NULL;
      }
      if (u74) {
        qmemcpy(u74, lpSurfaceDesc, 0x6Cu);
        if (meth_1001B030((_DWORD *)v2, u74) >= 0)
          ++*((_DWORD *)ctx + 1);
      }
    }
  }
  return 1;
}
