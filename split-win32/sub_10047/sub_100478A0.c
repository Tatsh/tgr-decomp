#include "../../types-win32.h"
//----- (100478A0) --------------------------------------------------------
void *__thiscall sub_100478A0(void *Block, char a2)
{
  sub_100478C0(Block);
  if ( (a2 & 1) != 0 )
    free(Block);
  return Block;
}
