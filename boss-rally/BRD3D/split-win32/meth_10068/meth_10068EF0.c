#include "types-win32.h"
//----- (10068EF0) --------------------------------------------------------
void __thiscall meth_10068EF0(_DWORD *this) {
    int v2;                      // eax
    int v3;                      // eax
    int v4;                      // eax
    _DWORD *v5;                  // eax
    void(__cdecl * v6)(_DWORD);  // ecx
    bool v7;                     // zf
    int v8;                      // eax
    int v9;                      // ecx
    _DWORD *v10;                 // eax
    int v11;                     // esi
    void(__cdecl * v12)(int);    // eax
    int v13;                     // ecx
    int v14;                     // ecx
    _DWORD *v15;                 // eax
    void(__cdecl * v16)(_DWORD); // ecx
    int v17;                     // edx
    int v18;                     // ebp
    int v19;                     // eax
    double v20;                  // st7
    float v21;                   // [esp+0h] [ebp-18h]
    float v22;                   // [esp+0h] [ebp-18h]
    float v23;                   // [esp+14h] [ebp-4h]

    if (!gNetworkPlay || this[24]) {
        v2 = this[24];
        if (v2 && *(void(__cdecl **)(int))(v2 + 3848) == sub_10065620 && gGameMode != 5) {
            **(_DWORD **)(v2 + 10688) &= 0xF000000u;
            *(_DWORD *)(*(_DWORD *)(this[24] + 10688) + 32) = 0;
        }
        if (dword_106909B4) {
            dword_118AC728[0] = 0;
            dword_118AC72C[0] = 0;
            dword_118AC734[0] = 0;
            qword_118AC740[0] = 0i64;
            dword_118AC74C = 0;
            dword_118AC758 = 0;
            dword_118AC75C = 0;
            dword_118AC764 = 0;
            qword_118AC770 = 0i64;
            dword_118AC77C = 0;
            dword_118AC788 = 0;
            dword_118AC78C = 0;
            dword_118AC794 = 0;
        } else {
            v3 = this[26];
            if ((v3 & 1) != 0) {
                v4 = this[24];
                if (v4) {
                    **(_DWORD **)(v4 + 10688) |= 0x40000u;
                    *(_DWORD *)(this[24] + 3696) = 0;
                    v5 = (_DWORD *)this[24];
                    v5[992] = v5[12];
                    v5[993] = v5[13];
                    v5[994] = v5[14];
                    v6 = *(void(__cdecl **)(_DWORD))(this[24] + 3848);
                    if (v6)
                        v6(this[24]);
                    *(_DWORD *)(this[24] + 3696) = 0;
                }
            } else {
                v7 = (v3 & 2) == 0;
                v8 = this[24];
                if (v7) {
                    if (v8) {
                        if (*(_BYTE *)(v8 + 10671) == 2) {
                            *(float *)(v8 + 10672) =
                                *(float *)(v8 + 10672) - *(float *)&dword_106C2CFC * -1.6;
                            if (gGameMode == 2 && this[25]) {
                                v13 = this[24];
                                if (*(float *)(v13 + 10672) > 0.375)
                                    *(_DWORD *)(v13 + 10672) = 1052770304;
                            } else {
                                v14 = this[24];
                                if (*(float *)(v14 + 10672) >= 1.0) {
                                    *(_DWORD *)(v14 + 10672) = 1065353216;
                                    *(_BYTE *)(this[24] + 10671) = 0;
                                }
                            }
                        }
                        v15 = (_DWORD *)this[24];
                        v15[992] = v15[12];
                        v15[993] = v15[13];
                        v15[994] = v15[14];
                        v16 = *(void(__cdecl **)(_DWORD))(this[24] + 3848);
                        if (v16)
                            v16(this[24]);
                        *(float *)(this[24] + 4148) =
                            *(float *)(this[24] + 4144) * *(float *)&dword_106C2CFC +
                            *(float *)(this[24] + 4148);
                    } else {
                        this[3] = *this;
                        this[4] = this[1];
                        this[5] = this[2];
                        v17 = this[11];
                        v18 = this[10];
                        v19 = 2778 * (this[29] + dword_100B4050);
                        v23 = ((double)(this[17] + 1) * *(float *)(MEMORY[0x106C7CB8] + 100) -
                               *((float *)this + 20) - *(float *)(v18 + 40 * v17 + 140)) /
                              (*(float *)(v18 + 40 * v17 + 100) - *(float *)(v18 + 40 * v17 + 140));
                        if (dword_10ACEDA8[v19]) {
                            v21 = sub_1003B170((float *)((char *)&unk_10ACEECC + v19 * 4)) *
                                  *(float *)&dword_106C2CFC;
                            sub_10065C80(this[10], this[11], v23, v21);
                            v20 = sub_1003B170((float *)&unk_10ACEECC + 2778 * this[29] +
                                               2778 * dword_100B4050) *
                                      *(float *)&dword_106C2CFC +
                                  *((float *)this + 20);
                        } else {
                            sub_10065C80(v18, v17, v23, 2.22);
                            v20 = *((float *)this + 20) - -2.22;
                        }
                        *((float *)this + 20) = v20;
                        this[10] = dword_10AF988C;
                        this[11] = dword_10ACD490;
                        *this = dword_10AF9B38;
                        this[1] = dword_10AF9B3C;
                        this[2] = dword_10AF9B40;
                        sub_1003AEE0((float *)this + 6, (float *)this, (float *)this + 3);
                        v22 = 1.0 / *(float *)&dword_106C2CFC;
                        sub_1003AD10((int)(this + 6), v22);
                        meth_10066E90(this);
                    }
                } else if (v8) {
                    if (gGameMode || this[25] < dword_100B4050) {
                        **(_DWORD **)(v8 + 10688) = 786432;
                        *(_BYTE *)(*(_DWORD *)(this[24] + 10688) + 36) = -127;
                        *(_DWORD *)(*(_DWORD *)(this[24] + 10688) + 32) = -1082130432;
                    }
                    if (!gGameMode && this[25] >= dword_100B4050) {
                        *(_BYTE *)(this[24] + 10671) = 2;
                        *(float *)(this[24] + 10672) =
                            *(float *)(this[24] + 10672) - *(float *)&dword_106C2CFC;
                        v9 = this[24];
                        if (*(float *)(v9 + 10672) < 0.0)
                            *(_DWORD *)(v9 + 10672) = 0;
                    }
                    v10 = (_DWORD *)this[24];
                    v10[992] = v10[12];
                    v10[993] = v10[13];
                    v10[994] = v10[14];
                    v11 = this[24];
                    v12 = *(void(__cdecl **)(int))(v11 + 3848);
                    if (v12)
                        v12(v11);
                }
            }
        }
    }
}
// 100AA010: using guessed type int g_GameMode;
// 100B4050: using guessed type int dword_100B4050;
// 1022AF18: using guessed type int g_NetworkPlay;
// 106909B4: using guessed type int dword_106909B4;
// 106C2CFC: using guessed type int dword_106C2CFC;
// 10ACD490: using guessed type int dword_10ACD490;
// 10ACEDA8: using guessed type int dword_10ACEDA8[];
// 10AF988C: using guessed type int dword_10AF988C;
// 10AF9B38: using guessed type int dword_10AF9B38;
// 10AF9B3C: using guessed type int dword_10AF9B3C;
// 10AF9B40: using guessed type int dword_10AF9B40;
// 118AC728: using guessed type int dword_118AC728[];
// 118AC72C: using guessed type int dword_118AC72C[];
// 118AC734: using guessed type int dword_118AC734[];
// 118AC740: using guessed type __int64 qword_118AC740[];
// 118AC74C: using guessed type int dword_118AC74C;
// 118AC758: using guessed type int dword_118AC758;
// 118AC75C: using guessed type int dword_118AC75C;
// 118AC764: using guessed type int dword_118AC764;
// 118AC770: using guessed type __int64 qword_118AC770;
// 118AC77C: using guessed type int dword_118AC77C;
// 118AC788: using guessed type int dword_118AC788;
// 118AC78C: using guessed type int dword_118AC78C;
// 118AC794: using guessed type int dword_118AC794;
