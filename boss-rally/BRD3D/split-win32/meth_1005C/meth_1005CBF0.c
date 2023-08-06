#include "../../types-win32.h"
//----- (1005CBF0) --------------------------------------------------------
void *__thiscall meth_1005CBF0(void *Block, char a2)
{
  meth_1005CC10(Block);
  if ( (a2 & 1) != 0 )
    free(Block);
  return Block;
}
