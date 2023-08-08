#include "types-n64.h"
//----- (8025649C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_8025649C(_WORD *a1, int a2, int a3) {
    int v4;      // $v1
    int result;  // $v0
    int v8;      // $s0
    int v11;     // $s1
    __int16 v13; // $t8
    __int16 v17; // [sp+12h] [-16h]

    v17 = (__int16)a1;
    _$S2 = (char *)&word_802A4790 + a3;
    v4 = a2 - 0x4000;
    if (a2 - 0x4000 <= 0)
        v4 = 0;
    result = a2 - v4;
    __asm
        {
    ld      $a1, 0x98($s2)
    ld      $a2, 0xA0($s2)
        }
    v8 = *((_DWORD *)_$S2 + 42);
    __asm
        {
    ld      $a3, 0xB0($s2)
    ld      $t1, 0xB8($s2)
        }
    v11 = *((_DWORD *)_$S2 + 48);
    if (!result)
        goto LABEL_5;
    while (1) {
        do {
            __asm
                {
        daddu   $a1, $a2
        daddu   $a3, $t1
                }
            result -= 4;
            __asm { dsra32  $t9, $a1, 0 }
            v13 = v8 * *_$T9;
            __asm { dsra32  $t6, $a3, 0 }
            LOWORD(_$T9) = v11 * *_$T6;
            *a1 += v13;
            a1[1] += (_WORD)_$T9;
            a1 += 2;
        } while (result > 0);
    LABEL_5:
        result = v4;
        if (!v4)
            break;
        a1 -= 0x2000;
        v4 = 0;
    }
    __asm
        {
    sd      $a1, 0x98($s2)
    sd      $a3, 0xB0($s2)
        }
    word_802A4790 = (_WORD)a1 - v17;
    return result;
}
// 8025657C: write access to const memory at 802A4790 has been detected
// 802A4790: using guessed type __int16 word_802A4790;
