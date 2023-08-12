#include "types-win32.h"
//----- (1003A610) --------------------------------------------------------
_WORD *__cdecl sub_1003A610(_WORD *a1) {
  _WORD *result; // eax

  result = a1;
  *a1 = dword_10A99BA8;
  a1[1] = dword_10A99BB0;
  a1[2] = dword_10A99BAC;
  a1[3] = dword_10A99BB4;
  qmemcpy(a1 + 4, flt_10A99BB8, 0x2000u);
  return result;
}
// 10A99BA8: using guessed type int dword_10A99BA8;
// 10A99BAC: using guessed type int dword_10A99BAC;
// 10A99BB0: using guessed type int dword_10A99BB0;
// 10A99BB4: using guessed type int dword_10A99BB4;
// 10A99BB8: using guessed type float flt_10A99BB8[];
