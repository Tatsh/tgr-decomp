#include "types-win32.h"
//----- (10060280) --------------------------------------------------------
unk00054 *__thiscall meth_unk00054_init(unk00054 *this) {
  unk00054 *result; // eax

  result = this;
  this->lpDIDeviceA = 0;
  this->field_2C = 0;
  this->field_30 = 0;
  this->field_34 = 0;
  this->field_38 = 0;
  *(_DWORD *)this->gap3C = 0;
  *(_DWORD *)&this->gap3C[4] = 0;
  *(_DWORD *)&this->gap3C[8] = 0;
  *(_DWORD *)&this->gap3C[12] = 0;
  *(_DWORD *)&this->gap3C[16] = 0;
  return result;
}
