#include "../../types-n64.h"
//----- (802562F0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_802562F0(_WORD *a1, int a2)
{
  int v3; // $v1
  int result; // $v0
  __int16 v29; // [sp+12h] [-2h]

  v29 = (__int16)a1;
  _$T0 = &word_802A4790;
  v3 = a2 - 0x4000;
  if ( a2 - 0x4000 <= 0 )
    v3 = 0;
  result = a2 - v3;
  __asm
  {
    ld      $a1, (qword_802A4798 - 0x802A4790)($t0)
    ld      $a2, (qword_802A47A0 - 0x802A4790)($t0)
    ld      $a3, (qword_802A47C8 - 0x802A4790)($t0)
    ld      $t1, (qword_802A47D0 - 0x802A4790)($t0)
    ld      $t2, (qword_802A47B0 - 0x802A4790)($t0)
    ld      $t3, (qword_802A47B8 - 0x802A4790)($t0)
    ld      $t4, (qword_802A47E0 - 0x802A4790)($t0)
    ld      $t5, (qword_802A47E8 - 0x802A4790)($t0)
    ld      $s4, (qword_802A47F8 - 0x802A4790)($t0)
    ld      $s5, (qword_802A4800 - 0x802A4790)($t0)
    ld      $s7, (qword_802A4810 - 0x802A4790)($t0)
    ld      $fp, (qword_802A4818 - 0x802A4790)($t0)
  }
  if ( !result )
    goto LABEL_5;
  while ( 1 )
  {
    do
    {
      __asm
      {
        daddu   $a1, $a2
        daddu   $a3, $t1
        daddu   $t2, $t3
        daddu   $t4, $t5
        daddu   $s4, $s5
        daddu   $s7, $fp
      }
      result -= 4;
      __asm
      {
        dsra32  $t9, $a1, 0
        dsra32  $t6, $a3, 0
        dsra32  $t6, $s4, 0
      }
      *a1 = 0;
      __asm
      {
        dsra32  $t7, $t2, 0
        dsra32  $t9, $t4, 0
        dsra32  $t7, $s7, 0
      }
      a1[1] = 0;
      a1 += 2;
    }
    while ( result > 0 );
LABEL_5:
    result = v3;
    if ( !v3 )
      break;
    a1 -= 0x2000;
    v3 = 0;
  }
  __asm
  {
    sd      $a1, 8($t0)
    sd      $a3, 0x38($t0)
    sd      $t2, 0x20($t0)
    sd      $t4, 0x50($t0)
    sd      $s4, 0x68($t0)
    sd      $s7, 0x80($t0)
  }
  word_802A4790 = (_WORD)a1 - v29;
  return result;
}
// 80256478: write access to const memory at 802A4790 has been detected
// 802A4790: using guessed type __int16 word_802A4790;
