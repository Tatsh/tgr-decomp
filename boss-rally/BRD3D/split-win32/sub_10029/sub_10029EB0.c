#include "types-win32.h"
//----- (10029EB0) --------------------------------------------------------
_DWORD *__cdecl sub_10029EB0(_DWORD *a1) {
  _DWORD *result; // eax

  if (!dword_104D51AC || dword_104D51AC == 3 || dword_104D51AC == 6) {
    result = a1;
    dword_104D51B4 = (*a1 >> 19) & 3;
    dword_104D51BC = a1[1];
    dword_10575434 = 0;
    if (!dword_104D51AC) {
      dword_105553FC = (int)a1;
      dword_10575438 = 0;
    }
    dword_104D51AC = 1;
  }
  return result;
}
// 104D51AC: using guessed type int dword_104D51AC;
// 104D51B4: using guessed type int dword_104D51B4;
// 104D51BC: using guessed type int dword_104D51BC;
// 105553FC: using guessed type int dword_105553FC;
// 10575434: using guessed type int dword_10575434;
// 10575438: using guessed type int dword_10575438;
