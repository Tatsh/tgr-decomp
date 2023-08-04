#include "../../types-win32.h"
//----- (10074ED0) --------------------------------------------------------
int __cdecl sub_10074ED0(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // eax

  result = a1;
  if ( a1 >= 0 && a1 < 8 )
  {
    result = *(_DWORD *)(a3 + 4 * a1);
    if ( result < 3 )
    {
      v4 = result + 1;
      *(_DWORD *)(a3 + 4 * a1) = v4;
      sub_10025800(*(_DWORD *)(a2 + 4 * a1), v4);
      result = dword_118AA0C0(*(_DWORD *)(a2 + 4 * a1));
    }
  }
  return result;
}
// 118AA0C0: using guessed type int (__cdecl *dword_118AA0C0)(_DWORD);
