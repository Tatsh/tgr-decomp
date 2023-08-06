#include "../../types-n64.h"
//----- (80257964) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
__int64 *__fastcall sub_80257964(int a1, int a2)
{
  __int64 *result; // $v0

  debugPrint("Creating I entries\n");
  sub_80256720(a1, a2);
  debugPrint("Starting Mod\n");
  sub_802571AC();
  dword_80378F98 = 1;
  result = qword_802A4798;
  do
  {
    result += 3;
    *((_DWORD *)result - 1) = 32;
  }
  while ( result < (__int64 *)&dword_802A4918 );
  return result;
}
// 802579B4: write access to const memory at 80378F98 has been detected
// 802A4798: using guessed type __int64 qword_802A4798[];
// 802A4918: using guessed type int dword_802A4918;
// 802A49C0: using guessed type int dword_802A49C0;
// 80378F98: using guessed type int dword_80378F98;
