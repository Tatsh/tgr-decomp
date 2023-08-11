#include "types-win32.h"
//----- (100480A0) --------------------------------------------------------
int __thiscall meth_unk1E214_1(unk1E214 *this) {
    int v2;     // eax
    int v3;     // ecx
    int v4;     // edx
    int v5;     // eax
    __int16 v6; // ax
    int v7;     // ebx
    int v8;     // edx
    __int16 v9; // ax
    int v11;    // edx
    int v12;    // eax

    if (this->field_2968) {
        v2 = getTicks();
        v3 = v2 - this->field_2970;
        v4 = this->field_2974;
        this->field_2970 = v2;
        v5 = this->field_296C;
        this->field_2974 = v3 + v4;
        if (v5) {
            v6 = this->field_128;
            if (this->field_2974 > *(_DWORD *)&this->field_2978[4 * v6]) {
                v7 = this->field_1C;
                v8 = this->field_3838.field_18;
                this->field_2974 = 0;
                v9 = v6 + 1;
                this->field_3838.field_18 = v8 | 0x100;
                this->field_1C = v7 | 0x100;
                this->field_128 = v9;
                if (*(int *)&this->field_2978[4 * v9] <= 0) {
                    this->field_128 = 0;
                    return 1;
                }
            }
        } else if (this->field_2974 > 60) {
            v11 = this->field_1C;
            v12 = this->field_3838.field_18;
            this->field_2974 = 0;
            this->field_1C = v11 | 0x100;
            this->field_3838.field_18 = v12 | 0x100;
        }
    }
    return 1;
}
