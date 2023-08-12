#include "types-win32.h"
//----- (10048850) --------------------------------------------------------
void *__thiscall meth_unk000C8_0(void *Block, char a2) {
  meth_unk000C8_10048870((unk000C8 *)Block);
  if ((a2 & 1) != 0)
    free(Block);
  return Block;
}
