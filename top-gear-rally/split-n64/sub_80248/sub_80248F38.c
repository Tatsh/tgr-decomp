#include "../../types-n64.h"
//----- (80248F38) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80248F38() {
    debugPrint("\nAllocating %d bytes for decal buffer...\n\n");
    dword_8028DB80 = sub_8024296C(2048);
    AllocPaintShopGfxMem((int)&dword_8028D0B0);
    return AllocPaintShopGfxMem((int)&dword_8028D0E0);
}
// 80248F60: write access to const memory at 8028DB80 has been detected
// 8028D0B0: using guessed type int dword_8028D0B0;
// 8028D0E0: using guessed type int dword_8028D0E0;
// 8028DB80: using guessed type int dword_8028DB80;
