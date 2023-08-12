#include "types-win32.h"
//----- (10040680) --------------------------------------------------------
int sub_10040680() {
  if (!dword_10AA2844) {
    dword_10AA28D8 = 1;
    dword_10AA2844 = (LPDIRECTINPUTDEVICEA)1;
    dword_10AA33E4 = 0;
    sub_1005FF30();
    sub_1005FF60();
    sub_1005FFF0();
  }
  return 1;
}
// 10AA28D8: using guessed type int dword_10AA28D8;
// 10AA33E4: using guessed type int dword_10AA33E4;
