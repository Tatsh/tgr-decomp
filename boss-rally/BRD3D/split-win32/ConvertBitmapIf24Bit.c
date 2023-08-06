#include "../types-win32.h"
//----- (10060EA0) --------------------------------------------------------
char *__cdecl ConvertBitmapIf24Bit(PBITMAP pBitmap)
{
  _BYTE *mem; // edi

  if ( pBitmap->bmBitsPixel != 24 )
    return 0;
  mem = malloc(4 * pBitmap->bmWidth * pBitmap->bmHeight);
  if ( mem )
  {
    Convert24BitBitmap(mem, pBitmap->bmBits, pBitmap->bmWidth, pBitmap->bmHeight, pBitmap->bmWidthBytes);
    g_bmWidth = pBitmap->bmWidth;
    g_bmHeight = pBitmap->bmHeight;
  }
  return mem;
}
// 10AA3464: using guessed type int g_bmWidth;
// 10AA3468: using guessed type int g_bmHeight;
