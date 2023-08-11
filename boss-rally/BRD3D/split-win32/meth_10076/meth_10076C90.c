#include "types-win32.h"
//----- (10076C90) --------------------------------------------------------
_DWORD *__thiscall meth_10076C90(char *this) {
    *((_DWORD *)this + 2672) =
        (char *)&MEMORY[0x106C6678] + 348 * ((this - (char *)dword_10ACDEA8) / 11112);
    return sub_100307D0((_DWORD *)this + 2485);
  }
