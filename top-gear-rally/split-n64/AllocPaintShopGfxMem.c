#include "../types-n64.h"
//----- (80242B10) --------------------------------------------------------
int __fastcall AllocPaintShopGfxMem(int a1) {
    int v2; // $v0
    int v4; // [sp+14h] [-Ch]

    *(_DWORD *)a1 = sub_8024296C((*(_DWORD *)(a1 + 16) * *(_DWORD *)(a1 + 20) *
                                  (unsigned int)*(unsigned __int8 *)(a1 + 12)) >>
                                 3);
    if (CHK_GetFileSize(*(_DWORD *)(a1 + 4)) != (*(_DWORD *)(a1 + 16) * *(_DWORD *)(a1 + 20) *
                                                 (unsigned int)*(unsigned __int8 *)(a1 + 12)) >>
                                                    3) {
        v2 = CHK_GetFileSize(*(_DWORD *)(a1 + 4));
        debugPrint("ERROR: AllocPaintShopGfxMem given image %dx%dx%d = %d bytes but uncompressed "
                   "rom image is %d bytes\n",
                   *(_DWORD *)(a1 + 16),
                   *(_DWORD *)(a1 + 20),
                   *(unsigned __int8 *)(a1 + 12),
                   v2,
                   v4);
        while (1)
            ;
    }
    return LoadCarWithIndex2(*(char **)a1, *(_DWORD *)(a1 + 4), 0);
}
// 80242BAC: variable 'v4' is possibly undefined
