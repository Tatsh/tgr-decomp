#include "types-win32.h"
//----- (1001B3B0) --------------------------------------------------------
int __thiscall meth_unk00334_1001B3B0(unk00334 *this) {
    unk00074 *v2; // eax
    unk00074 *v3; // ecx
    unk00074 *v4; // esi
    DWORD v5;     // eax

    v2 = this->field_318;
    if (v2) {
        do {
            v3 = v2->field_6C;
            v4 = v2->last;
            if (v3)
                v3->last = v4;
            else
                this->field_318 = v4;
            if (v4)
                v4->field_6C = v3;
            else
                this->field_31C = v3;
            v2->last = 0;
            v2->field_6C = 0;
            if (v2) {
                v2->field_6C = 0;
                v2->last = 0;
                free(v2);
            }
            v2 = v4;
        } while (v4);
    }
    v5 = this->ddCapsFlags;
    this->field_314 = 0;
    LOBYTE(v5) = v5 & 0xF7;
    this->field_318 = 0;
    this->field_31C = 0;
    this->ddCapsFlags = v5;
    return 0;
}
