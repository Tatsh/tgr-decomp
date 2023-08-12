#include "types-win32.h"
//----- (10037FE0) --------------------------------------------------------
int __cdecl sub_10037FE0(int a1) {
  int result; // eax
  _BYTE *v2;  // esi
  int i;      // edi

  result = *(_DWORD *)(a1 + 100);
  v2 = *(_BYTE **)(a1 + 96);
  for (i = 0; i < result; ++i) {
    sub_10038010(v2);
    result = *(_DWORD *)(a1 + 100);
    v2 += 84;
  }
  return result;
}
