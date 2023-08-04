#include "../../types-n64.h"
//----- (80264760) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80264760(int a1)
{
  int i; // [sp+18h] [-8h]
  int v3; // [sp+1Ch] [-4h]

  sub_80269460();
  sub_802648CC();
  sub_802694D0(1, (unsigned int)dword_8037F3F0);
  sub_802642E0(a1, 0, 1);
  for ( i = 0; i < 16; ++i )
    *(_DWORD *)(4 * i - 2143816720) = 255;
  dword_8037F42C = 0;
  v3 = sub_802694D0(0, (unsigned int)dword_8037F3F0);
  byte_8037F430 = 1;
  sub_802694A4();
  return v3;
}
// 802647EC: write access to const memory at 8037F42C has been detected
// 8026480C: write access to const memory at 8037F430 has been detected
// 8037F3F0: using guessed type int dword_8037F3F0[15];
// 8037F42C: using guessed type int dword_8037F42C;
// 8037F430: using guessed type char byte_8037F430;
