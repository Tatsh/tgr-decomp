#include "types-win32.h"
//----- (100476C0) --------------------------------------------------------
unk1E214 *__thiscall meth_unk1E214_init(unk1E214 *this) {
    this->field_1C = 1;
    this->field_20 = 0;
    this->field_24 = 0;
    this->field_28 = 0;
    this->field_2C = -1;
    this->field_30 = 0;
    this->field_34 = 0;
    this->field_38 = 0;
    this->field_3C = 0;
    this->field_40 = 0;
    this->field_44 = 1065185444;
    this->field_48 = 0;
    this->field_4A = 0;
    this->field_4C = 0;
  eh_vector_constructor(
    this->vectorUnk,
    0x438u,
    3,
    (void (__thiscall *)(void *))meth_unk00438_init,
    (void (__thiscall *)(void *))meth_unk00438_deinit);
  this->field_3804 = 0;
  this->field_3808 = 0;
  this->field_380C = 0;
  this->field_3810 = 0;
  this->field_3814 = 0;
  this->field_3818 = 0;
  this->field_381C = 0;
  this->field_3820 = 0;
  this->field_3824 = 0;
  this->field_3828 = 0;
  this->field_382C = 0;
  this->field_3830 = 0;
  this->field_3834 = 0;
  this->field_3836 = 0;
  meth_unk1A5E0_init(&this->field_3838);
  this->field_3838.field_1A99C[28] = 0;
  this->lpVtbl = &gUnk1E214Vtbl1;
  this->field_4 = 0;
  this->field_8 = 0;
  this->field_C = 0;
  this->field_14 = 0;
  this->field_18 = 0;
  this->field_2AA4 = 0;
  this->field_2AA8 = 0;
  this->field_2AAC = 0;
  this->field_128 = 0;
  this->field_2970 = 0;
  this->field_2974 = 0;
  this->field_2968 = 0;
  this->field_296C = 0;
  memset(this->field_2904, 0, sizeof(this->field_2904));
  memset(this->field_2978, 0, sizeof(this->field_2978));
  memset(this->field_2A40, 0xFFu, sizeof(this->field_2A40));
  memset(this->field_12A, 0xFFu, sizeof(this->field_12A));
  memset(this->field_60, 0, sizeof(this->field_60));
  memset(this->field_283C, 0, sizeof(this->field_283C));
  this->field_2AB4[0] = 0;
  memset(&this->field_2AB4[1], 0, 0x30u);
  this->field_2AE6 = 0;
  this->field_2AE8 = 0;
  this->field_2AEC = 1;
  memset(this->field_2AF0, 0xFFu, sizeof(this->field_2AF0));
  this->field_2B54 = 1;
  this->field_2B58 = 0;
  this->field_10 = 0;
  return this;
}
