#include "types-win32.h"
//----- (10075780) --------------------------------------------------------
void __thiscall meth_10075780(int this) {
    double v1; // st7
    char v3;   // c0

    if ((*(_BYTE *)(*(_DWORD *)(this + 3840) + 104) & 3) == 0) {
        v1 = *(float *)&dword_106C2CFC;
        if (g_GameMode == 3) {
            *(float *)(this + 4016) = v1 + *(float *)(this + 4016);
        } else {
            *(float *)(this + 4076) = v1 + *(float *)(this + 4076);
            *(float *)(this + 4016) = *(float *)&dword_106C2CFC + *(float *)(this + 4016);
            if (g_GameMode == 1 || g_GameMode == 6) {
                *(float *)(this + 4080) = *(float *)(this + 4080) - *(float *)&dword_106C2CFC;
                if (v3)
                    *(_DWORD *)(this + 4080) = 0;
            }
        }
    }
}
// 100757F7: variable 'v3' is possibly undefined
// 100AA010: using guessed type int g_GameMode;
// 106C2CFC: using guessed type int dword_106C2CFC;
