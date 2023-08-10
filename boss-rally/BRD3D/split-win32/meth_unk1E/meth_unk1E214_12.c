#include "types-win32.h"
//----- (10047D30) --------------------------------------------------------
int __thiscall meth_unk1E214_12(unk1E214 *this) {
    int v2;     // edi
    int v3;     // ebp
    int v4;     // eax
    int v5;     // ecx
    int v6;     // edx
    int v7;     // eax
    char v8;    // al
    double v9;  // st7
    double v10; // st7
    char v11;   // al
    double v12; // st7
    double v13; // st7

    v2 = 0;
    v3 = 0;
    if (!this->field_3818)
        return 1;
    v4 = getTicks();
    if (this->field_3828 <= 0)
        this->field_3828 = v4;
    v5 = v4 - this->field_3828;
    v6 = this->field_382C;
    this->field_3828 = v4;
    v7 = this->field_3804;
    this->field_382C = v5 + v6;
    if (!v7)
        goto LABEL_12;
    v8 = this->field_380C;
    if (v8 == -1) {
        v10 = *(float *)&this->field_30 - this->lpVtbl->meth10(this, this->field_382C);
        *(float *)&this->field_3C = v10;
        if (v10 <= *(float *)&this->field_3810) {
            v2 = 1;
            this->field_3C = this->field_3810;
        }
        goto LABEL_13;
    }
    if (v8) {
        if (v8 == 1) {
            v9 = this->lpVtbl->meth10(this, this->field_382C) + *(float *)&this->field_30;
            *(float *)&this->field_3C = v9;
            if (v9 >= *(float *)&this->field_3810) {
                v2 = 1;
                this->field_3C = this->field_3810;
            }
        }
    } else {
    LABEL_12:
        v2 = 1;
    }
    if (!this->field_3808)
        goto LABEL_21;
LABEL_13:
    v11 = HIBYTE(this->field_380C);
    if (v11 == -1) {
        v13 = *(float *)&this->field_34 - this->lpVtbl->meth10(this, this->field_382C);
        *(float *)&this->field_40 = v13;
        if (v13 <= *(float *)&this->field_3814) {
            v3 = 1;
            this->field_40 = this->field_3814;
        }
        goto LABEL_22;
    }
    if (v11) {
        if (v11 == 1) {
            v12 = this->lpVtbl->meth10(this, this->field_382C) + *(float *)&this->field_34;
            *(float *)&this->field_40 = v12;
            if (v12 >= *(float *)&this->field_3814) {
                v3 = 1;
                this->field_40 = this->field_3814;
            }
        }
    } else {
    LABEL_21:
        v3 = 1;
    }
LABEL_22:
    if (v2 && v3) {
        this->field_382C = 0;
        this->field_3818 = 0;
    }
    return 1;
}
