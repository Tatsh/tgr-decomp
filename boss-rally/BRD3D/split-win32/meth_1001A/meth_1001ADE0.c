#include "../types-win32.h"
//----- (1001ADE0) --------------------------------------------------------
int __thiscall meth_1001ADE0(
    unk228 *this, GUID *a2, char *Source, char *a4, LPD3DDEVICEDESC a5, LPD3DDEVICEDESC a6) {
    char *v8;   // ebp
    size_t v9;  // kr04_4
    size_t v10; // esi
    char *v11;  // eax
    char *v12;  // ebp
    size_t v13; // kr08_4
    size_t v14; // esi
    char *v15;  // eax
    int v16;    // edx

    if (!a2)
        return -2147024809;
    *(GUID *)this->gap4 = *a2;
    v8 = Source;
    if (!Source)
        v8 = aUnknown_0;
    v9 = strlen(v8) + 1;
    v10 = v9 - 1;
    v11 = (char *)malloc(v9);
    *(_DWORD *)&this->gap4[16] = v11;
    if (v11) {
        strncpy(v11, v8, v10);
        *(_BYTE *)(v10 + *(_DWORD *)&this->gap4[16]) = 0;
    }
    v12 = a4;
    if (!a4)
        v12 = aUnknown_0;
    v13 = strlen(v12) + 1;
    v14 = v13 - 1;
    v15 = (char *)malloc(v13);
    *(_DWORD *)&this->gap4[20] = v15;
    if (v15) {
        strncpy(v15, v12, v14);
        *(_BYTE *)(v14 + *(_DWORD *)&this->gap4[20]) = 0;
    }
    if (a5)
        qmemcpy(&this->gap4[24], a5, 0xFCu);
    if (a6)
        qmemcpy(&this->gap3D[219], a6, 0xFCu);
    v16 = this->field_0 & 0xFFFFFFFD | 1;
    *(_DWORD *)&this->gap3D[471] = 0;
    this->field_0 = v16;
    return 0;
}
