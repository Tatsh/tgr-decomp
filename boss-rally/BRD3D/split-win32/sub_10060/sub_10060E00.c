#include "types-win32.h"
//----- (10060E00) --------------------------------------------------------
int __cdecl sub_10060E00(int a1) {
  int result; // eax
  char v2[4]; // [esp+0h] [ebp-8h] BYREF
  char v3[4]; // [esp+4h] [ebp-4h] BYREF

  result = input_100773F0((int *)v2, (int *)v3);
  *(_BYTE *)(a1 + 2) = v2[0];
  *(_BYTE *)(a1 + 3) = v3[0];
  *(_WORD *)a1 = 0;
  if ((result & 0x10) != 0)
    *(_WORD *)a1 = -31744;
  if ((result & 4) != 0)
    *(_BYTE *)(a1 + 1) |= 0x88u;
  if ((result & 1) != 0)
    *(_BYTE *)(a1 + 1) |= 2u;
  if ((result & 2) != 0)
    *(_BYTE *)(a1 + 1) |= 1u;
  if ((result & 8) != 0)
    *(_BYTE *)(a1 + 1) |= 0x40u;
  if ((result & 0x100) != 0)
    *(_BYTE *)a1 |= 8u;
  if ((result & 0x200) != 0)
    *(_BYTE *)a1 |= 2u;
  if ((result & 0x400) != 0)
    *(_BYTE *)a1 |= 4u;
  if ((result & 0x8000) != 0)
    *(_BYTE *)(a1 + 1) |= 0x10u;
  if ((result & 0x20) != 0)
    *(_BYTE *)a1 |= 0x10u;
  if ((result & 0x40) != 0)
    *(_BYTE *)a1 |= 0x20u;
  return result;
}
