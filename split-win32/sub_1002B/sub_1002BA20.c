#include "../../types-win32.h"
//----- (1002BA20) --------------------------------------------------------
_BYTE *__cdecl sub_1002BA20(_BYTE *a1)
{
  _BYTE *result; // eax
  __int16 v2; // cx
  __int16 v3; // dx

  result = a1;
  LOBYTE(v2) = a1[1];
  LOBYTE(v3) = a1[3];
  HIBYTE(v2) = *a1;
  HIBYTE(v3) = a1[2];
  *(_WORD *)a1 = v2;
  *((_WORD *)a1 + 1) = v3;
  LOBYTE(v2) = a1[5];
  LOBYTE(v3) = a1[7];
  HIBYTE(v2) = a1[4];
  HIBYTE(v3) = a1[6];
  *((_WORD *)a1 + 2) = v2;
  *((_WORD *)a1 + 3) = v3;
  return result;
}
