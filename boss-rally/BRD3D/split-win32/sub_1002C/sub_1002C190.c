#include "../../types-win32.h"
//----- (1002C190) --------------------------------------------------------
_BYTE *__cdecl sub_1002C190(_BYTE *a1)
{
  _BYTE *result; // eax

  result = a1;
  a1[6] >>= 1;
  a1[5] >>= 1;
  a1[4] >>= 1;
  return result;
}
