#include "types-win32.h"
//----- (1003A4D0) --------------------------------------------------------
_WORD *sub_1003A4D0() {
  int v0;        // ecx
  _WORD *result; // eax
  int v2;        // ecx

  v0 = 1;
  result = &unk_10A99BF4;
  do {
    *result = ++v0;
    result += 16;
  } while ((int)result < (int)&unk_10A9BBD4);
  v2 = dword_100B36FC;
  word_10A9BBB4 = 0;
  LOWORD(dword_10A99BA8) = 1;
  if (dword_100B36FC > 0) {
    result = &unk_10ACEF04;
    do {
      *(_DWORD *)result = 0;
      result += 5556;
      --v2;
    } while (v2);
  }
  LOWORD(dword_10A99BB0) = 0;
  LOWORD(dword_10A99BAC) = 0;
  LOWORD(dword_10A99BB4) = 0;
  return result;
}
// 100B36FC: using guessed type int dword_100B36FC;
// 10A99BA8: using guessed type int dword_10A99BA8;
// 10A99BAC: using guessed type int dword_10A99BAC;
// 10A99BB0: using guessed type int dword_10A99BB0;
// 10A99BB4: using guessed type int dword_10A99BB4;
// 10A9BBB4: using guessed type __int16 word_10A9BBB4;
