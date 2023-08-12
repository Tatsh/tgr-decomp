#include "types-win32.h"
//----- (10069AA0) --------------------------------------------------------
int __thiscall meth_BossRallyConfig_10069AA0(BossRallyConfig *this, int nPlayers) {
  int result; // eax

  result = nPlayers - 1;
  if (nPlayers == 1) {
    qmemcpy(&this->joystick1, gJoystick1Data, sizeof(this->joystick1));
  } else {
    result = nPlayers - 2;
    if (nPlayers == 2) {
      qmemcpy(&this->joystick2, gJoystick2Data, sizeof(this->joystick2));
    } else {
      result = nPlayers - 3;
      if (nPlayers == 3)
        qmemcpy(&this->joystick3, gJoystick3Data, sizeof(this->joystick3));
      else
        qmemcpy(this, aE, 0xA8u);
    }
  }
  return result;
}
