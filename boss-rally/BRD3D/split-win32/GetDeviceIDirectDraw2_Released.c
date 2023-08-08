#include "types-win32.h"
//----- (10009E30) --------------------------------------------------------
IDirectDraw2 *__cdecl GetDeviceIDirectDraw2_Released(IDirect3DDevice2 *dev) {
    IDirectDrawSurface2 *drawSurface; // [esp+24h] [ebp-8h] BYREF
    IDirectDraw2 *dd;                 // [esp+28h] [ebp-4h] BYREF

    if (!dev || dev->lpVtbl->GetRenderTarget(dev, (LPDIRECTDRAWSURFACE *)&dev) ||
        dev->lpVtbl->QueryInterface(dev, &CLSID_IDirectDrawSurface2, (LPVOID *)&drawSurface)) {
        return 0;
    }
    dev->lpVtbl->Release(dev);
    drawSurface->lpVtbl->GetDDInterface(drawSurface, (LPVOID *)&dd);
    drawSurface->lpVtbl->Release(drawSurface);
    dd->lpVtbl->Release(dd);
    return dd;
}
