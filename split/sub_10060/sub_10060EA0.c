//----- (10060EA0) --------------------------------------------------------
_BYTE *__cdecl sub_10060EA0(PBITMAP pBitmap) {
    _BYTE *mem; // edi

    if (pBitmap->bmBitsPixel != 24)
        return 0;
    mem = malloc(4 * pBitmap->bmWidth * pBitmap->bmHeight);
    if (mem) {
        sub_10060F00(mem,
                     (char *)pBitmap->bmBits,
                     pBitmap->bmWidth,
                     pBitmap->bmHeight,
                     pBitmap->bmWidthBytes);
        g_bmWidth = pBitmap->bmWidth;
        g_bmHeight = pBitmap->bmHeight;
    }
    return mem;
}
// 10AA3464: using guessed type int g_bmWidth;
// 10AA3468: using guessed type int g_bmHeight;
