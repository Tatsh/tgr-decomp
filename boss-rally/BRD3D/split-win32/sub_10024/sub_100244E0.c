#include "types-win32.h"
//----- (100244E0) --------------------------------------------------------
HRESULT sub_100244E0() {
    HRESULT hr;    // eax
    D3DRECT rects; // [esp+0h] [ebp-10h] BYREF

    hr = *(&stru_10277680 + 8);
    if (!*(&stru_10277680 + 8)) {
        hr = gD3DClearZBuffer;
        if (!gD3DClearZBuffer || (rects.x1 = 0,
                                  rects.x2 = gWidth,
                                  rects.y1 = 0,
                                  rects.y2 = gHeight,
                                  (hr = gUnk8C->lpDirect3DViewport2->lpVtbl->Clear(
                                       gUnk8C->lpDirect3DViewport2, 1, &rects, 3)) == 0)) {
            *(&stru_10277680 + 8) = 1;
        }
    }
    return hr;
}
// 100A81C0: using guessed type int gWidth;
// 100A81C4: using guessed type int gHeight;
// 104C5168: using guessed type int gD3DClearZBuffer;
