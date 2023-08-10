#include "types-win32.h"
//----- (10048180) --------------------------------------------------------
int __thiscall meth_unk1E214_10048180(unk1E214 *this) {
    unk1E214Vtbl *v2;        // edi
    int(__cdecl * v3)(int);  // eax
    int v4;                  // eax
    int result;              // eax
    int v6;                  // ecx
    int (*v7)();             // eax
    int v8;                  // eax
    int(__cdecl * v9)(int);  // eax
    int v10;                 // ebp
    WORD *v11;               // edi
    int v12;                 // eax
    int v13;                 // eax
    int v14;                 // ecx
    int v15;                 // ecx
    int v16;                 // eax
    int v17;                 // eax
    int(__cdecl * v18)(int); // eax
    __int16 v19;             // [esp+10h] [ebp-8h]
    unk1E214Vtbl *v20;       // [esp+14h] [ebp-4h]

    v19 = this->field_128;
    if ((this->field_1C & 0x10) != 0 ||
        (v2 = this->lpVtbl, v20 = this->lpVtbl, this->lpVtbl->meth15(this))) {
        this->lpVtbl->meth2(this);
        return 1;
    }
    if (this->field_3818)
        v2->meth12(this);
    v2->meth1(this);
    v3 = this->field_4;
    if (!v3)
        goto LABEL_9;
    v4 = v3((int)this);
    if (v4 == -2)
        return 1;
    if (v4 == -1)
        return 0;
LABEL_9:
    if (!v2->meth8(this) || dword_10AA28D8) {
        v17 = this->field_1C;
        if ((v17 & 0x400000) != 0)
            this->field_3838.field_1A99C[28] = *(_WORD *)this->field_2A40;
        if ((v17 & 4) != 0 || (v17 & 0x20000) != 0) {
            v18 = this->field_C;
            if (v18)
                v18((int)this);
        } else {
            this->field_128 = 0;
            if ((v17 & 0x100000) != 0 && (v17 & 0x10) == 0 && this->field_C) {
                this->field_3838.field_1A99C[28] = 3;
                this->vectorUnk[8] = 1;
                v2->meth2(this);
                return 1;
            }
        }
        goto LABEL_44;
    }
    v6 = this->field_1C;
    if ((v6 & 0x400000) != 0 && (gUnk54Ptr->field_2C || gUnk54Ptr->field_30))
        this->field_3838.field_1A99C[28] = *(_WORD *)&this->field_2A40[2];
    if ((v6 & 2) == 0) {
        v9 = this->field_C;
        if (v9)
            v9((int)this);
    LABEL_28:
        if ((this->field_1C & 0x10000) != 0 && (__int16)this->field_2AB4[0] > 0) {
            v10 = 0;
            v11 = &this->field_2AB4[1];
            do {
                v12 = *(_DWORD *)(*(_DWORD *)(this->field_2AE8 + 100) + 4 * (__int16)*v11 + 24);
                *(_DWORD *)(v12 + 28) |= 0x20000u;
                *(_WORD *)(*(_DWORD *)(*(_DWORD *)(this->field_2AE8 + 100) + 4 * (__int16)*v11 +
                                       24) +
                           296) = v19;
                *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this->field_2AE8 + 100) + 4 * (__int16)*v11 +
                                        24) +
                            10612) = 0;
                *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this->field_2AE8 + 100) + 4 * (__int16)*v11 +
                                        24) +
                            10608) = 0;
                v13 = this->field_2AE8;
                this->field_58 +=
                    *(__int16 *)(*(_DWORD *)(*(_DWORD *)(v13 + 100) + 4 * (__int16)*v11 + 24) + 72);
                v14 = *(_DWORD *)(*(_DWORD *)(v13 + 100) + 4 * (__int16)*v11 + 24);
                (*(void(__thiscall **)(int))(*(_DWORD *)v14 + 12))(v14);
                v15 = (__int16)*v11++;
                v16 = *(_DWORD *)(*(_DWORD *)(this->field_2AE8 + 100) + 4 * v15 + 24);
                ++v10;
                *(_DWORD *)(v16 + 28) &= 0xFFFDFFFF;
            } while (v10 < (__int16)this->field_2AB4[0]);
            v20->meth2(this);
            return 1;
        }
    LABEL_44:
        v2->meth2(this);
        return 1;
    }
    v7 = this->field_8;
    if (!v7) {
    LABEL_25:
        v8 = this->field_1C;
        LOBYTE(v8) = v8 & 0xFD;
        this->field_1C = v8;
        goto LABEL_28;
    }
    if ((char *)v7 == (char *)sub_10043760) {
        sub_10072AF0(2, 0x200020u);
        dword_10AA2854 = 2;
    } else if (v7 != sub_10042CF0) {
        sub_10072AF0(1, 0x200020u);
        dword_10AA2854 = 1;
    }
    result = ((int(__cdecl *)(unk1E214 *))this->field_8)(this);
    if (result) {
        if (this->field_8 == sub_10042CF0) {
            sub_10072AF0(1, 0x200020u);
            dword_10AA2854 = 1;
        }
        dword_10AA33E4 = 0;
        goto LABEL_25;
    }
    return result;
}
// 100482F3: conditional instruction was optimized away because of 'ax.2>=1'
// 10043760: using guessed type int __cdecl sub_10043760(int);
// 10AA2854: using guessed type int dword_10AA2854;
// 10AA28D8: using guessed type int dword_10AA28D8;
// 10AA33E4: using guessed type int dword_10AA33E4;
