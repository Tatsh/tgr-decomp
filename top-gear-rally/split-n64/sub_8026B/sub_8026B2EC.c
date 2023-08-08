#include "types-n64.h"
//----- (8026B2EC) --------------------------------------------------------
void __fastcall sub_8026B2EC(OSMesgQueue *a1) {
    double v12; // $f20
    double v13; // $f22
    double v14; // $f24
    double v15; // $f26
    double v16; // $f28
    double v17; // $f30

    __asm { mfc0    $t0, SR # Status register }
    MEMORY[0x118] = _$T0 | 2;
    __asm
        {
    sd      $s0, 0x98($a1)
    sd      $s1, 0xA0($a1)
    sd      $s2, 0xA8($a1)
    sd      $s3, 0xB0($a1)
    sd      $s4, 0xB8($a1)
    sd      $s5, 0xC0($a1)
    sd      $s6, 0xC8($a1)
    sd      $s7, 0xD0($a1)
    sd      $gp, 0xE8($a1)
    sd      $sp, 0xF0($a1)
    sd      $fp, 0xF8($a1)
    sd      $ra, 0x100($a1)
        }
    MEMORY[0x11C] = _$RA;
    if (MEMORY[0x18]) {
        __asm { cfc1    $k1, FCSR }
        MEMORY[0x180] = v12;
        MEMORY[0x188] = v13;
        MEMORY[0x190] = v14;
        MEMORY[0x198] = v15;
        MEMORY[0x1A0] = v16;
        MEMORY[0x1A8] = v17;
        MEMORY[0x12C] = _$K1;
    }
    if ((MEMORY[0x118] & 0xFF00) != 0)
        MEMORY[0x118] = MEMORY[0x118] & 0xFFFF00FF | MEMORY[0x118] & 0xFF00;
    MEMORY[0x128] = MEMORY[0xA430000C];
    if (a1)
        sub_8026B3EC((OSThread *)a1, 0);
    sub_8026B444();
}
// 8026B338: variable '_$RA' is possibly undefined
// 8026B340: variable 'v12' is possibly undefined
// 8026B344: variable 'v13' is possibly undefined
// 8026B348: variable 'v14' is possibly undefined
// 8026B34C: variable 'v15' is possibly undefined
// 8026B350: variable 'v16' is possibly undefined
// 8026B354: variable 'v17' is possibly undefined
// 802A6150: using guessed type int dword_802A6150;
