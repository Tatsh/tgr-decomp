#include "types-win32.h"
//----- (1002F230) --------------------------------------------------------
int __cdecl sub_1002F230(int a1) {
  int result; // eax
  int v2;     // ebx
  int v3;     // edi
  _DWORD *v4; // esi
  int v5;     // ecx
  int *v6;    // eax

  result = dword_100B36FC;
  v2 = 0;
  if (dword_100B36FC > 0) {
    v3 = 0;
    v4 = &unk_10ACEDB0;
    do {
      if (*(v4 - 881) == a1) {
        *v4 = 0;
        sub_10072580(v3);
        v5 = dword_100B36F8;
        if (dword_100B36F8 > 0) {
          v6 = &dword_10ACD4F8;
          do {
              if ((_DWORD *)*v6 == v4 - 962)
                  *v6 = 0;
              v6 += 32;
              --v5;
          } while (v5);
        }
      }
      result = dword_100B36FC;
      ++v2;
      v3 += 2;
      v4 += 2778;
    } while (v2 < dword_100B36FC);
  }
  return result;
}
// 100B36F8: using guessed type int dword_100B36F8;
// 100B36FC: using guessed type int dword_100B36FC;
// 10ACD4F8: using guessed type int dword_10ACD4F8;
