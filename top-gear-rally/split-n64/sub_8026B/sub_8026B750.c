#include "../../types-n64.h"
//----- (8026B750) --------------------------------------------------------
unsigned int __fastcall sub_8026B750(unsigned int a1) {
    if (a1 >= 0x80000000 && a1 < 0xA0000000)
        return a1 & 0x1FFFFFFF;
    if (a1 < 0xA0000000 || a1 >= 0xC0000000)
        return sub_8026E600(a1);
    return a1 & 0x1FFFFFFF;
}
