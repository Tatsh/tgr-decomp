#include "types-win32.h"
//----- (1005CB90) --------------------------------------------------------
unk06594 *__thiscall meth_unk06594_init(unk06594 *this) {
    char **v2;       // edx
    int v3;          // ebx
    CHAR *v4;        // edi
    unsigned int v5; // kr08_4
    CHAR *v6;        // esi
    char **v7;       // edi

    v2 = &this->field_4;
    this->lpVtbl = &gUnk06594Vtbl;
    memset(&this->field_4, 0, 0x6590u);
    v3 = 100;
    do {
        v5 = strlen(String2) + 1;
        v4 = &String2[v5++];
        v6 = &v4[1 - v5];
        v7 = v2;
        v2 += 65;
        qmemcpy(v7, v6, v5 - 1);
        --v3;
    } while (v3);
    return this;
}
