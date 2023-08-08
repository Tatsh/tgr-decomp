#include "types-win32.h"
//----- (10078DB0) --------------------------------------------------------
int sub_10078DB0() {
    LPDIRECTINPUTA dida;         // eax
    void *v1;                    // esi
    IDirectInputAVtbl *didaVtbl; // ecx

    if (!--mouseCreated) {
        dida = g_DirectInputA;
        if (g_DirectInputA) {
            v1 = g_unk54Ptr;
            if (g_unk54Ptr) {
                meth_100602B0(g_unk54Ptr);
                free(v1);
                dida = g_DirectInputA;
            }
            didaVtbl = dida->lpVtbl;
            g_unk54Ptr = 0;
            didaVtbl->Release(dida);
            g_DirectInputA = 0;
        }
    }
    return 1;
}
// 100602B0: using guessed type int __thiscall sub_100602B0(_DWORD);
// 118ABDE8: using guessed type int mouseCreated;
