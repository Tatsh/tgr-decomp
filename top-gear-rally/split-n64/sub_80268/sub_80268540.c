#include "../../types-n64.h"
//----- (80268540) --------------------------------------------------------
int sub_80268540()
{
  __asm { mfc0    $t0, SR # Status register }
  _$T1 = _$T0 & 0xFFFFFFFE;
  __asm { mtc0    $t1, SR # Status register }
  return _$T0 & 1;
}
