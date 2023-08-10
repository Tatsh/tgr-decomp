#include "types-win32.h"
//----- (10008890) --------------------------------------------------------
int __thiscall pod_meth_10008890(Pod *this, int a2) {
    PodVtbl *v3; // edi
    int v4;      // eax

    v3 = this->lpVtbl;
    v4 = ((int(__thiscall *)(Pod *, int))this->lpVtbl->meth4)(this, a2);
    return v3->meth10(this, (char *)v4);
}
