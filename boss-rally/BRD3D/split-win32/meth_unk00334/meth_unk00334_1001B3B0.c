#include "types-win32.h"
//----- (1001B3B0) --------------------------------------------------------
int __thiscall meth_unk00334_1001B3B0(unk00334 *this) {
    unk00334 *v2; // eax
    int v3;       // ecx
    unk00334 *v4; // esi
    unk0008C *v5; // eax

    v2 = this->field_318;
    if (v2) {
        do {
            v3 = *(_DWORD *)&v2->? [8];
            v4 = v2->            ? ;
            if (v3)
                *(_DWORD *)(v3 + 112) = v4;
            else
                this->field_318 = v4;
            if (v4)
                *(_DWORD *)&v4->? [8] = v3;
            else
                this->field_31C = v3;
            v2->            ? = 0;
            *(_DWORD *)&v2->? [8] = 0;
            if (v2) {
                *(_DWORD *)&v2->? [8] = 0;
                v2->            ? = 0;
                free(v2);
            }
            v2 = v4;
        } while (v4);
    }
    v5 = this->ddCapsFlags;
    this->field_314 = 0;
    LOBYTE(v5) = (unsigned __int8)v5 & 0xF7;
    this->field_318 = 0;
    this->field_31C = 0;
    this->ddCapsFlags = v5;
    return 0;
}
