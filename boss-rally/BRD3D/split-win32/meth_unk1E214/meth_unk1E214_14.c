#include "types-win32.h"
//----- (10047FB0) --------------------------------------------------------
__int16 __thiscall meth_unk1E214_14(
    unk1E214 *this, int a2, int flags, int a4, int a5, int a6, int a7, int a8, __int16 a9) {
  int v9;         // edx
  int v10;        // eax
  __int16 result; // ax

  this->field_2AE8 = (unk000C8 *)a2;
  v9 = this->field_24;
  this->field_1C |= a5;
  v10 = this->field_28;
  this->field_24 = a6 | v9;
  this->field_28 = a7 | v10;
  this->field_2968 = a8;
  this->field_40 = a4;
  result = a9;
  this->field_3C = flags;
  *(_WORD *)this->field_2A40 = a9;
  this->field_3838.field_1A99C[28] = a9;
  return result;
}
