#include "types-win32.h"
//----- (1002BA00) --------------------------------------------------------
_BYTE *__cdecl sub_1002BA00(_BYTE *a1, int a2) {
  int v2;        // edi
  _BYTE *result; // eax

  v2 = a2;
  if (a2 > 0) {
    do {
      result = sub_1002BA20(a1);
      a1 += 8;
      --v2;
    } while (v2);
  }
  return result;
}
