#include "types-win32.h"
//----- (1002B130) --------------------------------------------------------
void __cdecl sub_1002B130(float a1, float a2) {
  dword_10575524 = 1;
  if (a1 < (double)*(float *)&dword_10575518 || a1 == 0.0) {
    if (*(float *)&dword_10575518 == 1.0 || flt_10575514 <= 0.0) {
      dword_10575510 = LODWORD(a1);
      flt_10575514 = -1.0 / a2;
    } else {
      dword_10575530 = 1;
    }
  } else {
    dword_10575510 = LODWORD(a1);
    flt_10575514 = 1.0 / a2;
  }
}
// 10575510: using guessed type int dword_10575510;
// 10575514: using guessed type float flt_10575514;
// 10575518: using guessed type int dword_10575518;
// 10575524: using guessed type int dword_10575524;
// 10575530: using guessed type int dword_10575530;
