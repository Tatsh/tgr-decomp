#include "../../types-n64.h"
//----- (802571AC) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int *sub_802571AC()
{
  int *result; // $v0

  word_80378FA2 = 1;
  word_80378FA4 = 0;
  byte_80378FB0 = -1;
  result = dword_80378DD0;
  do
  {
    result += 6;
    *(_WORD *)((char *)result - 11) = 64;
    *(result - 5) = 0;
    *(result - 6) = 0;
  }
  while ( result < dword_80378F50 );
  return result;
}
// 802571BC: write access to const memory at 80378FA2 has been detected
// 802571C0: write access to const memory at 80378FA4 has been detected
// 802571C4: write access to const memory at 80378FB0 has been detected
// 80378DD0: using guessed type int dword_80378DD0[96];
// 80378F50: using guessed type int dword_80378F50[18];
// 80378FA2: using guessed type __int16 word_80378FA2;
// 80378FA4: using guessed type __int16 word_80378FA4;
// 80378FB0: using guessed type char byte_80378FB0;
