#include "types-win32.h"
//----- (1005B250) --------------------------------------------------------
DWORD __thiscall meth_unk00438_1005B250(unk00438 *this, float a2, float a3) {
  DWORD result;  // eax
  signed int v5; // ecx

  result = getTicks();
  v5 = result - dword_10AA2A58 + dword_10AA2A54;
  dword_10AA2A58 = result;
  dword_10AA2A54 = v5;
  if (v5 >= 120) {
    dword_10AA2A54 = 0;
    result = this->lpVtbl->meth6(this, word_100AC9DC, a2, a3, this->field_8);
  }
  return result;
}
// 100AC9DC: using guessed type __int16 word_100AC9DC;
// 10AA2A54: using guessed type int dword_10AA2A54;
// 10AA2A58: using guessed type int dword_10AA2A58;
