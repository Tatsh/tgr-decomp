#include "types-n64.h"
//----- (8026C070) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8026C070() {
    int result;  // $v0
    __int16 *v1; // $t8
    __int16 *v2; // $t6
    int v3;      // $at
    int v4;      // [sp+30h] [-18h]
    int v5;      // [sp+3Ch] [-Ch]

    v4 = MEMORY[0xA4400010] & 1;
    result = sub_8026B750(0);
    v5 = *(_DWORD *)(20 * v4 + 0x28) + result;
    dword_802A6210 = MEMORY[0x20];
    dword_802A621C = *(_DWORD *)(20 * v4 + 0x2C);
    MEMORY[0xA4400004] = v5;
    MEMORY[0xA4400008] = MEMORY[8];
    MEMORY[0xA4400014] = MEMORY[0xC];
    MEMORY[0xA4400018] = MEMORY[0x10];
    MEMORY[0xA440001C] = MEMORY[0x14];
    MEMORY[0xA4400020] = MEMORY[0x18];
    MEMORY[0xA4400024] = MEMORY[0x1C];
    MEMORY[0xA4400028] = *(_DWORD *)(20 * v4 + 0x30);
    MEMORY[0xA440002C] = *(_DWORD *)(20 * v4 + 0x34);
    MEMORY[0xA440000C] = *(_DWORD *)(20 * v4 + 0x38);
    MEMORY[0xA4400030] = 0;
    MEMORY[0xA4400034] = 0;
    MEMORY[0xA4400000] = 0;
    off_802A6224 = (__int16 *)byte_802A61C0;
    off_802A6220 = (char(*)[2]) & word_802A61F0;
    v1 = (__int16 *)byte_802A61C0;
    v2 = &word_802A61F0;
    do {
        v3 = *(_DWORD *)v1;
        v1 += 6;
        v2 += 6;
        *((_DWORD *)v2 - 3) = v3;
        *((_DWORD *)v2 - 2) = *((_DWORD *)v1 - 2);
        *((_DWORD *)v2 - 1) = *((_DWORD *)v1 - 1);
    } while (v1 != &word_802A61F0);
    return result;
}
// 8026C37C: write access to const memory at 802A6220 has been detected
// 8026C378: write access to const memory at 802A6224 has been detected
// 8026C294: write access to const memory at 802A621C has been detected
// 8026C25C: write access to const memory at 802A621C has been detected
// 8026C1DC: write access to const memory at 802A621C has been detected
// 8026C210: write access to const memory at 802A621C has been detected
// 8026C22C: write access to const memory at 802A621C has been detected
// 8026C0F8: write access to const memory at 802A6210 has been detected
// 8026C100: write access to const memory at 802A6210 has been detected
// 802A61F0: using guessed type __int16 word_802A61F0;
// 802A61F4: using guessed type int dword_802A61F4;
// 802A61F8: using guessed type int dword_802A61F8;
// 802A61FC: using guessed type int dword_802A61FC;
// 802A6210: using guessed type int dword_802A6210;
// 802A621C: using guessed type int dword_802A621C;
// 802A6220: using guessed type char (*off_802A6220)[2];
// 802A6224: using guessed type __int16 *off_802A6224;
