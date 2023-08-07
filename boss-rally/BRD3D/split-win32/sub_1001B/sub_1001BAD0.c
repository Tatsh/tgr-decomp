#include "../../types-win32.h"
//----- (1001BAD0) --------------------------------------------------------
int sub_1001BAD0() {
    unk0 *v0;   // esi
    int result; // eax

    v0 = g_gsu0;
    if (g_D3dwaitcanflip &&
        g_gsu0->lpDDrawSurface2->lpVtbl->GetFlipStatus(g_gsu0->lpDDrawSurface2, 1)) {
        while (v0->lpDDrawSurface2->lpVtbl->GetFlipStatus(v0->lpDDrawSurface2, 1))
            ;
    }
    v0->lpDDrawSurface2->lpVtbl->Flip(v0->lpDDrawSurface2, v0->lpDDrawSurface1, 1);
    result = g_D3dwaitflipdon;
    if (g_D3dwaitflipdon) {
        for (result = v0->lpDDrawSurface2->lpVtbl->GetFlipStatus(v0->lpDDrawSurface2, 2); result;
             result = v0->lpDDrawSurface2->lpVtbl->GetFlipStatus(v0->lpDDrawSurface2, 2)) {
            ;
        }
    }
    *(&stru_10277680 + 8) = 0;
    return result;
}
// 1001BAD0: using guessed type int sub_1001BAD0();
// 100A62F8: using guessed type int g_D3dwaitcanflip;
// 100A62FC: using guessed type int g_D3dwaitflipdon;
