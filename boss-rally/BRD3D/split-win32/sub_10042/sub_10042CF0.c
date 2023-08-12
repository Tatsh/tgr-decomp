#include "types-win32.h"
//----- (10042CF0) --------------------------------------------------------
int sub_10042CF0() {
  dword_100AB3D8 = 1;
  if (dword_10AA33D4) {
    if (++dword_10B4E708 > 9) {
      dword_10B4E708 = 0;
      sub_10060D90();
      return 1;
    }
  } else if (dword_10AA33D0) {
    if (--dword_10B4E708 < 0)
      dword_10B4E708 = 9;
  }
  sub_10060D90();
  return 1;
}
// 10060D90: using guessed type int sub_10060D90(void);
// 100AB3D8: using guessed type int dword_100AB3D8;
// 10AA33D0: using guessed type int dword_10AA33D0;
// 10AA33D4: using guessed type int dword_10AA33D4;
// 10B4E708: using guessed type int dword_10B4E708;
