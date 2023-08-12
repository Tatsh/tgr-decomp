#include "types-win32.h"
//----- (1001A570) --------------------------------------------------------
unk00334 *__cdecl meth_unk00334_1001A570(
    unk00334 *a1, int width, int height, int bitDepth, unk00334 *a5, unk00228 *a6) {
  unk00334 *result; // eax

  if (!a1)
    return 0;
  if (a6)
    result = meth_unk00334_1001B880(a1, width, height, bitDepth, a5, a6, &a5, 0);
  else
    result = meth_unk00334_1001B490(a1, width, height, bitDepth, a5, &a5, 0);
  if (!result)
    result = a5;
  return result;
}
