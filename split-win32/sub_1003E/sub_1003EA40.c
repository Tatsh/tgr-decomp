#include "../../types-win32.h"
//----- (1003EA40) --------------------------------------------------------
int __cdecl sub_1003EA40(int a1)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-4h]

  result = 1;
  if ( dword_100AB3D8 )
    v2 = 8 * dword_10B4E708 + 74;
  else
    v2 = 8 * dword_10B4E70C + 74;
  *(float *)(a1 + 60) = (float)v2;
  return result;
}
// 100AB3D8: using guessed type int dword_100AB3D8;
// 10B4E708: using guessed type int dword_10B4E708;
// 10B4E70C: using guessed type int dword_10B4E70C;
