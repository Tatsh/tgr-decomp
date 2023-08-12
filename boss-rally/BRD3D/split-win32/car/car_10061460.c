#include "types-win32.h"
//----- (10061460) --------------------------------------------------------
int __cdecl car_10061460(int a1, int a2, int damgePtrsMaxAddress) {
  int result; // eax

  result = a1;
  dword_10AA3440 = a1;
  dword_10AA3448 = a2;
  gDamagePtrsMaxAddress = damgePtrsMaxAddress;
  return result;
}
// 10AA3440: using guessed type int dword_10AA3440;
// 10AA3448: using guessed type int dword_10AA3448;
// 10AA345C: using guessed type int gDamagePtrsMaxAddress;
