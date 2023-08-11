#include "types-win32.h"
//----- (100478C0) --------------------------------------------------------
void __thiscall meth_unk1E214_100478C0(unk1E214 *this) {
    this->lpVtbl = &gUnk1E214Vtbl1;
    meth_unk1A5E0_1005B8F0(&this->field_3838);
    eh_vector_destructor(
        this->vectorUnk, 0x438u, 3, (void(__thiscall *)(void *))meth_unk00438_deinit);
}
