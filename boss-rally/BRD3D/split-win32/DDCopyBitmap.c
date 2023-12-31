#include "types-win32.h"
//----- (1000B790) --------------------------------------------------------
HRESULT __cdecl DDCopyBitmap(IDirectDrawSurface *ddSurface, LPCSTR name) {
    HMODULE v2;     // eax
    HANDLE v3;      // esi
    HRESULT result; // eax
    HRESULT v5;     // edi

    v2 = GetModuleHandleA(0);
    v3 = LoadImageA(v2, name, 0, 0, 0, 0x2000u);
    if (v3 || (v3 = LoadImageA(0, name, 0, 0, 0, 0x2010u)) != 0) {
        v5 = graphics_1000B820(ddSurface, v3, 0, 0, 0, 0);
        if (v5)
            OutputDebugStringA(aDdcopybitmapFa);
        DeleteObject(v3);
        result = v5;
    } else {
        OutputDebugStringA(aHandleIsNull);
        result = -2147467259;
    }
    return result;
}
