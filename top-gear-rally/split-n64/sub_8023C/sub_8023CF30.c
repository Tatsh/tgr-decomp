#include "../../types-n64.h"
//----- (8023CF30) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int *sub_8023CF30()
{
  int *v0; // $v1
  int v1; // $v0
  BOOL v2; // $at
  int *result; // $v0

  v0 = dword_80366AA0;
  v1 = 1;
  do
  {
    v2 = ++v1 < 256;
    v0 += 8;
    *((_WORD *)v0 - 2) = v1;
  }
  while ( v2 );
  word_80368A7C = 0;
  word_8028C830 = 1;
  result = dword_8031B760;
  do
  {
    result += 2084;
    *((float *)result - 1056) = 0.0;
  }
  while ( result < &dword_8031F868[6] );
  word_8028C834 = 0;
  word_8028C838 = 0;
  word_8028C83C = 0;
  return result;
}
// 8023CF5C: write access to const memory at 80368A7C has been detected
// 8023CF70: write access to const memory at 8028C830 has been detected
// 8023CFA8: write access to const memory at 8028C834 has been detected
// 8023CFB0: write access to const memory at 8028C838 has been detected
// 8023CFC0: write access to const memory at 8028C83C has been detected
// 8028C830: using guessed type __int16 word_8028C830;
// 8028C834: using guessed type __int16 word_8028C834;
// 8028C838: using guessed type __int16 word_8028C838;
// 8028C83C: using guessed type __int16 word_8028C83C;
// 8031B760: using guessed type int dword_8031B760[512];
// 8031F868: using guessed type int[512];
// 80366AA0: using guessed type int dword_80366AA0[512];
// 80368A7C: using guessed type __int16 word_80368A7C;
