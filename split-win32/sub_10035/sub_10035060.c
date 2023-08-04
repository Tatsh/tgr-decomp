#include "../../types-win32.h"
//----- (10035060) --------------------------------------------------------
_DWORD *__cdecl sub_10035060(_DWORD *a1, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *result; // eax

  result = a1;
  if ( *a1 >= a2 )
  {
    result = (_DWORD *)*a1;
    if ( *a1 < a3 )
    {
      result = a1;
      *a1 = a4 + *a1 - a2;
    }
  }
  return result;
}
