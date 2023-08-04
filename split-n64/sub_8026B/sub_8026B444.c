#include "../../types-n64.h"
//----- (8026B444) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_8026B444()
{
  struct OSThread_s *v0; // $v0

  v0 = sub_8026B434((OSThread *)&gMtqueue.queue);
  *(_DWORD *)&gMtqueue.state = v0;
  v0->state = 4;
  _$K0 = v0;
  _$K1 = v0->context.pc & 0xFFFF00FF | v0->context.pc & 0xFF00;
  __asm
  {
    mtc0    $k1, SR # Status register
    ld      $k1, 0x108($k0)
    ld      $at, 0x20($k0)
    ld      $v0, 0x28($k0)
    ld      $k1, 0x110($k0)
    ld      $v1, 0x30($k0)
    ld      $a0, 0x38($k0)
    ld      $a1, 0x40($k0)
    ld      $a2, 0x48($k0)
    ld      $a3, 0x50($k0)
    ld      $t0, 0x58($k0)
    ld      $t1, 0x60($k0)
    ld      $t2, 0x68($k0)
    ld      $t3, 0x70($k0)
    ld      $t4, 0x78($k0)
    ld      $t5, 0x80($k0)
    ld      $t6, 0x88($k0)
    ld      $t7, 0x90($k0)
    ld      $s0, 0x98($k0)
    ld      $s1, 0xA0($k0)
    ld      $s2, 0xA8($k0)
    ld      $s3, 0xB0($k0)
    ld      $s4, 0xB8($k0)
    ld      $s5, 0xC0($k0)
    ld      $s6, 0xC8($k0)
    ld      $s7, 0xD0($k0)
    ld      $t8, 0xD8($k0)
    ld      $t9, 0xE0($k0)
    ld      $gp, 0xE8($k0)
    ld      $sp, 0xF0($k0)
    ld      $fp, 0xF8($k0)
    ld      $ra, 0x100($k0)
  }
  _$K1 = _$K0->context.cause;
  __asm { mtc0    $k1, EPC # Exception Program Counter }
  if ( _$K0->_fp )
  {
    _$K1 = _$K0->context.fp0.f.f_odd;
    __asm { ctc1    $k1, FCSR }
  }
  MEMORY[0xA430000C] = *((unsigned __int16 *)dword_802ABB60 + (_$K0->context.fpcsr & 0x3F));
  __asm { eret }
}
// 8026B450: write access to const memory at 802A62A0 has been detected
// 802A6150: using guessed type int dword_802A6150;
// 802ABB60: using guessed type int dword_802ABB60[32];
