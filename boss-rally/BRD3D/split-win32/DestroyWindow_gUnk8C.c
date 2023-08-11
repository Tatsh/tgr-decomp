#include "types-win32.h"
//----- (10079C40) --------------------------------------------------------
int DestroyWindow_gUnk8C() {
  unk0008C *v0; // esi

  if (gHwnd && IsWindow(gHwnd)) {
    DestroyWindow(gHwnd);
    gHwnd = 0;
  }
  v0 = gUnk8C;
  if (gUnk8C) {
    meth_unk0008C_Release(gUnk8C);
    free(v0);
    gUnk8C = 0;
  }
  return 0;
}
