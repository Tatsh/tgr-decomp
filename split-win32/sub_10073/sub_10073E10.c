#include "../../types-win32.h"
//----- (10073E10) --------------------------------------------------------
int __thiscall sub_10073E10(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // ecx
  int v5; // edi
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int result; // eax

  sub_10073F20(this);
  *(_BYTE *)(this[3] + this[4]) = HIBYTE(a2);
  v3 = this[4];
  v4 = this[3] + 1;
  this[3] = v4;
  *(_BYTE *)(v3 + v4) = BYTE2(a2);
  v5 = this[4];
  v6 = this[3] + 1;
  this[3] = v6;
  *(_BYTE *)(v5 + v6) = BYTE1(a2);
  v7 = this[4];
  v8 = this[3] + 1;
  this[3] = v8;
  *(_BYTE *)(v7 + v8) = a2;
  result = this[3] + 1;
  this[3] = result;
  return result;
}
