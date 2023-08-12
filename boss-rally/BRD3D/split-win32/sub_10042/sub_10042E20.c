#include "types-win32.h"
//----- (10042E20) --------------------------------------------------------
int sub_10042E20() {
  int result; // eax

  if (dword_10AA33D4) {
    if (++dword_100AC650 > 2)
      dword_100AC650 = 0;
  } else if (dword_10AA33D0) {
    if (--dword_100AC650 < 0)
      dword_100AC650 = 2;
  }
  result = 1;
  gSuspensionType = dword_100AC4B0[dword_100AC650];
  return result;
}
// 10042E20: using guessed type int sub_10042E20();
// 10094358: using guessed type int g_SuspensionType;
// 100AC650: using guessed type int dword_100AC650;
// 10AA33D0: using guessed type int dword_10AA33D0;
// 10AA33D4: using guessed type int dword_10AA33D4;
