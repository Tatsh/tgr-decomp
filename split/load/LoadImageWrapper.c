//----- (100611A0) --------------------------------------------------------
_BYTE *__cdecl LoadImageWrapper(LPCSTR name) {
    _BYTE *result;  // eax
    _BYTE *hResult; // esi
    _BYTE *mem;     // edi
    BITMAP bitmap;  // [esp+8h] [ebp-18h] BYREF

    result = LoadImageA(0, name, 0, 0, 0, 0x2010u); // LR_CREATEDIBSECTION | LR_LOADFROMFILE
    hResult = result;
    if (result) {
        GetObjectA(result, 0x18, &bitmap); // 0x18 = sizeof(BITMAP)
        if (bitmap.bmBitsPixel == 24) {
            mem = sub_10060EA0(&bitmap);
            DeleteObject(hResult);
            result = mem;
        } else {
            result = 0;
        }
    }
    return result;
}
