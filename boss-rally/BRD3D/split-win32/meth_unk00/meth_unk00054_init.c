#include "types-win32.h"
//----- (10060280) --------------------------------------------------------
unk00054 *__thiscall meth_unk00054_init(unk00054 *this) {
    unk00054 *result; // eax

    result = this;
    this->lpDIDeviceA = 0;
    this->field_2C = 0;
    this->field_30 = 0;
    *(_DWORD *)this->gap34 = 0;
    *(_DWORD *)&this->gap34[4] = 0;
    *(_DWORD *)&this->gap34[8] = 0;
    *(_DWORD *)&this->gap34[12] = 0;
    *(_DWORD *)&this->gap34[16] = 0;
    *(_DWORD *)&this->gap34[20] = 0;
    *(_DWORD *)&this->gap34[24] = 0;
    return result;
}
