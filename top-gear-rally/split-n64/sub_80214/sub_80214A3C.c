#include "types-n64.h"
//----- (80214A3C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80214A3C() {
    int result; // $v0

    AllocPaintShopGfxMem((int)&dword_8028D0B0);
    AllocPaintShopGfxMem((int)&dword_8028D0E0);
    debugPrint("Allocating %d bytes for data_buf...\n");
    result = sub_8024296C(14848);
    dword_80272500 = result;
    return result;
}
// 80214A78: write access to const memory at 80272500 has been detected
// 80272500: using guessed type int dword_80272500;
// 8028D0B0: using guessed type int dword_8028D0B0;
// 8028D0E0: using guessed type int dword_8028D0E0;
