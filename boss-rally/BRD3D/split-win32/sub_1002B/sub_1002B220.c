#include "types-win32.h"
//----- (1002B220) --------------------------------------------------------
void __cdecl sub_1002B220(float a1, float a2) {
  dword_10575528 = 1;
  dword_100A81AC = LODWORD(a1);
  if (a1 - flt_100A81B0 < 0.0 || a1 == 0.0)
    flt_1057551C = -1.0 / a2;
  else
    flt_1057551C = 1.0 / a2;
}
// 100A81AC: using guessed type int dword_100A81AC;
// 100A81B0: using guessed type float flt_100A81B0;
// 1057551C: using guessed type float flt_1057551C;
// 10575528: using guessed type int dword_10575528;
