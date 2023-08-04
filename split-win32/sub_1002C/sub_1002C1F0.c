#include "../../types-win32.h"
//----- (1002C1F0) --------------------------------------------------------
int __cdecl sub_1002C1F0(int a1)
{
  int result; // eax

  result = dword_1067B548;
  if ( dword_1067B548 < 2048 )
  {
    dword_1067B550[dword_1067B548] = a1;
    dword_1067B548 = ++result;
  }
  return result;
}
// 1067B548: using guessed type int dword_1067B548;
