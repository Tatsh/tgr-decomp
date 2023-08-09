#include "types-win32.h"
//----- (1005BC10) --------------------------------------------------------
int __thiscall meth_unk1A5E0_1005BC10(
    unk1A5E0 *this, char *Source, int a3, int a4, int a5, int a6) {
    int result;           // eax
    char *v8;             // edx
    unsigned int v9;      // eax
    char *v10;            // edi
    char *v11;            // esi
    char v12;             // cl
    unsigned int v13;     // ebx
    char *v14;            // edi
    char *v15;            // edi
    _WORD *v16;           // eax
    int v17;              // eax
    __int16 v18;          // ax
    void (*v19)(void);    // eax
    unsigned __int16 v20; // ax
    double v21;           // st7
    char v23;             // c0
    __int64 v24;          // rax

    if (!Source)
        return 0;
    if (this->field_1A92C[0] >= 0x64u) {
        ((void(__thiscall *)(unk1A5E0 *, _DWORD))this->lpVtbl->last)(this, 0);
        this->field_1A92C[0] = 99;
    }
    if (a6) {
        v9 = strlen(Source) + 1;
        v8 = this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]].field_9;
        qmemcpy(v8, Source, 4 * (v9 >> 2));
        v11 = &Source[4 * (v9 >> 2)];
        v10 = &v8[4 * (v9 >> 2)];
        v12 = v9;
    } else {
        strncpy(this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]].field_9, Source, 0xAu);
        v13 = strlen(SrcStr) + 1;
        v14 = this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]].field_9;
        v15 = &v14[strlen(v14)];
        qmemcpy(v15, SrcStr, 4 * (v13 >> 2));
        v11 = &SrcStr[4 * (v13 >> 2)];
        v10 = &v15[4 * (v13 >> 2)];
        v12 = v13;
    }
    qmemcpy(v10, v11, v12 & 3);
    this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]].field_4 |= a3;
    this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]].field_8 = a4;
    this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]].field_41C = 0;
    this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]].field_40C = 0;
    this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]].field_40A = 0;
    this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]].field_424 = *(_DWORD *)a5;
    this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]].field_42C = *(_DWORD *)(a5 + 8);
    this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]].field_428 =
        19 * (unsigned __int16)this->field_1A92C[0] + (__int64)*(float *)&this->field_20;
    this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]].field_430 =
        this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]].field_428 + 18;
    *(float *)&this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]].field_410 =
        (float)*(int *)a5;
    *(float *)&this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]].field_414 =
        (float)this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]].field_428;
    this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]].field_418 = 0;
    this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]].field_420 = 0;
    if ((_BYTE)a4 == 3)
        ((void(__thiscall *)(unk00438 *))this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]]
             .lpVtbl->field_8)(&this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]]);
    else
        ((void(__thiscall *)(unk00438 *))this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]]
             .lpVtbl->field_4)(&this->vectorUnk438[(unsigned __int16)this->field_1A92C[0]]);
    v16 = (_WORD *)((char *)this + 1080 * (unsigned __int16)this->field_1A92C[0]);
    v16[548] = v16[556] - v16[552] - 16;
    v17 = this->field_18;
    ++this->field_1A92C[0];
    if ((v17 & 0x800000) == 0)
        goto LABEL_26;
    v18 = this->field_1A92C[1] + this->field_1A92C[2];
    if (v18 >= 100)
        v18 = this->field_1A92C[0] - 1;
    result = _strcmpi(this->vectorUnk438[v18].field_9, String2);
    if (result) {
        if (++this->field_1A92C[1] >= (int)(unsigned __int16)this->field_1A92C[0])
            this->field_1A92C[1] = this->field_1A92C[0] - 1;
        v19 = (void (*)(void))this->field_4[2];
        if (v19)
            v19();
        v20 = this->field_1A92C[0] - 1;
        if (this->field_1A92C[0] == 1)
            v20 = 1;
        v21 = *(float *)&this->field_1A99C[26] / (double)v20 + *(float *)&this->field_1A99C[10];
        *(float *)&this->field_1A99C[10] = v21;
        if (v23) {
            *(_DWORD *)&this->field_1A99C[10] = *(_DWORD *)&this->field_1A99C[22];
        } else if (v21 > *(float *)&this->field_1A99C[24]) {
            *(_DWORD *)&this->field_1A99C[10] = *(_DWORD *)&this->field_1A99C[24];
        }
        v24 = (__int64)*(float *)&this->field_1A99C[10];
        *(_DWORD *)&this->gap1A93A[86] = v24;
        *(_DWORD *)&this->gap1A93A[94] = v24 + 16;
    LABEL_26:
        result = 1;
    }
    return result;
}
// 1005BFA4: variable 'v23' is possibly undefined
