#include "types-win32.h"
//----- (1003C1E0) --------------------------------------------------------
int sub_1003C1E0() {
  np_sub_1003C020();
  uIDEvent = SetTimer(gHwnd, 1u, 0x3E8u, 0);
  dword_10A9CFFC = 1;
  if (dword_10AA29D4)
    sub_1003CC70(unk);
  return 1;
}
// 10A9CFFC: using guessed type int dword_10A9CFFC;
// 10AA29D4: using guessed type int dword_10AA29D4;
