#include "types-win32.h"
//----- (10008850) --------------------------------------------------------
int __thiscall meth_Pod_LoadPod0(Pod *this, unsigned int argList, int a3) {
    if (argList >= this->header.m_cNumPods)
        s_noreturn_writeToBufferExit("LoadPod: %i >= m_cNumPods", argList);
    this->lpVtbl->meth6(this, argList, a3);
    return a3;
}
