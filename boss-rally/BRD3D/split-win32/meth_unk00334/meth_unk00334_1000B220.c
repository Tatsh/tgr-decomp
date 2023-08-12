#include "types-win32.h"
//----- (1000B220) --------------------------------------------------------
HRESULT __thiscall meth_unk00334_1000B220(unk00334 *this, int a2) {
    DWORD v3;       // eax
    HRESULT result; // eax
    DWORD v5;       // eax

    if (a2) {
        v3 = this->ddCaps1.dwCaps2 + 1;
        this->ddCaps1.dwCaps2 = v3;
        if (v3 == 1) {
            result = meth_unk00334_1000B170(this);
            if (result < 0)
                return result;
        }
        return 0;
    }
    v5 = this->ddCaps1.dwCaps2;
    if (!v5)
        return -2005522671;
    if (v5 != 1 || (result = meth_unk00334_1000B1F0(this), result >= 0)) {
        --this->ddCaps1.dwCaps2;
        return 0;
    }
    return result;
}
