#include "types-win32.h"
//----- (1001AA70) --------------------------------------------------------
HRESULT __stdcall graphics_enumModesCallback(DDSURFACEDESC *a1, int *context) {
  unk00334 *u334; // ebx
  unk00074 *v4;   // edx

  if (context) {
    u334 = (unk00334 *)context[2];
    if (u334) {
      if (!a1)
        return DD_OK;
      if (a1->dwSize != 0x6C)
        return DD_OK;
      v4 = (unk00074 *)malloc(0x74u);
      if (v4) {
        memset(v4, 0, 0x6Cu);
        v4->field_0.dwSize = 0x6C;
        v4->field_6C = 0;
        v4->last = 0;
      } else {
        v4 = 0;
      }
      if (v4) {
        qmemcpy(v4, a1, 0x6Cu);
        if (meth_unk00334_1001B430(u334, v4) >= 0)
          ++context[1];
      }
    }
  }
  return 1;
}
