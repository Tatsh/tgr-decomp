#include "../types-win32.h"
//----- (10048470) --------------------------------------------------------
unk348 *__thiscall meth_10048470(unk348 *this) {
    this->field_10 = 0;
    LOWORD(this->field_14) = 0;
    this->field_338 = 0;
    this->field_33C = 0.0;
    this->field_0 = (int)&off_1008F6F8;
    *(_DWORD *)this->gap4 = 0;
    *(_DWORD *)&this->gap4[4] = 0;
    *(_DWORD *)&this->gap4[8] = 0;
    memset(this->field_18, 0, 0x320u);
    this->field_340 = 0;
    this->last = 0;
    return this;
}
// 1008F6F8: using guessed type int (__thiscall *off_1008F6F8)(void *Block, char);
