#include "../types-win32.h"
//----- (10035CA0) --------------------------------------------------------
_BYTE *__thiscall meth_10035CA0(_BYTE *this, char a2, char a3, char a4) {
    _BYTE *result; // eax

    result = this;
    this[10668] = a2;
    LOBYTE(result) = a3;
    this[10669] = a3;
    this[10670] = a4;
    return result;
}
