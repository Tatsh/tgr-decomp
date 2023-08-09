#include "types-win32.h"
//----- (10034812) --------------------------------------------------------
HANDLE __thiscall meth_CreateMutexWrapper(void *this) {
    void *v1;      // ecx
    void *v2;      // ecx
    void *v3;      // ecx
    void *v4;      // ecx
    void *v5;      // ecx
    void *v6;      // ecx
    void *v7;      // ecx
    void *v8;      // ecx
    void *v9;      // ecx
    void *v10;     // ecx
    void *v11;     // ecx
    HANDLE result; // eax
    int v13;       // [esp+0h] [ebp-28h]
    char v14[28];  // [esp+4h] [ebp-24h] BYREF
    int i;         // [esp+20h] [ebp-8h]

    dword_106C0944 = (int)&unk_10691018;
    meth_DebugPrint(this);
    meth_DebugPrint(v1);
    meth_DebugPrint(v2);
    meth_DebugPrint(v3);
    meth_DebugPrint(dword_106C06A8);
    meth_DebugPrint(v4);
    meth_DebugPrint(v5);
    meth_DebugPrint(v6);
    meth_DebugPrint(v7);
    meth_DebugPrint(dword_10B02434);
    meth_DebugPrint(v8);
    dword_106C56E0 = 1194793728;
    meth_DebugPrint(v9);
    meth_DebugPrint(v14);
    meth_unk1A5E0_10042AF0();
    meth_DebugPrint(v10);
    meth_DebugPrint(v11);
    for (i = 0; i < 4; ++i) {
        byte_106C06A0[i] = 0;
        if ((((int)(unsigned __int8)v14[24] >> i) & 1) != 0 && (byte_106C092B[4 * i] & 8) == 0 &&
            (word_106C0928[2 * i] & 4) != 0 && (byte_106C092A[4 * i] & 1) != 0) {
            v13 = returnZero();
            if (v13) {
                if (v13 > 9 && v13 <= 11 && !returnZero()) {
                    byte_106C06A0[i] = 1;
                    returnZero();
                }
            }
        }
    }
    result = CreateMutexA(0, 0, 0);
    dword_106C6650 = result;
    return result;
}
// 10034842: variable 'v1' is possibly undefined
// 10034857: variable 'v2' is possibly undefined
// 1003486B: variable 'v3' is possibly undefined
// 10034895: variable 'v4' is possibly undefined
// 100348AB: variable 'v5' is possibly undefined
// 100348CC: variable 'v6' is possibly undefined
// 100348D9: variable 'v7' is possibly undefined
// 10034908: variable 'v8' is possibly undefined
// 10034924: variable 'v9' is possibly undefined
// 1003495D: variable 'v10' is possibly undefined
// 1003496E: variable 'v11' is possibly undefined
// 106C0928: using guessed type __int16 word_106C0928[];
// 106C0944: using guessed type int dword_106C0944;
// 106C56E0: using guessed type int dword_106C56E0;
