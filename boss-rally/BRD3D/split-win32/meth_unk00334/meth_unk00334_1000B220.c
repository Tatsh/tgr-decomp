#include "types-win32.h"
//----- (1000B220) --------------------------------------------------------
HRESULT __thiscall meth_unk00334_1000B220(unk00334 *this, int a2) {
  int v3;         // eax
  HRESULT result; // eax
  int v5;         // eax

  if (a2) {
    v3 = this->? +1;
    this->     ? = v3;
    if (v3 == 1) {
      result = meth_unk00334_1000B170(this);
      if (result < 0)
        return result;
    }
    return 0;
  }
  v5 = this->? ;
  if (!v5)
    return -2005522671;
  if (v5 != 1 || (result = meth_unk00334_1000B1F0(this), result >= 0)) {
    --this->? ;
    return 0;
  }
  return result;
}
