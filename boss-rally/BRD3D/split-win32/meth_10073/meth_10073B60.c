#include "types-win32.h"
//----- (10073B60) --------------------------------------------------------
_DWORD *__thiscall meth_10073B60(_DWORD * this, int a2, int a3) {
    _DWORD *result; // eax

    result = this;
    this[2] = 0;
    *this = 0;
    this[1] = 0;
    this[3] = a3;
    this[4] = a2;
    return result;
  }
