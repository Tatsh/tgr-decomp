#include "../../types-win32.h"
//----- (1005B8D0) --------------------------------------------------------
void *__thiscall meth_1005B8D0(void *Block, char a2) {
    meth_1005B8F0(Block);
    if ((a2 & 1) != 0)
        free(Block);
    return Block;
}
