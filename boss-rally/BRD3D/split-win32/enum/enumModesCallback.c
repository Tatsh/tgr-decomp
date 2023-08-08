#include "types-win32.h"
//----- (1001AA70) --------------------------------------------------------
HRESULT __stdcall enumModesCallback(DDSURFACEDESC *a1, LPVOID a2) {
    _DWORD *v2; // ebx
    unk74 *v4;  // edx

    if (a2) {
        v2 = (_DWORD *)*((_DWORD *)a2 + 2);
        if (v2) {
            if (!a1)
                return 0;
            if (a1->dwSize != 108)
                return 0;
            v4 = (unk74 *)malloc(0x74u);
            if (v4) {
                memset(v4, 0, 0x6Cu);
                v4->field_0 = 108;
                *(_DWORD *)v4->gap6C = 0;
                v4->last = 0;
            } else {
                v4 = 0;
            }
            if (v4) {
                qmemcpy(v4, a1, 0x6Cu);
                if (meth_1001B430(v2, v4) >= 0)
                    ++*((_DWORD *)a2 + 1);
            }
        }
    }
    return 1;
}
