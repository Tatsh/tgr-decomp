#include "types-win32.h"
//----- (1001BAD0) --------------------------------------------------------
int sub_1001BAD0() {
    unk00334 *v0; // esi
    int result;   // eax

    v0 = gUnk8C;
    if (gD3DWaitCanFlip && gUnk8C->lpDDSurface1->lpVtbl->GetFlipStatus(gUnk8C->lpDDSurface1, 1)) {
        while (v0->lpDDSurface1->lpVtbl->GetFlipStatus(v0->lpDDSurface1, 1))
            ;
    }
    v0->lpDDSurface1->lpVtbl->Flip(v0->lpDDSurface1, v0->lpDDSurface0, 1);
    result = gD3DWaitFlipDone;
    if (gD3DWaitFlipDone) {
        for (result = v0->lpDDSurface1->lpVtbl->GetFlipStatus(v0->lpDDSurface1, 2); result;
             result = v0->lpDDSurface1->lpVtbl->GetFlipStatus(v0->lpDDSurface1, 2)) {
            ;
        }
    }
    *(&stru_10277680 + 8) = 0;
    return result;
}
// 1001BAD0: using guessed type int sub_1001BAD0();
// 100A62F8: using guessed type int g_D3dwaitcanflip;
// 100A62FC: using guessed type int g_D3dwaitflipdon;
