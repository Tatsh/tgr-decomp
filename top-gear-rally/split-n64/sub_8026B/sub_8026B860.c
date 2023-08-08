#include "types-n64.h"
//----- (8026B860) --------------------------------------------------------
int __fastcall sub_8026B860(int a1) {
    if ((MEMORY[0xA4040010] & 1) == 0)
        return -1;
    MEMORY[0xA4080000] = a1;
    return 0;
}
