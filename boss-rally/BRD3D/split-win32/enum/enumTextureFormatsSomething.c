#include "../../types-win32.h"
//----- (10009BD0) --------------------------------------------------------
HRESULT __cdecl enumTextureFormatsSomething(#486 * dev) {
    int *contextStart; // esi
    void(__stdcall *
         enumTextureFormats)(#486 *, int(__stdcall *)(DDSURFACEDESC *, void *), int *); // ebp
    HRESULT result;                                                                     // eax

    contextStart = &d3dEnumTextureFormatsContextStart;
    enumTextureFormats = *(void(__stdcall **)(
        #486 *, int(__stdcall *)(DDSURFACEDESC *, void *), int *))(*(_DWORD *)dev + 36);
    do {
        memset(contextStart + 1, 0, 32u);
        *(_WORD *)contextStart = 8;
        enumTextureFormats(dev, d3dEnumTextureFormatsCallback, contextStart - 1);
        *(_WORD *)contextStart = 16;
        enumTextureFormats(dev, d3dEnumTextureFormatsCallback, contextStart - 1);
        result = contextStart[4];
        if (!result) {
            *(_WORD *)contextStart = 32;
            result = ((int(__stdcall *)(#486 *, int(__stdcall *)(DDSURFACEDESC *, void *), int *))
                          enumTextureFormats)(dev, d3dEnumTextureFormatsCallback, contextStart - 1);
        }
        contextStart += 10;
    } while ((int)contextStart < (int)&g_D3dwaitflipdon);
    return result;
}
// 100A62FC: using guessed type int g_D3dwaitflipdon;
