#include "types-win32.h"
//----- (10078DB0) --------------------------------------------------------
int input_10078DB0() {
    LPDIRECTINPUTA dida;         // eax
    unk00054 *v1;                // esi
    IDirectInputAVtbl *didaVtbl; // ecx

    if (!--mouseCreated) {
        dida = g_DirectInputA;
        if (g_DirectInputA) {
            v1 = gUnk54Ptr;
            if (gUnk54Ptr) {
                meth_unk00054_100602B0(gUnk54Ptr);
                free(v1);
                dida = g_DirectInputA;
            }
            didaVtbl = dida->lpVtbl;
            gUnk54Ptr = 0;
            didaVtbl->Release(dida);
            g_DirectInputA = 0;
        }
    }
    return 1;
}
// 118ABDE8: using guessed type int mouseCreated;
