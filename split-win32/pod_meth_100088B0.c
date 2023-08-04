#include "../types-win32.h"
//----- (100088B0) --------------------------------------------------------
int __thiscall pod_meth_100088B0(Pod *this, int a2, int a3)
{
  PodVtbl *v4; // edi
  int v5; // eax

  v4 = this->lpVtbl;
  v5 = this->lpVtbl->methC(this, a2, a3);
  return v4->meth1C(this, v5);
}
