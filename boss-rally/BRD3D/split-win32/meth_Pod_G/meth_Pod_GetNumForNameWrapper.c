#include "types-win32.h"
//----- (10008750) --------------------------------------------------------
int __thiscall meth_Pod_GetNumForNameWrapper(Pod *this, char *ArgList) {
    int result; // eax

    result = this->lpVtbl->GetNumForName(this, ArgList);
    if (result == -1)
        s_noreturn_writeToBufferExit("GetNumForName: %s not found!", ArgList);
    return result;
}
