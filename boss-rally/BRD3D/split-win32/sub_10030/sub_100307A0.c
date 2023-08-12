#include "types-win32.h"
//----- (100307A0) --------------------------------------------------------
_DWORD *__cdecl sub_100307A0(float *a1, _DWORD *a2) {
  _DWORD *result; // eax
  int v3;         // ebx
  int v4;         // edx

  result = a2;
  v3 = 4;
  do {
    v4 = 4;
    do {
      *result = *(_DWORD *)((char *)result + (char *)a1 - (char *)a2);
      ++result;
      --v4;
    } while (v4);
    --v3;
  } while (v3);
  return result;
}
