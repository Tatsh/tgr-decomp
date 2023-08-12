#include "types-win32.h"
//----- (10069BC0) --------------------------------------------------------
int __thiscall meth_BossRallyConfig_10069BC0(BossRallyConfig *this, int a2, int a3) {
  switch (a2) {
  case 1:
    return *((_WORD *)&this->joystick1.field_0 + 3 * a3) & 0xFF00;
  case 2:
    return *((_WORD *)&this->joystick2.field_0 + 3 * a3) & 0xFF00;
  case 3:
    return *((_WORD *)&this->joystick3.field_0 + 3 * a3) & 0xFF00;
  }
  return *((_WORD *)&this->joystick0.field_0 + 3 * a3) & 0xFF00;
}
