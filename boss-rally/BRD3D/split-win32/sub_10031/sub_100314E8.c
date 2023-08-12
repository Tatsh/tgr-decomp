#include "types-win32.h"
//----- (100314E8) --------------------------------------------------------
_DWORD *__cdecl sub_100314E8(__int16 a1, __int16 a2, int a3) {
  unsigned __int16 v3; // ax
  _DWORD *result;      // eax
  _DWORD *v5;          // [esp+0h] [ebp-20h]
  _DWORD *v6;          // [esp+4h] [ebp-1Ch]
  unsigned int *v7;    // [esp+8h] [ebp-18h]
  _DWORD *v8;          // [esp+Ch] [ebp-14h]
  _DWORD *v9;          // [esp+10h] [ebp-10h]
  _DWORD *v10;         // [esp+14h] [ebp-Ch]
  _DWORD *v11;         // [esp+18h] [ebp-8h]

  v3 = (a3 >> 2) & 0x3E | (8 * a2) & 0x7C0 | (a1 << 8) & 0xF800;
  LOBYTE(v3) = (a3 >> 2) & 0x3E | (8 * a2) & 0xC0 | 1;
  v11 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v11 = -419430400;
  v11[1] = 0;
  v10 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v10 = -1191181539;
  v10[1] = 252329984;
  v9 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v9 = -1174399998;
  v9[1] = 3145728;
  v8 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v8 = -150994944;
  v8[1] = (v3 << 16) | v3;
  v7 = (unsigned int *)dword_106C0680;
  dword_106C0680 += 8;
  *v7 = ((unsigned __int16)(g_Height1 << MEMORY[0x106C65E4]) - 1) & 0xFFF |
        ((((unsigned __int16)(g_Width1 << MEMORY[0x106C65E4]) - 1) & 0xFFF) << 12) | 0xE1000000;
  v7[1] = 0;
  v6 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v6 = -419430400;
  v6[1] = 0;
  v5 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  result = v5;
  *v5 = -1174399998;
  v5[1] = 0;
  return result;
}
// 106C0680: using guessed type int dword_106C0680;
// 106C0684: using guessed type int g_Width1;
// 106C299C: using guessed type int g_Height1;
// 106C65E4: using guessed type int dword_106C65E4;
