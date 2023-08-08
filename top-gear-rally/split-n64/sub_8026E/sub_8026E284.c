#include "types-n64.h"
//----- (8026E284) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_8026E284() {
    while ((MEMORY[0xA4600010] & 3) != 0)
        ;
    MEMORY[0xA5000510] = MEMORY[0x74F7F65] | 0x10000000;
    while ((MEMORY[0xA4600010] & 3) != 0)
        ;
    MEMORY[0xA5000510] = MEMORY[0x74F7F65];
    sub_8026E36C();
    MEMORY[0xA4600010] = 2;
    dword_802A6150 = 4194049;
}
// 8026E35C: write access to const memory at 802A6150 has been detected
// 802A6150: using guessed type int dword_802A6150;
