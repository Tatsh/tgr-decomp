#include "types-n64.h"
//----- (8026BB40) --------------------------------------------------------
void sub_8026BB40() {
    __asm { mfc0    $t0, EntryHi # High half of TLB entry }
    _$T1 = 31;
    __asm
        {
    mtc0    $t1, Index # Programmable pointer into TLB array
    mtc0    $zero, PageMask # TLB Page Mask
        }
    _$T1 = -1073741824;
    __asm { mtc0    $t1, EntryHi # High half of TLB entry }
    _$T3 = 33554455;
  __asm { mtc0    $t3, EntryLo0 # Low half of TLB entry for even virtual address (VPN) }
  _$T1 = 1;
  __asm
  {
    mtc0    $t1, EntryLo1 # Low half of TLB entry for odd virtual address (VPN)
    tlbwi
    mtc0    $t0, EntryHi # High half of TLB entry
  }
}
