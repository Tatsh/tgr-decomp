#include "../../types-n64.h"
//----- (802114E0) --------------------------------------------------------
int __fastcall sub_802114E0(int a1)
{
  int result; // $v0

  result = -2144796672;
  if ( (*(_DWORD *)(*(_DWORD *)(4 * a1 - 2144918600) + 4) & 8) != 0 )
  {
    sub_80219A78(90, 101, 140, 60);
    sub_80223DE0();
    sub_80219A78(0, 0, 320, 240);
    sub_8022F4F8();
    sub_8022F504();
    sub_8022F5D0(15);
    formatter("%wwYou Need To Have", 160, 120);
    formatter("%wwTwo Controllers", 160, 135);
    result = formatter("%wwPlugged in", 160, 150);
  }
  return result;
}
// 80211568: conditional instruction was optimized away because of '$a2.4==1180'
// 8028AAB0: using guessed type int dword_8028AAB0;
// 8028AAB4: using guessed type int dword_8028AAB4;
