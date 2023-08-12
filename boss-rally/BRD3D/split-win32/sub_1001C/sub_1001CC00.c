#include "types-win32.h"
//----- (1001CC00) --------------------------------------------------------
int __cdecl sub_1001CC00(int a1) {
  int result; // eax

  byte_104BBF00 =
      BYTE1(*(_DWORD *)(a1 + 4)) ^ (BYTE1(*(_DWORD *)(a1 + 4)) ^ (*(_DWORD *)(a1 + 4) >> 13)) & 7;
  byte_104BC194 =
      (*(_DWORD *)(a1 + 4) >> 3) ^ ((*(_DWORD *)(a1 + 4) >> 3) ^ BYTE1(*(_DWORD *)(a1 + 4))) & 7;
  byte_104C5150 = (*(_DWORD *)(a1 + 4) >> 3) & 7 | (4 * (*(_BYTE *)(a1 + 4) & 0xFE));
  result = a1 + 8;
  byte_104C15CC = -((*(_DWORD *)(a1 + 4) & 1) != 0);
  return result;
}
// 104BBF00: using guessed type char byte_104BBF00;
// 104BC194: using guessed type char byte_104BC194;
// 104C15CC: using guessed type char byte_104C15CC;
// 104C5150: using guessed type char byte_104C5150;
