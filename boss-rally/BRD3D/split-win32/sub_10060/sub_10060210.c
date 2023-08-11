#include "types-win32.h"
//----- (10060210) --------------------------------------------------------
int __stdcall sub_10060210(HWND a1) {
  dword_10AA33B8 = gWidth;
  gUnk54Ptr->field_0 = gWidth / 2;
  dword_10AA33B4 = gHeight;
  *(_DWORD *)gUnk54Ptr->gap4 = gHeight / 2;
  memset(&dword_10AA3398, 0, 0x1Cu);
  return 1;
}
// 100A81C0: using guessed type int gWidth;
// 100A81C4: using guessed type int gHeight;
// 10AA3398: using guessed type int dword_10AA3398;
// 10AA33B4: using guessed type int dword_10AA33B4;
// 10AA33B8: using guessed type int dword_10AA33B8;
