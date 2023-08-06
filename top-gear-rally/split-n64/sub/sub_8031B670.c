#include "../../types-n64.h"
//----- (8031B670) --------------------------------------------------------
void __fastcall __noreturn sub_8031B670(int a1, int a2, int _$A2, int _$A3)
{
  int v5; // $gp
  int v6; // $k1
  __int16 v7; // $s7
  int v8; // $s5
  int v9; // $s4
  int v10; // $t0

  *(_BYTE *)(a2 - 19680) = BYTE1(_$RA);
  *(_WORD *)(a2 - 19680 + 1) = _$RA;
  __asm { swc2    $v6[0], -0x16A6($k0) }
  _$T4 = v6 - 19444;
  __asm
  {
    luv     $v11[1], 9($a2)
    sd      $a2, 0x678F($s0)
  }
  *(_DWORD *)(*(unsigned __int16 *)(v10 + 26330) + 0x305E) = v9;
  __asm
  {
    cache   0xA, -0x6370($t4) # Index Store Tag (secondary instruction or tertiary cache)
    cache   0x19, 0x1A70($ra) # Hit Writeback (primary data or unified primary cache)
    lwc2    $v3[0], -0x447D($t4)
  }
  *(_DWORD *)(v6 - 22940) = v8;
  *(_WORD *)(v5 - 14912) = v7;
  __asm
  {
    scd     $zero, -0x55A4($v1)
    ldc2    $9, -0x1CDC($a3)
    deret
  }
}
// 8031B6BC: control flows out of bounds to 8031B6C0
// 8031B670: variable '_$RA' is possibly undefined
// 8031B67C: variable 'v6' is possibly undefined
// 8031B694: variable 'v9' is possibly undefined
// 8031B674: variable 'v10' is possibly undefined
// 8031B6A4: variable 'v8' is possibly undefined
// 8031B6A8: variable 'v7' is possibly undefined
// 8031B6A8: variable 'v5' is possibly undefined

// nfuncs=717 queued=717 decompiled=717 lumina nreq=0 worse=0 better=0
#error "There were 1 decompilation failure(s) on 717 function(s)"
