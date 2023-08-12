#include "types-win32.h"
//----- (10063660) --------------------------------------------------------
void __thiscall meth_10063660(_DWORD *this) {
    int v2;   // ecx
    int v3;   // eax
    int v4;   // edx
    int v5;   // [esp+0h] [ebp-18h]
    int v6;   // [esp+8h] [ebp-10h]
    float v7; // [esp+8h] [ebp-10h]

    if ((int)this[215] < 0 || gUnk06594.field_4900 - 10.0 > *((float *)this + 14)) {
        meth_10065630(this);
        meth_10062C50(this);
        v2 = this[995];
        v3 = this[996];
        v4 = v2 + 40 * v3;
        *(float *)&v6 = *(float *)(v4 + 84) - -2.0;
        if (gGameMode == GAME_MODE_2) {
            meth_10076420((float *)this, *(_DWORD *)(v4 + 76), *(_DWORD *)(v2 + 40 * (v3 + 2)), v6);
        } else {
            *(float *)&v5 = *(float *)(v4 + 76) - (double)(int)this[80] * -0.0099999998;
            meth_10076420((float *)this, v5, *(_DWORD *)(v2 + 40 * (v3 + 2)), v6);
        }
        v7 = sub_1003B7B0(*((float *)this + 997), *((float *)this + 998));
        meth_100764C0((float *)this, v7);
        meth_100767A0(this, 0, 0, 0);
        meth_100769A0(this, 0, 0, 0);
        *(_DWORD *)(this[90] + 412) = 0;
        *(_DWORD *)(this[90] + 436) = 0;
        *(_BYTE *)(this[90] + 416) = 2;
        *(_DWORD *)(this[91] + 412) = 0;
        *(_DWORD *)(this[91] + 436) = 0;
        *(_BYTE *)(this[91] + 416) = 2;
        *(_DWORD *)(this[93] + 412) = 0;
        *(_DWORD *)(this[93] + 436) = 0;
        *(_BYTE *)(this[93] + 416) = 2;
        *(_DWORD *)(this[92] + 412) = 0;
        *(_DWORD *)(this[92] + 436) = 0;
        *(_BYTE *)(this[92] + 416) = 2;
        this[936] = 0;
        this[937] = 0;
        this[938] = 0;
        this[939] = -180;
        this[215] = 0;
        *((_BYTE *)this + 10671) = 2;
        this[2668] = 1036831949;
        meth_100015D0(this, COERCE_FLOAT(this + 2528), 1.0);
        this[2619] = this[2540];
        this[2620] = this[2541];
        this[2621] = this[2542];
        this[990] = 1;
    }
}
