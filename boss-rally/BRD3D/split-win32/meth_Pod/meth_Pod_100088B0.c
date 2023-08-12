#include "types-win32.h"
//----- (100088B0) --------------------------------------------------------
int __thiscall meth_Pod_100088B0(Pod *this, int a2, int a3) {
  PodVtbl *v4; // edi
  int v5;      // eax

  v4 = this->lpVtbl;
  v5 = this->lpVtbl->meth4(this, a2, a3);
  return v4->meth8(this, v5);
}
