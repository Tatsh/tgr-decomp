#include "types-win32.h"
//----- (1001B5A0) --------------------------------------------------------
int __thiscall meth_unk00334_1001B5A0(unk00334 *this) {
    unk00228 *v2; // esi
    void *v3;     // eax
    unk00228 *v4; // edi
    DWORD v5;     // eax

    v2 = this->field_324;
    if (v2) {
        do {
            v3 = v2->field_220;
            v4 = v2->last;
            if (v3)
                *((_DWORD *)v3 + 0x89) = v4;
            else
                this->field_324 = v4;
            if (v4)
                v4->field_220 = v3;
            else
                this->field_328 = (unk00228 *)v3;
            v2->last = 0;
            v2->field_220 = 0;
            if (v2) {
                meth_unk00228_1001AEE0(v2);
                free(v2);
            }
            v2 = v4;
        } while (v4);
    }
    v5 = this->ddCapsFlags;
    this->field_320 = 0;
    LOBYTE(v5) = v5 & 0xEF;
    this->field_324 = 0;
    this->field_328 = 0;
    this->ddCapsFlags = v5;
    return 0;
}
