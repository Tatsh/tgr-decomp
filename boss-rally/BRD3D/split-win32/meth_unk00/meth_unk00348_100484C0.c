#include "types-win32.h"
//----- (100484C0) --------------------------------------------------------
unk00348 *__thiscall meth_unk00348_100484C0(unk00348 *Block, char a2) {
    meth_100484E0(Block);
    if ((a2 & 1) != 0)
        free(Block);
    return Block;
}
