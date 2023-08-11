#include "types-win32.h"
//----- (100611A0) --------------------------------------------------------
char *__cdecl car_LoadImageWrapper(LPCSTR name) {
    char *result;  // eax
    char *hResult; // esi
    char *mem;     // edi
    BITMAP bitmap; // [esp+8h] [ebp-18h] BYREF

    result = (char *)LoadImageA(0, name, 0, 0, 0, 0x2010u); // LR_CREATEDIBSECTION | LR_LOADFROMFILE
    hResult = result;
    if (result) {
        GetObjectA(result, 0x18, &bitmap); // 0x18 = sizeof(BITMAP)
        if (bitmap.bmBitsPixel == 24) {
            mem = graphics_ConvertBitmapIf24Bit(&bitmap);
            DeleteObject(hResult);
            result = mem;
        } else {
            result = 0;
        }
    }
    return result;
}
