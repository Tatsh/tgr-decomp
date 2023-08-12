#include "types-win32.h"
//----- (10035520) --------------------------------------------------------
int __cdecl LoadCar(int a1, int carIndex, int a3) {
  int result; // eax

  if (a3) // Never runs
    s_noreturn_10008CF0(aLoadcar);
  ReadCarFileIntoBuffer(&byte_100C12A0[0x15F88 * a1], carIndex);
  sub_1003551B();
  result = a1;
  *(_DWORD *)&gUnk06594.gap1C8[4 * a1 + 0x3010] = carIndex;
  return result;
}
