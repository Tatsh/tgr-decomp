#include "types-win32.h"
//----- (100085C0) --------------------------------------------------------
Pod *__thiscall meth_Pod_100085C0(Pod *this, char a2) {
    meth_Pod_SetVtbl(this);
    if ((a2 & 1) != 0)
        free(this);
    return this;
}
