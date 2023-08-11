#include "types-win32.h"
//----- (10075960) --------------------------------------------------------
int __thiscall meth_10075960(int this) {
    int result;         // eax
    char v3;            // al
    double v4;          // st7
    unsigned __int8 v5; // al
    unsigned __int8 v6; // dl
    float v7;           // [esp+0h] [ebp-8h]
    float v8;           // [esp+0h] [ebp-8h]

    result = MEMORY[0x106C7CB8];
    if (MEMORY[0x106C7CB8]) {
        v7 = *(float *)(this + 48) * 0.03125;
        v3 = sub_1002B920(v7);
        v4 = *(float *)(this + 52) * 0.03125;
        *(_BYTE *)(this + 10684) = v3;
        v8 = v4;
        v5 = sub_1002B920(v8);
        v6 = *(_BYTE *)(this + 10684);
        *(_BYTE *)(this + 10685) = v5;
        if (v6 >= 0x40u)
            *(_BYTE *)(this + 10684) = 63;
        if (v5 >= 0x40u)
            *(_BYTE *)(this + 10685) = 63;
        result = meth_10075360(this);
    }
    return result;
  }
