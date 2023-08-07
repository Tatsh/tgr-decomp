#include "../../types-n64.h"
//----- (8026E36C) --------------------------------------------------------
void sub_8026E36C() {
    int v0;     // $t5
    int v1;     // $t4
    _DWORD *v2; // $v0

    if (MEMORY[0xFE84910] < MEMORY[0xFE84918]) {
        v0 = MEMORY[0xFE84918];
        v1 = MEMORY[0xFE84914] + MEMORY[0xFE84910];
        *(_DWORD *)(MEMORY[0xFE8491C] +
                    4 * ((MEMORY[0xFE84914] + MEMORY[0xFE84910]) % MEMORY[0xFE84918])) = 971291971;
        if (!v0)
            __break(7u, 0);
        if (v0 == -1 && v1 == 0x80000000)
            __break(6u, 0);
        ++MEMORY[0xFE84910];
        if (*MEMORY[0xFE84908]) {
            v2 = sub_8026B434((_DWORD **)0xFE84908);
            sub_8026B3EC(MEMORY[0x802A6298], v2);
        }
    }
}
// 802A6298: using guessed type int *off_802A6298[2];
