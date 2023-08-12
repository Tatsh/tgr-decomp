#include "types-win32.h"
//----- (1003F540) --------------------------------------------------------
int __cdecl sub_1003F540(int a1) {
  int result; // eax

  if (dword_10AA26F0 > 0) {
    switch (dword_10AA26F0) {
    case 2:
      *(_WORD *)(a1 + 123404) = 109;
      break;
    case 3:
      *(_WORD *)(a1 + 123404) = 110;
      break;
    case 4:
      *(_WORD *)(a1 + 123404) = 108;
      break;
    default:
      *(_WORD *)(a1 + 123404) = -1;
      break;
    }
  }
  if (dword_10AA26F0)
    return 1;
  if (LOBYTE(dword_10AA26F4[0]) == 1) {
    *(_WORD *)(a1 + 123404) = 72;
    return 1;
  }
  if (LOBYTE(dword_10AA26F4[0]) == 2) {
    *(_WORD *)(a1 + 123404) = 74;
    result = 1;
  } else {
    if (LOBYTE(dword_10AA26F4[0]) == 3)
      *(_WORD *)(a1 + 123404) = 76;
    else
      *(_WORD *)(a1 + 123404) = -1;
    result = 1;
  }
  return result;
}
// 1003F540: using guessed type int __cdecl sub_1003F540(int);
// 10AA26F0: using guessed type int dword_10AA26F0;
// 10AA26F4: using guessed type int dword_10AA26F4[];
