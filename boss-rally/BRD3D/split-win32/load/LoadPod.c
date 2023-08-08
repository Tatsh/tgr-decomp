#include "types-win32.h"
//----- (10008810) --------------------------------------------------------
int __thiscall LoadPod(Pod *this, unsigned int ArgList) {
    PodVtbl *v3; // edi
    size_t v4;   // eax
    int v5;      // ebx

    if (ArgList >= this->header.m_cNumPods)
        writeToRandomBufferAndExit("LoadPod: %i >= m_cNumPods", ArgList);
    v3 = this->lpVtbl;
    v4 = this->lpVtbl->field_10(this, ArgList);
    v5 = malloc(v4);
    v3->meth14(this, ArgList, v5);
    return v5;
}
