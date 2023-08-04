#include "../../types-win32.h"
//----- (10031481) --------------------------------------------------------
int __cdecl sub_10031481(int a1, int a2)
{
  int result; // eax
  unsigned int *v3; // [esp+0h] [ebp-4h]

  result = 36 * a1;
  if ( ((*(_DWORD *)(a2 + 36 * a1 + 32) >> 20) & 1) == 0 )
  {
    v3 = (unsigned int *)dword_106C0680;
    dword_106C0680 += 8;
    *v3 = *(_DWORD *)(a2 + 36 * a1) & 0xFFFFFF | 0xDC000000;
    result = (int)v3;
    v3[1] = 1;
  }
  return result;
}
// 106C0680: using guessed type int dword_106C0680;
