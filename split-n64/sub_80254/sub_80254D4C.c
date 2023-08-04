#include "../../types-n64.h"
//----- (80254D4C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80254D4C()
{
  int result; // $v0

  result = 0;
  word_8028DDDC = -1;
  dword_8028DDD0 = 16;
  dword_8028DDD4 = 16;
  dword_8028DDD8 = 0;
  return result;
}
// 80254D58: write access to const memory at 8028DDDC has been detected
// 80254D6C: write access to const memory at 8028DDD0 has been detected
// 80254D80: write access to const memory at 8028DDD4 has been detected
// 80254D8C: write access to const memory at 8028DDD8 has been detected
// 8028DDD0: using guessed type int dword_8028DDD0;
// 8028DDD4: using guessed type int dword_8028DDD4;
// 8028DDD8: using guessed type int dword_8028DDD8;
// 8028DDDC: using guessed type __int16 word_8028DDDC;
