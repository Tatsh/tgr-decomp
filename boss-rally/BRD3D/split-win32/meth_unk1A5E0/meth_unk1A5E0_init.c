#include "types-win32.h"
//----- (1005B7F0) --------------------------------------------------------
unk1A5E0 *__thiscall meth_unk1A5E0_init(unk1A5E0 *this) {
  this->field_18 = 0;
  this->field_1C = 0;
  this->field_20 = 0;
  `eh vector constructor iterator'(
    this->vectorUnk438,
    0x438u,
    100,
    (void (__thiscall *)(void *))meth_unk00438_init,
    (void (__thiscall *)(void *))meth_unk00438_deinit);
  this->field_1A92C[0] = 0;
  this->field_1A92C[1] = 0;
  this->field_1A92C[2] = 0;
  this->field_1A92C[3] = -1;
  this->field_1A92C[4] = -1;
  this->field_1A92C[5] = -1;
  this->field_1A938 = -1;
  *(_DWORD *)this->field_1A99C = 0;
  *(_DWORD *)&this->field_1A99C[2] = 0;
  *(_DWORD *)&this->field_1A99C[4] = 0;
  *(_DWORD *)&this->field_1A99C[6] = 0;
  *(_DWORD *)&this->field_1A99C[8] = 0;
  *(_DWORD *)&this->field_1A99C[10] = 0;
  *(_DWORD *)&this->field_1A99C[12] = 0;
  *(_DWORD *)&this->field_1A99C[14] = 0;
  *(_DWORD *)&this->field_1A99C[16] = 0;
  *(_DWORD *)&this->field_1A99C[18] = 0;
  *(_DWORD *)&this->field_1A99C[20] = 0;
  *(_DWORD *)&this->field_1A99C[22] = 0;
  *(_DWORD *)&this->field_1A99C[24] = 0;
  *(_DWORD *)&this->field_1A99C[26] = 0;
  this->field_4[0] = 0;
  this->field_4[1] = 0;
  this->field_4[2] = 0;
  this->field_4[3] = 0;
  this->field_4[4] = 0;
  this->lpVtbl = &gUnk1A5E0Vtbl;
  memset(this->gap1A60C, 0, sizeof(this->gap1A60C));
  return this;
}
