#include "types-win32.h"
//----- (100085E0) --------------------------------------------------------
void __thiscall meth_Pod_SetVtbl(Pod *this) {
    this->lpVtbl = &gPodVtbl;
    meth_DebugPrint(&this->lpVtbl + 1);
}
