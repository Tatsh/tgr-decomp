#include "../types-win32.h"
//----- (1002C2D0) --------------------------------------------------------
int __thiscall meth_1002C2D0(void *this) {
    int result; // eax
    void *v2;   // eax

    result = dword_106909B0;
    if (dword_106909B0) {
        if (dword_106909B0 == -1) {
            v2 = (void *)dword_106C2CFC;
            dword_106C2CFC = 0;
            this = v2;
        }
        sub_1003563A(C);
        result = dword_106909B0;
        if (dword_106909B0 == -1)
            dword_106C2CFC = (int)this;
    }
    return result;
}
// 106909B0: using guessed type int dword_106909B0;
// 106C2CFC: using guessed type int dword_106C2CFC;
