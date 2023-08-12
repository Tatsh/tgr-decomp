#include "types-win32.h"
//----- (1005C2C0) --------------------------------------------------------
int __thiscall meth_unk1A5E0_2(unk1A5E0 *this, int index) {
    int v3;            // ebx
    __int16 v4;        // ax
    int v5;            // eax
    unk1A5E0Vtbl **v6; // edi
    unk1A5E0Vtbl *v7;  // ebp
    __int16 v8;        // ax
    unk1A5E0Vtbl *v9;  // edx
    __int16 v10;       // ax
    __int16 v11;       // ax
    float v13;         // [esp+2Ch] [ebp-20h]
    float v14;         // [esp+2Ch] [ebp-20h]
    float v15;         // [esp+2Ch] [ebp-20h]
    float v16;         // [esp+2Ch] [ebp-20h]
    float v17;         // [esp+2Ch] [ebp-20h]
    float v18;         // [esp+30h] [ebp-1Ch]
    float v19;         // [esp+30h] [ebp-1Ch]
    float v20;         // [esp+30h] [ebp-1Ch]
    float v21;         // [esp+30h] [ebp-1Ch]
    float v22;         // [esp+30h] [ebp-1Ch]
    int v23;           // [esp+44h] [ebp-8h]
    int v24;           // [esp+48h] [ebp-4h]
    int v25;           // [esp+48h] [ebp-4h]
    int indexa;        // [esp+50h] [ebp+4h]

    v3 = 0;
    v4 = this->field_1A92C[5];
    v23 = 0;
    if (v4 >= 0)
        ((void(__thiscall *)(unk1A5E0 *, __int16, _DWORD, _DWORD))this->lpVtbl->meth1)(
            this, v4, *(_DWORD *)this->gap24, *(_DWORD *)&this->gap24[4]);
    if ((this->field_18 & 0x1000000) == 0 && index >= 0 &&
        (this->vectorUnk438[index].field_4 & 0x10) == 0)
        this->vectorUnk438[index].field_8 = 4;
    v24 = 0;
    if (this->field_1A92C[2]) {
        indexa = 0;
        do {
            v5 = this->field_1A92C[1] + v3;
            if (v5 >= 0 && v5 < (unsigned __int16)this->field_1A92C[0]) {
                v6 = &this->lpVtbl + 270 * v5;
                if (v6 != (unk1A5E0Vtbl **)-53) {
                    v7 = v6[11];
                    ((void(__thiscall *)(unk1A5E0Vtbl **))v7->meth1)(v6 + 11);
                    v6[276] = *(unk1A5E0Vtbl **)&this->gap1A93A[2];
                    v6[278] = *(unk1A5E0Vtbl **)&this->gap1A93A[10];
                    v23 = indexa + *(_DWORD *)&this->gap1A93A[6];
                    v6[277] = (unk1A5E0Vtbl *)v23;
                    v6[279] = (unk1A5E0Vtbl *)(v23 + 18);
                    v18 = (float)v23;
                    v13 = (float)*(int *)&this->gap1A93A[2];
                    ((void(__thiscall *)(unk1A5E0Vtbl **, _DWORD, _DWORD))v7->meth3)(
                        v6 + 11, LODWORD(v13), LODWORD(v18));
                    v3 = v24;
                }
                if ((this->field_18 & 0x2000000) != 0) {
                    v25 = *(_DWORD *)&this->gap1A93A[2] - 19;
                    if (sub_100586D0((int)v6[280])) {
                        v19 = (float)v23;
                        v14 = (float)v25;
                        ((void(__thiscall *)(unk1A5E0 *, int, _DWORD, _DWORD))this->lpVtbl->meth1)(
                            this, 139, LODWORD(v14), LODWORD(v19));
                    } else {
                        v20 = (float)v23;
                        v15 = (float)v25;
                        ((void(__thiscall *)(unk1A5E0 *, int, _DWORD, _DWORD))this->lpVtbl->meth1)(
                            this, 138, LODWORD(v15), LODWORD(v20));
                    }
                }
            }
            v24 = ++v3;
            indexa += 19;
        } while (v3 < (unsigned __int16)this->field_1A92C[2]);
    }
    if ((this->field_18 & 0x200000) == 0) {
        v8 = this->field_1A92C[3];
        if (v8 > 0) {
            v9 = this->lpVtbl;
            v21 = (float)*(int *)&this->gap1A93A[22];
            v16 = (float)*(int *)&this->gap1A93A[18];
            if (*(_DWORD *)this->field_1A99C)
                ((void(__thiscall *)(unk1A5E0 *, int, float, float))v9->meth1)(
                    this, 47, COERCE_FLOAT(LODWORD(v16)), COERCE_FLOAT(LODWORD(v21)));
            else
                ((void(__thiscall *)(unk1A5E0 *, __int16, float, float))v9->meth1)(
                    this, v8, COERCE_FLOAT(LODWORD(v16)), COERCE_FLOAT(LODWORD(v21)));
        }
        v10 = this->field_1A92C[4];
        if (v10 > 0) {
            v22 = (float)*(int *)&this->gap1A93A[38];
            v17 = (float)*(int *)&this->gap1A93A[34];
            if (*(_DWORD *)&this->field_1A99C[2])
                ((void(__thiscall *)(unk1A5E0 *, int, _DWORD, _DWORD))this->lpVtbl->meth1)(
                    this, 45, LODWORD(v17), LODWORD(v22));
            else
                ((void(__thiscall *)(unk1A5E0 *, __int16, _DWORD, _DWORD))this->lpVtbl->meth1)(
                    this, v10, LODWORD(v17), LODWORD(v22));
        }
        v11 = this->field_1A938;
        if (v11 > 0)
            ((void(__thiscall *)(unk1A5E0 *, __int16, _DWORD, _DWORD))this->lpVtbl->meth1)(
                this, v11, *(_DWORD *)&this->field_1A99C[8], *(_DWORD *)&this->field_1A99C[10]);
    }
    return 1;
}
