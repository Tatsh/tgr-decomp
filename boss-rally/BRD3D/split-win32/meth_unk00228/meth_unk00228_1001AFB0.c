#include "types-win32.h"
//----- (1001AFB0) --------------------------------------------------------
int __thiscall meth_unk00228_1001AFB0(unk00228 *this) {
    _DWORD *v2;   // eax
    int v3;       // ecx
    int v4;       // esi
    unk00228 *v5; // eax

    if (((int)this->field_0 & 2) != 0) {
        v2 = (_DWORD *)this->field_218;
        if (v2) {
            do {
                v3 = v2[27];
                v4 = v2[28];
                if (v3)
                    *(_DWORD *)(v3 + 112) = v4;
                else
                    this->field_218 = v4;
                if (v4)
                    *(_DWORD *)(v4 + 108) = v3;
                else
                    this->field_21C = v3;
                v2[28] = 0;
                v2[27] = 0;
                if (v2) {
                    v2[27] = 0;
                    v2[28] = 0;
                    free(v2);
                }
                v2 = (_DWORD *)v4;
            } while (v4);
        }
        v5 = this->field_0;
        this->field_214 = 0;
        LOBYTE(v5) = (unsigned __int8)v5 & 0xFD;
        this->field_218 = 0;
        this->field_21C = 0;
        this->field_0 = v5;
    }
    return 0;
}
