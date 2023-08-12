#include "types-win32.h"
//----- (1001ADA0) --------------------------------------------------------
int __thiscall meth_unk00228_MatchesGUID(unk00228 *this, CLSID *clsid) {
    if (!clsid)
        return 0;
    if ((this->field_0 & 1) != 0)
        return memcmp(&this->guid, clsid, 0x10u) == 0;
    return 0;
}
