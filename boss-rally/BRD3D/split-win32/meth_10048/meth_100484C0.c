#include "../../types-win32.h"
//----- (100484C0) --------------------------------------------------------
void *__thiscall meth_100484C0(void *Block, char a2) {
    meth_100484E0(Block);
    if ((a2 & 1) != 0)
        free(Block);
    return Block;
}
