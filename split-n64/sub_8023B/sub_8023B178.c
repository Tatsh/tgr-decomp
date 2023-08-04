#include "../../types-n64.h"
//----- (8023B178) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_8023B178(int a1)
{
  int result; // $v0

  result = sub_80225EE4();
  *(float *)(a1 + 4112) = *(float *)(a1 + 4112)
                        + (float)(0.0
                                * (float)((float)((float)(*(float *)(a1 + 3572) * 0.001) + 1.0)
                                        + (float)((float)(result & 0x1FFF) * 0.000015258789)));
  if ( *(float *)(a1 + 4112) > 0.25 )
    result = 0;
  return result;
}
// 8023B250: write access to const memory at 8028C834 has been detected
// 8023B25C: write access to const memory at 8028C830 has been detected
// 8028AAD8: using guessed type float flt_8028AAD8;
// 8028C830: using guessed type __int16 word_8028C830;
// 8028C834: using guessed type __int16 word_8028C834;
