#include "../../types-n64.h"
//----- (8025658C) --------------------------------------------------------
int __fastcall sub_8025658C(int a1, int a2, int a3)
{
  int v4; // $v1
  int result; // $v0

  _$T0 = &dword_802A4918;
  v4 = a3 + a2 - 0x4000;
  _$A0 = a1 + a3;
  if ( v4 <= 0 )
    v4 = 0;
  result = a2 - v4;
  __asm
  {
    ld      $a1, (qword_802A4920 - 0x802A4918)($t0)
    ld      $a2, (qword_802A4928 - 0x802A4918)($t0)
    ld      $a3, (qword_802A4938 - 0x802A4918)($t0)
    ld      $t1, (qword_802A4940 - 0x802A4918)($t0)
    ld      $t2, (qword_802A4950 - 0x802A4918)($t0)
    ld      $t3, (qword_802A4958 - 0x802A4918)($t0)
    ld      $t4, (qword_802A4968 - 0x802A4918)($t0)
    ld      $t5, (qword_802A4970 - 0x802A4918)($t0)
    ld      $s4, (qword_802A4980 - 0x802A4918)($t0)
    ld      $s5, (qword_802A4988 - 0x802A4918)($t0)
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
        ld      $t7, 0($a0)
        dsra32  $t9, $a1, 0
        dsra32  $t9, $a3, 0
        dsra32  $t9, $t2, 0
        dsra32  $t9, $t4, 0
        dsra32  $t9, $s4, 0
        ld      $t6, 0($t0)
      }
      _$T8 = 0;
      __asm
      {
        dsll32  $t9, $t8, 0
        daddu   $t9, $t8
      }
      _$T7 = _$T7 & _$T6;
      __asm { daddu   $t9, $t7 }
      _$T9 = _$T9 & _$T6;
      result -= 8;
      __asm { sd      $t9, 0($a0) }
      _$A0 += 8;
    }
    while ( result > 0 );
LABEL_5:
    result = v4;
    if ( !v4 )
      break;
    _$A0 -= 0x4000;
    v4 = 0;
  }
  __asm
  {
    sd      $a1, 8($t0)
    sd      $a3, 0x20($t0)
    sd      $t2, 0x38($t0)
    sd      $t4, 0x50($t0)
    sd      $s4, 0x68($t0)
  }
  return result;
}
// 802A4918: using guessed type int dword_802A4918;
