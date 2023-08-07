#include "../../types-win32.h"
//----- (10048850) --------------------------------------------------------
void *__thiscall meth_10048850(void *Block, char a2) {
    meth_10048870(Block);
    if ((a2 & 1) != 0)
        free(Block);
    return Block;
}
