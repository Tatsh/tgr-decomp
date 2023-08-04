#include "../../types-n64.h"
//----- (8026ACD0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __usercall sub_8026ACD0(int _$A3@<$a3>, int _$A2@<$a2>, int _$A1@<$a1>, int _$A0@<$a0>, double a5@<$f13:$f12>, double a6@<$f15:$f14>)
{
  double v30; // $f0
  double v31; // $f2
  double v32; // $f4
  double v33; // $f6
  double v34; // $f8
  double v35; // $f10
  double v36; // $f16
  double v37; // $f18
  double v38; // $f20
  double v39; // $f22
  double v40; // $f24
  double v41; // $f26
  double v42; // $f28
  double v43; // $f30
  int v44; // $lo
  int v45; // $hi
  unsigned int v63; // $k1
  int v93; // $t1
  unsigned int v97; // $t2

  __asm
  {
    sd      $at, (unk_80381A20 - 0x80381A00)($k0)
    mfc0    $k1, SR # Status register
  }
  unk_80381B18 = _$K1;
  _$K1 &= 0xFFFFFFFC;
  __asm
  {
    mtc0    $k1, SR # Status register
    sd      $t0, (unk_80381A58 - 0x80381A00)($k0)
    sd      $t1, (unk_80381A60 - 0x80381A00)($k0)
    sd      $t2, (unk_80381A68 - 0x80381A00)($k0)
  }
  unk_80381A18 = 0;
  __asm { mfc0    $t0, Cause # Cause of last exception }
  _$T0 = &unk_80381A00;
  __asm
  {
    ld      $t1, (unk_80381A20 - 0x80381A00)($t0)
    sd      $t1, 0x20($k0)
    ld      $t1, (unk_80381B18 - 0x80381A00)($t0)
    sd      $t1, 0x118($k0)
    ld      $t1, (unk_80381A58 - 0x80381A00)($t0)
    sd      $t1, 0x58($k0)
    ld      $t1, (unk_80381A60 - 0x80381A00)($t0)
    sd      $t1, 0x60($k0)
    ld      $t1, (unk_80381A68 - 0x80381A00)($t0)
    sd      $t1, 0x68($k0)
  }
  v63 = MEMORY[0x118];
  _$T0 = v44;
  __asm { sd      $t0, 0x108($k0) }
  _$T0 = v45;
  __asm
  {
    sd      $v0, 0x28($k0)
    sd      $v1, 0x30($k0)
    sd      $a0, 0x38($k0)
    sd      $a1, 0x40($k0)
    sd      $a2, 0x48($k0)
    sd      $a3, 0x50($k0)
    sd      $t3, 0x70($k0)
    sd      $t4, 0x78($k0)
    sd      $t5, 0x80($k0)
    sd      $t6, 0x88($k0)
    sd      $t7, 0x90($k0)
    sd      $s0, 0x98($k0)
    sd      $s1, 0xA0($k0)
    sd      $s2, 0xA8($k0)
    sd      $s3, 0xB0($k0)
    sd      $s4, 0xB8($k0)
    sd      $s5, 0xC0($k0)
    sd      $s6, 0xC8($k0)
    sd      $s7, 0xD0($k0)
    sd      $t8, 0xD8($k0)
    sd      $t9, 0xE0($k0)
    sd      $gp, 0xE8($k0)
    sd      $sp, 0xF0($k0)
    sd      $fp, 0xF8($k0)
    sd      $ra, 0x100($k0)
    sd      $t0, 0x110($k0)
  }
  if ( (MEMORY[0x118] & 0xFF00) != 0 )
  {
    v93 = MEMORY[0x118] & 0xFF00;
    MEMORY[0x118] = MEMORY[0x118] & 0xFFFF00FF | MEMORY[0x118] & 0xFF00;
    v63 = v63 & 0xFFFF00FF | v93;
  }
  MEMORY[0x128] = MEMORY[0xA430000C];
  __asm { mfc0    $t0, EPC # Exception Program Counter }
  MEMORY[0x11C] = _$T0;
  if ( MEMORY[0x18] )
  {
    __asm { cfc1    $t0, FCSR }
    MEMORY[0x12C] = _$T0;
    MEMORY[0x130] = v30;
    MEMORY[0x138] = v31;
    MEMORY[0x140] = v32;
    MEMORY[0x148] = v33;
    MEMORY[0x150] = v34;
    MEMORY[0x158] = v35;
    MEMORY[0x160] = a5;
    MEMORY[0x168] = a6;
    MEMORY[0x170] = v36;
    MEMORY[0x178] = v37;
    MEMORY[0x180] = v38;
    MEMORY[0x188] = v39;
    MEMORY[0x190] = v40;
    MEMORY[0x198] = v41;
    MEMORY[0x1A0] = v42;
    MEMORY[0x1A8] = v43;
  }
  __asm { mfc0    $t0, Cause # Cause of last exception }
  MEMORY[0x120] = _$T0;
  MEMORY[0x10] = 2;
  if ( (_$T0 & 0x7C) == 36 )
  {
    MEMORY[0x12] = 1;
    sub_8026B204(80);
    if ( MEMORY[4] < -1 )
    {
      sub_8026B3EC((OSThread *)&gMtqueue.queue, 0);
LABEL_13:
      sub_8026B444();
      return;
    }
LABEL_14:
    MEMORY[0] = -2144705904;
    gMtqueue.queue = 0;
    goto LABEL_13;
  }
  if ( (_$T0 & 0x7C) == 44 )
  {
    if ( (_$T0 & 0x30000000u) >> 28 != 1 )
      goto LABEL_15;
    MEMORY[0x18] = 1;
    MEMORY[0x118] |= 0x20000000u;
    goto LABEL_14;
  }
  if ( (_$T0 & 0x7C) != 0 )
  {
LABEL_15:
    gMtqueue.id = 0;
    MEMORY[0x10] = 1;
    MEMORY[0x12] = 2;
    __asm { mfc0    $t2, BadVAddr # Bad virtual address }
    MEMORY[0x124] = _$T2;
    sub_8026B204(96);
    goto LABEL_13;
  }
  v97 = (v63 & _$T0 & 0xFF00) >> 12;
  if ( !v97 )
    v97 = ((unsigned __int16)(v63 & _$T0 & 0xFF00) >> 8) + 16;
  (*(void (**)(void))(*(unsigned __int8 *)(v97 - 2144683376) - 2144683344))();
}
// 8026B1D4: write access to const memory at 802A62A4 has been detected
// 8026ACE0: write access to const memory at 80381B18 has been detected
// 8026ACFC: write access to const memory at 80381A18 has been detected
// 8026B1D0: write access to const memory at 802A6298 has been detected
// 8026AD3C: variable 'v44' is possibly undefined
// 8026AD44: variable 'v45' is possibly undefined
// 8026AE54: variable 'v30' is possibly undefined
// 8026AE58: variable 'v31' is possibly undefined
// 8026AE5C: variable 'v32' is possibly undefined
// 8026AE60: variable 'v33' is possibly undefined
// 8026AE64: variable 'v34' is possibly undefined
// 8026AE68: variable 'v35' is possibly undefined
// 8026AE74: variable 'v36' is possibly undefined
// 8026AE78: variable 'v37' is possibly undefined
// 8026AE7C: variable 'v38' is possibly undefined
// 8026AE80: variable 'v39' is possibly undefined
// 8026AE84: variable 'v40' is possibly undefined
// 8026AE88: variable 'v41' is possibly undefined
// 8026AE8C: variable 'v42' is possibly undefined
// 8026AE90: variable 'v43' is possibly undefined
// 802A6150: using guessed type int dword_802A6150;
