#include "types-win32.h"
//----- (10033838) --------------------------------------------------------
int sub_10033838() {
    void *v0;     // ecx
    void *v1;     // ecx
    unk06594 *v2; // ecx
    void *v3;     // ecx
    void *v4;     // ecx
    unk06594 *v5; // ecx
    void *v6;     // ecx
    void *v7;     // ecx
    void *v8;     // ecx
    void *v9;     // ecx
    void *v10;    // ecx
    void *v11;    // ecx
    void *v12;    // ecx
    void *v13;    // ecx
    void *v14;    // ecx
    int result;   // eax
    _DWORD *v16;  // [esp+0h] [ebp-10h]
    _DWORD *v17;  // [esp+4h] [ebp-Ch]
    _DWORD *v18;  // [esp+Ch] [ebp-4h]

    v17 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v17 = -385875968;
    v17[1] = 0;
    v16 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v16 = -1207959552;
    v16[1] = 0;
    v18 = (_DWORD *)((char *)&unk_106C1588 + 64 * *(_DWORD *)&stru_106C3380.gap1C8[12452]);
    *v18 = 1;
    v18[4] = &unk_118AB150;
    v18[6] = &unk_118AB160;
    v18[1] = 2;
    v18[1] |= 4u;
    v18[10] = dword_100AA728;
    v18[11] = dword_100AA72C - 8 * *(_DWORD *)&stru_106C3380.gap1C8[12576];
    v18[5] = 4096;
    v18[7] = 2048;
    v18[8] = (unsigned int)&unk_106C2D0F & 0xFFFFFFF0;
    v18[9] = 1024;
    v18[12] = dword_106C0944 + 96000 * *(_DWORD *)&stru_106C3380.gap1C8[12452] + 512;
    v18[13] = 8 * ((dword_106C0680 -
                    (dword_106C0944 + 96000 * *(_DWORD *)&stru_106C3380.gap1C8[12452] + 512)) >>
                   3);
    if ((dword_106C0680 -
         (dword_106C0944 + 96000 * *(_DWORD *)&stru_106C3380.gap1C8[12452] + 512)) >>
        3 > *(int *)&stru_106C3380.gap1C8[12568])
        *(_DWORD *)&stru_106C3380.gap1C8[12568] =
            (dword_106C0680 -
             (dword_106C0944 + 96000 * *(_DWORD *)&stru_106C3380.gap1C8[12452] + 512)) >>
            3;
    if ((dword_10363FF0 - dword_102E5EC8) >> 3 > *(int *)&stru_106C3380.gap1C8[12560])
        *(_DWORD *)&stru_106C3380.gap1C8[12560] = (dword_10363FF0 - dword_102E5EC8) >> 3;
    if ((dword_10364304 - dword_103643BC) >> 5 > *(int *)&stru_106C3380.gap1C8[12564])
        *(_DWORD *)&stru_106C3380.gap1C8[12564] = (dword_10364304 - dword_103643BC) >> 5;
    v0 = (void *)(dword_106C0944 + 96000 * *(_DWORD *)&stru_106C3380.gap1C8[12452] + 512);
    dword_106C1170 = (dword_106C0680 - (int)v0) >> 3;
    if (dword_106C1170 > 12000)
        sub_10035BBA((int)aHugeGlistError);
    meth_DebugPrint(v0);
    if (*(_DWORD *)&stru_106C3380.gap1C8[12572]) {
        meth_DebugPrint(v1);
        meth_unk1A5E0_10042AF0(v2);
        meth_DebugPrint(v3);
        if (dword_106C198C) {
            dword_106C198C();
            dword_106C198C = 0;
        }
        meth_DebugPrint(v4);
        meth_unk1A5E0_10042AF0(v5);
        if (dword_106C1608) {
            dword_106C198C();
            dword_106C198C = 0;
        }
        meth_DebugPrint(v6);
        dword_106C020C = sub_10060E90();
        dword_106C1620 = dword_106C020C - dword_106C0208;
        if (*(_DWORD *)&stru_106C3380.gap1C8[12440]) {
            v7 = (void *)--*(_DWORD *)&stru_106C3380.gap1C8[12440];
            if (!*(_DWORD *)&stru_106C3380.gap1C8[12440]) {
                meth_DebugPrint(v7);
                meth_DebugPrint(v8);
                *(_DWORD *)&stru_106C3380.gap1C8[12448] = *(_DWORD *)&stru_106C3380.gap1C8[12444];
            }
        }
        meth_DebugPrint(v7);
        meth_DebugPrint(v9);
        meth_DebugPrint(v10);
        if (!*(_DWORD *)&stru_106C3380.gap1C8[12460] && !*(_DWORD *)&stru_106C3380.gap1C8[12464])
            meth_DebugPrint(v11);
        if (*(_DWORD *)&stru_106C3380.gap1C8[12464])
            --*(_DWORD *)&stru_106C3380.gap1C8[12464];
        meth_1002C210(v11);
        dword_106C0208 = sub_10060E90();
        dword_106C020C = sub_10060E90() - dword_106C020C;
    } else {
        v12 = (void *)++*(_DWORD *)&stru_106C3380.gap1C8[12572];
    }
    meth_DebugPrint(v12);
    *(_DWORD *)&stru_106C3380.gap1C8[8604] = *(_DWORD *)&stru_106C3380.gap1C8[12368];
    meth_DebugPrint(v13);
    meth_DebugPrint(v14);
    result = dword_10B501D0(v18[12]);
    *(_DWORD *)&stru_106C3380.gap1C8[12452] ^= 1u;
    return result;
}
// 10033A5B: variable 'v1' is possibly undefined
// 10033A6C: variable 'v2' is possibly undefined
// 10033A87: variable 'v3' is possibly undefined
// 10033AB5: variable 'v4' is possibly undefined
// 10033AC6: variable 'v5' is possibly undefined
// 10033AE7: variable 'v6' is possibly undefined
// 10033B82: variable 'v8' is possibly undefined
// 10033BA3: variable 'v7' is possibly undefined
// 10033BB8: variable 'v9' is possibly undefined
// 10033BCD: variable 'v10' is possibly undefined
// 10033BE9: variable 'v11' is possibly undefined
// 10033C4A: variable 'v12' is possibly undefined
// 10033C6E: variable 'v13' is possibly undefined
// 10033C86: variable 'v14' is possibly undefined
// 100AA728: using guessed type int dword_100AA728;
// 100AA72C: using guessed type int dword_100AA72C;
// 102E5EC8: using guessed type int dword_102E5EC8;
// 10363FF0: using guessed type int dword_10363FF0;
// 10364304: using guessed type int dword_10364304;
// 103643BC: using guessed type int dword_103643BC;
// 106C0208: using guessed type int dword_106C0208;
// 106C020C: using guessed type int dword_106C020C;
// 106C0680: using guessed type int dword_106C0680;
// 106C0944: using guessed type int dword_106C0944;
// 106C1170: using guessed type int dword_106C1170;
// 106C1608: using guessed type int dword_106C1608;
// 106C1620: using guessed type int dword_106C1620;
// 106C198C: using guessed type int (*dword_106C198C)(void);
// 10B501D0: using guessed type int (__cdecl *dword_10B501D0)(_DWORD);
