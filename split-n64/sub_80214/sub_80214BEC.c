#include "../../types-n64.h"
//----- (80214BEC) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80214BEC()
{
  int v0; // $s0
  int *v1; // $s1
  int result; // $v0

  word_802A4BE8 = 0;
  v0 = 0;
  v1 = dword_8031A3F8;
  do
  {
    result = sub_80262370(&unkMessageQueue4, (int)v1, v0);
    if ( !result )
    {
      result = sub_80261F20((int)v1);
      byte_8031B1E8[v0] = 1;
    }
    ++v0;
    v1 += 26;
  }
  while ( v0 < 1 );
  word_802A4BE8 = 1;
  return result;
}
// 80214C00: write access to const memory at 802A4BE8 has been detected
// 80214CA4: write access to const memory at 802A4BE8 has been detected
// 8026FF08: using guessed type int dword_8026FF08;
// 802A4BE8: using guessed type __int16 word_802A4BE8;
// 8031A3F8: using guessed type int dword_8031A3F8[26];
