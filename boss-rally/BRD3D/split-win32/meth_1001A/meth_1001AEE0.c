#include "types-win32.h"
//----- (1001AEE0) --------------------------------------------------------
void __thiscall meth_1001AEE0(int this) {
    meth_1001AFB0((int *)this);
    if (*(_DWORD *)(this + 24)) {
        free(*(void **)(this + 24));
        *(_DWORD *)(this + 24) = 0;
    }
    if (*(_DWORD *)(this + 20)) {
        free(*(void **)(this + 20));
        *(_DWORD *)(this + 20) = 0;
    }
    *(_DWORD *)(this + 544) = 0;
    *(_DWORD *)(this + 548) = 0;
}
