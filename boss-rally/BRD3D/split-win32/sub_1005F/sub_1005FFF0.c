#include "types-win32.h"
//----- (1005FFF0) --------------------------------------------------------
int sub_1005FFF0() {
  int result; // eax
  int v1;     // ecx
  int v2;     // edx

  for (result = 0; result < 4; ++result) {
    dword_10AA33D0[result] = dword_10AA3388[result] == 0;
    v1 = dword_10AA33C0[result];
    v2 = dword_10AA33D0[result];
    dword_10AA3388[result] = v1;
    dword_10AA33D0[result] = v1 & v2;
  }
  return result * 4;
}
// 10AA3388: using guessed type int dword_10AA3388[];
// 10AA33C0: using guessed type int dword_10AA33C0[];
// 10AA33D0: using guessed type int dword_10AA33D0[];
