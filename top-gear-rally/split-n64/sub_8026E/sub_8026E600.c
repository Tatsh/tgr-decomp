#include "../../types-n64.h"
//----- (8026E600) --------------------------------------------------------
unsigned int __fastcall sub_8026E600(int a1) {
    unsigned int v5;     // $t3
    bool v6;             // dc
    unsigned int v7;     // $t3
    unsigned int result; // $v0

    __asm { mfc0    $t0, EntryHi # High half of TLB entry }
    _$T1 = (unsigned __int8)_$T0 | a1 & 0xFFFFE000;
    __asm
    {
    mtc0    $t1, EntryHi # High half of TLB entry
    tlbp
    mfc0    $t3, Index # Programmable pointer into TLB array
    }
    if ((_$T3 & 0x80000000) != 0) goto LABEL_7;
    __asm
        {
    tlbr
    mfc0    $t3, PageMask # TLB Page Mask
        }
    v5 = (unsigned int)(_$T3 + 0x2000) >> 1;
    v6 = (v5 & a1) != 0;
    v7 = v5 - 1;
    if (v6)
    __asm { mfc0    $v0, EntryLo1 # Low half of TLB entry for odd virtual address (VPN) }
    else __asm { mfc0    $v0, EntryLo0 # Low half of TLB entry for even virtual address (VPN)
    }
    if ((_$V0 & 2) == 0)
    LABEL_7:
    result = -1;
    else
    result = ((_$V0 & 0x3FFFFFC0) << 6) + (a1 & v7);
    __asm { mtc0    $t0, EntryHi # High half of TLB entry }
    return result;
}
