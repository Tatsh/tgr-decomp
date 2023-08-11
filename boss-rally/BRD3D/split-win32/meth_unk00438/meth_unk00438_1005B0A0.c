#include "types-win32.h"
//----- (1005B0A0) --------------------------------------------------------
unk00438 *__thiscall meth_unk00438_1005B0A0(unk00438 *Block, char a2) {
  meth_unk00438_deinit(Block);
  if ((a2 & 1) != 0)
    free(Block);
  return Block;
}
