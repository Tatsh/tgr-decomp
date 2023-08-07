#include "../../types-n64.h"
//----- (8026C680) --------------------------------------------------------
int __fastcall sub_8026C680(int a1, int a2, unsigned int a3, int a4) {
    while ((MEMORY[0xA4600010] & 3) != 0)
        ;
    MEMORY[0xA4600000] = sub_8026B750(a3);
    MEMORY[0xA4600004] = (MEMORY[0x80000308] | a2) & 0x1FFFFFFF;
    if (a1) {
        if (a1 != 1)
            return -1;
        MEMORY[0xA4600008] = a4 - 1;
    } else {
        MEMORY[0xA460000C] = a4 - 1;
    }
    return 0;
}
