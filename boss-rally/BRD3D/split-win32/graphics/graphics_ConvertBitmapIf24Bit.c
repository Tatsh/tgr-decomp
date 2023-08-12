#include "types-win32.h"
//----- (10060EA0) --------------------------------------------------------
char *__cdecl graphics_ConvertBitmapIf24Bit(PBITMAP pBitmap) {
  _BYTE *mem; // edi

  if (pBitmap->bmBitsPixel != 24)
    return 0;
  mem = malloc(4 * pBitmap->bmWidth * pBitmap->bmHeight);
  if (mem) {
    graphics_Convert24BitBitmap(
        mem, pBitmap->bmBits, pBitmap->bmWidth, pBitmap->bmHeight, pBitmap->bmWidthBytes);
    gBmWidth = pBitmap->bmWidth;
    gBmHeight = pBitmap->bmHeight;
  }
  return mem;
}
// 10AA3464: using guessed type int gBmWidth;
// 10AA3468: using guessed type int gBmHeight;
