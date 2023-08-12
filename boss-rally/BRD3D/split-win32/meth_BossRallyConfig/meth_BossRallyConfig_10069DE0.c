#include "types-win32.h"
//----- (10069DE0) --------------------------------------------------------
BossRallyConfig *__thiscall meth_BossRallyConfig_10069DE0(BossRallyConfig *this,
                                                          BossRallyConfig *otherConfig) {
  BossRallyConfig *result;     // eax
  BossRallyConfigJoystick *v3; // ebx
  BossRallyConfigJoystick *v4; // ebp
  int old_field_2a0;           // ecx
  int v6;                      // ecx
  int v7;                      // ecx

  result = this;
  v3 = &this->joystick1;
  qmemcpy(this, otherConfig, 0xA8u);
  v4 = &this->joystick2;
  qmemcpy(&this->joystick1, &otherConfig->joystick1, sizeof(this->joystick1));
  qmemcpy(&this->joystick2, &otherConfig->joystick2, sizeof(this->joystick2));
  qmemcpy(&this->joystick3, &otherConfig->joystick3, sizeof(this->joystick3));
  old_field_2a0 = otherConfig->field_2A0;
  result->field_2A0 = old_field_2a0;
  v6 = old_field_2a0 - 1;
  if (v6) {
    v7 = v6 - 1;
    if (v7) {
      if (v7 == 1)
        result->field_2A4 = (int)&result->joystick3;
      else
        result->field_2A4 = (int)result;
    } else {
      result->field_2A4 = (int)v4;
    }
  } else {
    result->field_2A4 = (int)v3;
  }
  result->field_2A8 = otherConfig->field_2A8;
  result->field_2AC = otherConfig->field_2AC;
  result->field_2B0 = otherConfig->field_2B0;
  qmemcpy(result->field_2B4, otherConfig->field_2B4, sizeof(result->field_2B4));
  qmemcpy(result->field_3B8, otherConfig->field_3B8, 0x458u);
  qmemcpy(result->field_810, otherConfig->field_810, sizeof(result->field_810));
  qmemcpy(result->field_830, otherConfig->field_830, 0x44u);
  return result;
}
