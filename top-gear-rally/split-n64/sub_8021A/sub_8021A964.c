#include "../../types-n64.h"
//----- (8021A964) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8021A964()
{
  int result; // $v0

  sub_8021A920();
  sub_802642E0(unkMessageQueue4, 0, 1);
  result = sub_80264824(dword_8031A3E0);
  word_802A4BE8 = 1;
  dword_8028AB6C = 0;
  return result;
}
// 8021A99C: write access to const memory at 802A4BE8 has been detected
// 8021A9A4: write access to const memory at 8028AB6C has been detected
// 8021A920: using guessed type int sub_8021A920(void);
// 802642E0: using guessed type int __fastcall sub_802642E0(_DWORD, _DWORD, _DWORD);
// 80264824: using guessed type int __fastcall sub_80264824(_DWORD);
// 80272D48: using guessed type int dword_80272D48[6];
// 8028AB6C: using guessed type int dword_8028AB6C;
// 802A4BE8: using guessed type __int16 word_802A4BE8;
// 8031A3E0: using guessed type int dword_8031A3E0[6];
