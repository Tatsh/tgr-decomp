#include "types-win32.h"
//----- (10035CE0) --------------------------------------------------------
void __thiscall meth_10035CE0(int *this) {
    int v2;              // eax
    char v3;             // cl
    __int16 v4;          // ax
    int v5;              // ecx
    int v6;              // ecx
    int v7;              // ecx
    int v8;              // ecx
    int v9;              // ecx
    int v10;             // ecx
    int v11;             // ecx
    int v12;             // eax
    int v13;             // eax
    int v14;             // eax
    int v15;             // eax
    int *v16;            // eax
    int v17;             // edx
    int v18;             // eax
    double v19;          // st7
    double v20;          // st7
    unsigned __int8 v22; // c0
    unsigned __int8 v23; // c3

    v2 = this[86];
    v3 = *(_BYTE *)(v2 + 4);
    if (v3) {
        this[10] = v3 == 8;
        *(_BYTE *)(v2 + 2) = 0;
        *(_BYTE *)(this[86] + 3) = 0;
        *(_WORD *)this[86] = 0;
    } else {
        this[10] = 0;
    }
    v4 = *(_WORD *)this[86];
    *this = 0;
    if ((v4 & 0x800) != 0)
        *this = 8;
    if ((v4 & 0x400) != 0)
        *this |= 2u;
    if ((v4 & 0x200) != 0)
        *this |= 4u;
    if ((v4 & 0x100) != 0)
        *this |= 1u;
    if (v4 < 0)
        *this |= 0x10u;
    if ((v4 & 0x4000) != 0)
        *this |= 0x20u;
    if ((v4 & 0x20) != 0) {
        v5 = *this;
        BYTE1(v5) = BYTE1(*this) | 0x10;
        *this = v5;
    }
    if ((v4 & 0x10) != 0) {
        v6 = *this;
        BYTE1(v6) = BYTE1(*this) | 0x20;
        *this = v6;
    }
    if ((v4 & 0x2000) != 0) {
        v7 = *this;
        BYTE1(v7) = BYTE1(*this) | 0x80;
        *this = v7;
    }
    if ((v4 & 0x1000) != 0) {
        v8 = *this;
        BYTE1(v8) = BYTE1(*this) | 0x40;
        *this = v8;
    }
    if ((v4 & 8) != 0) {
        v9 = *this;
        BYTE1(v9) = BYTE1(*this) | 1;
        *this = v9;
    }
    if ((v4 & 1) != 0) {
        v10 = *this;
        BYTE1(v10) = BYTE1(*this) | 2;
        *this = v10;
    }
    if ((v4 & 4) != 0) {
        v11 = *this;
        BYTE1(v11) = BYTE1(*this) | 4;
        *this = v11;
    }
    if ((v4 & 2) != 0) {
        v12 = *this;
        BYTE1(v12) = BYTE1(*this) | 8;
        *this = v12;
    }
    if (sub_10034C51(sub_1002C500)) {
        if ((*this & 0x1000) != 0)
            *this |= 0x200000u;
        if ((*this & 0x2000) != 0)
            *this |= 0x100000u;
        if ((gConfigJoystickPtr->field_0 & 0x8000) != 0 || gConfigJoystickPtr->field_7 < 0) {
            *((_BYTE *)this + 36) = *(_BYTE *)(this[86] + 2);
            goto LABEL_46;
        }
        v13 = *this;
        if ((*this & 4) != 0) {
            if ((v13 & 1) == 0) {
                *((_BYTE *)this + 36) = -80;
            LABEL_46:
                if ((*this & 0x10) != 0) {
                    if (*(char *)(this[86] + 3) < -64)
                        *this |= 0x20000u;
                    *this |= 0x10000u;
                }
                v14 = *this;
                if ((*this & 0x20) != 0) {
                    if ((v14 & 0x10000) != 0)
                        v15 = v14 | 0x80000;
                    else
                        v15 = v14 | 0x40000;
                    *this = v15;
                }
                if ((*this & 0x100) != 0)
                    *this |= 0x1000000u;
                if ((*this & 0x400) != 0)
                    *this |= 0x4000000u;
                if ((*this & 0x800) != 0)
                    *this |= 0x8000000u;
                goto LABEL_61;
            }
        } else if ((v13 & 1) != 0) {
            *((_BYTE *)this + 36) = 80;
            goto LABEL_46;
        }
        *((_BYTE *)this + 36) = 0;
        goto LABEL_46;
    }
LABEL_61:
    if (this[11] || this[12]) {
        v16 = this + 13;
        v17 = 2;
        do {
            if (*(v16 - 2) && *v16 < v16[2] && !dword_106909B4)
                *v16 += 2;
            ++v16;
            --v17;
        } while (v17);
    }
    v18 = this[86];
    v19 = (double)*((char *)this + 36);
    *((float *)this + 6) = (double)*(char *)(v18 + 2) * 0.014285714;
    v20 = v19 * 0.014285714;
    *((float *)this + 7) = (double)*(char *)(v18 + 3) * 0.014285714;
    *((float *)this + 8) = v20;
    if (v22 | v23) {
        if (*((float *)this + 6) < -1.0)
            this[6] = 0xBF800000;
    } else {
        this[6] = 0x3F800000;
    }
    if (*((float *)this + 7) <= 1.0) {
        if (*((float *)this + 7) < -1.0)
            this[7] = 0xBF800000;
    } else {
        this[7] = 0x3F800000;
    }
    if (v20 <= 1.0) {
        if (v20 < -1.0)
            this[8] = 0xBF800000;
    } else {
        this[8] = 0x3F800000;
    }
}
// 10035F1B: variable 'v22' is possibly undefined
// 10035F1B: variable 'v23' is possibly undefined
// 106909B4: using guessed type int dword_106909B4;
