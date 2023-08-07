#include "../../types-n64.h"
//----- (8026C760) --------------------------------------------------------
int __fastcall sub_8026C760(int a1, int a2, int a3, unsigned int a4, int a5) {
    unsigned __int8 *v5; // $t6
    int v7;              // [sp+28h] [-8h]

    while ((MEMORY[0xA4600010] & 3) != 0)
        ;
    v5 = *(unsigned __int8 **)(4 * *(unsigned __int8 *)(a1 + 9) - 2144731136 + 24992);
    v7 = *(unsigned __int8 *)(a1 + 9);
    if (v5 != (unsigned __int8 *)a1) {
        if (*(_BYTE *)(a1 + 9)) {
            if (v5[5] != *(unsigned __int8 *)(a1 + 5))
                MEMORY[0xA4600024] = *(unsigned __int8 *)(a1 + 5);
            if (v5[6] != *(unsigned __int8 *)(a1 + 6))
                MEMORY[0xA460002C] = *(unsigned __int8 *)(a1 + 6);
            if (v5[7] != *(unsigned __int8 *)(a1 + 7))
                MEMORY[0xA4600030] = *(unsigned __int8 *)(a1 + 7);
            if (v5[8] != *(unsigned __int8 *)(a1 + 8))
                MEMORY[0xA4600028] = *(unsigned __int8 *)(a1 + 8);
        } else {
            if (v5[5] != *(unsigned __int8 *)(a1 + 5))
                MEMORY[0xA4600014] = *(unsigned __int8 *)(a1 + 5);
            if (v5[6] != *(unsigned __int8 *)(a1 + 6))
                MEMORY[0xA460001C] = *(unsigned __int8 *)(a1 + 6);
            if (v5[7] != *(unsigned __int8 *)(a1 + 7))
                MEMORY[0xA4600020] = *(unsigned __int8 *)(a1 + 7);
            if (v5[8] != *(unsigned __int8 *)(a1 + 8))
                MEMORY[0xA4600018] = *(unsigned __int8 *)(a1 + 8);
        }
        *(_DWORD *)(4 * v7 - 2144731136 + 24992) = a1;
    }
    MEMORY[0xA4600000] = sub_8026B750(a4);
    MEMORY[0xA4600004] = (*(_DWORD *)(a1 + 12) | a3) & 0x1FFFFFFF;
    if (a2) {
        if (a2 != 1)
            return -1;
        MEMORY[0xA4600008] = a5 - 1;
    } else {
        MEMORY[0xA460000C] = a5 - 1;
    }
    return 0;
}
