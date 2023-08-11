#include "types-win32.h"
//----- (1001ADE0) --------------------------------------------------------
int __thiscall meth_unk00228_1001ADE0(unk00228 *this,
                                      GUID *guid,
                                      char *source,
                                      char *source2,
                                      D3DDEVICEDESC *deviceDesc0,
                                      D3DDEVICEDESC *deviceDesc1) {
    char *v8;        // ebp
    size_t v9;       // kr04_4
    size_t v10;      // esi
    char *v11;       // eax
    char *source2_1; // ebp
    size_t v13;      // kr08_4
    size_t v14;      // esi
    char *v15;       // eax
    unk00228 *v16;   // edx

    if (!guid)
        return -2147024809;
    this->guid = *guid;
    v8 = source;
    if (!source)
        v8 = aUnknown_0;
    v9 = strlen(v8) + 1;
    v10 = v9 - 1;
    v11 = (char *)malloc(v9);
    this->sourceString0 = v11;
    if (v11) {
        strncpy(v11, v8, v10);
        this->sourceString0[v10] = 0;
    }
    source2_1 = source2;
    if (!source2)
        source2_1 = aUnknown_0;
    v13 = strlen(source2_1) + 1;
    v14 = v13 - 1;
    v15 = (char *)malloc(v13);
    this->sourceString1 = v15;
    if (v15) {
        strncpy(v15, source2_1, v14);
        this->sourceString1[v14] = 0;
    }
    if (deviceDesc0)
        qmemcpy(&this->deviceDesc0, deviceDesc0, 0xFCu);
    if (deviceDesc1)
        qmemcpy(&this->deviceDesc1, deviceDesc1, 0xFCu);
    v16 = (unk00228 *)((int)this->field_0 & 0xFFFFFFFD | 1);
    this->field_214 = 0;
    this->field_0 = v16;
    return 0;
}
