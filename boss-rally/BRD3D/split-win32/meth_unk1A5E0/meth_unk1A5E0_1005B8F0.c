#include "types-win32.h"
//----- (1005B8F0) --------------------------------------------------------
void __thiscall meth_unk1A5E0_1005B8F0(unk1A5E0 *this) {
    this->lpVtbl = &gUnk1A5E0Vtbl;
    eh_vector_destructor(
        this->vectorUnk438, 0x438u, 100, (void(__thiscall *)(void *))meth_unk00438_deinit);
}
