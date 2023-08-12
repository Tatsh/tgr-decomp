#include "types-win32.h"
//----- (1001A990) --------------------------------------------------------
BOOL __stdcall graphics_ddrawEnumerateCallback(GUID *lpGUID, LPSTR a2, LPSTR Source, int *a4) {
  unk00334 *mem;  // eax
  unk00334 *memo; // edx
  DWORD v6;       // eax
  unk00334 *v7;   // edi

  if (a4) {
    mem = (unk00334 *)malloc(0x334u);
    memo = mem;
    if (mem) {
      v6 = mem->ddCapsFlags;
      LOBYTE(v6) = memo->ddCapsFlags & 0xFE;
      memo->ddCapsFlags = v6;
      memset(&memo->ddCaps1, 0, sizeof(memo->ddCaps1));
      memo->ddCaps1.dwSize = 0x17C;
      memset(&memo->ddCaps0, 0, sizeof(memo->ddCaps0));
      memo->ddCaps0.dwSize = 0x17C;
      memo->field_314 = 0;
      memo->field_318 = 0;
      memo->field_31C = 0;
      memo->field_320 = 0;
      memo->field_324 = 0;
      memo->field_328 = 0;
      memo->field_32C = 0;
      memo->last = 0;
      v7 = memo;
    } else {
      v7 = 0;
    }
    if (v7) {
      if (meth_unk00334_1001B090(v7, lpGUID, Source, a2) < 0 || s_unk00334_1001BA10(v7) < 0) {
        meth_unk00334_1001B280(v7);
        free(v7);
        return 1;
      }
      ++a4[1];
    }
  }
  return 1;
}
