#include "types-win32.h"
//----- (1007A940) --------------------------------------------------------
int sub_1007A940() {
    _DWORD ecx1;    // ecx
    _DWORD edi1;    // edi
    int result;     // eax
    _DWORD eax3;    // eax
    _DWORD esi7;    // esi
    _DWORD ebp9;    // ebp
    _DWORD eax15;   // eax
    _DWORD ecx17;   // ecx
    _DWORD edx19;   // edx
    _DWORD esi20;   // esi
    _DWORD eax20;   // eax
    _DWORD ecx21;   // ecx
    _DWORD eax24;   // eax
    int var64;      // [esp+20h] [ebp-64h]
    int height;     // [esp+24h] [ebp-60h]
    int bitDepth;   // [esp+28h] [ebp-5Ch]
    int width;      // [esp+2Ch] [ebp-58h]
    int a5;         // [esp+30h] [ebp-54h]
    CHAR var50[80]; // [esp+34h] [ebp-50h]

    ecx1 = dword_118AC238;
    edi1 = 0;
    if (!dword_118AC238)
        return 0;
    eax3 = (IID **)dword_118AC23C;
    if (!dword_118AC23C) {
        eax3 = sub_1001A5D0(dword_118AC238, 0, 0);
        dword_118AC23C = (int)eax3;
        if (!eax3)
            return 0;
        ecx1 = dword_118AC238;
    }
    esi7 = ecx1[198];
    if (!esi7)
        return 0;
    ebp9 = ecx1[197];
    if (!ebp9)
        return 0;
    if (!dword_118AC240)
        dword_118AC240 = (int)meth_unk00334_1001A570(ecx1, 640, 480, 16, 0, (IID *)eax3);
    if (Base) {
        free(Base);
        Base = 0;
    }
    eax15 = (void *)malloc(4 * ebp9);
    Base = eax15;
    if (!eax15)
        return 0;
    var64 = 0;
    ecx17 = esi7;
    while (1) {
        edx19 = *(_DWORD *)(ecx17 + 112);
        *((_DWORD *)eax15 + var64++) = ecx17;
        ecx17 = edx19;
        if (!edx19)
            break;
        eax15 = Base;
    }
    qsort(Base, ebp9, 4u, sub_1007A710);
    esi20 = 0;
    eax20 = 0;
    for (var64 = 0; var64 < ebp9; ++var64) {
        ecx21 = (#492 *)*((_DWORD *)Base + eax20);
        if (!ecx21 || !meth_unk00334_1001ACF0(ecx21, (IID **)dword_118AC23C))
            goto LABEL_41;
        meth_unk00334_1001AC80(*((#492 **)Base + var64), &width, &height, &bitDepth, &a5);
        if (a5) {
            wsprintfA(var50, "%4d x %4d x %2d (%4d Hz)", width, height, bitDepth, a5);
            eax24 = width;
            if (dword_10B4E6E8 != width || dword_10B4E6EC != height || dword_10B4E6F0 != bitDepth ||
                dword_10B4E6F4 != a5)
                goto LABEL_33;
        } else {
            wsprintfA(var50, "%4d x %4d x %2d", width, height, bitDepth);
            eax24 = width;
            if (dword_10B4E6E8 != width || dword_10B4E6EC != height || dword_10B4E6F0 != bitDepth)
                goto LABEL_33;
        }
        dword_10AA2864 = esi20;
        dword_10AA2A30 = esi20;
        edi1 = 1;
    LABEL_33:
        if (!edi1 && eax24 == 640 && height == 480 && bitDepth == 16) {
            dword_10AA2864 = esi20;
            dword_10AA2A30 = esi20;
        }
        if (dword_10AA29EC) {
            (*(void(__thiscall **)(int, CHAR *, _DWORD, int, void *, int))(
                *(_DWORD *)(dword_10AA29EC + 14392) + 16))(
                dword_10AA29EC + 14392, var50, 0, 1, &unk_100AB528, 1);
            (*(void(__thiscall **)(int, unsigned int *, int, int))(
                *(_DWORD *)(dword_10AA29EC + 14392) + 40))(
                dword_10AA29EC + 14392, &var64, 4, esi20);
        }
        ++esi20;
    LABEL_41:
        eax20 = var64 + 1;
    }
    return 1;
}
// 1007AA5D: conditional instruction was optimized away because of 'ebp.4!=0'
// 1007E2A0: using guessed type int __cdecl qsort(_DWORD, _DWORD, _DWORD, _DWORD);
// 10AA2864: using guessed type int dword_10AA2864;
// 10AA29EC: using guessed type int dword_10AA29EC;
// 10AA2A30: using guessed type int dword_10AA2A30;
// 10B4E6E8: using guessed type int dword_10B4E6E8;
// 10B4E6EC: using guessed type int dword_10B4E6EC;
// 10B4E6F0: using guessed type int dword_10B4E6F0;
// 10B4E6F4: using guessed type int dword_10B4E6F4;
// 118AC23C: using guessed type int dword_118AC23C;
// 118AC240: using guessed type int dword_118AC240;
