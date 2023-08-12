#include "types-win32.h"
//----- (100484C0) --------------------------------------------------------
unk00348 *__thiscall meth_unk00348_0(unk00348 *this, char a2) {
    meth_unk00348_100484E0(this);
    if ((a2 & 1) != 0)
        free(this);
    return this;
}
