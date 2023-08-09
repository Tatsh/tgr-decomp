#include "types-win32.h"
//----- (1005F530) --------------------------------------------------------
IDirectDraw2 *sub_1005F530() {
    IDirectDraw2 *result;          // eax
    int i;                         // edi
    IDirectDrawSurface *ddSurface; // esi

    result = gDDraw2;
    if (gDDraw2) {
        i = 0;
        if (gSurfaceCount) {
            ddSurface = (IDirectDrawSurface *)&gDDSurface;
            do {
                result = (IDirectDraw2 *)ddSurface->lpVtbl;
                if (ddSurface->lpVtbl) {
                    result =
                        (IDirectDraw2 *)result->lpVtbl->Release((IDirectDraw2 *)ddSurface->lpVtbl);
                    ddSurface->lpVtbl = 0;
                }
                ++i;
                ddSurface += 0x1D;
            } while (i < gSurfaceCount);
        }
    }
    return result;
}
