#include "../../types-win32.h"
//----- (10067D40) --------------------------------------------------------
int __cdecl sub_10067D40(int a1)
{
  int result; // eax

  result = sub_100752D0(3, *(&SizeInBytes + 6 * a1), (int)(&Format)[6 * a1], (int)*(&Tm + 6 * a1));
  dword_10AA3470 = a1;
  return result;
}
// 10AA3470: using guessed type int dword_10AA3470;
