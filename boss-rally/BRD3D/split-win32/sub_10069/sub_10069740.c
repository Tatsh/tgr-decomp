#include "types-win32.h"
//----- (10069740) --------------------------------------------------------
int __cdecl sub_10069740(int a1) {
  int result; // eax

  result = a1;
  *(_DWORD *)&gUnk06594.gap1C8[12504] = 0;
  *(_DWORD *)&gUnk06594.gap1C8[12508] = 0;
  *(_DWORD *)&gUnk06594.gap1C8[12500] = 0;
  switch (a1) {
  case 0:
    *(_DWORD *)&gUnk06594.gap1C8[12496] = 0;
    break;
  case 1:
    *(_DWORD *)&gUnk06594.gap1C8[12496] = 1;
    break;
  case 2:
    result = 1;
    *(_DWORD *)&gUnk06594.gap1C8[12496] = 1;
    *(_DWORD *)&gUnk06594.gap1C8[12508] = 1;
    break;
  case 3:
    result = 1;
    *(_DWORD *)&gUnk06594.gap1C8[12496] = 1;
    *(_DWORD *)&gUnk06594.gap1C8[12504] = 1;
    break;
  case 4:
    result = 1;
    *(_DWORD *)&gUnk06594.gap1C8[12496] = 1;
    *(_DWORD *)&gUnk06594.gap1C8[12500] = 1;
    break;
  default:
    return result;
  }
  return result;
}
