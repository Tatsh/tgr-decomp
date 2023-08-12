#include "types-win32.h"
//----- (1003BD50) --------------------------------------------------------
int sub_1003BD50() {
  int result; // eax

  result = (16807 * dword_10A9BFD0) & 0x7FFFFFF;
  dword_10A9BFD0 = result;
  return result;
}
// 10A9BFD0: using guessed type int dword_10A9BFD0;
