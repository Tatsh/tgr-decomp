#include "types-win32.h"
//----- (10060280) --------------------------------------------------------
unk54 *__thiscall meth_unk54_init(unk54 *this) {
    unk54 *result; // eax

    result = this;
    this->lpDIDeviceA = 0;
    *(_DWORD *)&this->gap4[40] = 0;
    *(_DWORD *)&this->gap4[44] = 0;
    *(_DWORD *)&this->gap4[48] = 0;
    *(_DWORD *)&this->gap4[52] = 0;
    *(_DWORD *)&this->gap4[56] = 0;
    *(_DWORD *)&this->gap4[60] = 0;
    *(_DWORD *)&this->gap4[64] = 0;
    *(_DWORD *)&this->gap4[68] = 0;
    *(_DWORD *)&this->gap4[72] = 0;
    return result;
}
