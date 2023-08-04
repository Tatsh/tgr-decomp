#include "../../types-win32.h"
//----- (10069C90) --------------------------------------------------------
int __thiscall meth_10069C90(BossRallyConfig *this)
{
  int result; // eax

  qmemcpy(this, aE, 0xA8u);
  qmemcpy(this->joystick1, &unk_100B4140, sizeof(this->joystick1));
  qmemcpy(this->joystick2, &unk_100B41E8, sizeof(this->joystick2));
  qmemcpy(this->joystick3, &unk_100B4290, sizeof(this->joystick3));
  this->field_2A0 = 0;
  this->field_2A4 = (int)this;
  this->field_2A8 = 1;
  this->field_2AC = 1;
  this->field_2B0 = 1;
  memset(this->field_2B4, 0, sizeof(this->field_2B4));
  memset(this->field_3B8, 0, sizeof(this->field_3B8));
  this->field_7B8 = 640;
  this->field_7BC = 480;
  this->field_7C0 = 16;
  this->field_7C4 = 0;
  *(_DWORD *)this->field_7C8 = 0;
  *(_DWORD *)&this->field_7C8[4] = 0;
  *(_DWORD *)&this->field_7C8[8] = 0;
  *(_DWORD *)&this->field_7C8[12] = 0;
  this->field_7D8 = 9;
  this->field_7DC = 9;
  result = 0;
  this->field_7E0 = 2;
  this->field_7E4 = 0;
  this->field_7E8 = 0;
  this->field_7EC = 1;
  this->field_7F0 = 1;
  this->field_7F4 = 1;
  this->field_7F8 = 0;
  this->field_7FC = 3;
  this->field_800 = 0;
  this->field_804 = 0;
  this->field_808 = 4;
  this->field_80C = 0;
  memset(this->field_810, 0, sizeof(this->field_810));
  memset(this->field_830, 0, sizeof(this->field_830));
  this->field_870 = 1;
  return result;
}
