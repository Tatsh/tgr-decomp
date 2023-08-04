#include "../../types-n64.h"
//----- (8026B8A0) --------------------------------------------------------
int __fastcall sub_8026B8A0(int a1, int a2, unsigned int a3, int a4)
{
  if ( sub_8026B930() )
    return -1;
  MEMORY[0xA4040000] = a2;
  MEMORY[0xA4040004] = sub_8026B750(a3);
  if ( a1 )
    MEMORY[0xA4040008] = a4 - 1;
  else
    MEMORY[0xA404000C] = a4 - 1;
  return 0;
}
