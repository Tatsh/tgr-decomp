#include "../../types-win32.h"
//----- (1001A570) --------------------------------------------------------
__unk0 *__cdecl sub_1001A570(_DWORD *a1, int width, int height, int bitDepth, __unk0 *a5, int a6)
{
  __unk0 *result; // eax

  if ( !a1 )
    return 0;
  if ( a6 )
    result = sub_1001B880((__unk0 *)a1, width, height, bitDepth, (int)a5, a6, &a5, 0);
  else
    result = sub_1001B490(a1, width, height, bitDepth, (int)a5, &a5, 0);
  if ( !result )
    result = a5;
  return result;
}
