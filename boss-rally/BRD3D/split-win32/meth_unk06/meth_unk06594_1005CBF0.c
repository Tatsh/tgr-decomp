#include "types-win32.h"
//----- (1005CBF0) --------------------------------------------------------
unk06594 *__thiscall meth_unk06594_1005CBF0(unk06594 *Block, char a2) {
    meth_unk06594_SetVtable(Block);
    if ((a2 & 1) != 0)
        free(Block);
    return Block;
}
