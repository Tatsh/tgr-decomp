#include "../../types-n64.h"
//----- (802694D0) --------------------------------------------------------
int __fastcall sub_802694D0(int a1, unsigned int a2)
{
  if ( sub_8026DBB0() )
    return -1;
  if ( a1 == 1 )
    sub_8026B7D0(a2, 64);
  MEMORY[0xA4800000] = sub_8026B750(a2);
  if ( a1 )
    MEMORY[0xA4800010] = 532678592;
  else
    MEMORY[0xA4800004] = 532678592;
  if ( !a1 )
    sub_802662E0(a2, 64);
  return 0;
}
