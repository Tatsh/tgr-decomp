#include "../../types-n64.h"
//----- (8022D7E0) --------------------------------------------------------
int __fastcall sub_8022D7E0(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // $v1
  int *v6; // $t2
  int v7; // $t3
  int result; // $v0
  int *v9; // [sp+1Ch] [-4h]

  v5 = &dword_803519B0[a1];
  v6 = &dword_8034E9B0[512 * a1 + 2 * (*v5)++];
  v7 = (a2 << 8) & 0xF800 | (8 * a3) & 0x7C0 | (a4 >> 2) & 0x3E;
  v6[2] = v7 | (a5 >> 7) & 1 | ((v7 | (a5 >> 7) & 1) << 16);
  v9 = v6;
  result = sub_802649F0();
  v9[1] = result;
  return result;
}
// 8034E9B0: using guessed type int dword_8034E9B0[512];
// 803519B0: using guessed type int dword_803519B0[6];
