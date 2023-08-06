#include "../../types-n64.h"
//----- (8022B370) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int *__fastcall sub_8022B370(int a1)
{
  int *result; // $v0

  result = sub_80257B04(3, dword_8028BC04[6 * a1], dword_8028BC04[6 * a1 + 3], dword_8028BC04[6 * a1 + 4]);
  dword_8028B7EC = a1;
  return result;
}
// 8022B3C0: write access to const memory at 8028B7EC has been detected
// 8028B7EC: using guessed type int dword_8028B7EC;
// 8028BC04: using guessed type int dword_8028BC04[];
