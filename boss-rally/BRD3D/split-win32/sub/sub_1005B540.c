#include "types-win32.h"
//----- (1005B540) --------------------------------------------------------
char __cdecl sub_1005B540(int a1) {
  int v1;     // ecx
  _DWORD *v2; // eax

  v1 = 0;
  v2 = &unk_100ACE58;
  while (*v2 != a1) {
    v2 += 2;
    ++v1;
    if (v2 >= (_DWORD *)&gCarsArray[1].gap2E[554])
        return 0;
  }
  return byte_100ACE5C[8 * v1];
}
