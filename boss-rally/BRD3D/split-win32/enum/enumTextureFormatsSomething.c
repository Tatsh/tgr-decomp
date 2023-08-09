#include "types-win32.h"
//----- (10009BD0) --------------------------------------------------------
HRESULT __cdecl enumTextureFormatsSomething(IDirect3DDevice2 *dev2) {
    intptr_t contextStart; // esi
    HRESULT(__stdcall * pEnumTextureFormatsFn)
    (IDirect3DDevice2 *, LPD3DENUMTEXTUREFORMATSCALLBACK, LPVOID); // ebp
    HRESULT result;                                                // eax

    contextStart = (intptr_t)&gD3DEnumTextureFormatsContextStart;
    pEnumTextureFormatsFn = dev2->lpVtbl->EnumTextureFormats;
    do {
        memset((void *)(contextStart + 4), 0, 0x20u);
        *(_WORD *)contextStart = 8;
        pEnumTextureFormatsFn(dev2, d3dEnumTextureFormatsCallback, (LPVOID)(contextStart - 4));
        *(_WORD *)contextStart = 16;
        pEnumTextureFormatsFn(dev2, d3dEnumTextureFormatsCallback, (LPVOID)(contextStart - 4));
        result = *(_DWORD *)(contextStart + 16);
        if (!result) {
            *(_WORD *)contextStart = 32;
            result = pEnumTextureFormatsFn(
                dev2, d3dEnumTextureFormatsCallback, (LPVOID)(contextStart - 4));
        }
        contextStart += 40;
    } while (contextStart < (int)&gD3DWaitFlipDone);
    return result;
}
// 100A62FC: using guessed type int gD3DWaitFlipDone;
