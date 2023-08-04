#include "../../types-win32.h"
//----- (10065630) --------------------------------------------------------
int __thiscall sub_10065630(_DWORD *this)
{
  float *v1; // edx
  double v2; // st7
  int v3; // ebx
  _WORD *v4; // edi
  _DWORD *v5; // eax
  double v6; // st7
  int i; // edx
  int result; // eax
  int v9; // [esp+10h] [ebp-4h]

  v1 = (float *)(this + 1067);
  v2 = (double)(int)this[80] * 0.13699999;
  v3 = 0;
  v9 = 0;
  *((float *)this + 1067) = v2;
  v4 = this + 2248;
  v5 = this + 1096;
  *((float *)this + 1068) = v2 - -0.034000002;
  *((float *)this + 1069) = v2 - -0.034000002 - -0.034000002;
  *((float *)this + 1070) = v2 - -0.034000002 - -0.034000002 - -0.034000002;
  do
  {
    *((_DWORD *)v1 + 4) = 2;
    *v1 = 0.0;
    v1[12] = 0.0;
    v1[8] = 0.0;
    v6 = (double)v9 * 0.15000001;
    ++v3;
    ++v1;
    v9 = v3;
    *(v1 - 17) = v6;
  }
  while ( v3 < 4 );
  for ( i = 0; i < 144; ++i )
  {
    v4[2] = 0;
    v4[1] = 0;
    *v4 = 0;
    *v5 = 0;
    v5[1] = 0;
    v5[2] = 0;
    v5[5] = 0;
    v5[6] = 0;
    v5[7] = 0;
    v4 += 3;
    v5 += 8;
  }
  result = 131074;
  memset32(this + 2464, 131074, 0x12u);
  return result;
}
