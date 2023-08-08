#include "types-win32.h"
//----- (10048710) --------------------------------------------------------
unkC8 *__thiscall meth_10048710(unkC8 *this) {
    int v2;         // esi
    unk6594 *v3;    // eax
    char *v4;       // eax
    unk6594 *v5;    // eax
    unk6594 *v6;    // eax
    int v7;         // edi
    const char *v8; // eax
    const char *v9; // eax

    v2 = 0;
    this->field_8 = 0;
    this->field_C = 0;
    this->field_10 = 0;
    this->field_64 = 0;
    this->field_68 = 1;
    LOWORD(this->field_BC) = 0;
    this->lpVtbl = (unkC8Vtbl *)&off_1008F700;
    v3 = (unk6594 *)malloc(0x6594u);
    if (v3)
        v4 = (char *)meth_1005CB90(v3);
    else
        v4 = 0;
    this->field_C0 = v4;
    if (!v4)
        sub_1003E260(6);
    v5 = (unk6594 *)malloc(0x6594u);
    if (v5)
        v6 = meth_1005CB90(v5);
    else
        v6 = 0;
    this->last = v6;
    if (!v6)
        sub_1003E260(6);
    v7 = 0;
    do {
        v8 = getCaptionString(0xBEu);
        sprintf(&this->field_C0[v2 + 4], v8, v7);
        v9 = getCaptionString(0xBEu);
        sprintf((char *const)&this->last->field_4 + v2, v9, v7);
        v2 += 260;
        ++v7;
    } while (v2 < 26000);
    memset(&this->field_6C, 0, 0x50u);
    return this;
}
// 1008F700: using guessed type int (__thiscall *off_1008F700)(void *Block, char);
