#include "types-win32.h"
//----- (10060D90) --------------------------------------------------------
int sub_10060D90() {
  int v0;     // eax
  int result; // eax

  v0 = dword_10B4E70C;
  byte_100BBAD8 = byte_100ADF68[4 * dword_10B4E70C];
  LOBYTE(v0) = byte_100BBAD8;
  result = pm_sub_100029F0(v0);
  byte_100BBAE0 = byte_100ADF90[4 * dword_10B4E708];
  return result;
}
// 100BBAD8: using guessed type char byte_100BBAD8;
// 100BBAE0: using guessed type char byte_100BBAE0;
// 10B4E708: using guessed type int dword_10B4E708;
// 10B4E70C: using guessed type int dword_10B4E70C;
