#include "types-win32.h"
//----- (100015D0) --------------------------------------------------------
float *__thiscall meth_100015D0(#479 * this, float a2, float a3) {
    int v4;        // esi
    float *result; // eax
    float *v6;     // esi
    double v7;     // st7
    double v8;     // st7
    float v9;      // [esp+0h] [ebp-20h]
    float v10;     // [esp+0h] [ebp-20h]
    int v11[3];    // [esp+14h] [ebp-Ch] BYREF
    int v12;       // [esp+24h] [ebp+4h]

    if (*((_DWORD *)this + 0x3DF)) {
        v4 = LODWORD(a2) + 0x30;
        sub_1003AFE0(LODWORD(a2) + 0x30, (int)this + 0x30, (int)this + 0x20, 2.4000001);
        v12 = -1053818880;
        if (dword_100AA8B4 != 1)
            v12 = -1046583706;
        result = (float *)sub_1003AFE0(v4, v4, (int)this, *(float *)&v12);
    } else {
        v6 = (float *)(LODWORD(a2) + 48);
        *(float *)(LODWORD(a2) + 56) = *(float *)(LODWORD(a2) + 56) - 2.4000001;
        sub_1003AEE0((float *)v11, (float *)(LODWORD(a2) + 48), (float *)this + 0xC);
        v7 = sub_1003B170((float *)v11);
        if (v7 != 0.0) {
            if (dword_100AA8B4 == 1)
                v9 = 11.0 / v7;
            else
                v9 = 19.799999 / v7;
            sub_1003AD10((int)v11, v9);
        }
        if (dword_106909E0) {
            sub_1003ACE0((int)v6, (int)this, 11.0);
        } else if (gGameMode == GAME_MODE_5) {
            sub_1003ACE0((int)v6, (int)this + 16, -11.0);
            sub_1003B020((int)v6, (int)this, -13.0);
        } else {
            sub_1003ACE0((int)v6, (int)this, -11.0);
        }
        v8 = sub_1003B170(v6);
        if (v8 != 0.0) {
            v10 = 11.0 / v8;
            sub_1003AD10((int)v6, v10);
        }
        sub_1003AFA0((int)v6, (int)v6, (int)v11, a3);
        result = sub_1003AF70(v6, (float *)this + 0xC);
        *(float *)(LODWORD(a2) + 56) = *(float *)(LODWORD(a2) + 56) - -2.4000001;
    }
    return result;
}
// 100AA8B4: using guessed type int dword_100AA8B4;
// 106909E0: using guessed type int dword_106909E0;
