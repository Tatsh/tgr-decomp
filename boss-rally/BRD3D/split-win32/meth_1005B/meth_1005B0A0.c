#include "../../types-win32.h"
//----- (1005B0A0) --------------------------------------------------------
void *__thiscall meth_1005B0A0(void *Block, char a2) {
    meth_1005B0C0(Block);
    if ((a2 & 1) != 0)
        free(Block);
    return Block;
}