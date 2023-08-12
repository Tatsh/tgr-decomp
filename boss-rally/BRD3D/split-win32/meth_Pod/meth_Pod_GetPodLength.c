#include "types-win32.h"
//----- (10008780) --------------------------------------------------------
int __thiscall meth_Pod_GetPodLength(Pod *this, unsigned int argList) {
    if (argList >= this->header.m_cNumPods)
        s_noreturn_writeToBufferExit("GetPodLength: %i >= m_cNumPods", argList);
    return *((_DWORD *)this->unkInstance + 19 * argList + 1);
}
