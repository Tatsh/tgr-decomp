#include "types-win32.h"
//----- (10008810) --------------------------------------------------------
int __thiscall meth_Pod_LoadPod(Pod *this, unsigned int ArgList) {
  PodVtbl *v3; // edi
  size_t v4;   // eax
  int v5;      // ebx

  if (ArgList >= this->header.m_cNumPods)
      s_noreturn_writeToBufferExit("LoadPod: %i >= m_cNumPods", ArgList);
  v3 = this->lpVtbl;
  v4 = this->lpVtbl->meth5(this, ArgList);
  v5 = malloc(v4);
  v3->meth6(this, ArgList, v5);
  return v5;
}
